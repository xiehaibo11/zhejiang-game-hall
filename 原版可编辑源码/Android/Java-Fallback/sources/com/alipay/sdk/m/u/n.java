package com.alipay.sdk.m.u;

public class n {
    public static final java.lang.String a = "com.alipay.android.app";
    public static final java.lang.String b = "com.eg.android.AlipayGphone";
    public static final java.lang.String c = "hk.alipay.wallet";
    public static final java.lang.String d = "hk.alipay.walletRC";
    public static final java.lang.String e = "com.eg.android.AlipayGphoneRC";
    public static final int f = 99;
    public static final java.lang.String[] g = null;
    public static final int h = 125;
    public static final int i = 460;
    public static final char[] j = null;

    public static class a implements java.lang.Runnable {
        public final android.app.Activity a;

        public a(android.app.Activity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                android.app.Activity r0 = r1.a
                r0.finish()
                return
        }
    }

    public static class b implements java.lang.Runnable {
        public final java.lang.Runnable a;
        public final android.os.ConditionVariable b;

        public b(java.lang.Runnable r1, android.os.ConditionVariable r2) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                java.lang.Runnable r0 = r2.a     // Catch: java.lang.Throwable -> Lb
                r0.run()     // Catch: java.lang.Throwable -> Lb
                android.os.ConditionVariable r0 = r2.b
                r0.open()
                return
            Lb:
                r0 = move-exception
                android.os.ConditionVariable r1 = r2.b
                r1.open()
                throw r0
        }
    }

    public static final class c {
        public final android.content.pm.PackageInfo a;
        public final int b;
        public final java.lang.String c;

        public c(android.content.pm.PackageInfo r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        public boolean a() {
                r2 = this;
                android.content.pm.PackageInfo r0 = r2.a
                int r0 = r0.versionCode
                int r1 = r2.b
                if (r0 >= r1) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }

        public boolean a(com.alipay.sdk.m.s.a r8) {
                r7 = this;
                android.content.pm.PackageInfo r0 = r7.a
                android.content.pm.Signature[] r0 = r0.signatures
                r1 = 0
                if (r0 == 0) goto L3f
                int r2 = r0.length
                if (r2 != 0) goto Lb
                goto L3f
            Lb:
                int r2 = r0.length
                r3 = 0
            Ld:
                r4 = 1
                if (r3 >= r2) goto L3f
                r5 = r0[r3]
                byte[] r5 = r5.toByteArray()
                java.lang.String r5 = com.alipay.sdk.m.u.n.a(r8, r5)
                if (r5 == 0) goto L3c
                java.lang.String r6 = r7.c
                boolean r6 = android.text.TextUtils.equals(r5, r6)
                if (r6 != 0) goto L3c
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r0[r1] = r5
                java.lang.String r1 = r7.c
                r0[r4] = r1
                java.lang.String r1 = "Got %s, expected %s"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                java.lang.String r1 = "biz"
                java.lang.String r2 = "PublicKeyUnmatch"
                com.alipay.sdk.m.k.a.b(r8, r1, r2, r0)
                r1 = 1
                goto L3f
            L3c:
                int r3 = r3 + 1
                goto Ld
            L3f:
                return r1
        }
    }

    static {
            java.lang.String r0 = "10.1.5.1013151"
            java.lang.String r1 = "10.1.5.1013148"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.alipay.sdk.m.u.n.g = r0
            r0 = 64
            char[] r0 = new char[r0]
            r0 = {x0014: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 43, 47} // fill-array
            com.alipay.sdk.m.u.n.j = r0
            return
    }

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a() {
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            java.lang.String r0 = r0.c()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2f
            java.lang.String r1 = "="
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replaceAll(r1, r2)
            int r1 = r0.length()
            r2 = 5
            if (r1 < r2) goto L22
            r1 = 0
            java.lang.String r0 = r0.substring(r1, r2)
        L22:
            long r0 = a(r0)
            r2 = 10000(0x2710, double:4.9407E-320)
            long r0 = r0 % r2
            int r1 = (int) r0
            if (r1 >= 0) goto L30
            int r1 = r1 * (-1)
            goto L30
        L2f:
            r1 = -1
        L30:
            return r1
    }

    public static long a(java.lang.String r2) {
            r0 = 6
            long r0 = a(r2, r0)
            return r0
    }

    public static long a(java.lang.String r12, int r13) {
            double r0 = (double) r13
            r2 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r0 = java.lang.Math.pow(r2, r0)
            int r13 = (int) r0
            int r0 = r12.length()
            r1 = 0
            r3 = 0
            r4 = r0
        L10:
            if (r3 >= r0) goto L35
            int r5 = r3 + 1
            java.lang.String r3 = r12.substring(r3, r5)
            int r3 = d(r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            int r3 = java.lang.Integer.parseInt(r3)
            long r6 = (long) r3
            double r8 = (double) r13
            int r3 = r4 + (-1)
            double r10 = (double) r3
            double r8 = java.lang.Math.pow(r8, r10)
            long r8 = (long) r8
            long r6 = r6 * r8
            long r1 = r1 + r6
            int r4 = r4 + (-1)
            r3 = r5
            goto L10
        L35:
            return r1
    }

    public static android.content.pm.ActivityInfo a(android.content.Context r7) {
            r0 = 0
            boolean r1 = r7 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L31
            r1 = r7
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Throwable -> L32
            android.content.pm.PackageManager r2 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L32
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Throwable -> L32
            r3 = 1
            android.content.pm.PackageInfo r7 = r2.getPackageInfo(r7, r3)     // Catch: java.lang.Throwable -> L32
            android.content.pm.ActivityInfo[] r7 = r7.activities     // Catch: java.lang.Throwable -> L32
            int r2 = r7.length     // Catch: java.lang.Throwable -> L32
            r3 = 0
        L19:
            if (r3 >= r2) goto L31
            r4 = r7[r3]     // Catch: java.lang.Throwable -> L32
            java.lang.String r5 = r4.name     // Catch: java.lang.Throwable -> L32
            java.lang.Class r6 = r1.getClass()     // Catch: java.lang.Throwable -> L32
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> L32
            boolean r5 = android.text.TextUtils.equals(r5, r6)     // Catch: java.lang.Throwable -> L32
            if (r5 == 0) goto L2e
            return r4
        L2e:
            int r3 = r3 + 1
            goto L19
        L31:
            return r0
        L32:
            r7 = move-exception
            com.alipay.sdk.m.u.e.a(r7)
            return r0
    }

    public static android.content.pm.PackageInfo a(android.content.Context r1, java.lang.String r2) throws android.content.pm.PackageManager.NameNotFoundException {
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r0 = 192(0xc0, float:2.69E-43)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)
            return r1
    }

    public static com.alipay.sdk.m.u.n.c a(android.content.pm.PackageInfo r1, int r2, java.lang.String r3) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.alipay.sdk.m.u.n$c r0 = new com.alipay.sdk.m.u.n$c
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static com.alipay.sdk.m.u.n.c a(com.alipay.sdk.m.s.a r2, android.content.Context r3, java.lang.String r4, int r5, java.lang.String r6) {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            if (r0 == 0) goto L1b
            java.lang.String r0 = "com.eg.android.AlipayGphone"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L11
            java.lang.String r4 = "com.eg.android.AlipayGphoneRC"
            goto L1b
        L11:
            java.lang.String r0 = "hk.alipay.wallet"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L1b
            java.lang.String r4 = "hk.alipay.walletRC"
        L1b:
            r0 = 0
            android.content.pm.PackageInfo r3 = a(r3, r4)     // Catch: java.lang.Throwable -> L21
            goto L2e
        L21:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "auth"
            java.lang.String r1 = "GetPackageInfoEx"
            com.alipay.sdk.m.k.a.b(r2, r4, r1, r3)
            r3 = r0
        L2e:
            boolean r2 = a(r2, r3)
            if (r2 != 0) goto L35
            return r0
        L35:
            com.alipay.sdk.m.u.n$c r2 = a(r3, r5, r6)
            return r2
    }

    public static com.alipay.sdk.m.u.n.c a(com.alipay.sdk.m.s.a r4, android.content.Context r5, java.util.List<com.alipay.sdk.m.m.a.b> r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.util.Iterator r6 = r6.iterator()
        L8:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r6.next()
            com.alipay.sdk.m.m.a$b r1 = (com.alipay.sdk.m.m.a.b) r1
            if (r1 != 0) goto L17
            goto L8
        L17:
            java.lang.String r2 = r1.a
            int r3 = r1.b
            java.lang.String r1 = r1.c
            com.alipay.sdk.m.u.n$c r1 = a(r4, r5, r2, r3, r1)
            if (r1 == 0) goto L8
            boolean r2 = r1.a(r4)
            if (r2 != 0) goto L8
            boolean r2 = r1.a()
            if (r2 != 0) goto L8
            return r1
        L30:
            return r0
    }

    public static <T> T a(java.lang.ref.WeakReference<T> r0) {
            if (r0 != 0) goto L4
            r0 = 0
            goto L8
        L4:
            java.lang.Object r0 = r0.get()
        L8:
            return r0
    }

    public static java.lang.String a(int r8) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
        Lb:
            if (r2 >= r8) goto L66
            r3 = 3
            int r3 = r0.nextInt(r3)
            r4 = 4627730092099895296(0x4039000000000000, double:25.0)
            if (r3 == 0) goto L4a
            r6 = 1
            if (r3 == r6) goto L30
            r4 = 2
            if (r3 == r4) goto L1d
            goto L63
        L1d:
            java.util.Random r3 = new java.util.Random
            r3.<init>()
            r4 = 10
            int r3 = r3.nextInt(r4)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r1.append(r3)
            goto L63
        L30:
            double r6 = java.lang.Math.random()
            double r6 = r6 * r4
            r3 = 4636526185122103296(0x4058400000000000, double:97.0)
            double r6 = r6 + r3
            long r3 = java.lang.Math.round(r6)
            int r4 = (int) r3
            char r3 = (char) r4
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r1.append(r3)
            goto L63
        L4a:
            double r6 = java.lang.Math.random()
            double r6 = r6 * r4
            r3 = 4634274385308418048(0x4050400000000000, double:65.0)
            double r6 = r6 + r3
            long r3 = java.lang.Math.round(r6)
            int r4 = (int) r3
            char r3 = (char) r4
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r1.append(r3)
        L63:
            int r2 = r2 + 1
            goto Lb
        L66:
            java.lang.String r8 = r1.toString()
            return r8
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r1) {
            java.lang.String r0 = "ro.build.fingerprint"
            java.lang.String r1 = c(r1, r0)
            return r1
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r11, android.content.Context r12) {
            java.lang.String r0 = "biz"
            java.lang.String r1 = "alipay_cashier_ap_fi"
            java.lang.String r2 = ""
            java.lang.String r3 = com.alipay.sdk.m.u.j.a(r11, r12, r1, r2)     // Catch: java.lang.Exception -> L4d
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L4d
            if (r4 != 0) goto L11
            return r3
        L11:
            java.lang.String r5 = "FU"
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L3e
            com.alipay.sdk.m.h.d r8 = new com.alipay.sdk.m.h.d     // Catch: java.lang.Exception -> L3e
            r8.<init>()     // Catch: java.lang.Exception -> L3e
            r9 = 0
            com.alipay.sdk.m.h.f r10 = new com.alipay.sdk.m.h.f     // Catch: java.lang.Exception -> L3e
            r10.<init>()     // Catch: java.lang.Exception -> L3e
            com.alipay.sdk.m.h.a r3 = com.alipay.sdk.m.h.a.a(r5, r6, r8, r9, r10)     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = r3.a()     // Catch: java.lang.Exception -> L3e
            com.alipay.sdk.m.u.j.b(r11, r12, r1, r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r12 = com.alipay.sdk.m.u.j.a(r11, r12, r1, r2)     // Catch: java.lang.Exception -> L4d
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> L4d
            if (r1 != 0) goto L38
            return r12
        L38:
            java.lang.String r12 = "e_regen_empty"
            com.alipay.sdk.m.k.a.b(r11, r0, r12, r2)     // Catch: java.lang.Exception -> L4d
            return r2
        L3e:
            r12 = move-exception
            java.lang.String r1 = "e_gen"
            java.lang.Class r12 = r12.getClass()     // Catch: java.lang.Exception -> L4d
            java.lang.String r12 = r12.getSimpleName()     // Catch: java.lang.Exception -> L4d
            com.alipay.sdk.m.k.a.b(r11, r0, r1, r12)     // Catch: java.lang.Exception -> L4d
            return r2
        L4d:
            r12 = move-exception
            java.lang.String r1 = "e_gen_err"
            com.alipay.sdk.m.k.a.a(r11, r0, r1, r12)
            return r2
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r1, android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> Ld
            r0 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r0)     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = r2.versionName     // Catch: java.lang.Throwable -> Ld
            goto L17
        Ld:
            r2 = move-exception
            java.lang.String r3 = "biz"
            java.lang.String r0 = "GetPackageInfoEx"
            com.alipay.sdk.m.k.a.a(r1, r3, r0, r2)
            java.lang.String r1 = ""
        L17:
            return r1
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r2, byte[] r3) {
            java.lang.String r0 = "X.509"
            java.security.cert.CertificateFactory r0 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.lang.Exception -> L28
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L28
            r1.<init>(r3)     // Catch: java.lang.Exception -> L28
            java.security.cert.Certificate r3 = r0.generateCertificate(r1)     // Catch: java.lang.Exception -> L28
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: java.lang.Exception -> L28
            java.security.PublicKey r3 = r3.getPublicKey()     // Catch: java.lang.Exception -> L28
            boolean r0 = r3 instanceof java.security.interfaces.RSAPublicKey     // Catch: java.lang.Exception -> L28
            if (r0 == 0) goto L30
            java.security.interfaces.RSAPublicKey r3 = (java.security.interfaces.RSAPublicKey) r3     // Catch: java.lang.Exception -> L28
            java.math.BigInteger r3 = r3.getModulus()     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L30
            r0 = 16
            java.lang.String r2 = r3.toString(r0)     // Catch: java.lang.Exception -> L28
            return r2
        L28:
            r3 = move-exception
            java.lang.String r0 = "auth"
            java.lang.String r1 = "GetPublicKeyFromSignEx"
            com.alipay.sdk.m.k.a.a(r2, r0, r1, r3)
        L30:
            r2 = 0
            return r2
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = ""
            int r1 = r5.indexOf(r3)     // Catch: java.lang.Throwable -> L2a
            int r2 = r3.length()     // Catch: java.lang.Throwable -> L2a
            int r1 = r1 + r2
            int r3 = r3.length()     // Catch: java.lang.Throwable -> L2a
            if (r1 > r3) goto L12
            return r0
        L12:
            r3 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2a
            if (r2 != 0) goto L1d
            int r3 = r5.indexOf(r4, r1)     // Catch: java.lang.Throwable -> L2a
        L1d:
            r4 = 1
            if (r3 >= r4) goto L25
            java.lang.String r3 = r5.substring(r1)     // Catch: java.lang.Throwable -> L2a
            return r3
        L25:
            java.lang.String r3 = r5.substring(r1, r3)     // Catch: java.lang.Throwable -> L2a
            return r3
        L2a:
            return r0
    }

    public static java.lang.String a(java.lang.String r2, boolean r3) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L28
            byte[] r2 = r2.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L28
            r0.update(r2)     // Catch: java.security.NoSuchAlgorithmException -> L28
            byte[] r2 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L28
            if (r3 == 0) goto L23
            int r3 = r2.length     // Catch: java.security.NoSuchAlgorithmException -> L28
            r0 = 16
            if (r3 <= r0) goto L23
            byte[] r3 = new byte[r0]     // Catch: java.security.NoSuchAlgorithmException -> L28
            r1 = 0
            java.lang.System.arraycopy(r2, r1, r3, r1, r0)     // Catch: java.security.NoSuchAlgorithmException -> L28
            java.lang.String r2 = a(r3)     // Catch: java.security.NoSuchAlgorithmException -> L28
            return r2
        L23:
            java.lang.String r2 = a(r2)     // Catch: java.security.NoSuchAlgorithmException -> L28
            return r2
        L28:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String a(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r6.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r6.length
            r2 = 0
        La:
            if (r2 >= r1) goto L27
            r3 = r6[r2]
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >> 4
            r5 = 16
            char r4 = java.lang.Character.forDigit(r4, r5)
            r0.append(r4)
            r3 = r3 & 15
            char r3 = java.lang.Character.forDigit(r3, r5)
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L27:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.util.Iterator r1 = r4.keys()
        Lc:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r4.optString(r2)     // Catch: java.lang.Throwable -> L20
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L20
            goto Lc
        L20:
            r2 = move-exception
            com.alipay.sdk.m.u.e.a(r2)
            goto Lc
        L25:
            return r0
    }

    public static org.json.JSONObject a(android.content.Intent r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            android.os.Bundle r4 = r4.getExtras()
            if (r4 == 0) goto L30
            java.util.Set r1 = r4.keySet()
            java.util.Iterator r1 = r1.iterator()
        L16:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L30
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L2e
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L2e
            goto L16
        L2e:
            goto L16
        L30:
            return r0
    }

    public static void a(java.lang.String r2, java.lang.String r3, android.content.Context r4, com.alipay.sdk.m.s.a r5) {
            if (r4 == 0) goto L57
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L57
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L57
        Lf:
            boolean r0 = b(r5)
            if (r0 == 0) goto L16
            return
        L16:
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
            boolean r0 = r0.v()
            if (r0 != 0) goto L21
            return
        L21:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L57
            java.lang.String r1 = "android.app.intent.action.APP_EXCEPTION_OCCUR"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L57
            java.lang.String r1 = "bizType"
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L57
            java.lang.String r1 = "exName"
            r0.putExtra(r1, r3)     // Catch: java.lang.Exception -> L57
            java.lang.String r1 = r4.getPackageName()     // Catch: java.lang.Exception -> L57
            r0.setPackage(r1)     // Catch: java.lang.Exception -> L57
            r4.sendBroadcast(r0)     // Catch: java.lang.Exception -> L57
            java.lang.String r4 = "biz"
            java.lang.String r0 = "AppNotify"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L57
            r1.<init>()     // Catch: java.lang.Exception -> L57
            r1.append(r2)     // Catch: java.lang.Exception -> L57
            java.lang.String r2 = "|"
            r1.append(r2)     // Catch: java.lang.Exception -> L57
            r1.append(r3)     // Catch: java.lang.Exception -> L57
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Exception -> L57
            com.alipay.sdk.m.k.a.a(r5, r4, r0, r2)     // Catch: java.lang.Exception -> L57
        L57:
            return
    }

    public static boolean a(long r3, java.lang.Runnable r5, java.lang.String r6) {
            if (r5 != 0) goto L4
            r3 = 0
            return r3
        L4:
            android.os.ConditionVariable r0 = new android.os.ConditionVariable
            r0.<init>()
            java.lang.Thread r1 = new java.lang.Thread
            com.alipay.sdk.m.u.n$b r2 = new com.alipay.sdk.m.u.n$b
            r2.<init>(r5, r0)
            r1.<init>(r2)
            boolean r5 = android.text.TextUtils.isEmpty(r6)
            if (r5 != 0) goto L1c
            r1.setName(r6)
        L1c:
            r1.start()
            r5 = 1
            r1 = 0
            int r6 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r6 > 0) goto L2a
            r0.block()     // Catch: java.lang.Throwable -> L2e
            goto L2e
        L2a:
            boolean r5 = r0.block(r3)     // Catch: java.lang.Throwable -> L2e
        L2e:
            return r5
    }

    public static boolean a(android.content.pm.PackageInfo r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Throwable -> L1e
            java.lang.String[] r1 = com.alipay.sdk.m.u.n.g     // Catch: java.lang.Throwable -> L1e
            r1 = r1[r0]     // Catch: java.lang.Throwable -> L1e
            boolean r1 = android.text.TextUtils.equals(r3, r1)     // Catch: java.lang.Throwable -> L1e
            r2 = 1
            if (r1 != 0) goto L1d
            java.lang.String[] r1 = com.alipay.sdk.m.u.n.g     // Catch: java.lang.Throwable -> L1e
            r1 = r1[r2]     // Catch: java.lang.Throwable -> L1e
            boolean r3 = android.text.TextUtils.equals(r3, r1)     // Catch: java.lang.Throwable -> L1e
            if (r3 == 0) goto L1c
            goto L1d
        L1c:
            return r0
        L1d:
            return r2
        L1e:
            return r0
    }

    public static boolean a(com.alipay.sdk.m.s.a r6, android.content.Context r7, java.util.List<com.alipay.sdk.m.m.a.b> r8, boolean r9) {
            java.lang.String r0 = "biz"
            r1 = 0
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L61
        L7:
            boolean r2 = r8.hasNext()     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L60
            java.lang.Object r2 = r8.next()     // Catch: java.lang.Throwable -> L61
            com.alipay.sdk.m.m.a$b r2 = (com.alipay.sdk.m.m.a.b) r2     // Catch: java.lang.Throwable -> L61
            if (r2 != 0) goto L16
            goto L7
        L16:
            java.lang.String r2 = r2.a     // Catch: java.lang.Throwable -> L61
            boolean r3 = com.alipay.sdk.app.EnvUtils.isSandBox()     // Catch: java.lang.Throwable -> L61
            if (r3 == 0) goto L33
            java.lang.String r3 = "com.eg.android.AlipayGphone"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L61
            if (r3 == 0) goto L29
            java.lang.String r2 = "com.eg.android.AlipayGphoneRC"
            goto L33
        L29:
            java.lang.String r3 = "hk.alipay.wallet"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L61
            if (r3 == 0) goto L33
            java.lang.String r2 = "hk.alipay.walletRC"
        L33:
            android.content.pm.PackageManager r3 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L61
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r2 = r3.getPackageInfo(r2, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            if (r2 == 0) goto L7
            if (r9 == 0) goto L5e
            java.lang.String r3 = "PgWltVer"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            r4.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            java.lang.String r5 = r2.packageName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            r4.append(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            java.lang.String r2 = r2.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            r4.append(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            java.lang.String r2 = r4.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
            com.alipay.sdk.m.k.a.a(r6, r0, r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7 java.lang.Throwable -> L61
        L5e:
            r6 = 1
            return r6
        L60:
            return r1
        L61:
            r7 = move-exception
            java.lang.String r8 = "CheckLaunchAppExistEx"
            com.alipay.sdk.m.k.a.a(r6, r0, r8, r7)
            return r1
    }

    public static boolean a(com.alipay.sdk.m.s.a r3, android.content.pm.PackageInfo r4) {
            java.lang.String r0 = ""
            r1 = 0
            if (r4 != 0) goto L17
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "info == null"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            goto L43
        L17:
            android.content.pm.Signature[] r4 = r4.signatures
            if (r4 != 0) goto L2d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "info.signatures == null"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            goto L43
        L2d:
            int r4 = r4.length
            if (r4 > 0) goto L42
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "info.signatures.length <= 0"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            goto L43
        L42:
            r1 = 1
        L43:
            if (r1 != 0) goto L4c
            java.lang.String r4 = "auth"
            java.lang.String r2 = "NotIncludeSignatures"
            com.alipay.sdk.m.k.a.b(r3, r4, r2, r0)
        L4c:
            return r1
    }

    public static boolean a(com.alipay.sdk.m.s.a r2, java.lang.String r3) {
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Throwable -> L1b
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = r0.getHost()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r0 = "alipay.com"
            boolean r0 = r3.endsWith(r0)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L19
            java.lang.String r0 = "alipay.net"
            boolean r2 = r3.endsWith(r0)     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L23
        L19:
            r2 = 1
            return r2
        L1b:
            r3 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "ckUrlErr"
            com.alipay.sdk.m.k.a.a(r2, r0, r1, r3)
        L23:
            r2 = 0
            return r2
    }

    public static boolean a(com.alipay.sdk.m.s.a r8, java.lang.String r9, android.app.Activity r10) {
            java.lang.String r0 = "&"
            java.lang.String r1 = "&return_url="
            java.lang.String r2 = "&end_code="
            boolean r3 = android.text.TextUtils.isEmpty(r9)
            r4 = 1
            if (r3 == 0) goto Le
            return r4
        Le:
            r3 = 0
            if (r10 != 0) goto L12
            return r3
        L12:
            java.lang.String r5 = r9.toLowerCase()
            java.lang.String r6 = "alipays://platformapi/startApp?"
            java.lang.String r7 = r6.toLowerCase()
            boolean r5 = r5.startsWith(r7)
            if (r5 != 0) goto L128
            java.lang.String r5 = r9.toLowerCase()
            java.lang.String r7 = "intent://platformapi/startapp?"
            java.lang.String r7 = r7.toLowerCase()
            boolean r5 = r5.startsWith(r7)
            if (r5 == 0) goto L34
            goto L128
        L34:
            java.lang.String r8 = "sdklite://h5quit"
            boolean r8 = android.text.TextUtils.equals(r9, r8)
            if (r8 != 0) goto L11d
            java.lang.String r8 = "http"
            java.lang.String r5 = "://m.alipay.com/?action=h5quit"
            java.lang.String r8 = a(r8, r5)
            boolean r8 = android.text.TextUtils.equals(r9, r8)
            if (r8 == 0) goto L4c
            goto L11d
        L4c:
            java.lang.String r8 = "sdklite://h5quit?result="
            boolean r5 = r9.startsWith(r8)
            if (r5 == 0) goto L11c
            int r5 = r9.indexOf(r8)     // Catch: java.lang.Exception -> L10c
            int r5 = r5 + 24
            java.lang.String r5 = r9.substring(r5)     // Catch: java.lang.Exception -> L10c
            int r6 = r5.lastIndexOf(r2)     // Catch: java.lang.Exception -> L10c
            int r6 = r6 + 10
            java.lang.String r5 = r5.substring(r6)     // Catch: java.lang.Exception -> L10c
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L10c
            com.alipay.sdk.m.j.c r6 = com.alipay.sdk.m.j.c.c     // Catch: java.lang.Exception -> L10c
            int r6 = r6.b()     // Catch: java.lang.Exception -> L10c
            if (r5 == r6) goto L9a
            com.alipay.sdk.m.j.c r6 = com.alipay.sdk.m.j.c.j     // Catch: java.lang.Exception -> L10c
            int r6 = r6.b()     // Catch: java.lang.Exception -> L10c
            if (r5 != r6) goto L7d
            goto L9a
        L7d:
            com.alipay.sdk.m.j.c r8 = com.alipay.sdk.m.j.c.d     // Catch: java.lang.Exception -> L10c
            int r8 = r8.b()     // Catch: java.lang.Exception -> L10c
            com.alipay.sdk.m.j.c r8 = com.alipay.sdk.m.j.c.b(r8)     // Catch: java.lang.Exception -> L10c
            int r9 = r8.b()     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = r8.a()     // Catch: java.lang.Exception -> L10c
            java.lang.String r0 = ""
            java.lang.String r8 = com.alipay.sdk.m.j.b.a(r9, r8, r0)     // Catch: java.lang.Exception -> L10c
            com.alipay.sdk.m.j.b.a(r8)     // Catch: java.lang.Exception -> L10c
            goto L113
        L9a:
            boolean r6 = com.alipay.sdk.m.l.a.x     // Catch: java.lang.Exception -> L10c
            if (r6 == 0) goto Le6
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10c
            r6.<init>()     // Catch: java.lang.Exception -> L10c
            java.lang.String r9 = java.net.URLDecoder.decode(r9)     // Catch: java.lang.Exception -> L10c
            java.lang.String r7 = java.net.URLDecoder.decode(r9)     // Catch: java.lang.Exception -> L10c
            int r8 = r7.indexOf(r8)     // Catch: java.lang.Exception -> L10c
            int r8 = r8 + 24
            int r2 = r7.lastIndexOf(r2)     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = r7.substring(r8, r2)     // Catch: java.lang.Exception -> L10c
            java.lang.String[] r8 = r8.split(r1)     // Catch: java.lang.Exception -> L10c
            r8 = r8[r3]     // Catch: java.lang.Exception -> L10c
            int r2 = r9.indexOf(r1)     // Catch: java.lang.Exception -> L10c
            int r2 = r2 + 12
            r6.append(r8)     // Catch: java.lang.Exception -> L10c
            r6.append(r1)     // Catch: java.lang.Exception -> L10c
            int r8 = r9.indexOf(r0, r2)     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = r9.substring(r2, r8)     // Catch: java.lang.Exception -> L10c
            r6.append(r8)     // Catch: java.lang.Exception -> L10c
            int r8 = r9.indexOf(r0, r2)     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = r9.substring(r8)     // Catch: java.lang.Exception -> L10c
            r6.append(r8)     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Exception -> L10c
            goto Lf8
        Le6:
            java.lang.String r9 = java.net.URLDecoder.decode(r9)     // Catch: java.lang.Exception -> L10c
            int r8 = r9.indexOf(r8)     // Catch: java.lang.Exception -> L10c
            int r8 = r8 + 24
            int r0 = r9.lastIndexOf(r2)     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = r9.substring(r8, r0)     // Catch: java.lang.Exception -> L10c
        Lf8:
            com.alipay.sdk.m.j.c r9 = com.alipay.sdk.m.j.c.b(r5)     // Catch: java.lang.Exception -> L10c
            int r0 = r9.b()     // Catch: java.lang.Exception -> L10c
            java.lang.String r9 = r9.a()     // Catch: java.lang.Exception -> L10c
            java.lang.String r8 = com.alipay.sdk.m.j.b.a(r0, r9, r8)     // Catch: java.lang.Exception -> L10c
            com.alipay.sdk.m.j.b.a(r8)     // Catch: java.lang.Exception -> L10c
            goto L113
        L10c:
            java.lang.String r8 = com.alipay.sdk.m.j.b.e()
            com.alipay.sdk.m.j.b.a(r8)
        L113:
            com.alipay.sdk.m.u.n$a r8 = new com.alipay.sdk.m.u.n$a
            r8.<init>(r10)
            r10.runOnUiThread(r8)
            return r4
        L11c:
            return r3
        L11d:
            java.lang.String r8 = com.alipay.sdk.m.j.b.a()
            com.alipay.sdk.m.j.b.a(r8)
            r10.finish()
            return r4
        L128:
            java.util.List<com.alipay.sdk.m.m.a$b> r0 = com.alipay.sdk.m.j.a.d     // Catch: java.lang.Throwable -> L15a
            com.alipay.sdk.m.u.n$c r0 = a(r8, r10, r0)     // Catch: java.lang.Throwable -> L15a
            if (r0 == 0) goto L15a
            boolean r1 = r0.a()     // Catch: java.lang.Throwable -> L15a
            if (r1 != 0) goto L15a
            boolean r8 = r0.a(r8)     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto L13d
            goto L15a
        L13d:
            java.lang.String r8 = "intent://platformapi/startapp"
            boolean r8 = r9.startsWith(r8)     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto L14b
            java.lang.String r8 = "intent://platformapi/startapp\\?"
            java.lang.String r9 = r9.replaceFirst(r8, r6)     // Catch: java.lang.Throwable -> L15a
        L14b:
            android.content.Intent r8 = new android.content.Intent     // Catch: java.lang.Throwable -> L15a
            java.lang.String r0 = "android.intent.action.VIEW"
            android.net.Uri r9 = android.net.Uri.parse(r9)     // Catch: java.lang.Throwable -> L15a
            r8.<init>(r0, r9)     // Catch: java.lang.Throwable -> L15a
            r10.startActivity(r8)     // Catch: java.lang.Throwable -> L15a
        L15a:
            return r4
    }

    public static boolean a(java.lang.Object r5, java.lang.Object... r6) {
            r0 = 1
            r1 = 0
            if (r6 == 0) goto L1f
            int r2 = r6.length
            if (r2 != 0) goto L8
            goto L1f
        L8:
            int r2 = r6.length
            r3 = 0
        La:
            if (r3 >= r2) goto L1e
            r4 = r6[r3]
            if (r5 != 0) goto L12
            if (r4 == 0) goto L1a
        L12:
            if (r5 == 0) goto L1b
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L1b
        L1a:
            return r0
        L1b:
            int r3 = r3 + 1
            goto La
        L1e:
            return r1
        L1f:
            if (r5 != 0) goto L22
            goto L23
        L22:
            r0 = 0
        L23:
            return r0
    }

    public static int b(int r1) {
            r0 = 100000(0x186a0, float:1.4013E-40)
            int r1 = r1 / r0
            return r1
    }

    public static java.lang.String b() {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            r1 = 0
            if (r0 == 0) goto L1f
            java.util.List<com.alipay.sdk.m.m.a$b> r0 = com.alipay.sdk.m.j.a.d
            java.lang.Object r0 = r0.get(r1)
            com.alipay.sdk.m.m.a$b r0 = (com.alipay.sdk.m.m.a.b) r0
            java.lang.String r0 = r0.a
            java.lang.String r1 = "hk.alipay.wallet"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L1c
            java.lang.String r0 = "hk.alipay.walletRC"
            return r0
        L1c:
            java.lang.String r0 = "com.eg.android.AlipayGphoneRC"
            return r0
        L1f:
            java.util.List<com.alipay.sdk.m.m.a$b> r0 = com.alipay.sdk.m.j.a.d     // Catch: java.lang.Throwable -> L2a
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L2a
            com.alipay.sdk.m.m.a$b r0 = (com.alipay.sdk.m.m.a.b) r0     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L2a
            return r0
        L2a:
            java.lang.String r0 = "com.eg.android.AlipayGphone"
            return r0
    }

    public static java.lang.String b(android.content.Context r0) {
            java.lang.String r0 = "-1;-1"
            return r0
    }

    public static java.lang.String b(com.alipay.sdk.m.s.a r1, android.content.Context r2) {
            java.lang.String r0 = r2.getPackageName()
            java.lang.String r1 = a(r1, r2, r0)
            return r1
    }

    public static java.lang.String b(java.lang.String r1, java.lang.String r2) {
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.content.Context r0 = r0.b()
            android.app.Application r0 = (android.app.Application) r0
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r1 = android.provider.Settings.Secure.getString(r0, r1)
            if (r1 == 0) goto L15
            r2 = r1
        L15:
            return r2
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(com.alipay.sdk.m.s.a r9, java.lang.String r10) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r1 = 63
            int r1 = r10.indexOf(r1)
            r2 = -1
            if (r1 == r2) goto L4d
            int r3 = r10.length()
            r4 = 1
            int r3 = r3 - r4
            if (r1 >= r3) goto L4d
            int r1 = r1 + r4
            java.lang.String r10 = r10.substring(r1)
            java.lang.String r1 = "&"
            java.lang.String[] r10 = r10.split(r1)
            int r1 = r10.length
            r3 = 0
            r5 = 0
        L25:
            if (r5 >= r1) goto L4d
            r6 = r10[r5]
            r7 = 61
            int r7 = r6.indexOf(r7, r4)
            if (r7 == r2) goto L4a
            int r8 = r6.length()
            int r8 = r8 - r4
            if (r7 < r8) goto L39
            goto L4a
        L39:
            java.lang.String r8 = r6.substring(r3, r7)
            int r7 = r7 + 1
            java.lang.String r6 = r6.substring(r7)
            java.lang.String r6 = e(r9, r6)
            r0.put(r8, r6)
        L4a:
            int r5 = r5 + 1
            goto L25
        L4d:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.lang.String r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "&"
            java.lang.String[] r7 = r7.split(r1)
            int r1 = r7.length
            r2 = 0
            r3 = 0
        Le:
            if (r3 >= r1) goto L31
            r4 = r7[r3]
            r5 = 1
            java.lang.String r6 = "="
            int r5 = r4.indexOf(r6, r5)
            r6 = -1
            if (r6 != r5) goto L1d
            goto L2e
        L1d:
            java.lang.String r6 = r4.substring(r2, r5)
            int r5 = r5 + 1
            java.lang.String r4 = r4.substring(r5)
            java.lang.String r4 = java.net.URLDecoder.decode(r4)
            r0.put(r6, r4)
        L2e:
            int r3 = r3 + 1
            goto Le
        L31:
            return r0
    }

    public static boolean b(com.alipay.sdk.m.s.a r1) {
            if (r1 == 0) goto L17
            java.lang.String r0 = r1.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            java.lang.String r1 = r1.g
            java.lang.String r1 = r1.toLowerCase()
            java.lang.String r0 = "auth"
            boolean r1 = r1.contains(r0)
            goto L18
        L17:
            r1 = 0
        L18:
            return r1
    }

    public static int c() {
            r0 = 1
            r1 = 2
            r2 = 0
            java.lang.String r3 = android.os.Build.BRAND     // Catch: java.lang.Exception -> L73
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Exception -> L73
            java.lang.String r4 = android.os.Build.MANUFACTURER     // Catch: java.lang.Exception -> L73
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = "huawei"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L73
            r6[r2] = r3     // Catch: java.lang.Exception -> L73
            r6[r0] = r4     // Catch: java.lang.Exception -> L73
            boolean r5 = a(r5, r6)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L1e
            goto L76
        L1e:
            java.lang.String r5 = "oppo"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L73
            r6[r2] = r3     // Catch: java.lang.Exception -> L73
            r6[r0] = r4     // Catch: java.lang.Exception -> L73
            boolean r5 = a(r5, r6)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L2e
            r0 = 2
            goto L76
        L2e:
            java.lang.String r5 = "vivo"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L73
            r6[r2] = r3     // Catch: java.lang.Exception -> L73
            r6[r0] = r4     // Catch: java.lang.Exception -> L73
            boolean r5 = a(r5, r6)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L3e
            r0 = 4
            goto L76
        L3e:
            java.lang.String r5 = "lenovo"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L73
            r6[r2] = r3     // Catch: java.lang.Exception -> L73
            r6[r0] = r4     // Catch: java.lang.Exception -> L73
            boolean r5 = a(r5, r6)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L4f
            r0 = 8
            goto L76
        L4f:
            java.lang.String r5 = "xiaomi"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L73
            r6[r2] = r3     // Catch: java.lang.Exception -> L73
            r6[r0] = r4     // Catch: java.lang.Exception -> L73
            boolean r5 = a(r5, r6)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L60
            r0 = 16
            goto L76
        L60:
            java.lang.String r5 = "oneplus"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L73
            r1[r2] = r3     // Catch: java.lang.Exception -> L73
            r1[r0] = r4     // Catch: java.lang.Exception -> L73
            boolean r0 = a(r5, r1)     // Catch: java.lang.Exception -> L73
            if (r0 == 0) goto L71
            r0 = 32
            goto L76
        L71:
            r0 = 0
            goto L76
        L73:
            r0 = 61440(0xf000, float:8.6096E-41)
        L76:
            return r0
    }

    public static java.lang.String c(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            java.util.Locale r0 = r0.locale
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String c(com.alipay.sdk.m.s.a r7, java.lang.String r8) {
            r0 = 0
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L21
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L21
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L21
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L21
            r2[r6] = r8     // Catch: java.lang.Exception -> L21
            java.lang.Object r8 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L21
            r0 = r8
            goto L31
        L21:
            r8 = move-exception
            java.lang.Class r8 = r8.getClass()
            java.lang.String r8 = r8.getSimpleName()
            java.lang.String r1 = "biz"
            java.lang.String r2 = "rflex"
            com.alipay.sdk.m.k.a.b(r7, r1, r2, r8)
        L31:
            return r0
    }

    public static java.lang.String c(java.lang.String r1) {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            if (r0 == 0) goto L11
            java.lang.String r0 = "com.eg.android.AlipayGphoneRC"
            boolean r1 = android.text.TextUtils.equals(r1, r0)
            if (r1 == 0) goto L11
            java.lang.String r1 = "com.eg.android.AlipayGphoneRC.IAlixPay"
            return r1
        L11:
            java.lang.String r1 = "com.eg.android.AlipayGphone.IAlixPay"
            return r1
    }

    public static int d(java.lang.String r3) {
            r0 = 0
            r1 = 0
        L2:
            r2 = 64
            if (r1 >= r2) goto L19
            char[] r2 = com.alipay.sdk.m.u.n.j
            char r2 = r2[r1]
            java.lang.String r2 = java.lang.String.valueOf(r2)
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L16
            r0 = r1
            goto L19
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            return r0
    }

    public static android.util.DisplayMetrics d(android.content.Context r2) {
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r1 = "window"
            java.lang.Object r2 = r2.getSystemService(r1)
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            android.view.Display r2 = r2.getDefaultDisplay()
            r2.getMetrics(r0)
            return r0
    }

    public static java.lang.String d() {
            java.lang.String r0 = "\n"
            java.lang.String r1 = "Unavailable"
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.io.IOException -> L68
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.io.IOException -> L68
            java.lang.String r4 = "/proc/version"
            r3.<init>(r4)     // Catch: java.io.IOException -> L68
            r4 = 256(0x100, float:3.59E-43)
            r2.<init>(r3, r4)     // Catch: java.io.IOException -> L68
            java.lang.String r3 = r2.readLine()     // Catch: java.lang.Throwable -> L63
            r2.close()     // Catch: java.io.IOException -> L68
            java.lang.String r2 = "\\w+\\s+\\w+\\s+([^\\s]+)\\s+\\(([^\\s@]+(?:@[^\\s.]+)?)[^)]*\\)\\s+\\((?:[^(]*\\([^)]*\\))?[^)]*\\)\\s+([^\\s]+)\\s+(?:PREEMPT\\s+)?(.+)"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)     // Catch: java.io.IOException -> L68
            java.util.regex.Matcher r2 = r2.matcher(r3)     // Catch: java.io.IOException -> L68
            boolean r3 = r2.matches()     // Catch: java.io.IOException -> L68
            if (r3 != 0) goto L2a
            return r1
        L2a:
            int r3 = r2.groupCount()     // Catch: java.io.IOException -> L68
            r4 = 4
            if (r3 >= r4) goto L32
            return r1
        L32:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L68
            r5 = 1
            java.lang.String r5 = r2.group(r5)     // Catch: java.io.IOException -> L68
            r3.<init>(r5)     // Catch: java.io.IOException -> L68
            r3.append(r0)     // Catch: java.io.IOException -> L68
            r5 = 2
            java.lang.String r5 = r2.group(r5)     // Catch: java.io.IOException -> L68
            r3.append(r5)     // Catch: java.io.IOException -> L68
            java.lang.String r5 = " "
            r3.append(r5)     // Catch: java.io.IOException -> L68
            r5 = 3
            java.lang.String r5 = r2.group(r5)     // Catch: java.io.IOException -> L68
            r3.append(r5)     // Catch: java.io.IOException -> L68
            r3.append(r0)     // Catch: java.io.IOException -> L68
            java.lang.String r0 = r2.group(r4)     // Catch: java.io.IOException -> L68
            r3.append(r0)     // Catch: java.io.IOException -> L68
            java.lang.String r0 = r3.toString()     // Catch: java.io.IOException -> L68
            return r0
        L63:
            r0 = move-exception
            r2.close()     // Catch: java.io.IOException -> L68
            throw r0     // Catch: java.io.IOException -> L68
        L68:
            return r1
    }

    public static boolean d(com.alipay.sdk.m.s.a r5, java.lang.String r6) {
            r0 = 0
            int r6 = e(r6)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "biz"
            java.lang.String r2 = "bindExt"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r3.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = ""
            r3.append(r4)     // Catch: java.lang.Throwable -> L2c
            r3.append(r6)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L2c
            com.alipay.sdk.m.k.a.a(r5, r1, r2, r3)     // Catch: java.lang.Throwable -> L2c
            com.alipay.sdk.m.m.a r5 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L2c
            boolean r5 = r5.o()     // Catch: java.lang.Throwable -> L2c
            if (r5 == 0) goto L2c
            r5 = 2
            r6 = r6 & r5
            if (r6 != r5) goto L2c
            r0 = 1
        L2c:
            return r0
    }

    public static int e(java.lang.String r3) {
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = r0.j()     // Catch: java.lang.Throwable -> L20
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L20
            r2 = 0
            if (r1 == 0) goto L10
            return r2
        L10:
            java.lang.String r1 = ""
            java.lang.String r0 = b(r0, r1)     // Catch: java.lang.Throwable -> L20
            boolean r3 = r0.contains(r3)     // Catch: java.lang.Throwable -> L20
            if (r3 == 0) goto L1d
            r2 = 2
        L1d:
            r3 = r2 | 1
            goto L23
        L20:
            r3 = 61440(0xf000, float:8.6096E-41)
        L23:
            return r3
    }

    public static java.lang.String e() {
            java.lang.String r0 = d()
            java.lang.String r1 = "-"
            int r1 = r0.indexOf(r1)
            r2 = 0
            r3 = -1
            if (r1 == r3) goto L12
            java.lang.String r0 = r0.substring(r2, r1)
        L12:
            java.lang.String r1 = "\n"
            int r1 = r0.indexOf(r1)
            if (r1 == r3) goto L1e
            java.lang.String r0 = r0.substring(r2, r1)
        L1e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Linux "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    public static java.lang.String e(android.content.Context r2) {
            java.lang.String r2 = com.alipay.sdk.m.u.m.b(r2)
            java.lang.String r0 = "://"
            int r0 = r2.indexOf(r0)
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
            return r2
    }

    public static java.lang.String e(com.alipay.sdk.m.s.a r2, java.lang.String r3) {
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLDecoder.decode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r3 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "H5PayDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r2, r0, r1, r3)
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String f() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Android "
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String f(android.content.Context r2) {
            android.util.DisplayMetrics r2 = d(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.widthPixels
            r0.append(r1)
            java.lang.String r1 = "*"
            r0.append(r1)
            int r2 = r2.heightPixels
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static boolean f(java.lang.String r1) {
            java.lang.String r0 = "^http(s)?://([a-z0-9_\\-]+\\.)*(alipaydev|alipay|taobao)\\.(com|net)(:\\d+)?(/.*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    public static int g() {
            int r0 = android.os.Process.myUid()     // Catch: java.lang.Throwable -> L5
            goto Lb
        L5:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
            r0 = -200(0xffffffffffffff38, float:NaN)
        Lb:
            return r0
    }

    public static java.lang.String g(android.content.Context r5) {
            java.lang.String r0 = f()
            java.lang.String r1 = e()
            java.lang.String r2 = c(r5)
            java.lang.String r5 = f(r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = " ("
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = ";"
            r3.append(r0)
            r3.append(r1)
            r3.append(r0)
            r3.append(r2)
            r3.append(r0)
            r3.append(r0)
            r3.append(r5)
            java.lang.String r5 = ")"
            r3.append(r5)
            java.lang.String r5 = "(sdk android)"
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            return r5
    }

    public static java.lang.String g(java.lang.String r1) {
            r0 = 1
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static org.json.JSONObject h(java.lang.String r1) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6
            goto Lb
        L6:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
        Lb:
            return r0
    }

    public static boolean h() {
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public static boolean h(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            java.lang.String r1 = "com.alipay.android.app"
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            if (r3 != 0) goto L10
            return r0
        L10:
            r3 = 1
            return r3
        L12:
            return r0
    }

    public static java.lang.String i(java.lang.String r4) {
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = r4.getAuthority()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "%s%s"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L1c
            r3 = 0
            r2[r3] = r0     // Catch: java.lang.Throwable -> L1c
            r0 = 1
            r2[r0] = r4     // Catch: java.lang.Throwable -> L1c
            java.lang.String r4 = java.lang.String.format(r1, r2)     // Catch: java.lang.Throwable -> L1c
            return r4
        L1c:
            r4 = move-exception
            com.alipay.sdk.m.u.e.a(r4)
            java.lang.String r4 = "-"
            return r4
    }

    public static boolean i() {
            r0 = 0
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = r1.g()     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "\\|"
            java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> L32
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L18
            return r0
        L18:
            int r3 = r1.length     // Catch: java.lang.Throwable -> L32
            r4 = 0
        L1a:
            if (r4 >= r3) goto L31
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L32
            boolean r6 = android.text.TextUtils.equals(r2, r5)     // Catch: java.lang.Throwable -> L32
            if (r6 != 0) goto L30
            java.lang.String r6 = "all"
            boolean r5 = android.text.TextUtils.equals(r5, r6)     // Catch: java.lang.Throwable -> L32
            if (r5 == 0) goto L2d
            goto L30
        L2d:
            int r4 = r4 + 1
            goto L1a
        L30:
            r0 = 1
        L31:
            return r0
        L32:
            r1 = move-exception
            com.alipay.sdk.m.u.e.a(r1)
            return r0
    }
}
