#include <stdio.h>

int main(){
int n,k,kk,i,t,max,maxk,maxn,m;
k=0;
maxk=0;
maxn=0;
printf("Number Denominator     Quantity of denominators\n");
for (n = 600; n < 621; n++) {
 printf("%6d ",n);
 max=0;
 for (i = 2; i < 312; i++) {
  m=n%i;
  if (max<m) {
   max=m;
  }
 }
 k=0;
 t=n%2;
 for (i = 2; i < 312; i++) {
  t=n%i;
  if (t==0) {
   k+=1;
   t=k%4;
   if (i<max) {

   if (t==0) {
	printf("%3d,\n",i);
	printf("       ");}
   else{
	printf("%3d,",i);
   }
   }
   else {
	if (t==0) {
	printf("%3d",i);
	}
   else{
	printf("%3d",i);
   }
   kk=k;
   while (t>0){
   kk=kk+1;
   t=kk%4;
	printf("    ");}
		 }
   }
 }
 if (k==0) {
  printf("%23d\n",k);
 } else{
 printf("%8d\n",k);}
 if (k>maxk) {
  maxk=k;
  maxn=n;
 }
}
printf("Max:%d\n",maxn);
fflush(stdin);
getchar();
}