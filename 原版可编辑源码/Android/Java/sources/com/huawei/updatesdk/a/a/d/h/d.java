package com.huawei.updatesdk.a.a.d.h;

public class d {
    private static int a = -1;

    public static int a() {
        if (a == -1) {
            a = (com.tkay.expressad.video.dynview.a.a.Q.equals(c.a("ro.product.locale.language", "")) && "CN".equals(c.a("ro.product.locale.region", ""))) ? 0 : 1;
        }
        return a;
    }
}
