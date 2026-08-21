package com.tkay.core.common.b;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;

public class j {
    private static volatile j b;
    Context a;

    private j(Context context) {
        this.a = context;
    }

    public static j a(Context context) {
        if (b == null) {
            synchronized (j.class) {
                if (b == null) {
                    b = new j(context.getApplicationContext());
                }
            }
        }
        return b;
    }

    public final void a(BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        try {
            LocalBroadcastManager.getInstance(this.a).registerReceiver(broadcastReceiver, intentFilter);
        } catch (Throwable unused) {
        }
        try {
            android.support.v4.content.LocalBroadcastManager.getInstance(this.a).registerReceiver(broadcastReceiver, intentFilter);
        } catch (Throwable unused2) {
        }
    }

    public final void a(BroadcastReceiver broadcastReceiver) {
        try {
            LocalBroadcastManager.getInstance(this.a).unregisterReceiver(broadcastReceiver);
        } catch (Throwable unused) {
        }
        try {
            android.support.v4.content.LocalBroadcastManager.getInstance(this.a).unregisterReceiver(broadcastReceiver);
        } catch (Throwable unused2) {
        }
    }

    public final void a(Intent intent) {
        try {
            LocalBroadcastManager.getInstance(this.a).sendBroadcast(intent);
        } catch (Throwable unused) {
        }
        try {
            android.support.v4.content.LocalBroadcastManager.getInstance(this.a).sendBroadcast(intent);
        } catch (Throwable unused2) {
        }
    }
}
