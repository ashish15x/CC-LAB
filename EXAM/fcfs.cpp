#include<iostream>
using namespace std;

int main() {
	int n,bt[6],wt[6],tat[6],avwt=0,avtat=0,i,j,totaltime=0;
	cout<<"Number of process";
	cin>>n;
	cout<<"Enter Process Burst Timen";
	for (i=0;i<n;i++) {
		cout<<"P["<<i<<"]:";
		cin>>bt[i];
        totaltime+=bt[i];
	}
	wt[0]=0;
	for (i=1;i<n;i++) {
		wt[i]=0;
		for (j=0;j<i;j++)
		            wt[i]+=bt[j];
	}
	cout<<"Process Burst TimetWaiting TimetTurnaroundTime"<<endl;

	for (i=0;i<n;i++) {
		tat[i]=bt[i]+wt[i];
		avwt+=wt[i];
		avtat+=tat[i];
		cout<<"nP"<<i<<"    "<<bt[i]<<"      "<<wt[i]<<"     "<<tat[i]<<endl;
	}
	avwt/=i;
	avtat/=i;
	cout<<"nnAverage Waiting Time:"<<avwt<<endl;
	cout<<"nAverage Turnaround Time:"<<avtat<<endl;
    cout<<"total Time:"<<totaltime<<endl;
	return 0;
}