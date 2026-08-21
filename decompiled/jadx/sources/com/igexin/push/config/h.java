package com.igexin.push.config;

/* JADX INFO: loaded from: classes2.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static h f2492a;

    private h() {
    }

    public static synchronized h a() {
        if (f2492a == null) {
            f2492a = new h();
        }
        return f2492a;
    }

    public boolean b() throws Throwable {
        m.a();
        k.a();
        return true;
    }
}
