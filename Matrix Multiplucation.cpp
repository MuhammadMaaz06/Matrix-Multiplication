//Matrix Multiplication

#include<iostream>
using namespace std;
int main()
{	
	//getting the input from the user for all the rows and columns of the matrix
	int rows1, col1;
	cout<< " enter the number of rows and columns of the first matrix: "<<endl;
	cin>> rows1 >> col1;
	
	//adding a check for validation
	if((rows1||col1)>10 and (rows1||col1)<=1)
	{
		cout<< " Invalid Input!"<<endl;
		return 0;
	}
	
	//getting the elements of the first matrix
	int matrix1[rows1][col1];
	cout<< "Enter the elements of the first matrix: "<<endl;
	for(int i=0; i<rows1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cin>> matrix1[i][j];
		}
	}
	
	int rows2, col2;
	cout<< " enter the number of rows and columns of the second matrix: "<<endl;
	cin>> rows2 >> col2;
	if((rows2||col2)>10 and (rows2||col2)<=1)
	{
		cout<< " Invalid Input!"<<endl;
		return 0;
	}
	
	//getting the elements of the second matrix
	int matrix2[rows2][col2];
	cout<< "Enter the elements of the second matrix: "<<endl;
	for(int i=0; i<rows2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cin>> matrix2[i][j];
		}
	}
	
	cout<<"Matrix A : "<<endl;
	for(int i=0; i<rows1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cout<< matrix1[i][j]<<"  ";
		}cout<<endl;
	}
	
	cout<<"Matrix B : "<<endl;
	for(int i=0; i<rows2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cout<< matrix2[i][j]<<"  ";
		}cout<<endl<<endl;
	}
	
	//Now the maultiplication process starts
	int product[rows1][col2]= {0};
	if(col1!=rows2)
	{
		cout<<"Matrix multiplication is not possible!"<<endl;
		return 0;
	}
	
	for (int i = 0; i < rows1; i++) 
	{          
        for (int j = 0; j < col2; j++) 
		{      
            for (int k = 0; k < col1; k++)
			{  
             
			product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    		
    cout<< "Multiplication result:"<<endl;
    
    //formula for the multiplication of both of the matrices
	for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << product[i][j] << "   ";
        }
        cout << endl;
    }
}
	



