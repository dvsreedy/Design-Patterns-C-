#ifndef logger_h
#define logger_h

#include <mutex>
#include <string>

using namespace std;


class Logger
{
    static int ctr;
    static Logger* loggerInstance;
    static mutex mtx;
    Logger();
    Logger(const Logger &);
    Logger operator=(const Logger &);
    public:
        static Logger* getLogger();
        void Log(string);
};


#endif