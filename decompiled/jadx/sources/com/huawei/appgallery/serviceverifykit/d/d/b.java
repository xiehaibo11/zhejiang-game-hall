package com.huawei.appgallery.serviceverifykit.d.d;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class b {
    public static final b b = new b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f1953a;

    private b() {
        try {
            Class.forName("com.huawei.appgallery.log.LogAdaptor");
            this.f1953a = true;
        } catch (ClassNotFoundException unused) {
            this.f1953a = false;
        }
    }

    public void a(String str, String str2) {
        if (this.f1953a) {
            a.f1952a.e(str, str2);
        } else {
            Log.e(str, str2);
        }
    }

    public void a(String str, String str2, Throwable th) {
        if (this.f1953a) {
            a.f1952a.e(str, str2, th);
        } else {
            Log.e(str, str2, th);
        }
    }

    public void b(String str, String str2) {
        if (this.f1953a) {
            a.f1952a.i(str, str2);
        } else {
            Log.i(str, str2);
        }
    }

    public void c(String str, String str2) {
        if (this.f1953a) {
            a.f1952a.w(str, str2);
        } else {
            Log.w(str, str2);
        }
    }
}
