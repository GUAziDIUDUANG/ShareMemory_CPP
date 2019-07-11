#include <stdio.h>
#include <string.h>
#include <iostream>
#include "ShareMemory.h"

int main(void) {

	//读写内存结构体
	ShareMemory* write = new ShareMemory(30, 1024);
	ShareMemory* read = new ShareMemory(30);

	//写
	write->mapShm();
  write->shmWrite("Hello World", 12);
	write->unmapShm();

	//读
	read->mapShm();
	read->shmRead(12, NULL);
	read->unmapShm();

	getchar();

	return 0;
}
