#include <windows.h>
#include <cctype>   // For isdigit
#include <cstdio>   // For sprintf

// Function declarations

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

// Global variables for the buttons and display
HWND hwndDisplay, hwndButtons[16];
char buttonText[16][5] = { "1", "2", "3", "+", "4", "5", "6", "-",
                           "7", "8", "9", "*", "C", "0", "=", "/" };
char calcInput[256] = "";
double operand1 = 0.0, operand2 = 0.0;
char operation = 0;

// WinMain - Entry point
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow) {
    WNDCLASS wc = {0};
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = "Calculator";
    wc.lpfnWndProc = WindowProcedure;

    if (!RegisterClass(&wc)) {
        return -1;
    }

    CreateWindow("Calculator", "Simple GUI Calculator", WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                 100, 100, 300, 400, NULL, NULL, NULL, NULL);

    MSG msg = {0};

    while (GetMessage(&msg, NULL, 0, 0)) {  // Replace NULL with 0
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

// The Window Procedure that handles button clicks and other window events
LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_CREATE: {
        // Create a display area
        hwndDisplay = CreateWindow("STATIC", "", WS_VISIBLE | WS_CHILD | WS_BORDER,
                                   20, 20, 240, 40, hwnd, NULL, NULL, NULL);

        // Create the buttons for digits and operations
        int x = 20, y = 80;
        for (int i = 0; i < 16; i++) {
            hwndButtons[i] = CreateWindow("BUTTON", buttonText[i], WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
                                          x, y, 50, 50, hwnd, (HMENU)(i + 1), NULL, NULL);
            x += 60;
            if ((i + 1) % 4 == 0) {
                x = 20;
                y += 60;
            }
        }
        break;
    }
    case WM_COMMAND: {
        int id = LOWORD(wp) - 1;  // Button ID
        if (id >= 0 && id <= 15) {
            // Handle the button clicks
            char clicked = buttonText[id][0];
            if (isdigit(clicked) || clicked == '0') {
                strncat(calcInput, &clicked, 1);
                SetWindowText(hwndDisplay, calcInput);
            }
            else if (clicked == 'C') {
                memset(calcInput, 0, sizeof(calcInput));
                SetWindowText(hwndDisplay, calcInput);
                operand1 = operand2 = 0.0;
                operation = 0;
            }
            else if (clicked == '=') {
                operand2 = atof(calcInput);
                double result = 0.0;

                switch (operation) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
                }

                sprintf(calcInput, "%.2f", result);  // sprintf now works
                SetWindowText(hwndDisplay, calcInput);
                operand1 = operand2 = 0.0;
                operation = 0;
            }
            else {
                // This means an operator (+, -, *, /) was clicked
                operand1 = atof(calcInput);
                memset(calcInput, 0, sizeof(calcInput));
                operation = clicked;
            }
        }
        break;
    }
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, msg, wp, lp);
    }

    return 0;
}
