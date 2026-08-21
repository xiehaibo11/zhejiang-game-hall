package com.huawei.hms.hatool;

public class x {
    public static com.huawei.hms.hatool.x b;
    public com.huawei.hms.hatool.x.a a;

    public class a {
        public java.lang.String a;
        public java.lang.String b;
        public java.lang.String c;
        public long d;
        public final com.huawei.hms.hatool.x e;

        public a(com.huawei.hms.hatool.x r3) {
                r2 = this;
                r2.e = r3
                r2.<init>()
                r0 = 0
                r2.d = r0
                return
        }

        public void a(long r2) {
                r1 = this;
                com.huawei.hms.hatool.x r0 = r1.e
                com.huawei.hms.hatool.x$a r0 = com.huawei.hms.hatool.x.a(r0)
                r0.d = r2
                return
        }

        public void a(java.lang.String r2) {
                r1 = this;
                com.huawei.hms.hatool.x r0 = r1.e
                com.huawei.hms.hatool.x$a r0 = com.huawei.hms.hatool.x.a(r0)
                r0.c = r2
                return
        }

        public void b(java.lang.String r2) {
                r1 = this;
                com.huawei.hms.hatool.x r0 = r1.e
                com.huawei.hms.hatool.x$a r0 = com.huawei.hms.hatool.x.a(r0)
                r0.a = r2
                return
        }

        public void c(java.lang.String r2) {
                r1 = this;
                com.huawei.hms.hatool.x r0 = r1.e
                com.huawei.hms.hatool.x$a r0 = com.huawei.hms.hatool.x.a(r0)
                r0.b = r2
                return
        }
    }

    static {
            com.huawei.hms.hatool.x r0 = new com.huawei.hms.hatool.x
            r0.<init>()
            com.huawei.hms.hatool.x.b = r0
            return
    }

    public x() {
            r1 = this;
            r1.<init>()
            com.huawei.hms.hatool.x$a r0 = new com.huawei.hms.hatool.x$a
            r0.<init>(r1)
            r1.a = r0
            return
    }

    public static com.huawei.hms.hatool.x.a a(com.huawei.hms.hatool.x r0) {
            com.huawei.hms.hatool.x$a r0 = r0.a
            return r0
    }

    public static com.huawei.hms.hatool.x f() {
            com.huawei.hms.hatool.x r0 = com.huawei.hms.hatool.x.b
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            com.huawei.hms.hatool.x$a r0 = r1.a
            java.lang.String r0 = r0.c
            return r0
    }

    public long b() {
            r2 = this;
            com.huawei.hms.hatool.x$a r0 = r2.a
            long r0 = r0.d
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            com.huawei.hms.hatool.x$a r0 = r1.a
            java.lang.String r0 = r0.b
            return r0
    }

    public void d() {
            r8 = this;
            long r0 = r8.b()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 16
            if (r2 != 0) goto L3f
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = r8.e()
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L22
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "get rsa pubkey config error"
            com.huawei.hms.hatool.y.f(r0, r1)
            return
        L22:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandomStr(r3)
            java.lang.String r4 = com.huawei.hms.hatool.e.a(r2, r3)
            com.huawei.hms.hatool.x$a r5 = r8.a
            r5.b(r2)
            com.huawei.hms.hatool.x$a r2 = r8.a
            r2.a(r0)
            com.huawei.hms.hatool.x$a r0 = r8.a
            r0.c(r3)
            com.huawei.hms.hatool.x$a r0 = r8.a
            r0.a(r4)
            goto L67
        L3f:
            long r4 = java.lang.System.currentTimeMillis()
            long r0 = r4 - r0
            r6 = 43200000(0x2932e00, double:2.1343636E-316)
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 <= 0) goto L67
            com.huawei.hms.hatool.x$a r0 = r8.a
            java.lang.String r0 = r0.a
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandomStr(r3)
            java.lang.String r0 = com.huawei.hms.hatool.e.a(r0, r1)
            com.huawei.hms.hatool.x$a r2 = r8.a
            r2.a(r4)
            com.huawei.hms.hatool.x$a r2 = r8.a
            r2.c(r1)
            com.huawei.hms.hatool.x$a r1 = r8.a
            r1.a(r0)
        L67:
            return
    }

    public final java.lang.String e() {
            r5 = this;
            r0 = 0
            android.content.Context r1 = com.huawei.hms.hatool.b.f()     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L20
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L20
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L20
            java.lang.String r2 = "hianalytics_njjn"
            java.io.InputStream r1 = r1.open(r2)     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L20
            java.lang.String r0 = com.huawei.hms.hatool.r0.a(r1)     // Catch: java.io.IOException -> L21 java.lang.Throwable -> L2c
            com.huawei.hms.hatool.r0.a(r1)
            return r0
        L1b:
            r1 = move-exception
            r4 = r1
            r1 = r0
            r0 = r4
            goto L2d
        L20:
            r1 = r0
        L21:
            java.lang.String r2 = "hmsSdk"
            java.lang.String r3 = "read pubKey error,the file is corrupted"
            com.huawei.hms.hatool.y.f(r2, r3)     // Catch: java.lang.Throwable -> L2c
            com.huawei.hms.hatool.r0.a(r1)
            return r0
        L2c:
            r0 = move-exception
        L2d:
            com.huawei.hms.hatool.r0.a(r1)
            throw r0
    }
}
