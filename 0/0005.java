import java.util.Scanner;
 
 
public class Main {
    public static void main(String[] args) {
         
        long a, b;
        scanner = new Scanner(System.in);
         
        while(scanner.hasNext()){
            a = scanner.nextInt();
            b = scanner.nextInt();
             
            System.out.println(GCD(a, b) + " " + LCM(a, b));
        }
    }
     
    static long GCD(long a, long b){
         
        long r = 0;
        r = a % b;
         
        if(r == 0){
            return b;
        } else{
            return GCD(b, r);
        }
    }
     
    static long LCM(long a, long b){
         
        return a * b / GCD(a, b);
    }
     
    public static Scanner scanner;
}
