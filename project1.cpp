  #include <iostream>
# include <cmath>
using namespace std;
int row,col;
int row2,col2;
//int MAX = 100;

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);
void addmatrix(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void transpose(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst);
void submatrix(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void inputmatrix(int firstMatrix[][10], int secondMatrix[][10],int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void determinantOfMatrix(int mat[][10], int rowfirst);
void inverse(int firstMatrix[][10],int rowfirst);



int main() {
	
	 int a[10][10],a2[10][10],sum[10][10];
	int choice;		
		cout << " Choice:1 = MULTIPLICATION"	 << endl;	
		cout << " Choice:2 = ADDITION"	 << endl;									
		cout << " Choice:3 = TRANSPOSE"	 << endl;									
		cout << " Choice:4 = SUBTRACTION"	 << endl;									
		cout << " Choice:5 = DETERMINANT"	 << endl;									
		cout << " Choice:6 = INVERSE"	 << endl;	
		cout << " Choice:0 = EXIT"	 << endl;	
		cout << "Enter your choice"	<< endl;
		
		cin >> choice;
		if(choice != 0){	
		cout << "Matrix#1:Enter No of Row" << endl;
			cin >> row;
			cout << "Matrix1:Enter No of Col" << endl;
			cin >> col;	
			}						
			
			switch(choice){
		
		case 1:{
			if(row != col){
				cout << "Operation not supported" << endl;
				break;
			}
			inputmatrix(a, a2,row, col, row2, col2);
			if(row != col || row2 != col2 || row != col2 || col != row2){ break;}
      multiplyMatrices(a, a2, sum, row, col, row2, col2);       
      display(sum, row, col2);  
        break;		
		}
		case 2:{
			if(row != col){
				cout << "Operation not supported" << endl;
				break;
			}
			inputmatrix(a, a2,row, col, row2, col2);
			if(row != col || row2 != col2 || row != col2 || col != row2){ break;}
			addmatrix(a, a2, sum, row, col, row2, col2);
				display(sum, row, col2);
				break;		
		}
		case 3:{
			transpose(a, sum, row, col);
				break;

		}
		case 4:{
			if(row != col){
				cout << "Operation not supported" << endl;
				break;
			}
			inputmatrix(a, a2,row, col, row2, col2);
			if(row != col || row2 != col2 || row != col2 || col != row2){ break;}
			submatrix(a, a2, sum, row, col, row2, col2);
				display(sum, row, col2);
				break;		
		   }
		case 5: {
			if(row != 3 || col != 3){
				break;
				cout << "Operation is not supported" << endl;
			}
			determinantOfMatrix(a, row);
			break;
		}
		case 6:{
			if(row != 3 || col != 3){
				cout << "Operation is not supported" << endl;

				break;
			}
			inverse(a,row);
			break;
		}
		case 0:{
			cout  << " Bye Bye : See You Soon :) " << endl;
			break;
		}

		}
		
	}
//-------------------------------------------------------------------------------------------------------------------------
	void inputmatrix(int firstMatrix[][10], int secondMatrix[][10],int rowFirst, int columnFirst, int rowSecond, int columnSecond){
/*		
			while(row != col){
				cout << "Operation is not Supported" << endl;
				cout << " Choice:1 = ADDITION"	 << endl;	
				cout << " Choice:2 = SUBTRACTION"	 << endl;									
				cout << " Choice:3 = MULTIPLICATION"	 << endl;									
				cout << " Choice:4 = DETERMINANT"	 << endl;									
				cout << " Choice:5 = TRANSPOSE"	 << endl;									
				cout << " Choice:6 = INVERSE"	 << endl;	
				cout << " Choice:0 = EXIT"	 << endl;	
				cout << "Enter your choice"	<< endl;
			//	cin >> choice;			
				cout << "Matrix#1:Enter No of Row" << endl;
					cin >> row;
					cout << "Matrix1:Enter No of Col" << endl;
					cin >> col;													
			}
			*/
			// 		-----------------------------			
//     taking inputs for row and column and printing it. 						
		for(int i = 0; i < row ; i++){
		   for(int j = 0; j < col ; j++){
			cout << "Enter element"<< '(' << i << ',' << j << ')' << endl;
			  cin >> firstMatrix[i][j];
		                             }
		
		                               }
		for(int i = 0; i < row ; i++){
			for(int j = 0; j < col ; j++){
			
			 cout << firstMatrix[i][j] << " ";
			if(j == col - 1)
				cout << endl << endl;
											  }
												 }

			cout << "Matrix2:Enter No of Row" << endl;
			cin >> row2;
			cout << "Matrix2:Enter No of Col" << endl;
			cin >> col2;
	/*		
			while(row2 != col2){
				cout << "Operation is not Supported" << endl;
				cout << " Choice:1 = ADDITION"	 << endl;	
				cout << " Choice:2 = SUBTRACTION"	 << endl;									
				cout << " Choice:3 = MULTIPLICATION"	 << endl;									
				cout << " Choice:4 = DETERMINANT"	 << endl;									
				cout << " Choice:5 = TRANSPOSE"	 << endl;									
				cout << " Choice:6 = INVERSE"	 << endl;	
				cout << " Choice:0 = EXIT"	 << endl;	
				cout << "Enter your choice"	<< endl;
			//	cin >> choice;			
				cout << "Matrix#2:Enter No of Row" << endl;
					cin >> row;
					cout << "Matrix2:Enter No of Col" << endl;
					cin >> col;													
			}
*/     if(row == col && row2 == col2 && row == col2 && col ==row2){
			for(int p = 0; p < row2 ; p++){
				for(int q = 0; q < col2 ; q++){
					
				cout << "Enter element"<< '(' << p << ',' << q << ')' << endl;
				  cin >> secondMatrix[p][q];
												  }
													 }	
			for(int i = 0; i < row2 ; i++){
				for(int j = 0; j < col2 ; j++){
				
				  cout << secondMatrix[i][j] << " ";
				if(j == col2 - 1)
					cout << endl << endl;
												  }
													 }
}else {
	cout << "Operation not supported" << endl;
}
}

	

//------------------------------------------------------------------------------------------------------------------------
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	
	
	int i, j, k;

	// Initializing elements of matrix mult to 0.
	 if(row == col && row2 == col2 && row == col2 && col ==row2){
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
		if(rowFirst == columnSecond){
		for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			
			mult[i][j] = firstMatrix[i][j] * secondMatrix[i][j];
			
		}
	}
}
	}
}


