//sort的降序排列
# include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

bool cmp(int x,int y){
	return x>y;
}

int main(){
	int n;
	int buf[100];
//	while(scanf("%d",&n)!=EOF){
//		for(int i=0;i<n;i++){
//			scanf("%d",&buf[i]);
//		}
//		sort(buf,buf+n,cmp);
//		for(int i=0;i<n;i++){
//			cout<<buf[i];
//		}
//	}
	while(cin>>n){
		for(int i=0;i<n;i++){   //排序前n个元素 
		scanf("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);
		for(int i=0;i<n;i++){
			cout<<buf[i];
		}
	}
	return 0;
}

