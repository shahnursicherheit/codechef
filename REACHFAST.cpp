#include <iostream>
using namespace std;

int main() {
    int t,x,y,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k;
        int c;
        if(x>y)
        {
            if((x-y)%k==0)
            {
                c=(x-y)/k;
            }
            else
            c=(x-y)/k+1;
        }
        else if(x==y)
        {
            c=0;
        }
        else if(x<y)
        {
            if((y-x)%k==0)
            {
                c=(y-x)/k;
            }
            else
            c=(y-x)/k+1;
        }
        cout<<c<<endl;
    }
	return 0;
}
