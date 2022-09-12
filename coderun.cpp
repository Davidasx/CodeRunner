#include<bits/stdc++.h>
using namespace std;
string si="in0.txt",o="out0.txt",a="ans0.txt",d="del ",c="copy ",pc="parse2cf";
int system(string s){
	return system(s.data());
}
bool have[10];
int main(int argc,char** argv){
	if(argc==1) return 1;
	system("echo %USERPROFILE% > USER_PROFILE_CODERUN.txt");
	ifstream ffff("USER_PROFILE_CODERUN.txt");
	string pth;
	ffff>>pth;
	if(pth[(int)(pth.size())-1]!='\\')
		pth+="\\";
	pth+="samples\\";
	ffff.close();
	system("del USER_PROFILE_CODERUN.txt");
	ifstream checkr((pth+"FOLDER_MARKER").data());
	if(!checkr){
		checkr.close();
		string comm="mkdir "+pth;
		system(comm.data());
		string f=argv[1];
		system("echo MARKER > "+pth+"FOLDER_MARKER");
	}
	else checkr.close();
	string f=argv[1];
	string prob="";
	for(int i=0;i<(int)(f.size());i++){
		if(f[i]=='-'||f[i]=='.') break;
		prob+=f[i];
	}
	for(int i=(int)(prob.size())-1;i>=0;i--) if(prob[i]=='\\'){
		prob=prob.substr(i+1);
		break;
	}
	prob=pth+prob;
	string I,O,A;
	int bi,bo,ba;
	I=si;A=a;
	bi=2;ba=3;
	for(int i=0;i<=9;i++){
		ifstream ff(I.data());
		if(ff){
			ff.close();
			system(d+I);
			system(d+A);
		}
		else ff.close();
		I[bi]++;A[ba]++;
	}
	int cas=0;
	I=prob+si;A=prob+a;
	bi=(int)(prob.size())+2;ba=(int)(prob.size())+3;
	for(int i=0;i<=9;i++){
		ifstream ff(I.data());
		if(ff){
			ff.close();
			cas++;
			have[i]=true;
			system(c+I+" "+I.substr((int)(I.size())-7));
			system(c+A+" "+A.substr((int)(A.size())-8));
		}
		else ff.close();
		I[bi]++;A[ba]++;
	}
	if(cas) goto TE;
	system(pc);
	I=prob+si;A=prob+a;
	bi=(int)(prob.size())+2;ba=(int)(prob.size())+3;
	for(int i=0;i<=9;i++){
		ifstream ff((I.substr((int)(I.size())-7)).data());
		if(ff){
			ff.close();
			have[i]=true;
			system(c+I.substr((int)(I.size())-7)+" "+I);
			system(c+A.substr((int)(A.size())-8)+" "+A);
		}
		else ff.close();
		I[bi]++;A[ba]++;
	}
	TE:;
	system("cf test "+f);
	system("pause");
	return 0;
}


