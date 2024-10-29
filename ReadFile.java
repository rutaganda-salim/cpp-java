
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class ReadFile {

    public static void main(String[] args) throws IOException {
        try (FileInputStream source = new FileInputStream("C:\\Users\\Zero-Brainer\\openai\\file.txt"); FileOutputStream target = new FileOutputStream("C:\\Users\\Zero-Brainer\\openai\\new.txt")) {
            int content;
            while ((content = source.read()) != -1) {
                target.write((byte) content);
            }
        }
    }
}
