
class Developer {
    public void runCode(String device) {
        System.out.println("Running code on: " + device);
    }
}

class John extends Developer {
    @Override
    public void runCode(String device) {
        if (device.equalsIgnoreCase("desktop")) {
            System.out.println("John is running code on a Desktop.");
        } else if (device.equalsIgnoreCase("laptop")) {
            System.out.println("John is running code on a Laptop.");
        } else {
            System.out.println("John can Only use a desktop or laptop to run code.");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        John john = new John();
        
        john.runCode("desktop");
        john.runCode("laptop");
        
        john.runCode("smartphone");
        
        Developer developer = new Developer();
        
    }
}


