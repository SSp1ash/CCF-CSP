#include<iostream>
#include<string>
using namespace std;
bool judge(int num){
	string x = to_string(num);
	int index = x.find('7');
	if(index>=0){
		return true;
	}else{
		return false;
	}
}
int baoshu(int num){
	int record[4]={};
	int count=0;
	int sum=0;
	int temp=0;
	while(sum<num){
		if(judge(count+1)||(count+1)%7==0){
			record[(count)%4]++;
		}else{
			sum++;
		}
		count++;
	}
	
	for(int i=0;i<4;i++){
		cout<<record[i]<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	baoshu(n);

}
