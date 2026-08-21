package com.qihoo360.replugin.compat;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class LocalBroadcastManagerAndroidX extends LocalBroadcastManager {
    private final androidx.localbroadcastmanager.content.LocalBroadcastManager localBroadcastManager;

    public LocalBroadcastManagerAndroidX(Context context) {
        this.localBroadcastManager = androidx.localbroadcastmanager.content.LocalBroadcastManager.getInstance(context);
    }

    @Override // com.qihoo360.replugin.compat.LocalBroadcastManager
    public void registerReceiver(BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        this.localBroadcastManager.registerReceiver(broadcastReceiver, intentFilter);
    }

    @Override // com.qihoo360.replugin.compat.LocalBroadcastManager
    public void unregisterReceiver(BroadcastReceiver broadcastReceiver) {
        this.localBroadcastManager.unregisterReceiver(broadcastReceiver);
    }

    @Override // com.qihoo360.replugin.compat.LocalBroadcastManager
    public boolean sendBroadcast(Intent intent) {
        return this.localBroadcastManager.sendBroadcast(intent);
    }

    @Override // com.qihoo360.replugin.compat.LocalBroadcastManager
    public void sendBroadcastSync(Intent intent) {
        this.localBroadcastManager.sendBroadcastSync(intent);
    }
}
