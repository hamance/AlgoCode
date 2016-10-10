//
// Created by hamance on 2016/10/9.
//

#ifndef ALGORITHM_KDTREE_H
#define ALGORITHM_KDTREE_H

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define Point vector<int>

class kdTree {

private:
    vector<Point> points;

    Point* head;

    int length;

public:
    kdTree(vector<Point>);

    bool buildKdTree(vector<Point>, int axis);

    Point searhNearest(Point*, int k=1);

};


#endif //ALGORITHM_KDTREE_H
