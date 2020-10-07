#include <iostream>
#include <cmath>
#include <string>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#  include "MathFunctions.h"
#endif

int main(int argc, char *argv[])
{
	if (argc < 3) {
	// report version
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
					<< Tutorial_VERSION_MINOR << std::endl;
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		const double inputValue = std::stod(argv[1]);

		#ifdef USE_MYMATH
		const double outputValue = mysqrt(inputValue);
		#else
		const double outputValue = std::sqrt(inputValue);
		#endif

		std::cout << outputValue << std::endl;
	}
	return 0;

}