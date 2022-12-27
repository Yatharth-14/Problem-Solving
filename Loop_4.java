public class Loop_4
{
    public static void main(String[] args) {
        char ch = 'A';
        for (int i=1;i<=4;i++)
        {
            for (int j=1;j<=i;j++) {
                System.out.print(ch);
                ch+=1;
            }
            ch='A';
            ch+=i;
            System.out.println();
        }
    }
}
