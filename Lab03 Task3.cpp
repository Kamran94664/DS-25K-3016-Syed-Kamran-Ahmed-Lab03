#include<iostream>
using namespace std;

int main(){
	int quantity[8]={10,20,30,40,5,50,60,70};
	int gap=7;
	bool isSwap=false;
	for(int i=0; i<8-1;i++){
	
		 if((gap==1 )&& (isSwap==false)){
					break;
				}
			
			isSwap=false;
			for(int j=0;j<8-gap;j++){
				if(quantity[j]>quantity[j+gap]){
					int temp=quantity[j+gap];
					quantity[j+gap]=quantity[j];
					quantity[j]=temp;
					isSwap=true;
					
			
				}
				
				
				
			}
				cout<<"After "<<i+1<<" "<<"ilteration Gap="<<gap<<endl;
				
				gap=gap/1.3;
				if(gap==0){
					gap=1;
				}	
		}
		
					
				
		
	
		cout<<"  After Sorting  "<<endl;
	
		cout<<"{";
	for(int i=0;i<8;i++){
		cout<<quantity[i]<<" , ";
	}
	cout<<"}";
}
