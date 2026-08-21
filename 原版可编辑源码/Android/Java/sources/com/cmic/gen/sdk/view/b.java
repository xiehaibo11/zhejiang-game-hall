package com.cmic.gen.sdk.view;

public class b {
    private static b b;
    public int a = 1;
    private a c;

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
        if (this.c == null || this.a == 1) {
            return;
        }
        this.c = null;
        com.cmic.gen.sdk.e.c.b("LoginProxy", "mLoginAuthProxy == null");
    }

    public void a(a aVar) {
        this.a = 1;
        this.c = aVar;
    }
}
