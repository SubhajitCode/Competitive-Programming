/*
Nemo has wandered off again! Dory is determined to find Nemo, but this time Nemo doesn't want to go back. Dory knows that Nemo can only travel between N cities. 

She starts searching all the cities one by one starting from the first city. Due to Dory's short term-memory loss, she has to keep track of the cities she visits. For this purpose, she marks the cities she visits in a particular way so that she doesn't have to visit them again. 

First, she gets the mark from a city, then uses it to mark the next city she visits, gets next mark from next city and uses it to mark the city that comes after. This marking scheme continues in a cyclic format until she finds Nemo. Nemo however, doesn't want to get caught. He travels to one of the un-marked cities to stay away from Dory as long as possible. Nemo cannot travel to the marked cities. 

Cities are numbered from 1 to N. 
Your task is to find the city number in which Dory will find Nemo.

Input Format

First input line contains number of test cases T 
Each following T lines contain number of cities N

Constraints

1 <= T <= 20 
1 <= N <= 107

Output Format

T lines containing the city number where Nemo is found for each input.

Sample Input 0

1
2
Sample Output 0

1
Explanation 0

Dory travels to city 1 (Nemo travels to city 2) -> gets mark 
Dory travels to city 2 (Nemo travels to city 1) -> marks city 2 
Dory travels to city 1 (Nemo travels to city 1) -> gets mark 
Dory travels to city 1 (Nemo travels to city 1) -> marks city 1

Sample Input 1

1
3
Sample Output 1

3
Explanation 1

Dory travels to city 1 (Nemo travels to city 2) -> gets mark 
Dory travels to city 2 (Nemo travels to city 3) -> marks city 2 
Dory travels to city 3 (Nemo travels to city 1) -> gets mark 
Dory travels to city 1 (Nemo travels to city 3) -> marks city 1 
Dory travels to city 3 (Nemo travels to city 3) -> gets mark 
Dory travels to city 3 (Nemo travels to city 3) -> marks city 3

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>
using namespace std;
int find_log(int n)
{
    int l=log(n)/log(2);
    return l;
}

int find_nemo(int n)
{
    int p=find_log(n);
    int diff = n-pow(2,p);
    return(2*diff+1);
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k,n;
    cin>>k;
    for(int i=0;i<k;i++)
    {
            cin>>n;
            cout<<find_nemo(n)<<endl;
    }

    return 0;
}