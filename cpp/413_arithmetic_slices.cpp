class Solution {
public
    int numberOfArithmeticSlices(vectorint& A) {
        int tot_slices = 0;
        int still_arith = 0;
        int vector_size = A.size();
        int diff_now, diff_1old;
        if (vector_size=3){
            diff_now = A[1]-A[0];
        for (int i=2; i  vector_size; ++i) {
            diff_1old = diff_now;
            diff_now = A[i]-A[i-1];
            if (diff_now == diff_1old){
                coutA[i]endl;
                shows the sequences are indeed still arithmetic slices
                if (still_arith == 0) still_arith = 3;
                else still_arith++;
            } else {
                if this condition is not satisfied, means the arithmetic slices are broken
                1. calculate how many arith slices are generated
                if (still_arith  0) {tot_slices += ((still_arith-2)+1)(still_arith-2)2;
                2. return still_arith to 0
                    still_arith = 0;}
            }
        }
        couttotal_slices tot_slicesstill_arithendl;
        if (still_arith  0) tot_slices += ((still_arith-2)+1)(still_arith-2)2;
        couttotal_slices tot_slicesstill_arithendl;
        }
        
        return tot_slices;
    }
};