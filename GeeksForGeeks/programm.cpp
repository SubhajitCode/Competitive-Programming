/*
Find two numbers with sum and product both same as N
Given an integer N, the task is to find two numbers a and b such that a * b = N and a + b = N. Print “NO” if no such numbers are possible.
Examples:

Input: N = 69
Output: a = 67.9851
b = 1.01493

Input: N = 1
Output: NO

*/

#include<bits/stdc++.h>
using namespace std;
void findAandB(double n)
{
    double d=n*n-4*n;
    if(d<0)
    {
        cout<<"NO"<<endl;
    }       
    else
    {
        d=sqrt(d);
        cout<<"a = "<<(n+d)/2<<endl;
        cout<<"b = "<<(n-d)/2<<endl;
    }
}
int main()
{
    double N;
    cin>>N;
    findAandB(N);

}