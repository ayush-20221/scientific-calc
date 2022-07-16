#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main();
void matrix()
{
float det=1,ratio,a[10][10],arr[10][10],brr[10][10],crr[10][10],x[10],sum;
int n,m,i,j,c,t,k,l,z;
system("cls");
printf("Matrix Addition 1\n");
printf("Matrix Substraction 2\n");
printf("Matrix Multiplication 3\n");
printf("Transpose of a matrix 4\n");
printf("Determinent of a matrix 5\n");
printf("Inverse of a matrix 6\n");
scanf("%d",&c);
if(c==1)
{
		printf("Enter The Dimensions Of Matrix A");
		scanf("%d%d",&n,&m);
	      //	float arr[n][m],crr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&arr[i][j]);
		}
		printf("\n");
		}
	      //	int k,l;
	printf("Enter The Dimensions Of Matrix B");
		scanf("%d%d",&k,&l);
		if(k==n&&m==l)
		{
	       //	float brr[k][l];
		for(i=0;i<k;i++)
		{
			for(j=0;j<l;j++)
			{
				printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&brr[i][j]);
		}
		printf("\n");
		}
		printf("addiion of both matrix =\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				crr[i][j]=arr[i][j]+brr[i][j];
				printf("%0.2f\t",crr[i][j]);
					}
					printf("\n");
		}
}
else
printf("sorry the given matrix operation cannot be performed");
}
if(c==2)
	{
		printf("Enter The Dimensions Of Matrix A");
		scanf("%d%d",&n,&m);
	      //	float arr[n][m],crr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&arr[i][j]);
		}
		printf("\n");
		}
	      //	int k,l;
	printf("Enter The Dimensions Of Matrix B");
		scanf("%d%d",&k,&l);
		if(n==k&&l==m)
		{
	       //	float brr[k][l];
		for(i=0;i<k;i++)
		{
			for(j=0;j<l;j++)
			{
			printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&brr[i][j]);
		}
		printf("\n");
	}
	printf("substraction of matrix=\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
		{
			crr[i][j]=arr[i][j]-brr[i][j];
				printf("%.2f\t",crr[i][j]);
			}
			printf("\n");
					}
	}
	else
	printf("sorry the given matrix operation cannot be performed");
}
if(c==3)
	{
		printf("Enter The Dimensions Of Matrix A");
		scanf("%d%d",&n,&m);
	     //	float arr[n][m],crr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&arr[i][j]);
		}
		printf("\n");
		}
	      //	int k,l;
	printf("Enter The Dimensions Of Matrix B");
		scanf("%d%d",&k,&l);
		if(m==k)
		{
	      //	float brr[k][l];
		for(i=0;i<k;i++)
		{
			for(j=0;j<l;j++)
			{
				printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&brr[i][j]);
		}
		printf("\n");
	}
	 //	int x;
		 sum=0;
				for(i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
			{
				sum=0;
				for(z=0;z<n;z++)
			{
				sum=sum+arr[i][z]*brr[z][j];
			}
			crr[i][j]=sum;
		}
		}
		for(i=0;i<n;i++)
		{
		for(j=0;j<l;j++)
		{
		printf("%.2f\t",crr[i][j]);
}
printf("\n");
}
}
	else
	printf("sorry the given matrix operation cannot be performed");
}
if(c==4)
{
	printf("Enter The Dimensions Of Matrix A");
		scanf("%d%d",&n,&m);
	       //	float arr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Enter the %d %d element\t",i+1,j+1);
			scanf("%f",&arr[i][j]);
		}
		printf("\n");
		}
			printf("Given matrix=\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%.0f\t",arr[i][j]);
			}
			printf("\n");
		}
		printf("Transpose of given matrix=\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%.0f\t",arr[j][i]);
			}
			printf("\n");
		}
}
if(c==5)
{
       //	 float  ratio, det=1;
       //	 int i,j,k,n,m;
	 printf("Enter dimension of Matrix ");
	 scanf("%d%d", &n,&m);
	 if(n==m)
	 {
       //	 float	a[n][n], x[n];
	 printf("\nEnter Coefficients of Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("a[%d][%d]=",i,j);
			   scanf("%f", &a[i][j]);
		  }
	 }
	 for(i=0;i< n;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j< n;j++)
		  {
			   ratio = a[j][i]/a[i][i];

			   for(k=0;k< n;k++)
			   {
					a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }
	 for(i=0;i< n;i++)
     {
	 det = det * a[i][i];
     }

	 printf("\nDeterminant of given matrix is: %0.3f", det);
}
else
printf("Rows and Column are not eqaul so we cannot find determinent");
}
if(c==6)
{

	    //	 int i,j,k,n,m;
		 printf("Enter dimensions of matrix: ");
		 scanf("%d%d", &n,&m);
		 if(n==m)
		 {
		//  float a[n][n], x[n], ratio;
		 printf("Enter coefficients of Matrix:\n");
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n;j++)
			  {
				   printf("a[%d][%d] = ",i,j);
				   scanf("%f", &a[i][j]);
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n;j++)
			  {
				   if(i==j)
				   {
					a[i][j+n] = 1;
				   }
				   else
				   {
					a[i][j+n] = 0;
				   }
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  if(a[i][i] == 0.0)
			  {
				   printf("Mathematical Error!");
				   exit(0);
			  }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];
					    for(k=1;k<=2*n;k++)
					    {
						a[j][k] = a[j][k] - ratio*a[i][k];
					    }
				   }
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
				a[i][j] = a[i][j]/a[i][i];
			  }
		 }
		 printf("\nInverse Matrix is:\n");
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
				printf("%0.3f\t",a[i][j]);
			  }
			  printf("\n");
		 }
}
else
printf("error dimensions not matched");
}
printf("\n");
 printf("\nEnter any no to return to main");
	scanf("%d",&t);
 main();
}
void variable()
{
	int t;
	float	x,y,z,a,b,a1,b1,c,c1;
	system("cls");
	printf("\nEnter the elements of first equation\n");
	printf("Enter a1=");
	scanf("%f",&a);
	printf("\nEnter b1=");
	scanf("%f",&b);
	printf("\nEnter constant c1=");
	scanf("%f",&c);
	printf("\nEquation 1st is %0.2fx+%.2fy=%.2f",a,b,c);
	printf("\nEnter the elements of second equation\n");
	printf("Enter a2=");
	scanf("%f",&a1);
	printf("\nEnter b2=");
	scanf("%f",&b1);
	printf("\nEnter constant c2=");
	scanf("%f",&c1);
	printf("\nEquation 2nd is %.2fx+%.2fy=%.2f\n",a1,b1,c1);
		x=a1;
		y=a;
		a=x*a;
		b=x*b;
		c=x*c;
		a1=a1*y;
		b1=b1*y;
		c1=c1*y;
		a=a-a1;
		b=b-b1;
		c=c-c1;
		y=c/b;
		x=(-b1*y+c1)/a1;
		printf(" Value of x=%.2f\n Value of y=%.2f\n",x,y);
		printf("\nEnter any no to return to main");
	scanf("%d",&t);
		main();
	}
