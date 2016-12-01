#include <cstdio>
#include <iostream>
#include "Serial/serial.h"

int main(int argc, char** argv) {

	std::vector<uint8_t> buffer;
	printf("Hello World\n");
	serial::Serial SerialPort("COM2", 115200, serial::Timeout::simpleTimeout(1000));
	while (1) {
		if (!SerialPort.available()) {
		}
		else {
			SerialPort.read(buffer);
			if (buffer.back() == 65)
				break;

			SerialPort.write(buffer);
		}
	}
	
	return 0;
}