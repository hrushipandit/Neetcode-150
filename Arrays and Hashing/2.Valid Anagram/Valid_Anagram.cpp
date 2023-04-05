#include <bits/stdc++.h>
using namespace std;


    bool isAnagram(string &str1, string &str2) {
        unordered_map <char,int> umap1,umap2;
        bool val=1;
        int size1=str1.size();
        int size2=str2.size();
        for (int i=0;i<size1;i++)
        {
            umap1[str1[i]]++;   
        }

        for (int i=0;i<size2;i++)
        {
            umap2[str2[i]]++;   
        }

        if (size1!=size2)
        {
            return 0;
        }

        for (auto itr1=umap1.begin();itr1!=umap1.end();itr1++)
        {   //cout<<itr1->second<<umap2[itr1->first]<<endl;
            if (umap2.find(itr1->first)!=umap2.end())
            {
                if (itr1->second!=umap2[itr1->first])
                    val=0;    
            }
            else
                return 0;  
        }
        return val;
    }

int main()
{
    string str1,str2;
    str1="a";
    str2="ab";
    cout<<isAnagram(str1, str2);
    return 0;
}