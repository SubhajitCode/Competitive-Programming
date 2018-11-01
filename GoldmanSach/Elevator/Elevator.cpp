//Question : Can we do better
#include<bits/stdc++.h>
using namespace std;
//Taken from the discussion Board and a naive approach
int main()
{
    int n;
    cin>>n;
    n++;
    int arr[n];
    arr[0]=0;
    for (int i = 1; i < n; ++i)
    {
        cin>>arr[i];
    }
    int cost=0,ans;
    //First Compute the cost as given function
    for (int i = 1; i < n; ++i)
    {
        cost+=abs(arr[i]-arr[i-1]);
    }
    ans=cost;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            //Take any two pair
            //Subtrackt the cost due to all neighbour of those pair
            int temp = cost;
            if(i+1<n)
                cost-=abs(arr[i+1]-arr[i]);
            if(i-1>=0)
                cost-=abs(arr[i]-arr[i-1]);
            if(j+1<n)
                cost-=abs(arr[j+1]-arr[j]);
            if(j-1>=0)
                cost-=abs(arr[j]-arr[j-1]);
            swap(arr[i],arr[j]);//swap
            //then add the cost due to all those new neighbour
            if(i+1<n)
                cost+=abs(arr[i+1]-arr[i]);
            if(i-1>=0)
                cost+=abs(arr[i]-arr[i-1]);
            if(j+1<n)
                cost+=abs(arr[j+1]-arr[j]);
            if(j-1>=0)
                cost+=abs(arr[j]-arr[j-1]);
            //take the minimum
            ans = min(cost,ans);
            swap(arr[i],arr[j]);//swap to make it as it was 
            
            cost=temp;
        }
    }
    cout<<ans<<endl;
}