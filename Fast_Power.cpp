#include <iostream>

using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    
    return n * power(n,p-1);
}


int fast_power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    
    int subProb=fast_power(a,n/2);
    int subProbsq=subProb*subProb;
    
    
    if(n&1) //means n is odd
    {
        return a*subProbsq;
    }
    else
        return subProbsq;
}

int main()
{
    int a,n;
    
    cin>>a>>n;
    //cout<<power(a,n);
    cout<<fast_power(a,n);


    return 0;
}
