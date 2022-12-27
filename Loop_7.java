public class Loop_7
{
    public static void main(String[] args)
    {
        int count =1;
        for (int i=1;i<=4;i++)
        {
            count=i;
            for(int j=1;j<=(4-i);j++)
            {
                System.out.print(" ");
            }
            for (int j=1;j<=i;j++)
            {
                System.out.print(count);
                count--;
            }
            count++;
            for(int j=2;j<=i;j++)
            {
                ++count;
                System.out.print(count);
            }
            System.out.println(" ");
        }
    }
}
