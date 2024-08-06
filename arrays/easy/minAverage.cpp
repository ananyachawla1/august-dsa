 sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        vector<double> averages;
        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;
            averages.push_back(avg);
            left++;
            right--;
        }
        
        return *min_element(averages.begin(), averages.end());