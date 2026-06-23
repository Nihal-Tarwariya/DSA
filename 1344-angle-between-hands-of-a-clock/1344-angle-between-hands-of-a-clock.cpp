class Solution {
public:
    double angleClock(int hour, float minutes) {
        double minang = 6*minutes;
        double hourang=1;
        if(hour==12){
            hourang=((minutes/2));
        }else{
            hourang = (hour*30)+((minutes/2));
        }
        //cout<<minang<<" "<<hourang<<" "<<abs(hourang-minang);
        double ans = abs(hourang-minang); 
        if (ans>180) return 360 - ans;
        return ans; 
    }
};