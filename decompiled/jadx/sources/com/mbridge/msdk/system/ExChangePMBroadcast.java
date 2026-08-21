package com.mbridge.msdk.system;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
public class ExChangePMBroadcast extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        String action;
        String string;
        if (context == null || intent == null) {
            return;
        }
        try {
            action = intent.getAction();
        } catch (Exception unused) {
            action = null;
        }
        if (TextUtils.isEmpty(action) || !action.equals("mbridge_action_exchange_pm")) {
            return;
        }
        try {
            string = intent.getExtras().getString("pm-sender");
        } catch (Exception unused2) {
            string = null;
        }
        if (TextUtils.isEmpty(string) || TextUtils.equals(string, context.getPackageName())) {
            return;
        }
        try {
            abortBroadcast();
        } catch (Exception unused3) {
        }
        try {
            Bundle bundle = new Bundle();
            bundle.putString("pm-receiver", context.getPackageName());
            Intent intent2 = new Intent("mbridge_action_exchange_pm_receiver");
            intent2.putExtras(bundle);
            context.sendOrderedBroadcast(intent2, null);
        } catch (Exception unused4) {
        }
    }
}
