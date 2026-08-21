package com.iab.omid.library.mmadbridge.internal;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    private static f b = new f();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2380a;

    private f() {
    }

    public static f b() {
        return b;
    }

    public Context a() {
        return this.f2380a;
    }

    public void a(Context context) {
        this.f2380a = context != null ? context.getApplicationContext() : null;
    }
}
