#include <cstdio>
#include <windows.h>
using namespace std;
#define KEY_DOWN(key) (GetAsyncKeyState(key)==(short)0x8000?1:0)

int main(){
    freopen("log.txt","w",stdout);
    int tps=0;
    scanf("%d",&tps);
    double delay=1.0/(double)tps*1000;
    while(true){
        Sleep(1000);
        while(true){
            if(KEY_DOWN(VK_F12)){
                printf("Start!\n");
                break;
            }
        }
        Sleep(1000);
        while(true){
            mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
            printf("Click!\n");
            mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
            Sleep(delay);
            if(KEY_DOWN(VK_F12)){
                printf("Ending?\n");
                break;
            }
        }
    } 
    return 0;
}