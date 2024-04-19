#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#define PI 3.14159265358

int main(void) {
  int a = 2;
  int b = 13543546;

  // %d表示输出一个int型数据
  printf("d =%d\n", b);

  // %nd，其中n可以是任意数字，表示输出的最小宽度
  // %2d：表示最小宽度是2，如果小于2，则默认用空格代替空位
  printf("2d =%2d\n", a);

  return 0;
}
