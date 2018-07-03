#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
#define maxn 100000+5
#define P 1000000007
#define pi  3.1415926535 
#define eps 0.00000001
#define pb  push_back
#define mkp make_pair
#define fi first
#define se second
#define pii  pair<int,int>
#define mii  map<int,int>
#define vi  vector<int>
#define dbg(i)  cout<<i<<endl;
#define Max(a,b) (((a)>(b))?(a):(b))
#define Min(a,b) (((a)<(b))?(a):(b))
#define me(a,b) memset(a,b,sizeof(a))
using ll=long long;
using ull=unsigned long long;
using namespace std;
inline void up(int&x,int y){x=x+y<P?x+y:x+y-P;}
inline char emm(int q,int w){return q==w?'\n':' ';}
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int cnt,cc;
double a[1000000];
int main()
{
    freopen("logC.txt","r",stdin);
    freopen("c.txt","w",stdout);
    //clock_t time=clock();
    //srand(time(0));
    string s;
    while (cin>>s)
        if (s=="avgloss:")
        {
            if (!cc)
                cin>>a[++cnt],cc++;
            else
                cc=(cc+1)%10,cin>>a[0],a[cnt]+=a[0];
        }
    cout<<cnt<<endl;
    for (int i=1;i<cnt;i++)
        printf("%lf,",a[i]);
    //printf("程序运行的时间为%f\n",(double)(clock()-time)/CLOCKS_PER_SEC);
    //fclose(stdin);fclose(stdout);
    return 0;
}
