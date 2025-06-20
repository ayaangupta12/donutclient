/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_lax1dude_eaglercraft_v1_8_internal_PlatformInput */

#ifndef _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
#define _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getWindowWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getWindowWidth
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getWindowHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getWindowHeight
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getVisualViewportX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getVisualViewportX
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getVisualViewportY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getVisualViewportY
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getVisualViewportW
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getVisualViewportW
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getVisualViewportH
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getVisualViewportH
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getWindowFocused
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getWindowFocused
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    isCloseRequested
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_isCloseRequested
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    setVSync
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_setVSync
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    update
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_update__
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    update
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_update__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    isVSyncSupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_isVSyncSupported
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    wasResized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_wasResized
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    wasVisualViewportResized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_wasVisualViewportResized
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardNext
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardNext
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardFireEvent
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/EnumFireKeyboardEvent;IC)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardFireEvent
  (JNIEnv *, jclass, jobject, jint, jchar);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardGetEventKeyState
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardGetEventKeyState
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardGetEventKey
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardGetEventKey
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardGetEventCharacter
 * Signature: ()C
 */
JNIEXPORT jchar JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardGetEventCharacter
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardIsKeyDown
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardIsKeyDown
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardIsRepeatEvent
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardIsRepeatEvent
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardEnableRepeatEvents
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardEnableRepeatEvents
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    keyboardAreKeysLocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_keyboardAreKeysLocked
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseNext
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseNext
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseFireMoveEvent
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/EnumFireMouseEvent;II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseFireMoveEvent
  (JNIEnv *, jclass, jobject, jint, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseFireButtonEvent
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/EnumFireMouseEvent;III)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseFireButtonEvent
  (JNIEnv *, jclass, jobject, jint, jint, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseFireWheelEvent
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/EnumFireMouseEvent;IIF)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseFireWheelEvent
  (JNIEnv *, jclass, jobject, jint, jint, jfloat);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetEventButtonState
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetEventButtonState
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetEventButton
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetEventButton
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetEventX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetEventX
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetEventY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetEventY
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetEventDWheel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetEventDWheel
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetX
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetY
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseIsButtonDown
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseIsButtonDown
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetDWheel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetDWheel
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGrabSupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGrabSupported
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseSetGrabbed
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseSetGrabbed
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    isMouseGrabbed
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_isMouseGrabbed
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    isPointerLocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_isPointerLocked
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetDX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetDX
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseGetDY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseGetDY
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseSetCursorPosition
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseSetCursorPosition
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    mouseIsInsideWindow
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_mouseIsInsideWindow
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    contextLost
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_contextLost
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    setFunctionKeyModifier
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_setFunctionKeyModifier
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    supportsFullscreen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_supportsFullscreen
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    toggleFullscreen
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_toggleFullscreen
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    isFullscreen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_isFullscreen
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    showCursor
 * Signature: (Lnet/lax1dude/eaglercraft/v1_8/internal/EnumCursorType;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_showCursor
  (JNIEnv *, jclass, jobject);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchNext
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchNext
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventType
 * Signature: ()Lnet/lax1dude/eaglercraft/v1_8/internal/EnumTouchEvent;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventType
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventTouchPointCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventTouchPointCount
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventTouchX
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventTouchX
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventTouchY
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventTouchY
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventTouchRadiusMixed
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventTouchRadiusMixed
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventTouchForce
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventTouchForce
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetEventTouchPointUID
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetEventTouchPointUID
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchPointCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchPointCount
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchPointX
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchPointX
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchPointY
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchPointY
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchRadiusMixed
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchRadiusMixed
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchForce
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchForce
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchPointUID
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchPointUID
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchGetPastedString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchGetPastedString
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchSetOpenKeyboardZone
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchSetOpenKeyboardZone
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchCloseDeviceKeyboard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchCloseDeviceKeyboard
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    touchIsDeviceKeyboardOpenMAYBE
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_touchIsDeviceKeyboardOpenMAYBE
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadGetValidDeviceCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadGetValidDeviceCount
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadGetDeviceName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadGetDeviceName
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadSetSelectedDevice
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadSetSelectedDevice
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadUpdate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadUpdate
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadIsValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadIsValid
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadGetName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadGetName
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadGetButtonState
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadGetButtonState
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    gamepadGetAxis
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_gamepadGetAxis
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformInput
 * Method:    getDPI
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformInput_getDPI
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
