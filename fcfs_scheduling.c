#include<stdio.h>
void findWaitingTime(int processes[], int n,int bt[], int wt[])
{
	wt[0] = 0;
	for (int i=1; i<n; i++)
		wt[i] = bt[i-1] + wt[i-1] ;
}
void findTurnAroundTime( int processes[], int n,int bt[], int wt[], int tat[])
{
	// calculating turnaround time by adding bt[i] + wt[i]
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}

//Function to calculate average time
void findavgTime( int processes[], int n, int bt[])
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	//Function to find waiting time of all processes
	findWaitingTime(processes, n, bt, wt);

	//Function to find turn around time for all processes
	findTurnAroundTime(processes, n, bt, wt, tat);

	//Display processes along with all details
	printf("Processes Burst time Waiting time Turn around time\n");

	// Calculate total waiting time and total turn
	// around time
	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		printf(" %d ",(i+1));
		printf("	 %d ", bt[i] );
		printf("	 %d",wt[i] );
		printf("	 %d\n",tat[i] );
	}
	int s=(float)total_wt / (float)n;
	int t=(float)total_tat / (float)n;
	printf("Average waiting time = %d",s);
	printf("\n");
	printf("Average turn around time = %d ",t);
}


int main()
{
	int n,processes[10],burst_time[10];
	printf("Enter no. of processess::");
	scanf("%d",&n);
	printf("Enter pid of processess::");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&processes[i]);
	}
	printf("enter burst time::");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&burst_time[i]);
	}
	findavgTime(processes, n, burst_time);
	return 0;
}