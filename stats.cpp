#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& data ) {
    //Implement statistics here       
    float sum = 0.0;
    Stats TempstructObj;
    TempstructObj.min = TempstructObj.max = sum = data[0];     

   // for (auto i : data) {
    for (int i = 1; i < data.size(); i++)
    {
        if (data[i] < TempstructObj.min)
            TempstructObj.min = data[i];
        if (data[i] > TempstructObj.max)
            TempstructObj.max = data[i];

        sum = sum + data[i];
    }

    TempstructObj.average = sum / data.size();
    return TempstructObj;

}
