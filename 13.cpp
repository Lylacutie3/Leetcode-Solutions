class Solution {
public:
    int romanToInt(string s) {
        char roman[7] = {'I', 'V', 'X', 'L' , 'C', 'D', 'M'};
        int value[7] = {1, 5, 10, 50 , 100, 500, 1000};
        int val = 0;

        int size = s.size();
        int arr[size];

        for(int i = 0; i<size; i++){// this loop change the 
            for(int j = 0; j < 7; j++){//element roman into int value
                if(roman[j] == s[i]){
                    arr[i] = value[j];
                }
            }
        }

        for(int i = 0; i<size; i++){ //this loop identify what to add only
                if(i==size-1){ // and subtract first before adding
                    val += arr[i];
                }else{
                    if(arr[i] >= arr[i+1]){ 
                        val += arr[i];
                    }else{
                        val += (arr[i+1] - arr[i]);
                        ++i;
                    }
                }
        }

    return val;
    }
};