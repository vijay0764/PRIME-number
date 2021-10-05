#include<iostream>

using namespace std;

int prime(int num)
{
     int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
        return count;


}

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(prime(i)<3)
            cout<<i<<" is prime"<<endl;
    }
    cout<<endl<<"*************************"<<endl<<endl;

        for(i=1;i<=100;i++)
    {
        if(prime(i)>=3)
            cout<<i<<" is not prime"<<endl;
    }

return 0;
}
