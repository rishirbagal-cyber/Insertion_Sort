import java.util.Scanner;
public class lemonade_change {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int n = sc.nextInt(); 
         int[]bills = new int[n];
         boolean result = true;

         for(int i=0;i<n;i++){
            bills[i] = sc.nextInt();
         }

         int five = 0;
         int ten = 0;

         for(int bill:bills){

            if(bill == 5){
                five++;
            }

            else if(bill == 10){
                if(five == 0){
                    result = false;
                    break;
                }
                five--;
                ten++;
            }
            else{
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five -= 3;
                }
                else{
                    result = false;
                    break;
                }
            }
         }
         System.out.print(result);
    }
    
}