//------------------------------------------------------------------------------------------------------------------------
void addmatrix(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond){
	
	int i, j, k;

		// Initializing elements of matrix mult to 0.
		if(row == col && row2 == col2){
		for(i = 0; i < rowFirst; ++i)
		{
			for(j = 0; j < columnSecond; ++j)
			{
				mult[i][j] = 0;
			}
		}

		// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
			if(rowFirst == columnSecond){
			for(i = 0; i < rowFirst; ++i)
		{
			for(j = 0; j < columnSecond; ++j)
			{
				
				mult[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
				
			}
		}
		
}
		}
		else{ cout << "Operation not supported" << endl;}
}
//-----------------------------------------------------------------------------------------------------------------------
void transpose(int firstMatrix[][10], int mult[][10], int rowFirst, int columnFirst){
	int i, j, k;
       // inputting int in array
			for(int i = 0; i < row ; i++){
			   for(int j = 0; j < col ; j++){
				cout << "Enter element"<< '(' << i << ',' << j << ')' << endl;
				  cin >> firstMatrix[i][j];
			                             }
			
			                               }
			for(int i = 0; i < row ; i++){
				for(int j = 0; j < col ; j++){
				
				 cout << firstMatrix[i][j] << " ";
				if(j == col - 1)
					cout << endl << endl;
												  }
													 }

			// Transposing matrix firstMatrix and secondMatrix and storing in array mult.
				
				for(i = 0; i < rowFirst; ++i)
			{
				for(j = 0; j < columnFirst; ++j)
				{
					
					mult[j][i] = firstMatrix[i][j];
			
					
				}
			}
			// displaying transposed matrix
			cout << "Output" << endl;
			 for(i = 0; i < columnFirst; ++i)
			
					for(j = 0; j < rowFirst; ++j)
					{
						cout << mult[i][j] << ' ';
						if(j == rowFirst - 1)
							cout << endl << endl;
					}
			
	
	
	
}

//---------------------------------------------------------------------------------------------------------------------
void submatrix(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond){
	
	int i, j;

		// Initializing elements of matrix mult to 0.
		if(row == col && row2 == col2){
		for(i = 0; i < rowFirst; ++i)
		{
			for(j = 0; j < columnSecond; ++j)
			{
				mult[i][j] = 0;
			}
		}

		// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
			if(rowFirst == columnSecond){
			for(i = 0; i < rowFirst; ++i)
		{
			for(j = 0; j < columnSecond; ++j)
			{
				
				mult[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
				
			}
		}
		
}
		}
		else{ cout << "Operation not supported" << endl;}
}


void display(int mult[][10], int rowFirst, int columnSecond)
{
	int i, j;

	cout << "Output Matrix:" << endl;
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			cout << mult[i][j] << " ";
			if(j == columnSecond - 1)
				cout << endl << endl;
		}
	}
}

