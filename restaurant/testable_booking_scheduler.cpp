#include "booking_scheduler.cpp"

class TestableBookingScheduler : public BookingScheduler {
private:
	tm dateTime;
public:
	TestableBookingScheduler(int capacityPerHour, tm dateTime) :
		BookingScheduler{ capacityPerHour },
		dateTime{ dateTime } {

	}

	time_t getNow() override {
		return mktime(&dateTime);
	}
};