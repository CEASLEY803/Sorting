#include "Sort.h"
#include <emscripten.h>
#include <string>

extern "C" {

EMSCRIPTEN_KEEPALIVE
void sortArray(int* arr, int size, const char* method) {
    Sorter sorter;
    std::string methodStr(method);
    sorter.sort(arr, size, methodStr);
}

}
