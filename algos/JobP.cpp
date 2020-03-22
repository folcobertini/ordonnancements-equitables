#include <iostream>
#include <string>
#include "Job.h"
#include "JobP.h"

JobP::JobP() : Job() {
}

JobP::JobP(int time, int profit, int deadline) : Job(time), profit(profit), deadline(deadline) {
}

int JobP::get_profit(){
    return profit;
}

int JobP::get_deadline(){
    return deadline;
}

std::string JobP::to_string() {
    std::string res = "JobP(id: " + std::to_string(id);
    if (time != 1)
        res += ", time: " + std::to_string(time);
    res += ", profit: " + std::to_string(this->profit) + ", dl: " + std::to_string(this->deadline) + ")";
    
    return res;
}