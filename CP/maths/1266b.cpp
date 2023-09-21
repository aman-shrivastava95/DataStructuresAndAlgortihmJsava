#include<iostream>
#define mp make_pair
#define MOD  100000007 
#define len(x) x.size()
#define min3(a,b,c),min(a, min(b,c))
#define max3(a,b,c), max(a, max(b,c))
#define all(v) v.begin(),v.end() 
#define alla(n) a,a + n
#define ll long long
using namespace std ;


int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin) ;
    freopen("../output.txt","w",stdout) ;
    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ; cout.tie(NULL) ;
    //SOLUTION
    //observation is that sum of opposite side of dice is always 7 
    int t ;
    cin>>t ;
    while(t--){
        ll n ;
        cin>>n ;
        if(n <= 14){
            cout<<"NO"<<"\n" ;
            continue ;
        }
        ll r = n%14 ;
        if(r > 0 && r < 7 ) cout<<"YES"<<"\n" ;
        else cout<<"NO"<<"\n" ;
    }
}