
//1. create a function to make a string uppercase
/*
#include<iostream>
#include<string>
using namespace std;
string uc(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]>= 'a' && s[i]<= 'z'){
            s[i]-=32;
        }
        else{
            s[i];
        }
       
    }
    return s;
}
int main(){
    string str="hello WOrld";
    string a = uc(str);
    cout<<a;
    return 0;
}
*/
/*
//2. create a function to make a string lowercase

#include<iostream>
#include<string.h>
using namespace std;
string uc(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]>= 'A' && s[i]<= 'Z'){
            s[i]+=32;
        }
        else{
            s[i];
        }
       
    }
    return s;
}
int main(){
    string str="HELLO WOrld";
    string a = uc(str);
    cout<<a;
    return 0;
}
*/

//3. create a function that find and returns max of two value
/*
#include<iostream>
using namespace std;

int findmax(int a, int b){
    int maximum;
     if(a>b){
         maximum =a;
     }
     else {
         maximum =b;
     }
     return maximum;
}


int main(){
    int z,k;
      z=findmax(2,6);
	  k=findmax(6,2);
    cout<<z<<endl;
	cout<<k;
    return 0;
}
*/



//4. create a function that returns an absolute value of the given integer
/*
#include<iostream>
using namespace std;

int absolute(int a, int b){
    int abso;
    if(a>=0){
       abso=a;
    }
    else if(b>=0){
       abso=b;
    }
    return abso;
}
  int main(){
    int ab,so;
    ab=absolute(-1,5);
    so=absolute(5,-1);
    cout<<ab<<endl;
    cout<<so;
    return 0;
  }
  */


//5. create a function that converts an array of integer to it's absolute value using your function
/*
#include<iostream>
using namespace std;
void absolute(int arr[],int size){
    for(int i=0; i<size; i++){
          if(arr[i]<=0){
             arr[i]=-arr[i];
          }
    }
}
int main(){
      int  iarr[]={0,-1,5,-2,6};
      int size= sizeof(iarr)/sizeof(iarr[0]);

       absolute(iarr,size);

    for(int i=0; i<size; i++){
        cout<<" "<<iarr[i];
    }

 return 0;

}
*/

//6. create a function to reverse an integer array
/*
#include<iostream>
using namespace std;
void rev(int arr[], int size){
    int temp,a=0,b=size-1;
    while(a<b){
          temp=arr[a];
          arr[a]=arr[b];
          arr[b]=temp;
          a++;
          b--;
    }
}
int main(){
     int iarr[]={2,3,4,5};
     int size=sizeof(iarr)/sizeof(iarr[0]);
     rev(iarr,size);
     for(int i=0; i<size; i++){
        cout<<iarr[i];
     }


   return 0;

}
*/
//7. create a function that swaps two value
/*
#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp=*a;
        *a=*b;
        *b=temp;

}
int main(){
    int x=2;
    int y=5;
    swap(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}

*/

//8. create a function that returns the Force value when mass and acceleration. (F = ma)
/*
#include<iostream>
using namespace std;
double force(float m, float a){
    int f=m*a;
    return f;
}
int main(){
    float mass,acc;
    cin>>mass;
    cin>>acc;
    double ans = force(mass,acc);
    cout<<ans<<" N";
    return 0;
}
*/

//9. create a function that returns the Gravitational Force
		//when Mass 1, Mass 2 and distance d is given, (F = G*m1*m2/d^2)
/*
#include<iostream>
#include<math.h>
using namespace std;
long  double gf(float m1, float m2 , float d){
    long double G=6.67408*pow(10,-11);
    long double f=G*m1*m2/pow(d,2);
    return f;
}
int main(){
    float mass1,mass2,dist;
    cin>>mass1;
    cin>>mass2;
    cin>>dist;
    long double ans = gf(mass1,mass2,dist);
   cout<<ans;
   return 0;
}
*/

//10. create a function that calculates multiplication of two 3X3 matrix/2D .
//void matrixMul(int matA[3][3],int matB[3][3],int matAns[3][3]){
/*
#include <iostream>
using namespace std;
void mm(int m_a[3][3], int m_b[3][3], int m_ans[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m_ans[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                m_ans[i][j] += m_a[i][k] * m_b[k][j];
            }
        }
    }
}

int main() {
    int m_a[3][3] = {1, 2, 3,
                      4, 5, 6,
                      7, 8, 9};

    int m_b[3][3] = {1, 2, 3,
                      4, 5, 6,
                      7, 8, 9};

    int mres[3][3];

    mm(m_a, m_b, mres);
        for (int i = 0; i < 3; ++i) {
          for (int j = 0; j < 3; ++j) {
            cout << mres[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

*/



