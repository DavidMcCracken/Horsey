#pragma once

#include "Core.h"

namespace Horsey {

	class  HORSEY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//TO be defined in client 
	Application* CreateApplication();

}


