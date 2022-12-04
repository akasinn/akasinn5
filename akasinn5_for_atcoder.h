#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;

const int intinf=-2147483648;
const int intsup=2147483647;
const ll llsup= 9223372036854775807;
const ll mod=998244353;//≒10⁹素数
const double pi=3.141592653589793;

bool is_prime_number(int n){
  if(n<=1)return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}


//(a^b)%mod
int modpow(int a,int b){
  int ans=1;
  ll x=a%mod;
  while(b){
    if(b%2)ans=(ans*x)%mod;
    b/=2;
    x=x*x%mod;
  }
  return ans;
}

//逆元
int mod_inverse_element(int x){
  return modpow(x,mod-2);
}

//階乗
vector<int>modFactorial={1,1,2,6,24};
int modfactorial(int n){
  int size=modFactorial.size();
  while(size<=n){
    int next=(ll)modFactorial.at(size-1)*size%mod;
    modFactorial.push_back(next);
    size++;
  }
  return modFactorial.at(n);
}

int modCombination(int x,int y){
  int a=modfactorial(x);
  int b=modfactorial(y);
  int c=modfactorial(x-y);
  b=mod_inverse_element(b);
  c=mod_inverse_element(c);
  return a*b%mod*c%mod;
}

int main(){
  cout<<fixed<<setprecision(15);
  srand((unsigned)time(NULL));
  
  return 0;
}
