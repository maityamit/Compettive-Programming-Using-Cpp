#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
using namespace std;
int main(){
	
	
	queue<int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	cout<<st.size();
	st.pop();
	cout<<st.front();
	cout<<st.size();
	
	return 0;
}
