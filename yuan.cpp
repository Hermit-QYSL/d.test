#include <graphics.h>
#include <conio.h>
int main() {
    initgraph(640, 480); // 初始化图形窗口
    circle(200, 200, 150); // 绘制圆
    getch(); // 等待用户输入
    closegraph(); // 关闭图形窗口
    return 0; // 返回成功状态
}
