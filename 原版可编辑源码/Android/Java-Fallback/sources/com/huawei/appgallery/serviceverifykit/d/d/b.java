package com.huawei.appgallery.serviceverifykit.d.d;

public class b {
    public static final com.huawei.appgallery.serviceverifykit.d.d.b b = null;
    private boolean a;

    static {
            com.huawei.appgallery.serviceverifykit.d.d.b r0 = new com.huawei.appgallery.serviceverifykit.d.d.b
            r0.<init>()
            com.huawei.appgallery.serviceverifykit.d.d.b.b = r0
            return
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "com.huawei.appgallery.log.LogAdaptor"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> Lc
            r0 = 1
            r1.a = r0     // Catch: java.lang.ClassNotFoundException -> Lc
            goto Lf
        Lc:
            r0 = 0
            r1.a = r0
        Lf:
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto La
            com.huawei.appgallery.serviceverifykit.d.d.a r0 = com.huawei.appgallery.serviceverifykit.d.d.a.a
            r0.e(r2, r3)
            goto Ld
        La:
            android.util.Log.e(r2, r3)
        Ld:
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto La
            com.huawei.appgallery.serviceverifykit.d.d.a r0 = com.huawei.appgallery.serviceverifykit.d.d.a.a
            r0.e(r2, r3, r4)
            goto Ld
        La:
            android.util.Log.e(r2, r3, r4)
        Ld:
            return
    }

    public void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto La
            com.huawei.appgallery.serviceverifykit.d.d.a r0 = com.huawei.appgallery.serviceverifykit.d.d.a.a
            r0.i(r2, r3)
            goto Ld
        La:
            android.util.Log.i(r2, r3)
        Ld:
            return
    }

    public void c(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto La
            com.huawei.appgallery.serviceverifykit.d.d.a r0 = com.huawei.appgallery.serviceverifykit.d.d.a.a
            r0.w(r2, r3)
            goto Ld
        La:
            android.util.Log.w(r2, r3)
        Ld:
            return
    }
}
