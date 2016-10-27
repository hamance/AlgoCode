// FILE: Bag.h
// CLASS PROVIDED: Bag 
//
// TYPEDEF and MEMBER CONSTANTS for the Bag class:
//   typedef ____ value_type
//     Bag::value_type is the data type of the items in the bag. It may be
//     any of the C++ built-in types (int, char, etc.), or a class with a
//     default constructor, an assignment opreator, and operators to test
//     for equality (x==y) and non-equality (x != y).
//
//   typedef ____ size_type
//     Bag::size_type is the data type of any variable that keeps track of
//     how many items are in the bag.
//
//   static const size_type CAPACITY = ____
//     Bag::CAPACITY is the maximum number of items that a bag can hold.
//
//
// CONSTRUCTOR for the Bag class:
//   Bag()
//     Postcondition: The bag has been initialized as an empty bag.
//
//
// MODIFICATION MEMBER FUNCIONS for the Bag class:
//   size_type erase(const value_type& target)
//     Postcondition: All copies of target have been removed from the bag. 
//     The return value is the number of copies removed (which could be zero).
//
//   void erase_one(const value_type& target)
//     Postcondition: If target was in the bag, then one copy has been 
//     removed; otherwise the bag is unchanged. A true return value 
//     indecates that one copy was removed; false indicates that nothing 
//     was removed.
//
//   void insert(const value_type& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been added to the bag.
//
//   void operator +=(const bag& addend)
//     Precondition: size( ) + addend.size( ) <= CAPACITY.
//     Postcondition: Each item in addend has been added to this bag.
//
// CONSTANT MEMBER FUNCTIONS for the Bag class:
//   size_type size( ) const
//     Postcondition: The return value is the total number of items in 
//     the bag.
//
//   size_type count(const value_type& target) const
//     Postcondition: The return value is number of times target is in the bag.
//
//
// NONMEMBER FUNCTIONS for the Bag class:
//   Bag operator +(const bag& b1, const bag& b2)
//     Precondition: b1.size( ) + b2.size( ) <= bag::CAPACITY.
//     Postcondition: The bag returned is the the union of b1 and b2.
//
//
// VALUE SEMANTICS for the Bag class: 
//   Assignments and the copy constructor may be used with bag objects.


#ifndef ALGORITHM_BAG_H
#define ALGORITHM_BAG_H

#include <cstdlib>  // Provides size_t

class Bag {
public:
    // TYPEDEFS and MEMBER CONSTANTS
    typedef int value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;
    // CONSTRUCTOR
    Bag() { used = 0; }
    // MODIFICATION MEMBER FUNCTIONS
    size_type erase(const value_type& target);
    bool erase_one(const value_type& target);
    void insert(const value_type& entry);
    void operator +=(const value_type& addend);
    // CONSTANT MEMBER FUNCTIONS
    size_type size() const { return used; }
    size_type count(const value_type& target) const ;

private:
    value_type data[CAPACITY];  // The array to store items
    size_type used;             // How much of array is used
};

// NONMEMBER FUNCTIONS for the Bag class
Bag operator + (const Bag& b1, const Bag& b2);


#endif //ALGORITHM_BAG_H
