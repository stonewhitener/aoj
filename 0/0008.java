import java.util.Scanner;
 
 
public class Main {
     
    public static void main(String[] args) {
         
        scanner = new Scanner(System.in);
         
        while(scanner.hasNext()){
             
            int n = scanner.nextInt();
            int cnt = 0;
             
            for(int i = 0; i <= 9; i++){
                for(int j = 0; j <= 9; j++){
                    for(int k = 0; k <= 9; k++){
                        for(int l = 0; l <= 9; l++){
                            if((i + j + k + l) == n){
                                cnt++;
                            }
                        }
                    }
                }
            }
             
            System.out.println(cnt);
             
        }
    }
     
    public static Scanner scanner;
}
