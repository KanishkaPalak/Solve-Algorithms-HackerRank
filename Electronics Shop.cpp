int n,m;
vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) 
{
    /*
     * Write your code here.
     */
    int max=-1;
    int i,j,k=0,size;
    vector<int> money(n*m);
    size=n*m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (keyboards[i] + drives[j] <= b && keyboards[i] + drives[j] > max)
					max = keyboards[i] + drives[j];
            
        }
    }
    return max;

}
