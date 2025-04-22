#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

typedef enum {
    LOG_INFO,    // سطح اطلاعاتی
    LOG_WARNING, // سطح هشدار
    LOG_ERROR    // سطح خطا
} log_level_t;

void log_message(log_level_t level, const char *message);

#endif // CUSTOM_LOGGER_H