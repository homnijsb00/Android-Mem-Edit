#include <jni.h>

extern "C" JNIEXPORT jint JNICALL
Java_com_example_memedit_Native_stub(JNIEnv*, jobject) {
    return 42;
}
