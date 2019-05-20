#ifndef DATAFILLER_H
#define DATAFILLER_H
#include <vector>
#include <string>
class QLabel;
using namespace std;
class DataFiller
{
public:
    DataFiller();
    void xLayout();

private:
    vector<string> xAxis;
    vector<string>zAxis;
    vector<vector<double>> yAxis;
    string xName;
    string yName;
    string zName;
    QLabel* label1;
};

#endif // DATAFILLER_H
