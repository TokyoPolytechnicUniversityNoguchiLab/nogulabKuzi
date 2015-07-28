#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //日本語不可
    menberName[0] = "ito";
    menberName[1] = "ooisi";
    menberName[2] = "nakayama1";
    menberName[3] = "nakayama2";
    menberName[4] = "matuki";
    menberName[5] = "matumoto";
    menberName[6] = "maru";
    drawFont.loadFont("Arial.ttf", 72);

    isStop = false;
    int ran = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (isStop) {
        ran = (int)ofRandom(0, 6);
        drawFont.drawString(menberName[ran], 100, 100);
    }else{
        drawFont.drawString(menberName[ran], 100, 100);
    }
    
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    isStop = !isStop;
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