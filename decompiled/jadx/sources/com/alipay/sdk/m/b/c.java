package com.alipay.sdk.m.b;

import android.content.Context;
import android.os.Looper;

/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static b f1161a;
    public static boolean b;

    public static synchronized String a(Context context) {
        if (context == null) {
            throw new RuntimeException("Context is null");
        }
        if (Looper.myLooper() == Looper.getMainLooper()) {
            throw new IllegalStateException("Cannot be called from the main thread");
        }
        b(context);
        b bVar = f1161a;
        if (bVar != null) {
            try {
                return bVar.a(context);
            } catch (Exception unused) {
            }
        }
        return null;
    }

    public static void b(Context context) {
        if (f1161a != null || b) {
            return;
        }
        synchronized (c.class) {
            if (f1161a == null && !b) {
                f1161a = com.alipay.sdk.m.c.a.a(context);
                b = true;
            }
        }
    }
}
