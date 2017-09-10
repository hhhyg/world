#include<iostream>
#include<fstream>
#include<string.h> 
#include<stdlib.h>
using namespace std;
int main(int grac,char *argv[])
{
	ofstream fout("sudoku.txt",ios::out);
	int g,w,p=0;
	w=strlen(argv[2]);
	for(g=0;g<w;g++)
	if(argv[2][g]<'1'||argv[2][g]>'9')
	{
		cout<<"error"<<endl;
		p=1;
	}
	if(p!=1)
	{
	
	int i[9],s=0,a[9];
	int n;
	int k,j;
	int c[9][9],x[9][9];
	a[0]=5;
	n=atoi(argv[2]);
	for(i[1]=1;i[1]<10;i[1]++)
	{
		a[1]=i[1];
		if(a[1]==a[0])
		continue;
		for(i[2]=1;i[2]<10;i[2]++)
    	{
	    	a[2]=i[2];
	    	if(a[2]==a[0]||a[2]==a[1])
	    	continue;
	    	for(i[3]=1;i[3]<10;i[3]++)
        	{
	        	a[3]=i[3];
	            if(a[3]==a[0]||a[3]==a[1]||a[3]==a[2])
	        	continue;
	        	for(i[4]=1;i[4]<10;i[4]++)
        	    {
	        	   a[4]=i[4];
	               if(a[4]==a[0]||a[4]==a[1]||a[4]==a[2]||a[4]==a[3])
	        	    continue;
	        	    for(i[5]=1;i[5]<10;i[5]++)
        	        {
	                	a[5]=i[5];
	                    if(a[5]==a[0]||a[5]==a[1]||a[5]==a[2]||a[5]==a[3]||a[5]==a[4])
	        	        continue;
	        	        for(i[6]=1;i[6]<10;i[6]++)
        	            {
	                	    a[6]=i[6];
	                        if(a[6]==a[0]||a[6]==a[1]||a[6]==a[2]||a[6]==a[3]||a[6]==a[4]||a[6]==a[5])
	        	            continue;
						    for(i[7]=1;i[7]<10;i[7]++)
        	                {
	                	       a[7]=i[7];
	                           if(a[7]==a[0]||a[7]==a[1]||a[7]==a[2]||a[7]==a[3]||a[7]==a[4]||a[7]==a[5]||a[7]==a[6])
	        	               continue;
							   for(i[8]=1;i[8]<10;i[8]++)
        	                    {
	                	         a[8]=i[8];
	                             if(a[8]==a[0]||a[8]==a[1]||a[8]==a[2]||a[8]==a[3]||a[8]==a[4]||a[8]==a[5]||a[8]==a[6]||a[8]==a[7])
	        	                  continue;
							     	for(j=0; j<9; j++)
		c[0][j]=a[j];
	for(j=0; j<6; j++)
		c[1][j]=a[j+3];
	for(j=0; j<3; j++)
		c[1][j+6]=a[j];
	for(j=0; j<6; j++)
		c[2][j+3]=a[j];
	for(j=0; j<3; j++)
		c[2][j]=a[j+6];
	for(k=3; k<9; k++)
		for(j=0; j<9; j++) {
			if(j%3==2)
				c[k][j]=c[k-3][j-2];
			else
				c[k][j]=c[k-3][j+1];
		}
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			x[k][j]=c[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==3||k==6) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==4||k==7) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==5||k==8) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k>2) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(j==3||j==6) {
				if(k%3==0)
					c[k][j]=c[k+2][j-3];
				else c[k][j]=c[k-1][j-3];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++)
		for(j=0; j<9; j++)
			x[k][j]=c[k][j];
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==3||k==6) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==4||k==7) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==5||k==8) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k>2) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(j==4||j==7) {
				if(k%3==0)
					c[k][j]=c[k+2][j-3];
				else c[k][j]=c[k-1][j-3];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++)
		for(j=0; j<9; j++)
			x[k][j]=c[k][j];
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==3||k==6) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==4||k==7) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==5||k==8) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k>2) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(j==5||j==8) {
				if(k%3==0)
					c[k][j]=c[k+2][j-3];
				else c[k][j]=c[k-1][j-3];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++)
		for(j=0; j<9; j++)
			x[k][j]=c[k][j];
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==3||k==6) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==4||k==7) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==5||k==8) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k>2) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(j>2) {
				if(k%3==0)
					c[k][j]=c[k+2][j-3];
				else c[k][j]=c[k-1][j-3];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++)
		for(j=0; j<9; j++)
			x[k][j]=c[k][j];
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==3||k==6) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==4||k==7) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k==5||k==8) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
	for(k=0; k<9; k++) {
		for(j=0; j<9; j++) {
			if(k>2) {
				if(j%3==0)
					c[k][j]=c[k-3][j+2];
				else c[k][j]=c[k-3][j-1];
			} else c[k][j]=x[k][j];
			cout<<c[k][j]<<" ";fout<<c[k][j]<<" ";
		}
		cout<<endl;fout<<endl;
	}
	cout<<endl;fout<<endl;s=s+1;if(s==n)goto end;
						        }	   
						    }	 
						}      
		            }
		        }
		    }
		} 
	}}
	end:
	return 0;
}
