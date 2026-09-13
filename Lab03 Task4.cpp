#include<iostream>
using namespace std;
int main(){
	int loadValue[9]={90,20,80,30,70,40,60,50,10};
		int	gap=9/2;
		
		int temp=0;
		int numOfComparisions;
		int numOfShifts;
		
		int totalComparisions=0;
		int totalShifts=0;
		
	while(gap>=1){
		 numOfComparisions=0;
			numOfShifts=0;
		for(int i=gap;i<9;i++){
					
			temp=loadValue[i];
				int j=i;
					for(;j-gap>=0;j=j-gap){
					numOfComparisions++;
					totalComparisions++;	
					if((loadValue[j-gap])>temp){
						loadValue[j]=loadValue[j-gap];
						totalShifts++;
						numOfShifts++;
				
					
					}
					
					else{

						
						break;
					}
				
				
					
				
					
				}
					loadValue[j]=temp;
				
			
				
				
		
	
}
			
			cout<<"----For Gap "<<gap<<" ----"<<endl;
			cout<<"num Of comaparisions="<<numOfComparisions<<endl; 
			cout<<"num Of Shift="<<numOfShifts<<endl;
				cout<<"{";
				for(int k=0;k<9;k++){
					cout<<loadValue[k]<<" , ";
				}
				cout<<"}"<<endl;
				
			gap=gap/2;
			
			
		}
		cout<<endl;
		cout<<endl;
		cout<<"total comparisions="<<totalComparisions<<endl;
		cout<<"total shifts="<<totalShifts<<endl;
		
		
	
}
