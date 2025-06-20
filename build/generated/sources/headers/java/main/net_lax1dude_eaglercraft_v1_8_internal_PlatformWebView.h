/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView */

#ifndef _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
#define _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    supported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_supported
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    isShowing
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_isShowing
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    setPacketSendCallback
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/webview/WebViewOverlayController/IPacketSendCallback;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_setPacketSendCallback
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    runTick
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_runTick
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    handleMessageFromServer
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/socket/protocol/pkt/server/SPacketWebViewMessageV4EAG;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_handleMessageFromServer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    beginShowing
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/WebViewOptions;IIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_beginShowing
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    resize
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_resize
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    endShowing
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_endShowing
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    fallbackSupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_fallbackSupported
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    launchFallback
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/WebViewOptions;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_launchFallback
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    fallbackRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_fallbackRunning
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    getFallbackURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_getFallbackURL
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebView
 * Method:    endFallbackServer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebView_endFallbackServer
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
