// Define Operating Systems

// Windows
#if defined(_WIN32) || defined(_WIN64)
    #define DYNAMIC_LIB_EXT ".dll"
    #define PROGRAM_EXT ".exe"
    #if defined(_WIN64)
        #define PLATSUBDIR "win64"
    #else
        #define PLATSUBDIR "win32"
    #endif

// OSX
#elif defined(__APPLE__) || defined(__OSX__)
    #define PROGRAM_EXT ""
    #define DYNAMIC_LIB_EXT ".dylib"
    #define PLATSUBDIR "osx32"

// Linux
#elif defined(__linux__) || defined (__unix__) || defined (POSIX)
    #define DYNAMIC_LIB_EXT ".so"
    #define PROGRAM_EXT ""
    #if defined(__x86_64__) || defined(__ppc64__)
        #define PLATSUBDIR "linux64"
    #elif defined(__aarch64__)
        #define PLATSUBDIR "linuxarm64"
    #else
        #define PLATSUBDIR "linux32"
    #endif

// Android
#elif defined(__ANDROID__)
    #if defined(__aarch64__)
        #define PLATSUBDIR "androidarm64"
    #else
        #define PLATSUBDIR "androidarm32"
    #endif

// Unknown platform
#else
    #warning "Unknown platform for PLATSUBDIR"
    #define PLATSUBDIR "unknown_platform"
#endif
