//���ú�����һ��Բ����ı���������
#define PI 3.14
#include<stdio.h>
#include<math.h>
/*float f1(int r)
{
	return 4*PI*pow(r,2);
}
float f2(int r)
{
	return 4.0/3.0*PI*pow(r,3);
}
int main()
{
	float s,v;
	int r;
	printf("�뾶Ϊ��");
	scanf("%d",&r);
	s=f1(r); 
	v=f2(r);
	printf("�����Ϊ��%f",s);
	printf("���Ϊ��%f",v);
	return 0;
 } */
 //��д����prime(m)�ж�m�Ƿ�Ϊ��������mΪ����ʱ����1�����򷵻�0.
 /*int prime(int m)
 {
 	int n;
 	if(m<=1) return 0;
 	for(n=2;n<=sqrt(m);n++)
 	if(m%n==0) break;
 	if(m>sqrt(m)) return 1;
 }/*
 int main()
 {
 	int m,flag;
 	printf("�������:");
 	scanf("%d",&m);
 	flag=prime(m);
 	if(flag) printf("%d������",m);
 	return 0;
  } */
 //���һ��������ȫ���������ӡ�
/*int f(int m)
{
	int n=2;
	while(!(m%n))
	{
		m/=n;
		if(prime(n))
		printf("%3d",n);
	}
}
  int main()
  {
  	int n;
  	scanf("%d",&n);
  	f(n);
  }*/
  /*#define E 2
  float p(int n)
  {
  	int sum=1,x,i=1;
  	while((1/2*i-1)>=e)
  	{
	x=pow(-1,i-1)/2*i-1;
  	sum+=x;
  	i++;}
  }
  int main()
  {
  	float pi;
  	p(E);
   } */
   //ʹ�õݹ鷽�������x^n��
  /* int f(int n,int x)
   {
   	if(n>1)
   	return x*f(--n,x);
   }
   int main()
   {
   	int n,x;
   	printf("����x");scanf("%d",&x);
   	printf("����n");scanf("%d",&n);
   	printf("%d",f(n,x));
   	return 0;
	} */
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
