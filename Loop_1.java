import java.util.Scanner;

public class Loop_1
{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int i=1;
        while(i<=(n/2)+1)
        {
            int j=n/2;
            while(j>0)
            {
                System.out.print(" ");
                j--;
            }
            int k=1;
            while(k<=(2*i)-1)
            {
                System.out.print("*");
                k++;
            }
            System.out.println();
            i++;
        }
    }
}
