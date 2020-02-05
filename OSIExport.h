#ifndef OSIEXPORT_H
#define OSIEXPORT_H

#if defined(_WIN32) && !defined(NODLL)
#define OSIIMPORT __declspec(dllimport)
#define OSIEXPORT __declspec(dllexport)

#elif (defined(__GNUC__) && __GNUC__ >= 4 || defined(__clang__))
#define OSIEXPORT __attribute__((visibility("default")))
#define OSIIMPORT OSIEXPORT

#else
#define OSIIMPORT
#define OSIEXPORT
#endif

#if defined(open_simulation_interface_EXPORTS)
#define OSI_EXPORT OSIEXPORT
#else
#define OSI_EXPORT OSIIMPORT
#endif


#endif  // OSIEXPORT_H
