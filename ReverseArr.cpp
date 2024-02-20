#include <iostream>
#include <vector>
using namespace std;

int main (void){
	int sizeVec = 0;
	vector <int> vec;
	cin >> sizeVec;
	cout <<endl;
	for (int i = 0; i < sizeVec; i++){
		int j = 0;
		cin >> j;cout << " ";
		vec.push_back(j);
		
	}
	int i = 0;
	int j = sizeVec - 1;
	while (i < j){
		int key  = vec[i];
		vec[i] = vec[j];
		vec[j] = key;
		i++;
		j--;
	}
	cout << endl;
	for(int i : vec){
		cout << i << " "; 
	}
	return 0;
}
