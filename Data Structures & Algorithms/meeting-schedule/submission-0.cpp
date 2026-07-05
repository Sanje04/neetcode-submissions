/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        vector<int> tracked;
        
        while(intervals.size() > 1){
            // find the shortest start time
            Interval earliestStartTime = earliestStart(intervals, true);
            Interval nextEarliestTime = earliestStart(intervals, false);
            cout << "earliest end time: " << earliestStartTime.end << endl;
            cout << "next earliest start time: " << nextEarliestTime.start << endl;
            if (earliestStartTime.end > nextEarliestTime.start){
                cout << "return false with " << earliestStartTime.end << " > "  << nextEarliestTime.start << endl;
                return false;
            }

        }
        return true;
    }

    Interval earliestStart(vector<Interval>& intervals, bool deleteValue){
        int earliestStart = 0;
        Interval returnValue(0,0);
        for (int i = 1; i<intervals.size(); i++){
            if (intervals[earliestStart].start > intervals[i].start){
                earliestStart = i;
            }
        }
        returnValue = intervals[earliestStart];
        if (deleteValue){
            intervals.erase(intervals.begin() + earliestStart);
        }
        return returnValue;
    }
};
