#include <iostream>
#include <vector>
using namespace std;

class ArrayBub  {
private:
    vector<double> v;
    int nElems;

    void swap(int one, int two)   {

        double temp = v[one];
        v[one] = v[two];
        v[two] = temp;
    }

public:
    ArrayBub(int max): nElems(0) {
        v.resize(max);
    }

    void insert(double value)   {
        v[nElems] = value;
        nElems++;
    }

    void bubblesort()
    {
        int out,in;

        for(out=nElems-1;out>1;out--)
            for(in=0;in<out;in++)
               if(v[in]>v[in+1])
                  swap(in, in+1);
    }

    void display()  {
        for(int j=0;j<nElems;j++)
            cout<<v[j]<<" ";
        cout<<endl;
    }

};

int main()
{
    ArrayBub arr(100);


    arr.insert(22);
    arr.insert(88);
    arr.insert(44);
    arr.insert(99);
    arr.insert(11);
    arr.insert(33);
    arr.insert(0);
    arr.insert(55);
    arr.insert(66);
    arr.insert(77);

    arr.display();

    arr.bubblesort();

    arr.display();
    return 0;
}
