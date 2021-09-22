#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc, char** argv){
    cout << "Nome do programa: " << argv[0] << endl;
    for(int i = 1; i < argc; i++){
        Mat img = imread(argv[i]);
        if(!img.data){
            continue;
        }
        imshow("img", img);
        waitKey(1000);
    }
    return 0;
}
