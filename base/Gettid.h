#ifndef DUMMY_BASE_GETTID
#define DUMMY_BASE_GETTID

#include <sys/syscall.h>
namespace Dummy{
namespace base{
	#define gettid() syscall(__NR_gettid)
}
}

#endif
