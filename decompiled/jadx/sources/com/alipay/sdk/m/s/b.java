package com.alipay.sdk.m.s;

import android.content.Context;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public class b {
    public static b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Context f1247a;

    public static b d() {
        if (b == null) {
            b = new b();
        }
        return b;
    }

    public static boolean e() {
        String[] strArr = {"/system/app/Superuser.apk", "/sbin/su", "/system/bin/su", "/system/xbin/su", "/data/local/xbin/su", "/data/local/bin/su", "/system/sd/xbin/su", "/system/bin/failsafe/su", "/data/local/su", "/su/bin/su"};
        for (int i = 0; i < 10; i++) {
            if (new File(strArr[i]).exists()) {
                return true;
            }
        }
        return false;
    }

    public void a(Context context) {
        com.alipay.sdk.m.m.b.b();
        this.f1247a = context.getApplicationContext();
    }

    public Context b() {
        return this.f1247a;
    }

    public String c() {
        return com.alipay.sdk.m.w.b.c(null, this.f1247a);
    }

    public com.alipay.sdk.m.m.b a() {
        return com.alipay.sdk.m.m.b.b();
    }
}
