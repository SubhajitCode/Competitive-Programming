/*
Given a number N. Reduce this number to zero by subtracting the number by it’s most significant digit(Left most digit) at every step. The task is to count the number of steps it takes to be reduced to zero.

Examples:

Input: 14
Output: 6
Steps:
14 - 1 = 13
13 - 1 = 12
12 - 1 = 11
11 - 1 = 10
10 - 1 = 9
9 - 9 = 0

Input: 20  
Output: 12
Numbers after series of steps:
20, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 0
*/
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    return i;
}
int count_steps(int n)
{
    int step=0;
    while (n > 0)
    {
        int d = countDigits(n);
        int div=pow(10, d - 1);
        int msb = n /div ;
        int diff = n - div* msb;
        int tmp = (diff / msb) + 1;
        step = step + tmp;
         n = n - (tmp * msb);      
    }
    return step;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_steps(n)<<endl;
return 0;
}