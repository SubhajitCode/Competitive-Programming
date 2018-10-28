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
  public static void findpair(Map<Integer,Integer> dict,int m,int ll,int ul,Pair p)
   {
    
     
        Object[] arry=dict.keySet().toArray();
        int middle=(ll+ul)/2;
       if(ll==middle)
       {
            p.set(ll,dict.get((int)arry[middle]));
            return;
       }
       if((int)arry[middle]>m)
       {
           findpair(dict, m, ll, middle,p);
       }
       else if((int)arry[middle]==m)
       {
            p.set(middle,dict.get(m));
            return;

       }
       else
       {
           findpair(dict, m, middle, ul,p);
       }
       
   }
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
        }
        for(i=0;i<k;i++)
        {
           Pair pa = new Pair();
           findpair(dict,custmer[i],0,n,pa);
            System.out.println(pa.get());
            
        }

    }
}
