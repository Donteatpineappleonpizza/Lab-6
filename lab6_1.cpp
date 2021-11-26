#include<iostream>
using namespace std;

int main(){

    int x ;
    int Even = 0 ; 
    int Odd = 0 ;
    int N = 0 ;
   
   
    while ( x != N ){ 
        cout << "Enter an integer: ";
        cin >> x ; 
       
         if (x %2 == 0) {
            Even++ ; //ถ้าพบข้อมูลเป็นเลขคู่ให้นับ +1ไปเรื่อยๆ
                if ( x == 0 ) {
                    Even-- ; //ยกเว้น 0 เพราะปกติ 0 เป็น Even ทำให้มัน--เป็น0ตามโจทย์
            }
 
        }else{
            Odd++ ; //ถ้าพบข้อมูลเป็นเลขคี่ให้นับ +1ไปเรื่อยๆ
        }

    }
        
    cout << "#Even numbers = " << Even << "\n"; //รวมจำนวนคู่คี่
    cout << "#Odd numbers = " << Odd ;
  
    return 0;
}
    

    
  