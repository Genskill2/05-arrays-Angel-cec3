/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[], int c){
  int max=x[0];
  int i=1;
  while(i<c)
    {
    if(x[i]>max)
      max=x[i];
    i++;	
    }
  return max;	
}

int min(int x[], int c){
  int min=x[0];
  int i=1;
  while(i<c)
    {
    if(x[i]<min)
      min=x[i];
    i++;	
    }
  return min;	
}

float average(int x[], int c){
	float sum = 0;
	int i = 0;
		while(i<c){
			sum += x[i];
			i++; 
		}
	float avg = sum/(float)c;
	return avg;
}

int mode(int x[], int c){

	int l=x[0];
	int i;
	for(i=1;i<c;i++){
		if(x[i]>l)
			l=x[i];	
	}
	int t=l+1;	

	int counts[t];
	int ctr;
	for(i=0;i<t;i++){
		counts[i]=0;
	}

	for(i=0;i<c;i++){

		counts[x[i]]++;	
	}

	int k=counts[0];
	int mode;
	for(i=1;i<t;i++){

		if(counts[i]>k){

			k=counts[i];
			mode = i;	
		}
	}

	return mode;
}

int factors(int n, int f[]){

	int i, j, flag;
	int c = 0;
	int r=0;
	while(n%2==0){
		c++;
		n=n/2;
		f[r]=2;
		r++;
	}
	for(i=3; i<=n/2; i=i+2){
		while(n%i==0){
			c++;
			n=n/i;
			f[r]=i;
			r++;
		}
	}
	if (n>2){
		c++;
		f[r]=n;
	}

	return c;
}

