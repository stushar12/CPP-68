void abc(struct Node *root, int k,vector<int> &v)
{
    if(root ==NULL)
    return;
    if(k==0)
    v.push_back(root->data);
    else
    abc(root->left,k-1,v);
    abc(root->right,k-1,v);
}
vector<int> Kdistance(struct Node *root, int k)
{
 vector<int> v;
 abc(root,k,v);
 return v;
}