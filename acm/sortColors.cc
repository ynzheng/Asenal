#include <iostream> 
#include <cstdio> 
#include <algorithm> 
#include <cstring> 
#include <string>
#include <cmath> 
#include <vector> 
#include <queue> 
#include <map>
#include <ctime>
#include <set>

typedef long long lld; 
using namespace std; 
#ifdef DEBUG
#define debug(x) cout<<__LINE__<<" "<<#x<<"="<<x<<endl;
#else
#define debug(x)
#endif

class Solution
{
#ifdef DEBUG
#define debug(x) cout<<__LINE__<<" "<<#x<<"="<<x<<endl;
#else
#define debug(x)
#endif
#define here cout<<__LINE__<< "  " << "_______________here" <<endl;
#define clr(NAME,VALUE) memset(NAME,VALUE,sizeof(NAME)) 
#define MAX 0x7fffffff 
#define MIN 0x80000000
#define N 16000010
#define PRIME 999983
public:
    void sortColors(int A[], int n)
    {
        int last = n - 1, fist = -1;
        for (int i = 0; i < n; i++) {
            if (A[i] == 0) {
                continue;
            } else if (A[i] == 1) {

            }
            
        }
    }


};

int main()
{
    #ifdef DEBUG
    freopen("a", "r", stdin);
    #endif
    printf("%d %d\n", rand(), rand());

    return 0;
}

