#include <AstraCore.h>

class Sandbox : public AstraCore::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};

AstraCore::Application* AstraCore::CreateApplication()
{
	return new Sandbox();
}