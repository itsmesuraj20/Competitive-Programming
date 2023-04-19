#include <iostream>
using namespace std;

int main() {
    int n,t,i,j;
    cin >> n>>t;
    char c[n+1];
    cin>>c;

    for ( i = 0; i < t; i++)
    {
        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]=='B' && c[j+1]=='G')
            {
                c[j]='G';
                c[j+1]='B';
                j++;
            }
        }
    }
    cout<<c;
    
    return 0;
}
