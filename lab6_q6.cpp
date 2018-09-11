/*
6.Sum of even and odd
 a.Write a function that outputs the sum of all even numbers between firstNum and 
 secondNum. (use loop); create a user-defined function called sumEvenNumbers(). 
 Use call-by-value
 b.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); 
 create a user-defined function called sumOddNumbers(). Use call-by-value
 c.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. 
 (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
 d.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum.
  (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
 e.Write a main program. 
	i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. 
	Use sumEven to hold a returned value.
	ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. 
	Use sumOdd to hold a returned value.
	iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function.
	 Use sumSquareEven to hold a returned value.
	iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. 
	Use sumSquareOdd to hold a returned value.
Then display the values.
*/

#include<iostream>
using namespace std;

/*
a.Write a function that outputs the sum of all even numbers between firstNum and 
 secondNum. (use loop); create a user-defined function called sumEvenNumbers(). 
 Use call-by-value
*/

int sumEvenNumbers(int firstNum,int secondNum)
{
	int sum=0;
	for(int i=firstNum;i<=secondNum;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	return (sum);
}

/*
b.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); 
 create a user-defined function called sumOddNumbers(). Use call-by-value
*/

int sumOddNumbers(int firstNum,int secondNum)
{
	int sum=0;
	for(int i=firstNum;i<=secondNum;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
	}
	return (sum);
}

/*
c.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. 
 (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
*/

int sumSquareOddNumbers(int firstNum,int secondNum)
{
	int sum=0;
	int i=firstNum;
	while(i<=secondNum)//(use while loop)
	{
		if(i%2==1)
		{
			sum=sum+(i*i);
		}
		i++;
	}
	return (sum);
}

/*
 d.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum.
  (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
*/

int sumSquareEvenNumbers(int firstNum,int secondNum)
{
	int sum=0;
	int i=firstNum;
	while(i<=secondNum)//(use while loop)
	{
		if(i%2==0)
		{
			sum=sum+(i*i);
		}
		i++;
	}
	return (sum);
}

/*
e.Write a main program. 
	i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. 
	Use sumEven to hold a returned value.
	ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. 
	Use sumOdd to hold a returned value.
	iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function.
	 Use sumSquareEven to hold a returned value.
	iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. 
	Use sumSquareOdd to hold a returned value.
Then display the values.
*/

int main()//Write a main program.
{
	int firstNum,secondNum,x,y,sumEven,sumOdd,sumSquareOdd,sumSquareEven;
	cout<<"Give me two numbers"<<endl;
	cin>>x>>y;
	if(x>=y)
	{
		firstNum=y;
		secondNum=x;
	}
	else
	{
		firstNum=x;
		secondNum=y;
	}
	/*
	i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. 
	Use sumEven to hold a returned value.
	*/
	sumEven=sumEvenNumbers(firstNum,secondNum);
	/*
	ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. 
	Use sumOdd to hold a returned value.
	*/
	sumOdd=sumOddNumbers(firstNum,secondNum);
	/*
	iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function.
	 Use sumSquareEven to hold a returned value.
	*/
	sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);
	/*
	iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. 
	Use sumSquareOdd to hold a returned value.
	*/
	sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);
	/*
	display the values.
	*/
	cout<<"The sum of the even numbers inbetween the two entered numbers is "<<sumEven<<endl;
	cout<<"The sum of the odd numbers inbetween the two entered numbers is "<<sumOdd<<endl;
	cout<<"The sum of the square of the even numbers inbetween the two entered numbers is "<<sumSquareEven<<endl;
	cout<<"The sum of the square of the odd numbers inbetween the two entered numbers is "<<sumSquareOdd<<endl;
	return 0;
}
