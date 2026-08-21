package com.huawei.updatesdk.a.b.a;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static final Object b = new Object();
    private static a c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2305a;

    public a(Context context) {
        this.f2305a = context.getApplicationContext();
    }

    public static void a(Context context) {
        synchronized (b) {
            if (c == null) {
                c = new a(context);
            }
        }
    }

    public static a c() {
        a aVar;
        synchronized (b) {
            aVar = c;
        }
        return aVar;
    }

    public Context a() {
        return this.f2305a;
    }

    public String b() {
        Context context = this.f2305a;
        return (context == null || context.getFilesDir() == null) ? "" : this.f2305a.getFilesDir().getAbsolutePath();
    }
}
