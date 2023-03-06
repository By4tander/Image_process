#include <opencv2/opencv.hpp>  //头文件
#include <iostream>
using namespace cv;  //包含cv命名空间
using namespace std;

int main(int argc, char ** argv)
{

    vector<double> positiveData = { 2.0, 6.0, 7.0, 8.0, 10.0 };
    vector<double> normalizedData_l1, normalizedData_l2, normalizedData_inf, normalizedData_minmax;
    // Norm to probability (total count)
    // sum(numbers) = 23.0
    normalize(positiveData, normalizedData_l1, 5.0, 100.0, NORM_L1);
    cout <<"*normalizedData_l1*:" << endl;
    //method#1 C operatator[] - FASTEST
    //cout << "\n*C operatator[]*:" << endl;
    for (size_t i = 0; i < normalizedData_l1.size(); i++)
    {
        cout << normalizedData_l1[i] << ",\t";
    }

    //method#2 C iterator  - 2nd fast
    //cout << "*iterator*:" << endl;
    //for (vector<double>::iterator pd= normalizedData_l1.begin(); pd != normalizedData_l1.end();pd++)
    //{
    //	cout << *pd << "\t";
    //}

    //method#3 at -- 3rd fast
    //cout << "\n*at*:" << endl;
    //for (size_t i = 0; i < normalizedData_l1.size(); i++)
    //{
    //	cout << normalizedData_l1.at(i)<< ",\t";
    //}

    // Norm to unit vector: ||positiveData|| = 1.0
    normalize(positiveData, normalizedData_l2, 5.0, 100.0, NORM_L2);
    cout << "\n*normalizedData_l2*:" << endl;
    for (size_t i = 0; i < normalizedData_l2.size(); i++)
    {
        cout << normalizedData_l2[i] << ",\t";
    }

    // Norm to max element
    normalize(positiveData, normalizedData_inf, 5.0, 100.0, NORM_INF);
    cout << "\n*normalizedData_inf*:" << endl;
    for (size_t i = 0; i < normalizedData_inf.size(); i++)
    {
        cout << normalizedData_inf[i] << ",\t";
    }

    // Norm to range [5.0;100.0]
    // 2.0      0.0     (shift to left border)
    // 8.0      0.75    (6.0/8.0)
    // 10.0     1.0     (shift to right border)
    normalize(positiveData, normalizedData_minmax, 5.0, 100.0, NORM_MINMAX);
    cout << "\n*normalizedData_minmax*:" << endl;
    for (size_t i = 0; i < normalizedData_inf.size(); i++)
    {
        cout << normalizedData_minmax[i] << ",\t";
    }
    cout <<  endl;

    // 【3】等待任意按键按下
    waitKey(0);
    return 0;
}#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
