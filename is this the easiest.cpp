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
#define CS printf("Case %d: ",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({int a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

int main()
{
    long long test,cs=1;
    //ifstream infile("in.txt");
    cin>>test;
    while(test--){
        vector<long long>sides;
        long long side[3];
        cin>>side[0]>>side[1]>>side[2];
        sides.push_back(side[0]);
        sides.push_back(side[1]);
        sides.push_back(side[2]);
        all(sides);
        //sort(sides.begin(),sides.end(),greater<int>());
        if(sides[0]+sides[1]>sides[2]){
            if(sides[0]==sides[1]&&sides[0]==sides[2])printf("Case %d: Equilateral\n",cs++);
            else if(sides[0]!=sides[1]&&sides[1]!=sides[2])printf("Case %d: Scalene\n",cs++);
            else printf("Case %d: Isosceles\n",cs++);
        }
        else printf("Case %d: Invalid\n",cs++);

    }

}
