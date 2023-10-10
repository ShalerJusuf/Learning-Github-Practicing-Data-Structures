#ifndef BASE_H
#define BASE_H


//Compiler check

#if defined(_MSC_VER)
#define COMPILER_CL 1
# if defined(_WIN32)
#   define OS_WINDOWS 1
#else
# error missing OS detection
#endif

#elif defined(__clang__)
#define COMPILER_CLANG 1
#elif defined(__GNUC__)
#define COMPILER_GCC 1
#elif defined(__CC_ARM)
#define COMPILER_ARM
#else
# error no context cracking for this compiler
#endif



//Operating system check
/*
_WIN32              //is weirdly used for both 32 and 64
__ANDROID__
__gnu_linux__
__linux__
__APPLE__ && __MACH__
*/



//Zero Fill Compiler

#if !defined(_MSC_VER)
#define COMPILER_CL 0
#endif
#if !defined(__clang__)
#define COMPILER_CLANG 0
#endif
#if !defined(__GNUC__)
#define COMPILER_GCC 0
#endif
#if !defined(__CC_ARM)
#define COMPILER_ARM 0
#endif

//Zero fill OS

#endif
