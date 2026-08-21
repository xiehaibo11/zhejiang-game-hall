package com.huawei.hms.hatool;

public class d0 {
    public static com.huawei.hms.hatool.d0 c;
    public java.lang.String a;
    public java.lang.String b;

    public d0() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.hatool.d0 f() {
            com.huawei.hms.hatool.d0 r0 = com.huawei.hms.hatool.d0.c
            if (r0 != 0) goto L7
            g()
        L7:
            com.huawei.hms.hatool.d0 r0 = com.huawei.hms.hatool.d0.c
            return r0
    }

    public static synchronized void g() {
            java.lang.Class<com.huawei.hms.hatool.d0> r0 = com.huawei.hms.hatool.d0.class
            monitor-enter(r0)
            com.huawei.hms.hatool.d0 r1 = com.huawei.hms.hatool.d0.c     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.d0 r1 = new com.huawei.hms.hatool.d0     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.huawei.hms.hatool.d0.c = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Le
            java.lang.String r0 = r1.c()
            r1.a = r0
        Le:
            java.lang.String r0 = r1.a
            return r0
    }

    public final java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.e()
            if (r0 == 0) goto Ld
            java.lang.String r0 = "analytics_keystore"
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.decrypt(r0, r3)
            goto Lf
        Ld:
            java.lang.String r0 = ""
        Lf:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L4f
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "deCrypt work key first"
            com.huawei.hms.hatool.y.c(r0, r1)
            java.lang.String r0 = r2.d()
            java.lang.String r0 = com.huawei.hms.hatool.d.a(r3, r0)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L41
            r3 = 16
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandomStr(r3)
            java.lang.String r3 = r2.b(r0)
            r2.c(r3)
            boolean r3 = r2.e()
            if (r3 == 0) goto L4f
        L3d:
            com.huawei.hms.hatool.c0.d()
            goto L4f
        L41:
            boolean r3 = r2.e()
            if (r3 == 0) goto L4f
            java.lang.String r3 = r2.b(r0)
            r2.c(r3)
            goto L3d
        L4f:
            return r0
    }

    public final java.lang.String b(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.e()
            if (r0 == 0) goto Ld
            java.lang.String r0 = "analytics_keystore"
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.encrypt(r0, r2)
            return r2
        Ld:
            java.lang.String r0 = r1.d()
            java.lang.String r2 = com.huawei.hms.hatool.d.b(r2, r0)
            return r2
    }

    public void b() {
            r2 = this;
            r0 = 16
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandomStr(r0)
            java.lang.String r1 = r2.b(r0)
            boolean r1 = r2.c(r1)
            if (r1 == 0) goto L12
            r2.a = r0
        L12:
            return
    }

    public final java.lang.String c() {
            r4 = this;
            android.content.Context r0 = com.huawei.hms.hatool.b.f()
            java.lang.String r1 = "Privacy_MY"
            java.lang.String r2 = "PrivacyData"
            java.lang.String r3 = ""
            java.lang.String r0 = com.huawei.hms.hatool.g0.a(r0, r1, r2, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L22
            r0 = 16
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandomStr(r0)
            java.lang.String r1 = r4.b(r0)
            r4.c(r1)
            return r0
        L22:
            java.lang.String r0 = r4.a(r0)
            return r0
    }

    public final boolean c(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "refresh sp aes key"
            com.huawei.hms.hatool.y.c(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L14
            java.lang.String r5 = "refreshLocalKey(): encrypted key is empty"
            com.huawei.hms.hatool.y.c(r0, r5)
            r5 = 0
            return r5
        L14:
            android.content.Context r0 = com.huawei.hms.hatool.b.f()
            java.lang.String r1 = "Privacy_MY"
            java.lang.String r2 = "PrivacyData"
            com.huawei.hms.hatool.g0.b(r0, r1, r2, r5)
            android.content.Context r5 = com.huawei.hms.hatool.b.f()
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = "flashKeyTime"
            com.huawei.hms.hatool.g0.b(r5, r1, r0, r2)
            r5 = 1
            return r5
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            com.huawei.hms.hatool.c0 r0 = new com.huawei.hms.hatool.c0
            r0.<init>()
            java.lang.String r0 = r0.a()
            r1.b = r0
        L13:
            java.lang.String r0 = r1.b
            return r0
    }

    public final boolean e() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }
}
