
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import java.util.TreeSet;

public class DataStructures {

    public static void print() {
        print();

        System.out.println("DATA STRUCTURE");
    }

    public static void main(String[] args) {

        Set<String> districts = new HashSet<String>();

        districts.addAll(Arrays.asList("Huye", "Huye", "RUHANGO", "Kicukiro", "Bugesera", "Nyarugenge",
                "Huye", "Gasabo", "Nyanza", "Huye", "Gasabo", "Bugesera", "Huye", "Musanze", "Nyarugenge",
                "Muhanga", "Huye", "Nyagatare", "Nyarugenge", "Gasabo", "Musanze", "Huye", "Huye",
                "Huye", "Gasabo"));
        int i = 1;
        for (String district : districts) {
            System.out.println(i + "." + district);
            i++;
        }
    }
}
