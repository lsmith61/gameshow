#include <stdlib.h>
#include <string>
//#pragma once

using namespace std;

class Contestant {
    private:
        int id;
        int points;

    public:
        Contestant(int id, int points){
            this->id = id;
            this->points = points;
        }
        Contestant(){
            id = -1;
            points = -1;
        }

        void setID(int n){
            id = n;
        }
        void setPoints(int n){
            points = n;
        }
        int getID(){
            return id;
        }
        int getPoints(){
            return points;
        }

        void insertContestant(int id, int points)

};