#include <stdio.h>
#include <Configuration.h>
#include <util/log.h>
#include <libconfig.h++>

using namespace logid;

LogLevel logid::global_loglevel = INFO;
libconfig::Config _config;

int main(int argc, char *argv[])
{
    _config.readFile("logid.cfg"); // Fuzzing point

    return 0;
}
