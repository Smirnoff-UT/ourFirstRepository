#pragma once

#include "ofMain.h"
#include "Circle.h"
class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofVec3f center,destination,target,r;
    
    ofSoundPlayer bass1,crap1,zzz1;
    
    ofColor myRose = ofColor(232,77,143);
    ofColor myBackground = ofColor(207,212,148);
    
    Circle circle;
    
    float norm,dt=1,v_0,v,tick;
    int frames = 0,line_x=0;
};
