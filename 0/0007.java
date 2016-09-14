import java.util.Scanner;
 
 
public class Main {
     
    static int base = 100000;
     
    public static void main(String[] args) {
         
        scanner = new Scanner(System.in);
        int n = scanner.nextInt();
         
        for(int i = 0; i < n; i++){
            base *= 1.05;
             
            if(base % 1000 != 0)
                base = (base / 1000 + 1) * 1000;
        }
         
        System.out.println(base);
    }
     
    public static Scanner scanner;
}
