#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;


class MPC {
public:
    MPC();

    virtual ~MPC();

    // Solve the model given an initial state and polynomial coefficients.
    // Return the first actuatotions.
    void Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

    double last_delta = 0.0;
    double last_a = 0.3;
    vector<double> predict_x;
    vector<double> predict_y;
    double predict_delta;
    double predict_a;

};

#endif /* MPC_H */
