import java.util.*;
import java.util.Scanner;
class Pair
{
    int s,p;
    public void set(int x,int y)
    {
        s=x;p=y;
    }
    public int get()
    {
        return p;
    }
}
public class gds
{
    public static void main(String[] args)
    {
        int i,k;
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] s=new int[n];
        int[] p=new int[n];
        TreeMap<Integer,Integer> dict = new TreeMap<Integer,Integer>();
        for(i=0;i<n;i++)
        {
            int S=input.nextInt();
            s[i]=S;      
        }
        for(i=0;i<n;i++)
        {
            int S=input.nextInt();
            p[i]=S;      
        }
        for(i=0;i<n;i++)
        {
            dict.put(s[i], p[i]);
        }
        k = input.nextInt();
        int[] custmer = new int[k];
        for(i=0;i<k;i++)
        {
            custmer[i]=input.nextInt();
            int result=dict.floorKey(custmer[i]);
            System.out.println(dict.get(result));
            
        }

    }
}