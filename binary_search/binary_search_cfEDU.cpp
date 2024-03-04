#include <bits/stdc++.h>
     
using namespace std;
     
int main()
{
    int n, k;         // n --->size of array, k -----> no. of inputs to be tested
    cin>>n>>k;  

    long int arr[n];


    for(int i=0; i<n; i++)

    {
        cin>>arr[i];
    }

    for(int i=0; i<k; i++)
    {   long int x;                 // x (the number to check)
        cin>>x;

        int l(0), r(n-1);
        bool flag = 0;
        while(l<=r)
        { 

        int mid = (l+r)/2;

        if(arr[mid] < x )
        {
            l = mid+1;
        }

        else if(arr[mid] > x)
        {
            r = mid-1;
        }

        else
        {
            flag=1;
            break;
        }
        
        }

        if(flag)
        {   cout<<"YES\n";}
        else 
        {   cout<<"NO\n";}

    }
        
}