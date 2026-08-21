package com.qihoo360.replugin.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class LocalBroadcastHelper {


    public LocalBroadcastHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void sendBroadcastSyncUi(android.content.Context r1, android.content.Intent r2) {
            com.qihoo360.replugin.base.LocalBroadcastHelper$1 r0 = new com.qihoo360.replugin.base.LocalBroadcastHelper$1     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lb
            r1 = 10000(0x2710, float:1.4013E-41)
            com.qihoo360.replugin.base.ThreadUtils.syncToMainThread(r0, r1)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r1 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            r2.<init>(r1)
            throw r2
    }
}
