#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
    Kp = Kp_;
    Ki = Ki_;
    Kd = Kd_;

    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;

    prev_cte = 0.0;
}

void PID::UpdateError(double cte) {
    p_error  = cte;
    d_error  = cte - prev_cte;
    i_error += cte;

    prev_cte = cte;
}

double PID::TotalError() {

    // Use this to compute the control. Not really sure what else to do with this.
    double err = -Kp * p_error - Ki * i_error - Kd * d_error;

    // Saturate the control
    if (err > 1.0) {
        err = 1.0;
    }
    else if (err < -1.0) {
        err = -1.0;
    }

    return err;

}

