package com.alipay.sdk.m.u;

import com.bianfeng.libuniverse.Device;

public enum g {
    c(0, "WIFI"),
    d(1, "unicom2G"),
    e(2, "mobile2G"),
    f(4, "telecom2G"),
    g(5, "telecom3G"),
    h(6, "telecom3G"),
    i(12, "telecom3G"),
    j(8, "unicom3G"),
    k(3, "unicom3G"),
    l(13, "LTE"),
    m(11, "IDEN"),
    n(9, "HSUPA"),
    o(10, "HSPA"),
    p(15, "HSPAP"),
    q(20, "5G"),
    r(-1, Device.NETWORN_NONE);

    public int a;
    public String b;

    g(int i2, String str) {
        this.a = i2;
        this.b = str;
    }

    public final int a() {
        return this.a;
    }

    public final String b() {
        return this.b;
    }

    public static g a(int i2) {
        for (g gVar : values()) {
            if (gVar.a() == i2) {
                return gVar;
            }
        }
        return r;
    }
}
