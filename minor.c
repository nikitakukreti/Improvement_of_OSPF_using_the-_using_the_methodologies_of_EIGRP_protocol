#include <stdio.h>
#include <string.h>
int main()
{
	printf("\n MINOR 1 PROJECT ");
	printf("\n *******************************************");
	printf("\n IMPROVEMENT OF OPEN SHORTEST PATH FIRST USING THE METHODOLOGIES OF ENHANCED INTERIOR GATEWAY ROUTING PROTOCOL ");
	printf("\n *******************************************");
	printf("\n\n Choose from the options below to start execution: ");
	
	int option;
	  printf("\n Press 1  for Open Shortest Path First");
	  printf("\n Press 2 for The Enhanced version of Open Shortest Path First\n ");
      printf("\n *******************************************");

	  printf("\n Enter your choice:");
      scanf("%d",&option);
      printf("\n *******************************************");
      if(option==1)
{
printf("\n\n\n You have choosen OSPF algorithm");
 printf("\n\n *******************************************");
int count,src_router,i,j,k,w,v,min;
int cost_matrix[100][100],dist[100],last[100];
int flag[100];
 printf("\n Enter the no of routers ");
scanf("%d",&count); 
 printf("\n You have choosen %d routers",count);
printf("\n Please enter the cost matrix values:");
for(i=0;i<count;i++)
{
	printf("\n Please enter the cost from router: %d",i);
for(j=0;j<count;j++)
{
	if(i==j)
	{
 g		cost_matrix[i][j]=0;
	}
 else{
 printf("\n %d->%d:",i,j);
scanf("%d",&cost_matrix[i][j]);}
if(cost_matrix[i][j]<0)cost_matrix[i][j]=1000; //mininmum value
}
}
 printf("\n Enter the source router: ");
scanf("%d",&src_router);
for(v=0;v<count;v++)
{
flag[v]=0;
last[v]=src_router;
dist[v]=cost_matrix[src_router][v];//distance matrix
}
flag[src_router]=1;
for(i=0;i<count;i++)
{
min=1000;
for(w=0;w<count;w++)//going till end
{
if(!flag[w])//checkuing till last
if(dist[w]<min)
{
v=w;
min=dist[w];
}
}
flag[v]=1;
for(w=0;w<count;w++)
{
if(!flag[w])
if(min+cost_matrix[v][w]<dist[w])
{
dist[w]=min+cost_matrix[v][w];
last[w]=v;
}
}
}
for(i=0;i<count;i++)
{
 printf("\n %d==>%d:Path taken: %d",src_router,i,i);
w=i;
while(w!=src_router)
{
 printf("\n <--%d",last[w]);w=last[w];
}
 printf("\n Shortest path cost: %d\n",dist[i]);
}
}
else if(option==2)
{ 
printf("\n\n\n The version is still under construction! \n");
}
else
{
printf("\n\n You have entered a wrong choice! Please try again for successful termination of program.");

}

printf("\n\n\n *******************************************");
printf("\n\n\n Thank you for your precious time! \n");
}
