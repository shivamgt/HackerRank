int saveThePrisoner(int n, int m, int s)
{
    int result= (m+s-1)%n;
    if( result == 0 )
        return n;
    return result;    
}

