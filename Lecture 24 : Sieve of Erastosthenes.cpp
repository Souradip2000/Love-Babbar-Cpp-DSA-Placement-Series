// Count Primes

// gives TLE

class Solution {
private:
    bool isPrime(int n)
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
public:
    int countPrimes(int n) {
        int count=0;

        for(int i=2; i<n; i++)
        {
            if(isPrime(i))
                count++;
        }

        return count;
    }
};

// time complexity of the above code : O(n^2))







// Method 2: Sieve of Erastosthenes

// time complexity : O(n*log(logn) )        // comes from Taylor series : n/2 + n/3 + n/4 + n/5 +... = n( 1/2 + 1/3 + 1/4 + 1/5 + ...) = log(log(n))

class Solution {
public:
    int countPrimes(int n) {
      vector<bool> primes(n+1, true);

      primes[0] = primes[1] = false;

      int cnt=0;
      for(int i=2; i<n; i++){
          if(primes[i]){
              cnt++;

              for(int j=i+i; j<n; j+=i){
                  primes[j]=false;
              }
          }
      } 

      return cnt; 
    }
};







// Iterative code to find GCD

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    while(a!=b){
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans;
    return 0;
}

