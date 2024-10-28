#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long a;
  long long b,c=0,k;
  cin >> a >>b;
  k = a;
  long long i=1;
  if (a>=b){
    while (k>=b){
    k = k / b;
    i++;
  }
//cout << i <<'\n';
  char q[i];
    k = a;
    int s;
  for ( int j = 0 ; j < i ;j ++){
    if(k>=b)
        s=k%b;
    else 
        s=k;
    // cout << s <<'\n';
    if(s>=10){
      s=65+s-10;
      q[j] = (char)s;
    //   cout << a[j] <<'\n';
    }
    else{
        q[j] = (char)(s+48);

    // cout << a[j] <<'\n';
        }
    k = k / b;
    }

  for ( int j = i-1 ; j >=0 ;j--){
  
      cout << q[j] <<'\0';
  }
  }


  else{
    if(a>=10){
    c=65+a-10;
    cout << char(c) <<'\0';
  }
  else
    cout << a <<'\0';
  }
}

signed main (){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
//关流后无法使用printf和getchar
  solve();
}



