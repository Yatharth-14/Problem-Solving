public class Loop_2
{
    public static void main(String[] args) {
        int count;
        for (int i=1;i<=4;i++)
        {
            count=i;
            for (int j=1;j<=i;j++)
            {
                System.out.print(count+" ");
                count++;
            }
            System.out.println();
        }
    }
}
