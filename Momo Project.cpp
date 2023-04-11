#include <iostream>
using namespace std;


int main() {
string option, old_pin,new_pin,receiver_num,amount;
bool pin_out;
int pin_count;
int pin_limit;
pin_limit=2;
pin_count=0;
pin_out=false;

cout<<"Welcome to MTN Mobile Money Service"<< endl;
cout<<"";
cout<<"1, Authentication"<< endl;
cout<<"2, Reset Pin"<< endl;
cout<<"3, Check Balance"<< endl;
cout<<"4, Transfer Money"<< endl;
cout<<"";
cout<<"Select option by enter 1 - 4"<< endl;
cin>>option;
if (option=="1"){
	while(old_pin !="0000" and not(pin_out)){
	   if (pin_count<=pin_limit){
           cout<<"Enter your pin to accept withdrawal of 650 cedis: ";
		   cin>>old_pin;
		   pin_count+=1;}	
	
	    else {pin_out=true;}
		}
    if  (pin_out==true){
    	cout<<"your account is blocked for too many attempts";
    }
    else{
    	cout<<"you have successfully withdraw 650 cedis from your account" ;
    	cout<<"with fee of 6 cedis";
    }
	
	
	}
	else if (option=="2"){
		while(old_pin !="0000" and not(pin_out)){
			if(pin_count<=pin_limit){
			   cout<<"enter old pin: ";
			   cin>>old_pin;
			   pin_count+=1;}
		  
		   else{pin_out=true;}  
			}
	    
	    
		if(pin_out==true){
		   cout<<"your account is blocked for too many attempts";}
		else{
		cout<<"enter new pin: ";
		
	    cin>>new_pin;
		if (new_pin==old_pin){
			cout<<"pin already exist";
		}	
		cout<<"your pin has been resetted successfully";
		}}
	
    else if(option== "3"){
	    while(old_pin != "0000" and not(pin_out)){
		
		   if (pin_count<=pin_limit){
		       cout<<"enter pin: ";
		       cin>>old_pin;
		       pin_count+=1;}
		   	
	       else{pin_out=true;}
	       }
        if (pin_out==true){
		cout<<"your account is blocked for too many attempts";
		}
		else{
			cout<<"your current balance is 1000 cedis";
			
			
		}
    }
    else if (option=="4"){
    	cout<<"enter receiver number: ";
        cin>>receiver_num;
        cout<<"enter amount to transfer: ";
        cin>>amount;
        
        while(old_pin != "0000" and not(pin_out)){
        	if (pin_count<=pin_limit){
        		cout<<"enter pin:";
        		cin>>old_pin;
        		pin_count+=1;}
		   
		    else{pin_out=true;}
	        }
	    if (pin_out==true){
	    	cout<<"your account is blocked for too many attempts";
		}
		else{
			cout<<"Transaction successful";
		}    
   }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
