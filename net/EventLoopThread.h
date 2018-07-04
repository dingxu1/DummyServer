#include "../base/Mutex.h"
#include "../base/Condtion.h"
#include "../base/Thread.h"
#include <string>
namespace Dummy
{
namespace net
{

class EventLoop;
class EventLoopThread : boost::noncopyable
{
public:
    EventLoopThread(const std::string& name = std::string());
    ~EventLoopThread();
    EventLoop* startLoop();

private:
	void stopLoop();
    void threadFunc();
    EventLoop* loop_;
    bool exiting_;
	Dummy::base::Thread thread_;
	Dummy::base::MutexLock mutex_;
	Dummy::base::Condition cond_;
};

}
}
