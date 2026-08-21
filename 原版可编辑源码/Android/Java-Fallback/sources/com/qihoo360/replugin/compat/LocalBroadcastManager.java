package com.qihoo360.replugin.compat;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public abstract class LocalBroadcastManager {
    public LocalBroadcastManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.qihoo360.replugin.compat.LocalBroadcastManager getInstance(android.content.Context r1) {
            boolean r0 = com.qihoo360.replugin.compat.CompatConfig.DEPENDENCY_ANDROIDX
            if (r0 == 0) goto La
            com.qihoo360.replugin.compat.LocalBroadcastManagerAndroidX r0 = new com.qihoo360.replugin.compat.LocalBroadcastManagerAndroidX
            r0.<init>(r1)
            return r0
        La:
            boolean r0 = com.qihoo360.replugin.compat.CompatConfig.DEPENDENCY_SUPPORT
            if (r0 == 0) goto L14
            com.qihoo360.replugin.compat.LocalBroadcastManagerSupport r0 = new com.qihoo360.replugin.compat.LocalBroadcastManagerSupport
            r0.<init>(r1)
            return r0
        L14:
            r1 = 0
            return r1
    }

    public abstract void registerReceiver(android.content.BroadcastReceiver r1, android.content.IntentFilter r2);

    public abstract boolean sendBroadcast(android.content.Intent r1);

    public abstract void sendBroadcastSync(android.content.Intent r1);

    public abstract void unregisterReceiver(android.content.BroadcastReceiver r1);
}
