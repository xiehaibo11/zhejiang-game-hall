package com.alipay.sdk.util;

import com.bianfeng.libuniverse.Device;

public enum d {
    a(0, "WIFI"),
    b(1, "unicom2G"),
    c(2, "mobile2G"),
    d(4, "telecom2G"),
    e(5, "telecom3G"),
    f(6, "telecom3G"),
    g(12, "telecom3G"),
    h(8, "unicom3G"),
    i(3, "unicom3G"),
    j(13, "LTE"),
    k(11, "IDEN"),
    l(9, "HSUPA"),
    m(10, "HSPA"),
    n(15, "HSPAP"),
    o(-1, Device.NETWORN_NONE);

    private int p;
    private String q;

    d(int i2, String str) {
        this.p = i2;
        this.q = str;
    }

    public final int a() {
        return this.p;
    }

    public final String b() {
        return this.q;
    }

    public static d a(int i2) {
        for (d dVar : values()) {
            if (dVar.a() == i2) {
                return dVar;
            }
        }
        return o;
    }
}
