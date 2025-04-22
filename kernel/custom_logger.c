#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"
void log_message(log_level_t level, const char *message) {
    switch (level) {
        case LOG_INFO:
               printf("\033[0;32m[INFO] %s\033[0m\n", message);
            break;
        case LOG_WARNING:
            printf("\033[33m[WARNING] %s\033[0m\n", message); // رنگ زرد
            break;
        case LOG_ERROR:
            printf("\033[31m[ERROR] %s\033[0m\n", message); // رنگ قرمز
            break;
    }
}