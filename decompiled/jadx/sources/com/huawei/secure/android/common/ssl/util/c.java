package com.huawei.secure.android.common.ssl.util;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f2258a;

    public static Context a() {
        return f2258a;
    }

    public static void a(Context context) {
        if (context == null || f2258a != null) {
            return;
        }
        f2258a = context.getApplicationContext();
    }
}
