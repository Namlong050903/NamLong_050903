#include <iostream>
using namespace std;
class date{
    private:
        int ngay,thang,nam;
    public:
        date(){
            ngay = 5;

        }
        date(int ng,int th,int na){
            cout<<"Chay ham khoi tao 2: "<<endl;
            ngay = ng;
            thang = th;
            nam = na;
        }
        void setNgay(int value){
            //??ngay = value;

        }
        int getNgay(){
            
            return ngay;
        }    
};
int main(){
    date d1;
    
    cout<<"Ngay sinh cua co ay la: "<<d1.getNgay()<<endl;
}