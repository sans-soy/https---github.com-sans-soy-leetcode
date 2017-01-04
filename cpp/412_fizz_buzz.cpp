class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> return_string (n);  
        for (int i = 1; i<=n; i++){
            string str;
            int div3_remain = i%3;
            int div5_remain = i%5;
            if (div3_remain==0) str = "Fizz";
            if (div5_remain==0) str = "Buzz";
            if (div3_remain==0 & div5_remain==0) str = "FizzBuzz";
            if ((div3_remain!=0)&(div5_remain!=0)) {
                stringstream ss;
                ss << i;
                str = ss.str();}
            return_string[(i-1)] = str;
        }
        return return_string;
    }
};