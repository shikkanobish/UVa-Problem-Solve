#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ms0(a) memset(a,0,sizeof(a))
#define msn(a,n) memset(a,n,sizeof(a))
#define until(i,n) for(__typeof(n)i=0;i<n;i++)
#define For(i,n) for(__typeof(n)i=1;i<=n;i++)
#define init(i,a,n) for(i=0;i<n;i++)a[i]=i
#define inf INT_MAX
#define ll long long
#define llu long long unsigned
#define db double
#define ldb long double
#define sq(x) ((x)*(x))
#define all(x) sort(x.begin(),x.end())
#define CS printf("Case #%d:\n",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({int a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

int main()
{
    int t,cs=1;
    //ifstream infile("in.txt");
    cin>>t;
    while(t--){
        vector<string>v;
        string s;
        int max=0,rank;
        until(i,10){
            cin>>s>>rank;
            if(rank>max){max=rank;v.clear();v.push_back(s);}
            else if(rank==max){v.push_back(s);}
            //cout<<max;
        }
        CS;
        until(i,v.size()){
            cout<<v[i]<<endl;
        }
    }




}
