
// 1-

#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<(a==b);    

    return 0;

}







// 2-

#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<((a<50) and (a<b));

    return 0;

}







// 3-

#include <iostream>
using namespace std;

int main(){

    int total,boys,girls;
    boys=25;
    girls=20;
    total=45;
    int total_a_students,total_boys_with_a,total_girls_with_a;
    total_boys_with_a=17;
    total_a_students=17/0.80;
    total_girls_with_a=total_a_students-total_boys_with_a;
    cout<<"total girls who got a = "<< total_girls_with_a;
    
    return 0;

}
 




// 4-

#include <iostream>
using namespace std;

int main(){

  int a;
  cout<<"the 5 digit no. is: ";
  cin>>a;
  int _1st_digit,_2nd_last_digit;
  _1st_digit=a/10000;
  _2nd_last_digit=(a/10)%10;
  cout<<"sum of 1st and 2nd last digit is: "<<(_1st_digit+_2nd_last_digit);
   
   return 0;

}




// 5-

#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"a= ";
    cin>>a;
    cout<<"sum of digits of a= "<<((a/100)+(a/10)%10+(a%10));

    return 0;

}




// 6-

#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"enter ur desired no.s: ";
    cin>>a>>b>>c;
    int sum=a+b+c;
    int product=a*b*c;
    cout<<"product is : " <<product<<"\n"<<"sum is : "<<sum;
    return 0;

}

