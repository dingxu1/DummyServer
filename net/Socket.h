#ifndef DUMMY_NET_SOCKET
#define DUMMY_NET_SOCKET

#include <boost/noncopyable.hpp>
#include <sys/socket.h>
#include "NetAddr.h"

namespace Dummy {
namespace net{

class Socket:boost::noncopyable
{
public:
	Socket();
	Socket(int fd);
	~Socket();

	int fd()
	{
		return fd_;
	}
	int bindAddr(NetAddr addr);
	int setNodelay(bool op);
	int setReuseAddr(bool op);
	int setReusePort(bool op);
	int startListen();
	int acceptConnection(NetAddr & peer);
	int connectTo(NetAddr remoteAddr);
	static const int BACKLOG = 200;
	static int getSockError(int sockFd);

private:
	void setNoBlock();
	int fd_;	
};
}
}

#endif