void determinantOfMatrix(int firstMatrix[][10], int rowfirst)  
	{  	
					for(int i = 0; i < row ; i++){
					   for(int j = 0; j < col ; j++){
						cout << "Enter element"<< '(' << i << ',' << j << ')' << endl;
						  cin >> firstMatrix[i][j];
					                             }
					
	                                  }
					for(int i = 0; i < row ; i++){
						for(int j = 0; j < col ; j++){
						
						 cout << firstMatrix[i][j] << " ";
						if(j == col - 1)
							cout << endl << endl;
														  }
															 }
		int num1,num2,det = 1,index,total = 1; 
		  
	
		int temp[rowfirst + 1];  
		  
		
		for(int i = 0; i < rowfirst; i++)   
		{ 
			index = i;   
			  
		  
			while(firstMatrix[index][i] == 0 && index < rowfirst) {  
				index++;      
				  
			}  
			if(index == rowfirst) 
			{  
				
				continue;  
				  
			}  
			if(index != i)  
			{  
				
				for(int j = 0; j < rowfirst; j++)  
				{  
					swap(firstMatrix[index][j],firstMatrix[i][j]);  
					  
					//determinant sign changes when we shift rows  
					//go through determinant properties  
					det = det*pow(-1,index-i);    
					  
				}  
		   }  
			 
		   
		   for(int j = 0; j < rowfirst; j++)  
		   {  
			   temp[j] = firstMatrix[i][j];  
				 
		   }  
		    
		   for(int j = i+1; j < rowfirst; j++)  
		   {  
			   num1 = temp[i];   
			   num2 = firstMatrix[j][i];  
				 
			
			   for(int k = 0; k < rowfirst; k++)  
			   {  
				   
				   firstMatrix[j][k] = (num1 * firstMatrix[j][k]) - (num2 * temp[k]);  
					 
			   }  
			   total = total * num1; 
			   }  
			  
		}  
	  
		 
		for(int i = 0; i < rowfirst; i++)  
		{  
			det = det * firstMatrix[i][i];  
			  
		} 
	  cout << (det/total);
		}  
		
		
void inverse(int firstMatrix[][10],int rowFirst){
	int i, j;
	       // inputting int in array
	int y[3][3];
	double c[3][3];
				for(int i = 0; i < row ; i++){
				   for(int j = 0; j < row ; j++){
					cout << "Enter element"<< '(' << i << ',' << j << ')' << endl;
					  cin >> firstMatrix[i][j];
				                             }
				
				                               }
				for(int i = 0; i < row ; i++){
					for(int j = 0; j < row ; j++){
					
					 cout << firstMatrix[i][j] << " ";
					if(j == col - 1)
						cout << endl << endl;
													  }
														 }
	// CALCULATION OF COFACTOR          													
//*************************************************************
	y[0][0]=firstMatrix[1][1]*firstMatrix[2][2]-firstMatrix[1][2]*firstMatrix[2][1];               
	y[0][1]=-1*(firstMatrix[1][0]*firstMatrix[2][2]-firstMatrix[1][2]*firstMatrix[2][0]); 
	y[0][2]=firstMatrix[1][0]*firstMatrix[2][1]-firstMatrix[1][1]*firstMatrix[2][0];                                                                              
	y[1][0]=-1*(firstMatrix[0][1]*firstMatrix[2][2]-firstMatrix[2][1]*firstMatrix[0][2]);                                                                        
	y[1][1]=firstMatrix[0][0]*firstMatrix[2][2]-firstMatrix[0][2]*firstMatrix[2][0];               
	y[1][2]=-1*(firstMatrix[0][0]*firstMatrix[2][1]-firstMatrix[0][1]*firstMatrix[2][0]);                                                                    
	y[2][0]=firstMatrix[0][1]*firstMatrix[1][2]-firstMatrix[0][2]*firstMatrix[1][1];                                                                        
	y[2][1]=-1*(firstMatrix[0][0]*firstMatrix[1][2]-firstMatrix[0][2]*firstMatrix[1][0]);                                                           
	y[2][2]=firstMatrix[0][0]*firstMatrix[1][1]-firstMatrix[0][1]*firstMatrix[1][0];            
	//***********************************

	long int det=firstMatrix[0][0]*y[0][0]-firstMatrix[0][1]*y[0][1]+firstMatrix[0][2]*y[0][2];
//For storing adjoint in another 2-D Array
	for(i=0;i<3;i++) 
	{
	for(j=0;j<3;j++)
	c[i][j]=y[j][i];
	}
// calculating inverse of matrix (2-D Array)
	for(i=0;i<3;i++) 
	{
	for(j=0;j<3;j++)
	c[i][j]=c[i][j]/det;
	}
	if(det!=0)
	{
	cout << "Inverse is:";
	for(i=0;i<3;i++)
	{
	cout<<endl<<endl;
	for(j=0;j<3;j++)
	cout<<c[i][j]<< ' ' ;

	}
	}
	else{
	cout << "Inverse is not possible" << endl;
	}	
}

