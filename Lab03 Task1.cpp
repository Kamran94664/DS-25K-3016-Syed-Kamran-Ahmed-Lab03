#include <iostream>
using namespace std;

int main(){
	int productPrice[6]={45,12,78,34,23,90};
	int size=6;
	int numOfPasses=0;
	int numOfComparision=0;
	int totalNumOfSwapd=0;
	
	
	for(int i=0;i<size-1;i++){
		numOfPasses++;
		for(int j=0;j<size-1-i;j++){
		if(productPrice[j]>productPrice[j+1]){
			int temp=productPrice[j];
			productPrice[j]=productPrice[j+1];
			productPrice[j+1]=temp;
			totalNumOfSwapd++;		
		}
		numOfComparision++;
		}
		cout<<"After Sorting "<<i+1<<endl;
		cout<<"{";
		for(int i=0;i<size;i++){
		
			cout<<productPrice[i]<<" , ";
		}
		cout<<"}"<<endl;
		cout<<endl;
	}
	cout<<"Total Number of Passes="<<numOfPasses<<endl<<"Total Number of Comparision="<<numOfComparision<<endl<<"Total Number of Swapping="<<totalNumOfSwapd;
	

}
