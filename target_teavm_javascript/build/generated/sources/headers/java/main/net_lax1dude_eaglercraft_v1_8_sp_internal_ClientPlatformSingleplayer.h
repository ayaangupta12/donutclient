/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer */

#ifndef _Included_net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
#define _Included_net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    loadIntegratedServerSourceOverride
 * Signature: ()Lorg/teavm/jso/JSObject;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_loadIntegratedServerSourceOverride
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    loadIntegratedServerSourceOverrideURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_loadIntegratedServerSourceOverrideURL
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    loadIntegratedServerSourceStack
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_loadIntegratedServerSourceStack
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    loadIntegratedServerSourceURL
 * Signature: (Lorg/teavm/jso/JSObject;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_loadIntegratedServerSourceURL
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    loadIntegratedServerSourceInline
 * Signature: (Lorg/teavm/jso/JSObject;Ljava/lang/String;)Lorg/teavm/jso/JSObject;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_loadIntegratedServerSourceInline
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    loadIntegratedServerSourceInlineStr
 * Signature: (Lorg/teavm/jso/JSObject;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_loadIntegratedServerSourceInlineStr
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    registerPacketHandler
 * Signature: (Lorg/teavm/jso/workers/Worker;Lnet/lax1dude/eaglercraft/v1_8/sp/internal/ClientPlatformSingleplayer/WorkerBinaryPacketHandler;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_registerPacketHandler
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    sendWorkerPacket
 * Signature: (Lorg/teavm/jso/workers/Worker;Ljava/lang/String;Lorg/teavm/jso/typedarrays/ArrayBuffer;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_sendWorkerPacket
  (JNIEnv *, jclass, jobject, jstring, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    sendWorkerStartPacket
 * Signature: (Lorg/teavm/jso/workers/Worker;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_sendWorkerStartPacket
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    createWorkerScriptURL
 * Signature: (Lorg/teavm/jso/JSObject;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_createWorkerScriptURL
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_sp_internal_ClientPlatformSingleplayer
 * Method:    createBlobObj
 * Signature: (Lorg/teavm/jso/typedarrays/ArrayBuffer;Ljava/lang/String;)Lorg/teavm/jso/JSObject;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_sp_internal_ClientPlatformSingleplayer_createBlobObj
  (JNIEnv *, jclass, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
