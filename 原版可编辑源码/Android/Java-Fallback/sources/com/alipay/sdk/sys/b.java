package com.alipay.sdk.sys;

public class b {
    private static com.alipay.sdk.sys.b a;
    private android.content.Context b;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.sys.b a() {
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a
            if (r0 != 0) goto Lb
            com.alipay.sdk.sys.b r0 = new com.alipay.sdk.sys.b
            r0.<init>()
            com.alipay.sdk.sys.b.a = r0
        Lb:
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a
            return r0
    }

    public static boolean d() {
            r0 = 10
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "/system/app/Superuser.apk"
            r0[r1] = r2
            r2 = 1
            java.lang.String r3 = "/sbin/su"
            r0[r2] = r3
            r3 = 2
            java.lang.String r4 = "/system/bin/su"
            r0[r3] = r4
            r3 = 3
            java.lang.String r4 = "/system/xbin/su"
            r0[r3] = r4
            r3 = 4
            java.lang.String r4 = "/data/local/xbin/su"
            r0[r3] = r4
            r3 = 5
            java.lang.String r4 = "/data/local/bin/su"
            r0[r3] = r4
            r3 = 6
            java.lang.String r4 = "/system/sd/xbin/su"
            r0[r3] = r4
            r3 = 7
            java.lang.String r4 = "/system/bin/failsafe/su"
            r0[r3] = r4
            r3 = 8
            java.lang.String r4 = "/data/local/su"
            r0[r3] = r4
            r3 = 9
            java.lang.String r4 = "/su/bin/su"
            r0[r3] = r4
            int r3 = r0.length
            r4 = 0
        L3a:
            if (r4 >= r3) goto L4d
            r5 = r0[r4]
            java.io.File r6 = new java.io.File
            r6.<init>(r5)
            boolean r5 = r6.exists()
            if (r5 == 0) goto L4a
            return r2
        L4a:
            int r4 = r4 + 1
            goto L3a
        L4d:
            return r1
    }

    public void a(android.content.Context r1, com.alipay.sdk.data.c r2) {
            r0 = this;
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            return
    }

    public android.content.Context b() {
            r1 = this;
            android.content.Context r0 = r1.b
            return r0
    }

    public com.alipay.sdk.data.c c() {
            r1 = this;
            com.alipay.sdk.data.c r0 = com.alipay.sdk.data.c.b()
            return r0
    }

    public java.lang.String e() {
            r3 = this;
            android.content.Context r0 = r3.b     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.ta.utdid2.device.UTDevice.getUtdid(r0)     // Catch: java.lang.Throwable -> L7
            goto L14
        L7:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
            java.lang.String r1 = "third"
            java.lang.String r2 = "GetUtdidEx"
            com.alipay.sdk.app.statistic.a.a(r1, r2, r0)
            java.lang.String r0 = ""
        L14:
            return r0
    }
}
