int squares(int a, int b) 
{
    int x=1;
    int count=0;
    while(x*x<=b)
    {
        if(x*x>=a)
            count++;
        x++;    
    }
    return count;
}

