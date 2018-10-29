class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int notFoundIndex = -1;
        for (int i = 0; i < haystack.length(); i++) {

            bool flag = false;

            if (haystack[i] == needle[0]) {
                flag = true;

                for (int j = 1; j < needle.length(); j++) {
                    if (needle[j] != haystack[i+j]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    return i;
                }
            }
        }

        return notFoundIndex;
    }
};
