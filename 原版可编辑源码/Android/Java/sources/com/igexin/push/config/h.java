package com.igexin.push.config;

public class h {
    private static h a;

    private h() {
    }

    public static synchronized h a() {
        if (a == null) {
            a = new h();
        }
        return a;
    }

    public boolean b() throws Throwable {
        m.a();
        k.a();
        return true;
    }
}
