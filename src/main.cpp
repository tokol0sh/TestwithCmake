#include <cstdio>
#include "Serial/serial.h"

int main(int argc, char** argv) {
		printf("Hello World\n");
		serial::Serial SerialPort("COM1", 115200, serial::Timeout::simpleTimeout(1000));
		return 0;
}