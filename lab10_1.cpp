#include<iostream>
using namespace std;

int main(){
    char grade;
 	int count[5] = {}; 
 	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
 	int i = 1 ;
    do{
  	cout << "Student ["<< i << "]: ";
  	cin >> grade;
    i++;
        
    if(grade == '0'){ 
        break;   
  	}if(grade == 'A'){
        count[0]++; 
  	}else if(grade == 'B'){
   		count[1]++;
    }else if(grade == 'C'){ 
   		count[2]++; 
    }else if(grade == 'D'){ 
   		count[3]++;   
    }else if(grade == 'F'){ 
   		count[4]++;       
   
    }else{
   	cout << "Wrong input. Please input again."<<endl;
    i--;}
 }
   
    while(grade != '0');
 
 
 	cout << "In total " << i-2 << " students.\n";
 	cout << "A = " << count[0] <<", ";
 	cout << "B = " << count[1] <<", ";
    cout << "C = " << count[2] <<", ";
    cout << "D = " << count[3] <<", ";
    cout << "F = " << count[4]; 
  
 
 return 0;
}