/*
nama 			: alfian fadhil
npm				: 140810180055
kelas			:A
*/
#include<iostream>

using namespace std;
	struct r_mhs{
		char npm[14];
		char nama [40];
		float ipk;
	};
typedef r_mhs larikmhs[30];

void banyakdata(int&n){
	cout<<"masukan banyak data : ";cin>>n;
}

void inputmhs(larikmhs& mhs,int n){
	cout<<" data mahasiswa  "<<endl;
		for(int i=0;i<n;i++){
			cout<<"nama mahasiswa : ";cin>>mhs[i].nama;
			cout<<" NPM :";cin>>mhs[i].npm;
			cout<<" IPK :";cin>>mhs[i].ipk;
		}cout<<endl;
	}

void cetakmhs(larikmhs& mhs,int n){
			for(int i=0;i<n;i++){
			cout<<"nama mahasiswa : "<<mhs[i].nama;
			cout<<" NPM :"<<mhs[i].npm;
			cout<<" IPK :"<<ipk.[i];
		}cout<<endl;
}
void sortnpm(larikmhs& mhs,int n)

int main(){
	 larikmhs mhs;
	 int n;
	 
	 banyakdata(n);
	 inputmhs(mhs,n);
	 cetakmhs(mhs,n);
	 
	
}
