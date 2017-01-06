class Solution {
public:
    static bool people_compare(pair<int, int> &p1, pair<int, int> &p2) {
        if (p1.first < p2.first) {
            return 1;
        }
        else if (p1.first == p2.first){
            if (p1.second > p2.second) return 1; //reverse the order of .second
                                                 //When integrating sorted vector from .end() to .begin(), [7,0] will be processed before [7,1]
            else return 0;
        }
        else if (p1.first > p2.first)
            return 0;
        else 
            return 0;
    }

    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        //step 1. go through the vector and determine the order of reconstruction
        
        std::sort(people.begin(), people.end(), Solution::people_compare);
            //the sort is done in 2 layers
            //it first compares pair.first variable to determine which .first is larger
            //then it compares pair.second variable to determine which .second is smaller
            //so if you put int [4.4][7.0][7.1][5.0] it will return [4.4][5.0][7.1][7.0]
            
        //step 2. reconstruct a new linked list using the sorted people
        //  follows 2 rules a) if .second == 0, automatically puts it at beginning of the list b) if .second != 0, puts it according to the position described by the .second
        std::list<pair<int, int>> new_list;
        std::list<pair<int, int>>::iterator it;

        for (std::vector<pair<int, int>>::reverse_iterator rit = people.rbegin(); rit!= people.rend(); ++rit){
            cout<<"first: "<<rit->first<<"second "<<rit->second<<endl;
            if (rit->second == 0) {
                //insert at beginning of linked list
                new_list.push_front(*rit);
            }
            else{
                //insert according to position described
                it = new_list.begin();
                std::advance (it,rit->second);
                new_list.insert(it,*rit);
            }
        }
        //convert list to vector and return
        std::vector<pair<int, int>> v{ std::make_move_iterator(std::begin(new_list)), std::make_move_iterator(std::end(new_list)) };
        return v;
    }
};