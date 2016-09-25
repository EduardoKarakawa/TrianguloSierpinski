#include "ofApp.h"
#include <time.h>

void ofApp::tringulo(ofVec2f ap1, ofVec2f ap2, ofVec2f ap3, int n) {
	ofVec2f aux;
	int x;

	aux.set((ap1 + ap2) / 2.f);
	ofDrawCircle(aux, TAM);
	for (int i = 0; i < n; i++) {
		x = 1 + rand() % 3;

		switch (x)
		{
			case 1:
				aux.set((aux + ap1) / 2.f);
				break;
			case 2:
				aux.set((aux + ap2) / 2.f);
				break;
			case 3:
				aux.set((aux + ap3) / 2.f);
				break;
		}
		ofSetColor(rand() % 255, 0, 0);
		ofDrawCircle(aux, TAM);
	}
}



//--------------------------------------------------------------
void ofApp::setup(){
	srand(time(NULL));
	p1.set(ofGetWindowWidth() / 2.f, 0);
	p2.set(ofGetWindowWidth(), ofGetWindowHeight());
	p3.set(0, ofGetWindowHeight());
}

//--------------------------------------------------------------
void ofApp::update(){

	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0, 0, 0);

	ofDrawCircle(p1, TAM);
	ofDrawCircle(p2, TAM);
	ofDrawCircle(p3, TAM);

	//ofSetColor(255, 255, 255);
	tringulo(p1,p2,p3,100000);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
