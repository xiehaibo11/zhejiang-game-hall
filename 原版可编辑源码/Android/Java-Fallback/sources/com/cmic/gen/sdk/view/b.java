package com.cmic.gen.sdk.view;

public class b {
    private static com.cmic.gen.sdk.view.b b;
    public int a;
    private com.cmic.gen.sdk.view.b.a c;

    public interface a {
        void a();
    }

    static {
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            return
    }

    public static com.cmic.gen.sdk.view.b a() {
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.view.b> r0 = com.cmic.gen.sdk.view.b.class
            monitor-enter(r0)
            com.cmic.gen.sdk.view.b r1 = com.cmic.gen.sdk.view.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.view.b r1 = new com.cmic.gen.sdk.view.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.view.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.b
            return r0
    }

    public void a(com.cmic.gen.sdk.view.b.a r2) {
            r1 = this;
            r0 = 1
            r1.a = r0
            r1.c = r2
            return
    }

    public com.cmic.gen.sdk.view.b.a b() {
            r1 = this;
            com.cmic.gen.sdk.view.b$a r0 = r1.c
            return r0
    }

    public void c() {
            r2 = this;
            com.cmic.gen.sdk.view.b$a r0 = r2.c
            if (r0 == 0) goto L13
            int r0 = r2.a
            r1 = 1
            if (r0 == r1) goto L13
            r0 = 0
            r2.c = r0
            java.lang.String r0 = "LoginProxy"
            java.lang.String r1 = "mLoginAuthProxy == null"
            com.cmic.gen.sdk.e.c.b(r0, r1)
        L13:
            return
    }
}
