class Solution {
public:
    bool judgeCircle(string moves) {

        int xPosition = 0;
        int yPosition = 0;

        for(int i = 0; i < moves.length(); i++) {
            switch(moves[i]) {
                case 'U':
                    yPosition--;
                    break;
                case 'D':
                    yPosition++;
                    break;
                case 'R':
                    xPosition++;
                    break;
                case 'L':
                    xPosition--;
                    break;
            }
        }

        return xPosition == 0 && yPosition == 0;
    }
};
