#include <jni.h>
#include "NitroLocationOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::nitro_location::initialize(vm);
}
