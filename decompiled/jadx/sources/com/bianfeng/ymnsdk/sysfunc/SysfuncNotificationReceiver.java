package com.bianfeng.ymnsdk.sysfunc;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.bianfeng.ymnsdk.YmnSdk;

/* JADX INFO: loaded from: classes.dex */
public class SysfuncNotificationReceiver extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        YmnSdk.callFunction("sysfunc_open_app", context.getPackageName());
    }
}
