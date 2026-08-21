package com.tramini.plugin.a.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;

/* JADX INFO: loaded from: classes4.dex */
public class b {
    private static volatile b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f7819a;

    private b(Context context) {
        this.f7819a = context;
    }

    public static b a(Context context) {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b(context.getApplicationContext());
                }
            }
        }
        return b;
    }

    public final void a(BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        try {
            LocalBroadcastManager.getInstance(this.f7819a).registerReceiver(broadcastReceiver, intentFilter);
        } catch (Throwable unused) {
        }
        try {
            android.support.v4.content.LocalBroadcastManager.getInstance(this.f7819a).registerReceiver(broadcastReceiver, intentFilter);
        } catch (Throwable unused2) {
        }
    }

    public final void a(BroadcastReceiver broadcastReceiver) {
        try {
            LocalBroadcastManager.getInstance(this.f7819a).unregisterReceiver(broadcastReceiver);
        } catch (Throwable unused) {
        }
        try {
            android.support.v4.content.LocalBroadcastManager.getInstance(this.f7819a).unregisterReceiver(broadcastReceiver);
        } catch (Throwable unused2) {
        }
    }

    private void a(Intent intent) {
        try {
            LocalBroadcastManager.getInstance(this.f7819a).sendBroadcast(intent);
        } catch (Throwable unused) {
        }
        try {
            android.support.v4.content.LocalBroadcastManager.getInstance(this.f7819a).sendBroadcast(intent);
        } catch (Throwable unused2) {
        }
    }
}
