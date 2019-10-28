#include <iostream>
#include <stack> 
#include <string>

using namespace std;



int main(){

	stack <char> st;
	stack <int> stInd;
	string input;
	int i = 0;
	int j = 0;
	bool flag = true;

	cin >> input;

	while(flag && (i < input.length())){
		switch(input[i]){
			case '(':
			st.push(input[i]);
			stInd.push(i);
			//cout << "pushed (";
			break;
		case '[':
			st.push(input[i]);	
			stInd.push(i);
			//cout << "pushed [";
			break;
		case '{':
			st.push(input[i]);
			stInd.push(i);
			//cout << "pushed {";
			break; 


		case ')':
			if(st.empty() || st.top() != '('){
				flag = false;
			}else{st.pop();stInd.pop();}//cout << "poped (";}
			break;
		case ']':	
			if(st.empty() || st.top() != '['){
				flag = false;
			}else{st.pop();stInd.pop();}//cout << "poped [";}
			break;
		case '}':
			if(st.empty() || st.top() != '{'){
				flag = false;
			}else{st.pop();stInd.pop();}//cout << "poped {";}
			break;
		}
		i++;
	}

	if(not flag){
		cout << i;
	}else if(! st.empty()){
		cout << (stInd.top() + 1);
	}else{
		cout << "Success";
	}

return 0;
}