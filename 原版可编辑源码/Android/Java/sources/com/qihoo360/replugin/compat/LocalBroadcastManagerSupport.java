package com.qihoo360.replugin.compat;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class LocalBroadcastManagerSupport extends LocalBroadcastManager {
    private final android.support.v4.content.LocalBroadcastManager localBroadcastManager;

    public LocalBroadcastManagerSupport(Context context) {
        this.localBroadcastManager = android.support.v4.content.LocalBroadcastManager.getInstance(context);
    }

    @Override
    public void registerReceiver(BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        this.localBroadcastManager.registerReceiver(broadcastReceiver, intentFilter);
    }

    @Override
    public void unregisterReceiver(BroadcastReceiver broadcastReceiver) {
        this.localBroadcastManager.unregisterReceiver(broadcastReceiver);
    }

    @Override
    public boolean sendBroadcast(Intent intent) {
        return this.localBroadcastManager.sendBroadcast(intent);
    }

    @Override
    public void sendBroadcastSync(Intent intent) {
        this.localBroadcastManager.sendBroadcastSync(intent);
    }
}
