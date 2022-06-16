/**
 * @file    accumulator.h
 * @brief   A module to provide various accumulators 
 */
#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

/**
 * @class Accumulator
 * @brief accumulates number
 */
class Accumulator {
    int value_;
public:

    /**
     * @brief Initialize Accumulator with initial value = 0
     */
    Accumulator();


    /**
     * @brief Initialize Accumulator with initial value
     * @param[in]       init        initial value
     */
    Accumulator(int init);


    /**
     * @brief add value to the accumulator
     * @param[in]       x           value to add
     * @return  current accumulated value
     */
    int add(int x);


    /**
     * @return get accumulated value
     */
    int get_value() const; 
};


#endif // ACCUMULATOR_H
