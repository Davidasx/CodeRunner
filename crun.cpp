#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv){
	if(argc==1) return 1;
	string s="start coderun";
	for(int i=1;i<argc;i++) s=s+" "+argv[i];
	system(s.data());
	return 0;
}


