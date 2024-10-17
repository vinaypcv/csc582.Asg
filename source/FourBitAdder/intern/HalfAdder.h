/**
 * @file HalfAdder.h
 * @brief Declaration of the HalfAdder class, representing a half-adder circuit using basic logic gates.
 *
 *
 * @author [Jateen Joharapurkar]
 * @author [Mantra Mehta]
 * @author [Vinay Kasyap]
 */



#ifndef HALFADDER_H
#define HALFADDER_H

#include "LogicGates.h"
#include "AbstractDevice.h" // Include AbstractDevice header

/**
 * @class HalfAdder
 * @brief A class representing a half-adder circuit using basic logic gates.
 *
 * The HalfAdder class simulates the behavior of a half-adder, which performs
 * binary addition on two input bits and produces a sum and a carry bit.
 */
class HalfAdder : public AbstractDevice {
public:
    HalfAdder();
    ~HalfAdder();

    /**
     * @brief Sets the input values for the half-adder.
     *
     * @param usiA The first input bit (A).
     * @param usiB The second input bit (B).
     */
    void setInputs(const unsigned short int usiA, const unsigned short int usiB);

    unsigned short int getSum() const override; // Override getSum from AbstractDevice

    unsigned short int getCarry() const override; // Override getCarry from AbstractDevice

protected:
    void update() override; // Override update method from AbstractDevice

private:
    AND m_andGate; ///< Logical AND gate used for carry computation
    OR m_orGate; ///< Logical OR gate, simulating XOR functionality for sum calculation
    NAND m_nandGate; ///< Logical NAND gate utilized in XOR computation

    unsigned short int m_sum; ///< Stores the sum result
    unsigned short int m_carry; ///< Stores the carry result
};

#endif  
