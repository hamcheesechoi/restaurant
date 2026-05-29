#include <iostream>
#include "sms_sender.cpp"

class TestableSmsSensor : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "Testable SmsSender class's send method executed\n";
		sendMethodIsCalled = true;
	}
	bool isSendMethodIsCalled() {
		return sendMethodIsCalled;
	}
private:
	bool sendMethodIsCalled;
};