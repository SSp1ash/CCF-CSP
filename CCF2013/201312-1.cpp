#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findMore(vector<int> nums){
	sort(nums.begin(),nums.end());
	int result=0;
	int result_count=0;
	result = nums[0];
	int tmp_count=0;
	result_count=0;
	for(int i=1;i<nums.size();++i){
		tmp_count++;
		if(i==nums.size()-1||nums[i]!=nums[i+1]){
			if(tmp_count>result_count){
				result_count = tmp_count;
				result = nums[i];
			}
			tmp_count = 0;
		}
	}
	return result;
}
int main(){
	int x;
	cin>>x;
	if(x>=1&&x<=1000){
		vector<int> nums(x);
		int i = 0;
		while(x--){
			cin>>nums[i++];
			if(nums[i-1]>10000||nums[i-1]<1){
				return 0;
			}
		}
		cout<<findMore(nums);
		return 0;
	}
	
}
