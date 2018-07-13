import java.util.*;
class Beguvi03
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int c=0;
        for(int i=2;i<a/2;i++)
        {
        if(a%i==0)
        {
            System.out.print("No");
            c=1;
            break;
        }
        }
        if(c==0)
        {
            System.out.print("YES");
        }
    }
}
