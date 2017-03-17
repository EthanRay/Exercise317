#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

class Temp{
private:
	int x;
	double y;
public:
	void SetTemp(int x1, double y1)
	{
		x = x1; y = y1;
	}
	void printTemp()
	{
		std::cout << x << "  " << y << '\n';
	}

	Temp operator +(Temp t)
	{
	    
	}
};

vector<int> result(int A, int B, int n, vector<int> e, vector<int> a) {
	// write code here
	return e;
}

const int v[6] = { 1, 5, 10, 50, 100, 500 };
int c[6] = {3,2,1,3,0,2};
int A;
void solve()
{
	int ans = 0;
	for (int i = 5; i >= 0; i--)
	{
		int t = min(A / v[i], c[i]);

	}
}


void FunctionView(){
	int n = 4;
	int a[] = { 1,2,4,7 };
	int k = 13;
	//dfs(0, n, a);
}

int main()
{
	FunctionView();
	return 0;
}
