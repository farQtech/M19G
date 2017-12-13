#include <emscripten/bind.h>

using namespace emscripten;

float lerp(float a, float b) {
    return multiply_in_js(a,b);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("lerp", &lerp);
}