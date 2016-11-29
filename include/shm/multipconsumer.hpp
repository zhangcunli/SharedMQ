#ifndef __MULTIPCONSUMER_HEADER__
#define __MULTIPCONSUMER_HEADER__

#include "singleconsumer.hpp"

class MutilPConsumer: public Consumer
{
public:
    MutilPConsumer(const char *conf_path);
    ~MutilPConsumer();
    int readData(void* buffer, unsigned buffer_size, unsigned &data_len);
    int readDataNoWait(void* buffer, unsigned buffer_size, unsigned &data_len);
    int readDataTimeout(void* buffer, unsigned buffer_size, unsigned &data_len, int timeout/*milliseconds*/);
private:
    int fd;//open flock file
};

#endif