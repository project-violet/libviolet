// NOTE: Append the lines below to ios/Classes/LibVioletPlugin.h

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

char *rust_greeting(const char *to);

void downloader_init(int64_t queue_size);

void downloader_dispose(void);

char *downloader_status(void);

void downloader_append(const char *to);
