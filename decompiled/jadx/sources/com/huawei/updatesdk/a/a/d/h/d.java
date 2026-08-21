package com.huawei.updatesdk.a.a.d.h;

/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f2302a = -1;

    public static int a() {
        if (f2302a == -1) {
            f2302a = (com.tkay.expressad.video.dynview.a.a.Q.equals(c.a("ro.product.locale.language", "")) && "CN".equals(c.a("ro.product.locale.region", ""))) ? 0 : 1;
        }
        return f2302a;
    }
}
