//
//  ofCircle.h
//  myHackathon001
//
//  Created by 茂山 丈太郎 on 2015/03/31.
//
//
#include "ofMain.h"

class Circle{
public:
    void draw();
    void update();
    
    Circle();
    Circle(ofColor c);
    
    ofPoint position;
    ofColor color;
    float x,y,radius;
    
};