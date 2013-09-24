long int power(long int X, unsigned int N)    
{    
    if(N == 0)    
        return 1;    
    if(N == 1)    
        return X;    
    if( N % 2 == 0)    
        return power( X * X, N / 2);    
    else    
        return power( X * X, N / 2) * X;    
} 