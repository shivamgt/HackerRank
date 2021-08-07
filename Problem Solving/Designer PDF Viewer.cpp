int designerPdfViewer(vector<int> h, string word) 
{
    int maxLen=INT_MIN;			//For finding the maximum value of character
    int wordLen=word.size(); 
    char ch;					//For Storing the current character
    
    for(int i=0;i<wordLen;i++)
    {
        ch=word[i];				//Store
        maxLen = max(maxLen,h[ch-97]);
    }
    
    return maxLen*wordLen;
}

/*
	Ex:- h		: 1 2 3 4 
		 word	: ab
		 
		For i=0  (a)  
			h[97-97]=h[0]=1
			
		For i=1  (b)
			h[98-97]=h[1]=2
			
		max(1,2) = 2
		
		maxLen = 2*2=4		
*/
