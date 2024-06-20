class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0; //pointer to word1
        int j=0; //pointer to word2
        string temp; //string to merge both the words
        //Loop both the strings until one of the string is completed.
        while(i<word1.length() && j<word2.length()){ 
            temp+=word1[i]; //add one etter from word1
            temp+=word2[j];  //add one letter from word2
            i++;
            j++;
        }

        //check if any of the string has pending letters and append the letter
        if(i<word1.length()){
            while(i<word1.length()){
                temp+=word1[i];
                i++;
            }
        }
        else if(j<word2.length()){
            while(j<word2.length()){
                temp+=word2[j];
                j++;
            }
        }
        return temp;
    }
};
