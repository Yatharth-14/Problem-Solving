public class Loop_9
{
    public static void main(String[] args) {
        for (int i=1;i<=5;i++)
        {
            for(int j=1;j<=(3-i);j++)
            {
                System.out.print(" ");
            }
            for (int j=1;j<=i && i<=3;j++)
            {
                System.out.print("*");
            }
            for (int j=2;j<=i && i<=3;j++)
            {
                System.out.print("*");
            }
            for (int j=1;j<=i-3;j++)
            {
                System.out.println(" ");
            }

            System.out.println(" ");
        }
    }
}