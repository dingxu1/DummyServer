#include <signal.h>

namespace Dummy{
namespace net{

class IgnoreSigPipe
{
public:
	IgnoreSigPipe()
	{
		signal(SIGPIPE, SIG_IGN);
	}

};
}
}
