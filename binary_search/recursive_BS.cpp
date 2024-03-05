int binS(vector<int> &nums,int l, int r, int target)
{
    if (l > r)
    return -1;
    int mid = (l+r)/2;

    if(nums[mid] > target) return binS(nums, l, mid - 1, target);
    else if(nums[mid] < target) return binS(nums, mid + 1, r, target);
    else return mid;
}



int search(vector<int> &nums, int target) {
 return binS(nums, 0, nums.size()-1 , target);
}