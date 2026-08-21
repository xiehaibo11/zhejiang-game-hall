package com.qihoo360.replugin.compat;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class LocalBroadcastManagerSupport extends com.qihoo360.replugin.compat.LocalBroadcastManager {
    private final android.support.v4.content.LocalBroadcastManager localBroadcastManager;

    public LocalBroadcastManagerSupport(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.support.v4.content.LocalBroadcastManager r1 = android.support.v4.content.LocalBroadcastManager.getInstance(r1)
            r0.localBroadcastManager = r1
            return
    }

    @Override
    public void registerReceiver(android.content.BroadcastReceiver r2, android.content.IntentFilter r3) {
            r1 = this;
            android.support.v4.content.LocalBroadcastManager r0 = r1.localBroadcastManager
            r0.registerReceiver(r2, r3)
            return
    }

    @Override
    public boolean sendBroadcast(android.content.Intent r2) {
            r1 = this;
            android.support.v4.content.LocalBroadcastManager r0 = r1.localBroadcastManager
            boolean r2 = r0.sendBroadcast(r2)
            return r2
    }

    @Override
    public void sendBroadcastSync(android.content.Intent r2) {
            r1 = this;
            android.support.v4.content.LocalBroadcastManager r0 = r1.localBroadcastManager
            r0.sendBroadcastSync(r2)
            return
    }

    @Override
    public void unregisterReceiver(android.content.BroadcastReceiver r2) {
            r1 = this;
            android.support.v4.content.LocalBroadcastManager r0 = r1.localBroadcastManager
            r0.unregisterReceiver(r2)
            return
    }
}
