//2.2成绩排序
//先按照成绩排 再按照姓名首字母排 
#include<algorithm> 
#include<iostream>
#include<string>
using namespace std;

class student{
public:
	string name;//char name[100];
	int	 age;
	int score;
};

bool cmp(const student s1,const student s2){
	if(s1.score!=s2.score) return (s1.score>s2.score);
	//int c=strcmp(s1.name,s2.name);
	if(s1.name!=s2.name){
		return s1.name<s2.name;
	}
	else{
		return s1.age<s2.age;
	}
}


int main(){
	student buf[1000];
	int n;
	while(cin>>n&& n<1000){ //
		for(int i=0;i<n;i++){
			cin>>buf[i].name;
			cin>>buf[i].age>>buf[i].score;
		}	
		sort(buf,buf+n,cmp);
		for(int i=0;i<n;i++){
			cout<<buf[i].name<<" "<<buf[i].age<<" "<<buf[i].score<<endl;
		}
	}
	return 0;
} 

//3
//xas 19 66
//cdf 20 66
//zzz 22 100





