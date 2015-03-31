//
//  ofCircle.cpp
//  myHackathon001
//
//  Created by 茂山 丈太郎 on 2015/03/31.
//
//

#include "Circle.h"

Circle::Circle(){
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    radius  = 30;
    position = ofPoint(x,y);
    color = ofColor(100,100,100);
}
Circle::Circle(ofColor c){
    x = ofGetWidth()/2;
    color = c;
    y = ofGetHeight()/2;
    radius  = 30;
    position = ofPoint(x,y);
    color = ofColor(100,100,100);
}

void Circle::draw(){
    ofSetColor(color);
    ofCircle(position, radius);
}