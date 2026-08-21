package com.alipay.sdk.m.s;

public class b {
    public static com.alipay.sdk.m.s.b b;
    public android.content.Context a;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.s.b d() {
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.b
            if (r0 != 0) goto Lb
            com.alipay.sdk.m.s.b r0 = new com.alipay.sdk.m.s.b
            r0.<init>()
            com.alipay.sdk.m.s.b.b = r0
        Lb:
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.b
            return r0
    }

    public static boolean e() {
            java.lang.String r0 = "/system/app/Superuser.apk"
            java.lang.String r1 = "/sbin/su"
            java.lang.String r2 = "/system/bin/su"
            java.lang.String r3 = "/system/xbin/su"
            java.lang.String r4 = "/data/local/xbin/su"
            java.lang.String r5 = "/data/local/bin/su"
            java.lang.String r6 = "/system/sd/xbin/su"
            java.lang.String r7 = "/system/bin/failsafe/su"
            java.lang.String r8 = "/data/local/su"
            java.lang.String r9 = "/su/bin/su"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9}
            r1 = 0
            r2 = 0
        L1a:
            r3 = 10
            if (r2 >= r3) goto L30
            r3 = r0[r2]
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            boolean r3 = r4.exists()
            if (r3 == 0) goto L2d
            r0 = 1
            return r0
        L2d:
            int r2 = r2 + 1
            goto L1a
        L30:
            return r1
    }

    public com.alipay.sdk.m.m.b a() {
            r1 = this;
            com.alipay.sdk.m.m.b r0 = com.alipay.sdk.m.m.b.b()
            return r0
    }

    public void a(android.content.Context r1) {
            r0 = this;
            com.alipay.sdk.m.m.b.b()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            return
    }

    public android.content.Context b() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }

    public java.lang.String c() {
            r2 = this;
            android.content.Context r0 = r2.a
            r1 = 0
            java.lang.String r0 = com.alipay.sdk.m.w.b.c(r1, r0)
            return r0
    }
}
