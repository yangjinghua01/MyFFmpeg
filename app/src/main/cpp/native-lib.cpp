#include <jni.h>
#include <string>
extern "C"{
#include <libavutil/avutil.h>//版本号
#include "libavformat/avformat.h"//打开封装文件.mp4 .flv等
#include "libavcodec/avcodec.h"//音频 视频编码 解码 工程
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myffmpeg_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "当前的ffmpeg的版本是：";
    hello.append(av_version_info());
    return env->NewStringUTF(hello.c_str());
}