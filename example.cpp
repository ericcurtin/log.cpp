#include "log.h"

int main() {
    logd("This is a debug message\n");
    logi("This is an info message\n");
    logw("This is a warning message\n");
    loge("This is an error message\n");
    logc("This is a critical message\n");
}
