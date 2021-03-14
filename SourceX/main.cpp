#include <SDL.h>
#ifdef __SWITCH__
#include "platform/switch/network.h"
#endif
#ifdef __3DS__
#include "platform/ctr/system.h"
#endif
#ifdef RUN_TESTS
#include <gtest/gtest.h>
#endif

#include "all.h"

#if !defined(__APPLE__)
extern "C" const char *__asan_default_options()
{
	return "halt_on_error=0";
}
#endif

int main(int argc, char **argv)
{
#ifdef RUN_TESTS
    testing::InitGoogleTest(&argc, argv);
    auto test_result = RUN_ALL_TESTS();
    for(auto i = 0; i < argc; ++i)
        if(strcasecmp(argv[i], "--tests-only") == 0)
        return test_result;
#endif
#ifdef __SWITCH__
	switch_enable_network();
#endif
#ifdef __3DS__
	ctr_sys_init();
#endif
	return dvl::DiabloMain(argc, argv);
}
