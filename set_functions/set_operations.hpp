#include <set>

std::set<int> operator-(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_s;
    for (auto s : s1)
    {
        new_s.insert(s);
    }
    for (auto s : s2)
    {
        new_s.erase(s);
    }
    return new_s;
}

std::set<int> operator+(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_s;
    for (auto s : s1)
    {
        new_s.insert(s);
    }
    for (auto s : s2)
    {
        new_s.insert(s);
    }
    return new_s;
}



std::set<int> operator*(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_s;
    for (auto s : s1)
    {
        for (auto se : s2)
        {
    	    new_s.insert(s+se);
        }
    }
    
    return new_s;
}

std::set<int> operator^(const std::set<int>& s1,const std::set<int>& s2)
{
    std::set<int> new_s;
    for (auto s : s1)
    {
        new_s.insert(s);
    }
    for (auto s : s2)
    {
    	if (new_s.count(s) != 0)
            new_s.erase(s);
        else
            new_s.insert(s);
    }
    return new_s;
}


std::set<int> operator^(const std::set<int>& s1,const int n)
{
    std::set<int> new_s = s1;
    int i;
    for(i = 0; i < n; i++)
        new_s = new_s * s1;
    
    return new_s;
}

std::set<std::string> operator*(const std::set<std::string>& s1,const std::set<std::string>& s2)
{
    std::set<std::string> new_s;
    for (auto s : s1)
    {
        for (auto se : s2)
        {
    	    new_s.insert(s+se);
        }
    }
    
    return new_s;
}

std::set<std::string> operator^(const std::set<std::string>& s1,const int n)
{
    if(n < 0)
        throw std::invalid_argument( "error : negative value" );
    if(n == 0)
        return std::set<std::string>{""};
    std::set<std::string> new_s = s1;
    int i;
    for(i = 1; i < n; i++)
        new_s = new_s * s1;
    
    return new_s;
}
