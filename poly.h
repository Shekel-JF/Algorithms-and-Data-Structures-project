int max(int a, int b)
{
	return (a > b) ? a: b;
}
 
int *add(int A[], int B[], int a, int b)
{
    int size = max(a, b);
    int *sum = new int[size];
 
    for (int n = 0; n < a; n++)
    {
    	sum[n] = A[n];
	}
    for (int n = 0; n < b; n++)
    {
        sum[n] += B[n];
    }
 
   return sum;
}

int *sub(int A[], int B[], int a, int b)
{
    int size = max(a, b);
    int *res = new int[size];
 
    for (int n = 0; n < a; n++)
    {
    	res[n] = A[n];
	}
 
   for (int n = 0; n < b; n++)
    {  
	    res[n] -= B[n];
	}
	return res;
}

int *mul(int A[], int B[], int a, int b)
{
    int *prod = new int[a + b - 1];
 
    for (int n = 0; n < a + b - 1; n++)
    {
    	prod[n] = 0;	
	}

    for (int n = 0; n < a; n++)
    {
    	for (int m = 0; m < b; m++)
    	{
        	prod[n+m] += A[n] * B[m];
        }
    }
	return prod;
}

int horner(int res[], int b, int x)
{
    int result = res[b-1];
    for (int n = (b-2); n >= 0; n--)
    {
        result = result * x + res[n];
    }
    return result;
}


