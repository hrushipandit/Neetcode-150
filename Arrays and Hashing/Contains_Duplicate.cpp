#include <bits/stdc++.h>
using namespace std;
using namespace std;
int Freq;

bool containsDuplicate(vector<int>& nums) {
    
    unordered_map <int,int> umap;

    for (auto it = nums.begin();it!=nums.end();it++)
    {
            umap[*it]++;
    }

    for (auto it = umap.begin();it!=umap.end();it++)
    {
        if ((it->second)>0)
            return true;
    }
    return false;

}
int main()
{   int size,temp;
    vector<int> nums;
    cout<<"Enter size"<<endl;
    cin>>size;
    for (int i=0;i<size;i++)
    {
        cout<<"Enter value"<<endl;
        cin>>temp;
        nums.push_back(temp);
    }
    for (auto it = nums.begin(); it != nums.end(); it++)
        cout << *it << " ";
    cout<<containsDuplicate(nums);
    return 0;
}