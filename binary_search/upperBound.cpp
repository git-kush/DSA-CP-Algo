int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	// For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' 
	// such that the value 'arr[idx]' > 'x'
	int l(0), r(n-1), ans(n);

	while(l  <=  r)
	{	
		int mid = (l+r)/2;

		if(arr[mid] > x)
		{
			r = mid-1;
			ans = mid;
		}

		else
		{
			l = mid+1;
		}

	}

	return ans;


}