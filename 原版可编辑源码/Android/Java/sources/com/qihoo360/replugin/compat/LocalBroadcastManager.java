package com.qihoo360.replugin.compat;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public abstract class LocalBroadcastManager {
    public abstract void registerReceiver(BroadcastReceiver broadcastReceiver, IntentFilter intentFilter);

    public abstract boolean sendBroadcast(Intent intent);

    public abstract void sendBroadcastSync(Intent intent);

    public abstract void unregisterReceiver(BroadcastReceiver broadcastReceiver);

    public static LocalBroadcastManager getInstance(Context context) {
        if (CompatConfig.DEPENDENCY_ANDROIDX) {
            return new LocalBroadcastManagerAndroidX(context);
        }
        if (CompatConfig.DEPENDENCY_SUPPORT) {
            return new LocalBroadcastManagerSupport(context);
        }
        return null;
    }
}
