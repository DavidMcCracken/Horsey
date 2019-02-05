#include <Horsey.h>

class Sandbox : public Horsey::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Horsey::Application* Horsey::CreateApplication() {

	return new Sandbox();
}