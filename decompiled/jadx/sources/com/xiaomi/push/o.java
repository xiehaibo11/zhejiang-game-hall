package com.xiaomi.push;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.HandlerThread;

/* JADX INFO: loaded from: classes4.dex */
public class o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Handler f8264a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final Object f833a = new Object();
    private static volatile Handler b;

    public static Intent a(Context context, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        return a(context, broadcastReceiver, intentFilter, null);
    }

    public static Intent a(Context context, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter, String str) {
        if (context == null || broadcastReceiver == null || intentFilter == null) {
            return null;
        }
        return context.registerReceiver(broadcastReceiver, intentFilter, str, b());
    }

    public static Handler a() {
        if (b == null) {
            synchronized (f833a) {
                if (b == null) {
                    HandlerThread handlerThread = new HandlerThread("receiver_task");
                    handlerThread.start();
                    b = new Handler(handlerThread.getLooper());
                }
            }
        }
        return b;
    }

    private static void a(Context context, ComponentName componentName) {
        b().post(new p(context, componentName));
    }

    public static void a(Context context, Class<?> cls) {
        if (context == null || cls == null) {
            return;
        }
        a(context, new ComponentName(context, cls));
    }

    private static Handler b() {
        if (f8264a == null) {
            synchronized (o.class) {
                if (f8264a == null) {
                    HandlerThread handlerThread = new HandlerThread("handle_receiver");
                    handlerThread.start();
                    f8264a = new Handler(handlerThread.getLooper());
                }
            }
        }
        return f8264a;
    }
}
