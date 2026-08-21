package com.qihoo360.replugin.component.dummy;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DummyReceiver extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        LogRelease.i(LogDebug.PLUGIN_TAG, "d.r o.c f");
    }
}
