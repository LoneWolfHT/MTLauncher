#include <iostream>

#include "config.h"

int main(int argc, char *argv[])
{
	std::cout << "[MTLauncher] Version " << MTLauncher_VERSION << std::endl << std::endl;

	bool gui_mode = false;

	int i;
	std::string arg;

	#ifdef WINDOWS
		gui_mode = true;
	#endif

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			arg = std::string(argv[i]);

			if (arg == "--help" || arg == "-h")
				std::cout << "Available commands: \n"
					"--help [-h]: Show this help text\n"
					"--gui  [-g]: Run in GUI mode (This is the default on Windows)" << std::endl;
		}
	}

	return(0);
}
