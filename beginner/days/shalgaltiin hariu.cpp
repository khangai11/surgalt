#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
//Palindrome
int main()
{   
    int n; cin>>n;
    int a = n;
    int oron=0;
    while(a!=0){
        oron++;
        a/=10;
    }
    int orn = oron/2;
    for(int i=1; i <= orn; i++){
        int suul = n%10;
        int ehnii = n/pow(10,oron-1);
        if(suul != ehnii){
            cout<<"NO"; return 0;
        }
        ll p = pow(10,oron-1); 
        n = n%p;
        n /= 10;
        oron-=2;
    }
    cout<<"YES";
    return 0;
}

//Kvadrat duurgelt
// int main()
// {   
//     int n; cin>>n;
//     int A=1;
//     for(int i=1; i<=n; i++){ //Mur
//         for(int j=1; j<=n; j++){ //Bagana
//             if(A/10==0){
//                 cout<<"  "<<A++;
//             }else{
//                 cout<<" "<<A++;
//             }
//         }
//         cout<<'\n';
//     }
//     return 0;
// }


//Gurvaljin
// int main()
// {   
//     int n; cin>>n;
//     for(int i=1; i<=n;i++){ // Murnii davtalt
//         //Hooson zai hevleh
//         for(int j=1; j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*i-1);j++){
//             if(i==n)
//                 cout<<"*"; //hamgiin suuliin muriig odoor
//             else{
//                 if(j==1||j==(2*i-1)) cout<<"*";
//                 else cout<<" ";
//             }
//         }
//         cout<<'\n';
//     }
//     return 0;
// }


//x o hulug

// int main()
// {   
//     int n; cin>>n;
//     for(int i=1; i<=n; i++){ //muriin davtalt
//         if(i%2==1){ //Sondgoi tootoi mur bol 
//             for(int j=1; j<=n; j++){ //baganiin davtalt
//                 if(j%2==1) cout<<'x';
//                 else cout<<'o';
//             }
//         }else{ //Tegsh tootoi mur gesen ug
//             for(int j=1; j<=n; j++){ //baganiin davtalt
//                 if(j%2==1) cout<<'o';
//                 else cout<<'x';
//             }
//         }
//         cout<<'\n';
//     }
//     return 0;
// }


//Daraalliin niilber
// int main()
// {   
//     long long ans=0;
//     long long n; cin>>n;
//     for(int i=0; i<n; i++){
//         long long x; cin>>x;
//         ans+=x;
//     } 
//     cout<<ans;
//     return 0;
// }





