#include <iostream>
using namespace std;

int main(){
	int attendancePercentageM[8]={55,61,67,72,78,81,80,85};
	int attendancePercentageS[8]={55,61,67,72,78,81,80,85};
	int size=8;
	int numOfPasses=0;
	int numOfComparision=0;
	int totalNumOfSwapd=0;
	bool swap=false;
	int numOfPassS=0;
	int numOfComparisionS=0;
	
	for(int i=0;i<size-1;i++){
		swap=false;
		numOfPasses++;
		if(swap==false){
		
		for(int j=0;j<size-1-i;j++){
		if(attendancePercentageM[j]>attendancePercentageM[j+1]){
			int temp=attendancePercentageM[j];
			attendancePercentageM[j]=attendancePercentageM[j+1];
				attendancePercentageM[j+1]=temp;
			totalNumOfSwapd++;		
			swap=true;
		}
		
		numOfComparision++;
			
		}
		if(swap==false){
				break;	
			}
	}
	
	}
	
	cout<<"Modified Bubble sorted array"<<endl;
		for(int i=0;i<size;i++){

		
			cout<<attendancePercentageM[i]<<" , ";
	
	
	}
	cout<<endl;
	cout<<"Total Number of Passes for modified="<<numOfPasses<<endl<<"Total Number of Comparision for modified="<<numOfComparision<<endl<<"Total Number of Swapping for modified="<<totalNumOfSwapd<<endl;
	
	//Standard Bubble sort
	
	cout<<endl;
		for(int i=0;i<size-1;i++){
		numOfPassS++;
		for(int j=0;j<size-1-i;j++){
		if(attendancePercentageS[j]>attendancePercentageS[j+1]){
			int temp=attendancePercentageS[j];
			attendancePercentageS[j]=attendancePercentageS[j+1];
			attendancePercentageS[j+1]=temp;
					
		}
		numOfComparisionS++;
		}
		
	}
	cout<<"Standard Bubble  Sort"<<endl;
	for(int i=0;i<size;i++){

		
			cout<<attendancePercentageS[i]<<" , ";
	
	
	}
	cout<<endl;
		cout<<"Number of Comparision for Standard Bubble sort="<<numOfComparisionS<<endl<<"Number of Passes for Standard Bubble sort="<<numOfPassS;
	

}
