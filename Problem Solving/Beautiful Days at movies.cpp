 int revNo(int n)
 {
     int rev=0, rem;
     while(n!=0)
     {
         rem = n % 10;
         rev = rev*10 + rem;
         n  /= 10;
     }
     return rev;
 }

int beautifulDays(int i, int j, int k) 
{
    int count=0;
    
    for(;i<=j;i++)
    {
        int rev=revNo(i);
        int diff= abs(i - rev);
        if(diff % k == 0)
            count++;
    } 
    return count;
}

