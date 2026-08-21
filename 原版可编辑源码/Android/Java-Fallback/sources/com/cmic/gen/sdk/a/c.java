package com.cmic.gen.sdk.a;

public class c implements com.cmic.gen.sdk.a.b.a {
    private static com.cmic.gen.sdk.a.c a;
    private com.cmic.gen.sdk.a.a b;
    private com.cmic.gen.sdk.a.a c;
    private com.cmic.gen.sdk.a.b d;
    private android.content.Context e;

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.b()
            return
    }

    public static com.cmic.gen.sdk.a.c a(android.content.Context r2) {
            com.cmic.gen.sdk.a.c r0 = com.cmic.gen.sdk.a.c.a
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.a.c> r0 = com.cmic.gen.sdk.a.c.class
            monitor-enter(r0)
            com.cmic.gen.sdk.a.c r1 = com.cmic.gen.sdk.a.c.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.a.c r1 = new com.cmic.gen.sdk.a.c     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.a.c.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.a.c r2 = com.cmic.gen.sdk.a.c.a
            return r2
    }

    private void b() {
            r2 = this;
            java.lang.String r0 = "sdk_config_version"
            java.lang.String r1 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L24
            java.lang.String r1 = "quick_login_android_5.9.6"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L24
            r0 = 0
            com.cmic.gen.sdk.a.b r0 = com.cmic.gen.sdk.a.b.a(r0)
            r2.d = r0
            com.cmic.gen.sdk.a.a r0 = r0.b()
            r2.b = r0
            goto L3a
        L24:
            r1 = 1
            com.cmic.gen.sdk.a.b r1 = com.cmic.gen.sdk.a.b.a(r1)
            r2.d = r1
            com.cmic.gen.sdk.a.a r1 = r1.a()
            r2.b = r1
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3a
            r2.c()
        L3a:
            com.cmic.gen.sdk.a.b r0 = r2.d
            r0.a(r2)
            com.cmic.gen.sdk.a.b r0 = r2.d
            com.cmic.gen.sdk.a.a r0 = r0.a()
            r2.c = r0
            return
    }

    private void c() {
            r2 = this;
            java.lang.String r0 = "UmcConfigManager"
            java.lang.String r1 = "delete localConfig"
            com.cmic.gen.sdk.e.c.b(r0, r1)
            com.cmic.gen.sdk.a.b r0 = r2.d
            r0.c()
            return
    }

    public com.cmic.gen.sdk.a.a a() {
            r1 = this;
            com.cmic.gen.sdk.a.a r0 = r1.b     // Catch: java.lang.CloneNotSupportedException -> L7
            com.cmic.gen.sdk.a.a r0 = r0.m()     // Catch: java.lang.CloneNotSupportedException -> L7
            return r0
        L7:
            com.cmic.gen.sdk.a.a r0 = r1.c
            return r0
    }

    @Override
    public void a(com.cmic.gen.sdk.a.a r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void a(com.cmic.gen.sdk.a r2) {
            r1 = this;
            com.cmic.gen.sdk.a.b r0 = r1.d
            r0.a(r2)
            return
    }
}