void variables()
{
	int t;
	float	x,y,z,l,m,n,o,a,b,a1,b1,c,c1,a2,b2,c2,d,d1,d2;
	system("cls");
	printf("\nEnter the elements of first equation\n");
	printf("Enter a1=");
	scanf("%f",&a);
	printf("\nEnter b1=");
	scanf("%f",&b);
	printf("\nEnter c1=");
	scanf("%f",&c);
	printf("\nEnter d1=");
	scanf("%f",&d);
	printf("\nEquation 1st is %0.2fx+%.2fy+%.2fz=%.2f\n",a,b,c,d);
	printf("\nEnter the elements of second equation\n");
	printf("Enter a2=");
	scanf("%f",&a1);
	printf("\nEnter b2=");
	scanf("%f",&b1);
	printf("\nEnter c2=");
	scanf("%f",&c1);
	printf("\nEnter d2=");
	scanf("%f",&d1);
	printf("\nEquation 2nd is %.2fx+%.2fy+%.2fz=%.2f\n",a1,b1,c1,d1);
	printf("\nEnter the elements of third equation\n");
	printf("Enter a3=");
	scanf("%f",&a2);
	printf("\nEnter b3=");
	scanf("%f",&b2);
	printf("\nEnter c3=");
	scanf("%f",&c2);
	printf("\nEnter d3=");
	scanf("%f",&d2);
	printf("\nEquation 3rd is %.2fx+%.2fy+%.2fz=%.2f\n",a2,b2,c2,d2);
	x=a;
	y=a1;
	l=a*y;
	m=b*y;
	n=c*y;
	o=d*y;
	a1=a1*x;
	b1=b1*x;
	c1=c1*x;
	d1=d1*x;
	l=l-a1;
	m=m-b1;
	n=n-c1;
	o=o-d1;
	x=a;
	y=a2;
	a=a*y;
	b=b*y;
	c=c*y;
	d=d*y;
	a2=a2*x;
	b2=b2*x;
	c2=c2*x;
	d2=d2*x;
	a=a-a2;
	b=b-b2;
	c=c-c2;
	d=d-d2;
	x=m;
	y=b;
	m=m*y;
	n=n*y;
	o=o*y;
	b=b*x;
	c=c*x;
	d=d*x;
	m=m-b;
	n=n-c;
	o=o-d;
	n=o/n;
	m=(-c*n+d)/b;
	o=(d1-b1*m-c1*n)/a1;
		printf(" Value of x=%.2f\n Value of y=%.2f\n Value of z=%.2f\n",o,m,n);
	printf("\nEnter any no to return to main");
	scanf("%d",&t);
	main();
}
void quad()
{
	float a,b,c,d,e,f;
	int t;
	system("cls");
	printf("Coefficient of x^2=");
	scanf("%f",&a);
	printf("\nCoefficient of x=");
	scanf("%f",&b);
	printf("\nConstant=");
	scanf("%f",&c);
	f=b*b-4*a*c;
	if(f>=0)
    {
		d=(-b+sqrt(f))/(2*a);
		e=(-b-sqrt(f))/(2*a);
		printf("\nRoots of given equation=%.2f and %.2f",e,d);
	}
	else
	{
		e=-b/(2*a);
		d=sqrt(-f)/(2*a);
		printf("\nRoots of given equation=%.2f+i%.2f \n=%.2f-i%.2f \n",e,d,e,d);
	}
	printf("\nEnter any Number to return to main");
	scanf("%d",&t);
main();
}
void add()
{
	float a,s=0;
	int t;
	system("cls");
	printf("To find sum enter 0 after input of all numbers\n");
	printf("Enter numbers\n=");
	while(1)
	{

		scanf("%f",&a);
		if(a==0)
		{
			break;
		}
		else
		{
		s=s+a;
	}
	printf("+");
}
	printf("%.2f",s);
	printf("\nEnter any Number to return to main");
	scanf("%d",&t);
main();
}
void mult()
{
	int t;
	float a,s=1;
	char ch;
	system("cls");
	printf("To find multiply of all input numbers press 0 \n");
	printf("enter no's");
	while(1)
	{
		scanf("%f",&a);
		if(a==0)
		{
			break;
		}
		else
		{
		s=s*a;
	}
}
	printf("%.2f",s);
	printf("\nEnter any Number to return to main");
	scanf("%d",&t);
main();
}
void subtract()
{
	float a,s=0;
	int t;
	system("cls");
	printf("To find difference enter 0 after input of all numbers\n");
	printf("Enter numbers\n=");
	while(1)
	{

		scanf("%f",&a);
		if(a==0)
		{
			break;
		}
		else
		{	
			if(s==0)
			s=s+a;
			else if(a<0)
			s=s+abs(a);
			else
			s=s-a;
	}
	printf("-");
}
	printf("%.2f",s);
	printf("\nEnter any Number to return to main");
	scanf("%d",&t);
main();
}
void btod()
{       long int a;
	int b,n,i=1,c=0,t;
	system("cls");
	printf("//Note it cannot convert numbers before decimal//\n");

printf("Applicable only upto base 9\n");
	printf("Enter the number");
	scanf("%ld",&a);
	printf("Enter base of input number ");
	scanf("%d",&n);
	printf("\n(%ld) base %d=",a,n);
	while(a!=0)
	{
		b=a%10;
		c=c+b*i;
		a=a/10;
		i=i*n;
	}
	printf(" (%d) base 10 \n",c);

printf("\nEnter any Number to return to main");
	scanf("%d",&t);
main();
}
void dtoany()
{
	int a,brr[10],i=0,n,t;
	system("cls");
	printf("//Note it cannot convert numbers before decimal//\n");

	printf("Enter the Decimal Number");
	scanf("%d",&a);
	printf("\nBase in which you want to convert upto Hexadecimal");
	scanf("%d",&n);
	if(n<=9)
	{
	while(a)
	{
		brr[i]=a%n;
		a=a/n;
		i++;
	}
	printf("\nDecimal To Base %d = ",n);
	while(i--)
	printf("%d",brr[i]);
	}
	else
	{
		while(a)
	{
		brr[i]=a%n;
		a=a/n;
		i++;
	}
	printf("\nDecimal To %d base = ",n);
	while(i--)
	{
		if(brr[i]==10)
		printf("A");
		else if(brr[i]==11)
		printf("B");
		else if(brr[i]==12)
		printf("C");
		else if(brr[i]==13)
		printf("D");
		else if(brr[i]==14)
		printf("E");
		else if(brr[i]==15)
		printf("F");
	    else
	printf("%d",brr[i]);
	}
	}
	printf("\nEnter any Number to return to main");
	scanf("%d",&t);
main();
}
void trignometric()
{
	float x,v;
	int choice,t;
	printf("\n1.Sin(x)\n2.Cos(x)\n3.Tan(x)\n4.Cosec(x)\n5.Sec(x)\n6.Cot(x)\n");
	printf("Enter Choice\n");
	scanf("%d",&choice);
		printf("Degree=");
	scanf("%f",&x);
	printf("\n");
	switch(choice)
{
	case 1:
		v=sin(x*3.14159265/180);
		printf("%.3f",v);
		break;
	case 2:
		v=cos(x*3.14159265/180);
		printf("%.3f",v);
		break;
	case 3:
			v=tan(x*3.14159265/180);
		printf("%.3f",v);
		break;
	case 4:
			v=1/sin(x*3.14159265/180);
		printf("%.3f",v);
		break;
	case 5:
			v=1/cos(x*3.14159265/180);
		printf("%.3f",v);
		break;
	case 6:
			v=1/tan(x*3.14159265/180);
		printf("%.3f",v);
		break;
	default:
printf("\nInvalid choice");
	}
	printf("\nEnter any key for main menu\n");
	scanf("%d",&t);
	main();
}
int main()
{       
	system("cls");  
	 int a,t,e;
	 float b,c,d;
	printf("\t\t***** WELCOME TO SCIENTIFIC CALCULATOR *****\n");
	printf("\n1.Matrix\n");
	printf("2.Linear Equation of Two Variable\n");
	printf("3.Linear Equation of Three Variable\n");
	printf("4.Roots of Quadratic Equation\n");
	printf("5.Addtion\n");
	printf("6.Multiplication\n");
	printf("7.Substraction\n");
	printf("8.Division\n");
	printf("9.Power\n");
	printf("10.Squareroot\n");
	printf("11.Degree to Radian\n");
	printf("12.Radian to Degree\n");
	printf("13.Any base to Decimal\n");
	printf("14.Decimal to Any base\n15.Trignometric\n16.Factorial\n17.Log");
	printf("\nChoice=");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	matrix();
	break;
	case 2:
	variable();
	break;
	case 3:
	variables();
	break;
	case 4:
	quad();
	break;
	case 5:
	add();
	break;
	case 6:
	mult();
	break;
	case 7:
	subtract();
	// int b,c;
	// 	printf("Enter numbers\n");
	// 	scanf
	// 	while(b!=0)
	// 	{
	// 	scanf("%f",&b);
	// 	c=b-c;
	// }
	// 	printf("\nDifference=%.2f",c);
	// 	printf("\nEnter any no to return to main");
	// scanf("%d",&t);
	// 	main();
	// break;
	case 8:
	//	float b,c,d;
		//int e;
		printf("Dividend=");
		scanf("%f",&b);
		printf("\nDivisor=");
		scanf("%f",&c);
		if(c!=0)
		{
		
		d= (int)b / (int)c;
		e= ((int)b%(int)c);
		printf("Quotient=%0.1f and Remainder=%d \n",d,e);
	}
	else
	printf("division not possible");
		printf("\nEnter any no to return to main");
	scanf("%d",&t);
		main();
	break;
	case 9:
	//	float b,c,d;
		printf("Number=");
		scanf("%f",&b);
		printf("\nPower=");
		scanf("%f",&c);
		d=pow(b,c);
		printf("\n %.0f power %.0f =%.2f",b,c,d);
		printf("\nEnter any no to return to main");
	scanf("%d",&t);
		main();
	break;
	case 10:
	//	float b,c;
		printf("Number=");
		scanf("%f",&b);
		if(b>=0)
		{
		c=sqrt(b);
		printf("\nSquareroot of %.2f = %.2f",b,c);
	}
	else
	{
		printf("squareroot of negative number is not possible");
	}
		printf("\nEnter any no to return to main");
	scanf("%d",&t);
		main();
	break;
	case 11:
	
	//	float c,b;
		printf("Enter the degree=");
		scanf("%f",&b);
		c=b*3.14/180;
		printf("\nRadian= %.4f",c);
		printf("\nEnter any no to return to main");
	scanf("%d",&t);
		main();
	break;
	case 12:
	
	//	float c,b;
		printf("Enter Radian=");
		scanf("%f",&b);
		c=b*180/3.14;
		printf("\nDegree= %.4f",c);
		printf("\nEnter any number to return to main");
	scanf("%d",&t);
		main();
	break;
	case 13:
		btod();
		break;
	case 14:
		dtoany();
		break;
	case 15:
		trignometric();
		break;
	case 16:
		printf("\nValue of  X=");
		scanf("%f",&c);
		b=1;
		for(e=1;e<=c;e++)
			b=b*e;
			printf("Factorial of %0.0f is %0.0f",c,b);
			printf("\nEnter any number for main menu");
			scanf("%d",&t);
			main();
			break;
	case 17:
printf("Enter X: ");
scanf("%f", &c);
b= log10(c);
printf("\nResult: %.2f",b);
printf("\nEnter any number for main menu");
			scanf("%d",&t);
			main();
break;
	default:
printf("\nInvalid Choice!");
}
	getch();
}
