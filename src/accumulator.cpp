#include "accumulator.h"

Accumulator::Accumulator()
    : Accumulator(0)
{}

Accumulator::Accumulator(int init)
    : value_(init)
{}

int Accumulator::add(int x)
{
    value_ += x;
    return get_value();
}

int Accumulator::get_value() const
{
    return value_;
}