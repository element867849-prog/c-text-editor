#include <stdio.h>
#include <conio.h>
#include <windows.h> 

int main() {
    // 设置终端为 UTF-8 编码，防止中文乱码
    SetConsoleOutputCP(65001);

    printf("==== 终端控制测试 (Raw Mode) ====\n");
    printf("请在键盘上按任意键（按下立刻响应，无需按回车！）。\n");
    printf("按 'Esc' 键退出程序。\n");
    printf("-----------------------------------\n\n");

    char c;
    // _getch() 会直接读取键盘输入，不需要等待用户按回车，也不会在屏幕上自动回显
    while ((c = _getch()) != 27) {
            if(c ==32) 
            {
                printf("你按下了空格\n");
                continue;
            }
        printf("你按下了按键: '%c' | ASCII码: %d\n", c, (unsigned char)c);
    }


    printf("\n收到 'Esc' 键，退出程序。第二天任务顺利完成！\n");
    return 0;
}