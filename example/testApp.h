#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxTwBar.h"
#include "ofxVec3f.h"
#include "ofxVec2f.h"
#include "ofxQuaternion.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
	
		ofxTwBar bar;
		
		void SetQuaternionFromAxisAngle(const float *axis, float angle, ofxQuaternion quat);
		void ConvertQuaternionToMatrix(const ofxQuaternion quat, float *mat);
		void MultiplyQuaternions(const ofxQuaternion q1, const ofxQuaternion q2, ofxQuaternion qout);
};

#endif
