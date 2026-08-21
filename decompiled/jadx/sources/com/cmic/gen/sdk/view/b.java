package com.cmic.gen.sdk.view;

/* JADX INFO: compiled from: LoginProxy.java */
/* JADX INFO: loaded from: classes.dex */
public class b {
    private static b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f1702a = 1;
    private a c;

    /* JADX INFO: compiled from: LoginProxy.java */
    public interface a {
        void a();
    }

    public static b a() {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                }
            }
        }
        return b;
    }

    public a b() {
        return this.c;
    }

    public void c() {
        if (this.c == null || this.f1702a == 1) {
            return;
        }
        this.c = null;
        com.cmic.gen.sdk.e.c.b("LoginProxy", "mLoginAuthProxy == null");
    }

    public void a(a aVar) {
        this.f1702a = 1;
        this.c = aVar;
    }
}
