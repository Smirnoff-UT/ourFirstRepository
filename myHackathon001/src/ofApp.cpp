#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    bass1.loadSound("sound/Bass1.mp3");
    crap1.loadSound("sound/Crap1.mp3");
    zzz1 .loadSound("sound/ZZZ1.mp3");
    
    zzz1.setVolume(0.1);
    
    center = ofVec3f(ofGetWidth()*0.5, ofGetHeight()*0.5,0);
    target = center;
}

//--------------------------------------------------------------
void ofApp::update(){
    frames++;
    line_x += ofGetWidth()/120;
    if(line_x>ofGetWidth())line_x =0;
    /*
    if(frames%20==0){
        bass1.play();
    }
    if(frames%50==0){
        zzz1.play();
    }
    if(frames%60000==0){
        frames =0;
    }
    */
}

//--------------------------------------------------------------
void ofApp::draw(){
    float radius = 20+20*bass1.getPosition();
    ofBackground(myBackground);
    
    //Draw Scanning Lines.
    ofSetColor(255,255,255);
    ofLine(line_x, 0, line_x, ofGetHeight());
    
    //Draw circles.
    ofSetColor(myRose);
    ofSetCircleResolution(100);
    ofCircle(target,radius);
    
    
    
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    bass1.play();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    destination.set(x,y);
    norm = destination.distance(target);
    dt = 1;
    v_0 = norm/dt;
    tick = 0;
    r = destination-target;
    //cout<<norm<<endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}