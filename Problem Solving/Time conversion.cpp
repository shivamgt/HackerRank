string timeConversion(string s) 
{
    string hh=s.substr(0,2);
    int h=stoi(hh);
    if(s[8]=='A' && h==12)
        hh="00";
    else if(s[8]=='A' && h!=12)
        return hh + s.substr(2,6);  
    else if(h!=12) 
        hh=to_string(h+12);
    return hh + s.substr(2,6);
}

