public class Loop_3
{
    public static void main(String[] args) {
        char ch = 'A';
        for (int i=1;i<=3;i++)
        {
            for (int j=1;j<=i;j++)
            {
                System.out.print(ch);
            }
            ch+=1;
            System.out.println();
        }
    }
}
