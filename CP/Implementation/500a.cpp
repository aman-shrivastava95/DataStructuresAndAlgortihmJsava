#include<iostream>//
#define pb push_back
#define mp make_pair
#define MOD  100000007 
#define len(x) x.size()
#define min3(a,b,c),min(a, min(b,c))
#define max3(a,b,c), max(a, max(b,c))
#define all(v) v.begin(),v.end() 
#define alla(n) a,a + n
using namespace std ;



int main(int argc, char const *argv[])
{
    
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin) ;
    freopen("../output.txt","w",stdout) ;
    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ; cout.tie(NULL) ;
    int n, t ;
    cin>>n>>t ;
    int arr[n+1] ;
    for(int i=1;i<=n;i++){
        cin>>arr[i] ;
    }
    int currCell = 1 ;
    while(currCell<t){
        currCell = currCell + arr[currCell] ;
    }
    if(currCell == t)
        cout<<"YES" ;
    else 
        cout<<"NO" ;
}
