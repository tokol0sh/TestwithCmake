#include <cstdio>
#include "Serial/serial.h"

int main(int argc, char** argv) {

	std::vector<uint8_t> buffer;
	printf("Hello World\n");
	serial::Serial SerialPort("COM2", 115200, serial::Timeout::simpleTimeout(1000));
	while (1) {
		if (!SerialPort.available()) {
			printf("No data\n");
		}
		else {
			SerialPort.read(buffer, 1);
		}
	}
	return 0;
}