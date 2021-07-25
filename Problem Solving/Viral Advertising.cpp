int viralAdvertising(int n)
{
    int people=5, sum=0;
    
    for(int i=0;i<n;i++)
    {
        people  = floor(people/2); 
        sum    += people;
        people *= 3;
    }  
    return sum;
}
