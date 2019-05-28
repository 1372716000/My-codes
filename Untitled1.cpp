//非递归快排
#include<iostream>
#include<stack>
using namespace std;

int partition(int start,int end, int arr[])
{
	int i=start; int j=end; int pvalue=arr[start];
	if(i>=j) return -1;  //结束了 最小的长度为一的part啦 
	while(i<j){
		while(i<j && arr[j]>=pvalue) j--;
		if(i<j) arr[i++]=arr[j];
		while(i<j && arr[i]<=pvalue) i++;
		if(i<j) arr[j--]=arr[i];
	}
	arr[i]=pvalue;
	if(i==j) cout<<"YES"<<endl;
	//else cout<<"NO"<<endl;
	return i;	
}

int main(){
	int arr[]={8,2,5,0,3,5,8,4,9,0,2};
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	stack<int> S;
//	int i=partition(0,len-1,arr);
//	S.push(i);
	int low=0,high=len-1;
	S.push(high);
	S.push(low);
	while(!S.empty()){
		low=S.top(); S.pop();
		high=S.top(); S.pop();

		if(low<high){
			int i=partition(low,high,arr);
			cout<<i<<endl;
			if(i==-1) {S.pop(); }
			if(i+1<high) 
			{	S.push(high);
				S.push(i+1);
			}
			if(i-1>low) 
			{	S.push(i-1);
				S.push(low);
			}
		}
	}
//	while(!S.empty()){
//		int i=S.top(); S.pop();
//		cout<<i<<endl;
//		if(i==-1) {S.pop(); }
//		else{
//			int i1,i2;          
//			if(i-1>0){
//				i1=partition(low,i-1,arr);
//				if(i1!=-1) S.push(i1);
//			}	
//			if(i+1<len-1){
//				i2=partition(i+1,high,arr);
//				if(i2!=-1) S.push(i2);
//			}	
//		}
//		
//	}
	cout<<"after sort:"<<endl;
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
} 









