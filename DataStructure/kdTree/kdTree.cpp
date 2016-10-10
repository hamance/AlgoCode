//
// Created by Mardo on 2016/10/9.
//

#include "kdTree.h"
//#include "../../method/getMidNum.h"


using namespace std;

kdTree::kdTree(vector<Point> initPoints) {
    points = initPoints;
    length = initPoints.size();

    buildKdTree(points, length);
}

void ramify(Point*);

bool kdTree::buildKdTree(vector<Point> data, int axis) {
    if (data[0].size() < axis) {
        cout << "error axis" << endl;
        //TODO exit program
    }

}

Point kdTree::searhNearest(Point *, int k) {

}