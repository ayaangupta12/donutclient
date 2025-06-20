/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC */

#ifndef _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
#define _Included_net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_initialize
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    supported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_supported
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    runScheduledTasks
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_runScheduledTasks
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    startRTCLANClient
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_startRTCLANClient
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANReadyState
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANReadyState
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANCloseConnection
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANCloseConnection
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANSendPacket
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANSendPacket
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANReadPacket
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANReadPacket
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANReadAllPacket
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANReadAllPacket
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANSetICEServersAndConnect
 * Signature: ([Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANSetICEServersAndConnect
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clearLANClientState
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clearLANClientState
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANAwaitICECandidate
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANAwaitICECandidate
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANAwaitDescription
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANAwaitDescription
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANAwaitChannel
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANAwaitChannel
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANClosed
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANClosed
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANSetICECandidate
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANSetICECandidate
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    clientLANSetDescription
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_clientLANSetDescription
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    startRTCLANServer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_startRTCLANServer
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANInitializeServer
 * Signature: ([Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANInitializeServer
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANCloseServer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANCloseServer
  (JNIEnv *, jclass);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANCreatePeer
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANCreatePeer
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANGetEvent
 * Signature: (Ljava/lang/String;)Lnet/lax1dude/eaglercraft/v1_8/sp/lan/LANPeerEvent;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANGetEvent
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANGetAllEvent
 * Signature: (Ljava/lang/String;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANGetAllEvent
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANWritePacket
 * Signature: (Ljava/lang/String;[B)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANWritePacket
  (JNIEnv *, jclass, jstring, jbyteArray);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANPeerICECandidates
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANPeerICECandidates
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANPeerDescription
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANPeerDescription
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANPeerMapIPC
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANPeerMapIPC
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    serverLANDisconnectPeer
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_serverLANDisconnectPeer
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_lax1dude_eaglercraft_v1_8_internal_PlatformWebRTC
 * Method:    countPeers
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_lax1dude_eaglercraft_v1_18_internal_PlatformWebRTC_countPeers
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
