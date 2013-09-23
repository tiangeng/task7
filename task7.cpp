// task7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <iostream>
using namespace std;
int count(int x,int y){
int t;
	if(y==0)
		t=1;
	else
		t=x*count(x,y-1);
	return t;
}
void main(){
int x,y;
cin>>x>>y;
cout<<count(x,y)<<endl;
system("pause");
}