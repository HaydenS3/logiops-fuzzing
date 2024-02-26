#include <stdio.h>
#include <Configuration.h>
#include <util/log.h>
#include <libconfig.h++>

using namespace logid;

LogLevel logid::global_loglevel = INFO;
libconfig::Config _config;

int main(int argc, char *argv[])
{
    // Read file name from command line
    if (argc != 2)
    {
        printf("Usage: %s <config_file>\n", argv[0]);
        return 1;
    }

    _config.readFile(argv[1]); // Fuzzing point

    return 0;
}
