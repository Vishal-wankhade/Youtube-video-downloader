#include&lt;stdio.h&gt;
int main()
{
int n,w[100],tot[100],i,j,awt,atot;
float avwt,avtot;
struct
{
int p,bt;
sjf[10],temp;
printf(&quot;Enter the number of Processes:&quot;);
scanf(&quot;%d&quot;,&amp;n);
for(i=1;i&lt;=n;i++)
{
printf(&quot;Enter the Burst time for Process%d : &quot;,i);
scanf(&quot;%d&quot;,&amp;sjf[i].bt);
sjf[i].p=i;
}
for(i=1;i&lt;=n;i++)
for(j=1;j&lt;=n;j++)
if(sjf[j].bt&gt;sjf[i].bt)
{
temp=sjf[i];
sjf[i]=sjf[j];
sjf[j]=temp;
}
w[1]=0;
tot[1]=sjf[1].bt;
for(i=2;i&lt;=n;i++) tot[i]=tot[i-1]+sjf[i].bt;
awt=0;
atot=0;
for(i=1;i&lt;=n;i++)
{
w[i]=tot[i]-sjf[i].bt; awt+=w[i]; atot+=tot[i];
}
avwt=(float)awt/n;
avtot=(float)atot/n;
printf(&quot;\n\nProcessId\tWaiting time\t TurnaroundTime&quot;);
for(i=1;i&lt;=n;i++)
printf(&quot;\n\t%d\t\t%d\t\t%d&quot;,sjf[i].p,w[i],tot[i]);
printf(&quot;\n\nTotal Waiting Time :%d&quot;,awt);
printf(&quot;\n\nTotal Turnaround Time :%d&quot;,atot);
printf(&quot;\n\nAverage Waiting Time :%.2f&quot;,avwt);

printf(&quot;\n\nAverage Turnaround Time :%.2f&quot;,avtot); }