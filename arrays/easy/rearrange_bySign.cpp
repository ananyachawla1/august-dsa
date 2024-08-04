
class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
       vector<int>positives;
       vector<int>negatives;
        for(auto&num : nums){
            if(num > 0){
                positives.push_back(num);
            }else{
                negatives.push_back(num);
            }
        }
        int n1 = positives.size();
        int n2 = negatives.size();
        vector<int> result;
        // Merge the two vectors alternately starting with a positive number
        int pos_index = 0;
        int  neg_index = 0;
        while(pos_index < n1 && neg_index < n2){
            result.push_back(positives[pos_index]);
            pos_index++;
            result.push_back(negatives[neg_index]);
            neg_index++;
        }
        return result;
    }
};