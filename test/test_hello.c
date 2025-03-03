#include "hello.h"
#include <assert.h>

// 测试函数
void test_printHello() {
    // 调用功能函数
    // 通常可以通过断言来验证输出
    printHello("CI");
    // 如果测试通过，可以添加相应逻辑
    assert(1 == 1);
}

int main() {
    test_printHello();
    return 0;
}
