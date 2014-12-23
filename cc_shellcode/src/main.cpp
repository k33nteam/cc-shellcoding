#include <stdio.h>
#include <memory>

#define USER

#ifdef USER
#include <windows.h>
#include <loader/src/user/libc.cpp>
#include <loader/src/user/UserModule.hpp>
#else
#include <ntifs.h>
#include <loader/src/kernel/libc.cpp>
#include <loader/src/kernel/KernelModule.hpp>
#endif

#include <loader/src/Loader.hpp>

#include <stdlib.h>

//all final compilation settings are set in this lib
//code it is just wrapper to your custom Project (CVE) which exports exploit function!

#include <CVE/src/main.cpp>

bool
main()
{
	exploit();
	return true;
};
