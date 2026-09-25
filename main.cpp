/**
 * @file main.cpp
 * @author Desmond Mgbechi (desmond.mgbechi@hes-so.ch)
 * @brief Program to calulate the duration to travel to an object
 * @version 0.1
 * @date 2026-09-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdint.h>

using namespace std;

#define GET_TIME(lx, vx) (lx / vx)   

/**
 * @brief Calculate the duration to travel to the object
 * 
 * @return int 0 if success, -1 if error
 */
int main() {

    cout << "Hello" << endl;

    const uint8_t dx = 3, dy = 10;          // Distance of the object on the axis [km]
    const uint8_t speed1 = 5, speed2 = 2;   // Speed of robot during the travel [km/h]
    const double l1 = 6;                    // Distance covered during the first segment on x axis [km]
    double duration1, duration2;            // Duration of the the segment [h]

    // Calculate the distance to cover during the second segment [km]
    const double l2 = sqrt((dx * dx) + (dy - l1) * (dy - l1));

    duration1 = GET_TIME(l1, speed1);
    duration2 = GET_TIME(l2, speed2);

    cout << "Duration of the first segment: " << duration1 << " hours" << endl;
    cout << "Duration of the second segment: " << duration2 << " hours" << endl;
    cout << "Duration of the travel: " << duration1 + duration2 << " hours" << endl;

    return 0;
}

// for the bonus use scanf 