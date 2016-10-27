//
// Created by hamance on 2016/10/27.
//

#ifndef ALGORITHM_TREE_H
#define ALGORITHM_TREE_H

#include <cstdlib>

template <class Item>
class binary_tree_node {
public:
    typedef Item value_type;

    binary_tree_node (
            const Item& init_data = Item(),
            binary_tree_node* init_left = NULL,
            binary_tree_node* init_right = NULL
    ) {
        data_field = init_data;
        left_field = init_left;
        right_field = init_right;
    }

    Item& data() { return data_field;}
    binary_tree_node* left() { return left_field;}
    binary_tree_node* right() { return right_field;}
    void set_data(const Item& new_data) { data_field = new_data; }
    void set_left(binary_tree_node* new_left) { left_field = new_left; }
    void set_right(binary_tree_node* new_right) { right_field = new_right; }
    const Item& data() const { return data_field; }
    const binary_tree_node* left() const { return left_field; }
    const binary_tree_node* right() const { return right_field; }
    bool is_leaf() const { return (left_field == NULL) && (right_field == NULL); }

private:
    Item data_field;
    binary_tree_node* left_field;
    binary_tree_node* right_field;
};


#endif //ALGORITHM_TREE_H
