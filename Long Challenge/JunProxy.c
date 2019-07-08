#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t>0){
	    char a[100000];
	    int n,i,c=0,p=0,flag=0;
	    scanf("%d%s",&n,a);
	    for(i=0;i<n;i++){
	        if(a[i]=='P'){
	            p++;
	        }
	    }
	    float s=n;
	    if(p/s>=0.75){
	            printf("%d\n",c);
	            flag=1;
	   }
	   /*f he was really present, not just marked as present) on at least one
	   of the previous two days, i.e. days d−1 and d−2, and on at least one of the
	   following two days, i.e. days d+1 and d+2.
	   */
	    for(i=2;i<n-2;i++){
	            if(a[i]=='A'){
	                if((a[i-1]=='P'||a[i-2]=='P')&&(a[i+1]=='P'||a[i+2]=='P')){
	                   p++;
	                   c++;
	                }
	                
	            }
				//Calculating attendance percentage
	            if(p/s>=0.75&&flag==0){
	                printf("%d\n",c);
	                flag=1;
	                break;
	        }
	    }
	     if(p/s>=0.75&&flag==0){
	                printf("%d\n",c);
	                flag=1;
	                break;
	        }
	    if(flag==0){
	        printf("-1\n");
	    }
	    t--;
	}
	return 0;
}