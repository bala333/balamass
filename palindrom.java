import java.util.*;
class Beguvi02
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        if(a<=1000)
        {
            String b="";
            String a1=String.valueOf(a);
            StringBuffer sb=new StringBuffer(a1);
            b=String.valueOf(sb.reverse());
            if(a1.equals(b))
            {
              System.out.print("Yes");
            }
            else
            {
                System.out.print("No");
            }
        }
        else
        {
            System.out.print("Invalid input");
        }
    }
}
