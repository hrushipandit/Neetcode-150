#include <bits/stdc++.h>
using namespace std;


    bool isAnagram(string &str1, string &str2) {
        unordered_map <char,int> umap1,umap2;
        bool val=1;
        int size=str1.size();
        for (int i=0;i<size;i++)
        {
            umap1[str1[i]]++;   
            umap2[str2[i]]++;
        }
        for (auto itr1=umap1.begin(),itr2=umap2.begin();itr1!=umap1.end();itr1++,itr2++)
        {   cout<<itr1->first<<itr1->second<<endl;
            cout<<itr2->first<<itr2->second<<endl;         
        }
        for (auto itr1=umap1.begin();itr1!=umap1.end();itr1++)
        {   //cout<<itr1->second<<umap2[itr1->first]<<endl;
            if (itr1->second!=umap2[itr1->first])
                val=0;      
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