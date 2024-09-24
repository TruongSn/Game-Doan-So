#include <iostream>
#include <cstdlib> //Thuw vien cho ham rand(), srand()
#include <ctime> //Thu vien cho ham time ()
using namespace std;
int main (){
    // Tao ra so ngau nhien
    srand(time(0));
    int target = rand()%100+1;
    int guess;
    cout<<"Chao mung Mai Xuan den voi tro choi doan so: ";
    cout<<endl;
    cout<<"Mai Xuan hay doan mot so tu 1 den 100 di !!!";
    cout<<endl;
    while (true){
        cout<<"Nhap so du doan cua ban: ";
        
        cin>>guess;
        if (guess>target){
            cout<<"So ban doan lon hon dap an !";
            cout<<endl;
        }else if (guess<target){
            cout<<"So ban doan nho hon dap an !";
        }else {
            cout<<"Chuc mung Mai Xuan da doan trung !!!";
            break;
        }
    }
    return 0;
}

/*
Giai thich: 
srand(time(0)): Sử dụng thời gian hiện tại để khởi tạo giá trị cho hàm rand(), giúp mỗi lần chạy chương trình sẽ tạo ra một số ngẫu nhiên khác nhau.
rand() % 100 + 1: Tạo số ngẫu nhiên trong khoảng từ 1 đến 100.
*/