#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0,maxi=INT_MIN;
    for(int i=0;i<n;i++){

        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return maxi<0 ? 0 : maxi;
}
