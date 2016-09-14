import java.util.Scanner;
 
 
public class Main {
    public static void main(String[] args) {
         
        String str = "";
        scanner = new Scanner(System.in);
         
        str = scanner.next();
        char[] strArray = new char[str.length()];
         
        for(int i = 0; i < str.length(); i++){
            strArray[i] = str.charAt(i);
        }
        for(int i = str.length(); i > 0; i--){
            System.out.print(strArray[i-1]);
        }
         
        System.out.println();
    }
     
    public static Scanner scanner;
}
