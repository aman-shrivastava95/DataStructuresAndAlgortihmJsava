#include<iostream>
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
    int n ;
    cin>>n ;
    long long arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    long long curTaken = arr[n-1] ;
    long long sum = arr[n-1] ;
    for(int i=n-2;i>=0;i--){
        curTaken = min(curTaken - 1, arr[i]) ;
        if(curTaken < 0){
            curTaken = 0 ;
        }
        sum+=curTaken ;
    }
    cout<<sum ;
}
