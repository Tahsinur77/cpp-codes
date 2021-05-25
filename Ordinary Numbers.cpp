#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
#define mk   make_pair
#define all(x)    x.begin(),x.end()
#define For(i, j, k) for(int i = j; i < k; i++)
#define Rof(i, j, k) for(int i = j; i > k; i--)


#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

typedef long long int ll;
typedef unsigned long long int ull;
const double pi = 2.0*acos(0.0);

#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)

char small[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;

ll big_mod(ll BASE, ll POWER, ll MOD){

    if(POWER == 0) return 1;
    else if(POWER %2 ==0){
        ll RESULT = big_mod(BASE,POWER/2,MOD);
        return ((RESULT % MOD)*(RESULT % MOD))% MOD;
    }
    else return ((BASE % MOD)*(big_mod(BASE,POWER-1,MOD)% MOD))% MOD;

}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main(){

int t;
cin>>t;

while(t--){
    ll n;
    cin>>n;
    if(n<10) cout<<n<<endl;
    else{
    ll x = n;
    ll ans = 0 ;
    ll check = 0;
    while(x>=10){
        ans+=9;
        x/=10;
        check++;
    }
    //if(x != 1 && n>9){
        //cout<<x<<endl;
        ans+= x-1;
        ll p = 0;
        ll u = 1 ;
        for(int i = 0 ; i <=check ; i++){
            if(i == 0) {
                p+=x;
                //cout<<p<<" "<<x<<endl;
            }
            else{

                u*=10;
                ll v = x*u;
                p+=v;
                //cout<<p<<" "<<x<<" "<<v<<endl;
            }
        }
        //cout<<p<<" "<<check<<endl;
        if(p<=n) ans++;
    //}

    cout<<ans<<endl;
    }

}
}
