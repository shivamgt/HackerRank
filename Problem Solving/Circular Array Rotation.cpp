void reverse(vector<int>& a, int lo, int hi)  // Reverse Function
{
    while(lo<hi)
    {
        swap(a[lo],a[hi]);
        lo++;
        hi--;
    }
}

vector<int> circularArrayRotation(vector<int>& a, int k, vector<int> queries) 
{
    int n = a.size();
    vector<int> v;
    k = k%n;
    
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
    reverse(a,0,n-1);
    
    for(int i=0;i<queries.size();i++)
    {
        v.push_back(a[queries[i]]);
    }
    return v;
}
/*
Ex:-

Input -- a= 3 4 5     k= 2     queries= [1,2]
Output-- 5 3

Explanation-

Rotate the array by k  --- 4 5 3

Now we have to push queries element in our result

a[queries[0]] - a[1] --- 5 
a[queries[1]] - a[2] --- 3
*/


