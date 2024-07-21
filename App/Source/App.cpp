#include "Core/Core.h"

int main()
{
	Core::initializeAudio();
	Core::startAudio();
	Core::terminateAudio();

	return 0;
}