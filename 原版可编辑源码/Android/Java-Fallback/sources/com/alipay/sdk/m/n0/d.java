package com.alipay.sdk.m.n0;

public class d {
    public static final java.lang.Object i = null;
    public static com.alipay.sdk.m.n0.d j;
    public static final java.lang.String k = null;
    public android.content.Context a;
    public java.lang.String b;
    public com.alipay.sdk.m.n0.e c;
    public java.lang.String d;
    public java.lang.String e;
    public com.alipay.sdk.m.m0.a f;
    public com.alipay.sdk.m.m0.a g;
    public java.util.regex.Pattern h;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.alipay.sdk.m.n0.d.i = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ".UTSystemConfig"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "Global"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.alipay.sdk.m.n0.d.k = r0
            return
    }

    public d(android.content.Context r14) {
            r13 = this;
            r13.<init>()
            r0 = 0
            r13.a = r0
            r13.b = r0
            r13.c = r0
            java.lang.String r1 = "xx_utdid_key"
            r13.d = r1
            java.lang.String r1 = "xx_utdid_domain"
            r13.e = r1
            r13.f = r0
            r13.g = r0
            java.lang.String r0 = "[^0-9a-zA-Z=/+]+"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            r13.h = r0
            r13.a = r14
            com.alipay.sdk.m.m0.a r0 = new com.alipay.sdk.m.m0.a
            java.lang.String r3 = com.alipay.sdk.m.n0.d.k
            java.lang.String r4 = "Alvin2"
            r5 = 0
            r6 = 1
            r1 = r0
            r2 = r14
            r1.<init>(r2, r3, r4, r5, r6)
            r13.g = r0
            com.alipay.sdk.m.m0.a r0 = new com.alipay.sdk.m.m0.a
            java.lang.String r9 = ".DataStorage"
            java.lang.String r10 = "ContextData"
            r11 = 0
            r12 = 1
            r7 = r0
            r8 = r14
            r7.<init>(r8, r9, r10, r11, r12)
            r13.f = r0
            com.alipay.sdk.m.n0.e r14 = new com.alipay.sdk.m.n0.e
            r14.<init>()
            r13.c = r14
            r14 = 1
            java.lang.Object[] r0 = new java.lang.Object[r14]
            java.lang.String r1 = r13.d
            int r1 = com.alipay.sdk.m.l0.f.a(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "K_%d"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r13.d = r0
            java.lang.Object[] r14 = new java.lang.Object[r14]
            java.lang.String r0 = r13.e
            int r0 = com.alipay.sdk.m.l0.f.a(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r14[r2] = r0
            java.lang.String r0 = "D_%d"
            java.lang.String r14 = java.lang.String.format(r0, r14)
            r13.e = r14
            return
    }

    public static com.alipay.sdk.m.n0.d a(android.content.Context r2) {
            if (r2 == 0) goto L1c
            com.alipay.sdk.m.n0.d r0 = com.alipay.sdk.m.n0.d.j
            if (r0 != 0) goto L1c
            java.lang.Object r0 = com.alipay.sdk.m.n0.d.i
            monitor-enter(r0)
            com.alipay.sdk.m.n0.d r1 = com.alipay.sdk.m.n0.d.j     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            com.alipay.sdk.m.n0.d r1 = new com.alipay.sdk.m.n0.d     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L19
            com.alipay.sdk.m.n0.d.j = r1     // Catch: java.lang.Throwable -> L19
            r1.d()     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r2
        L1c:
            com.alipay.sdk.m.n0.d r2 = com.alipay.sdk.m.n0.d.j
            return r2
    }

    public static java.lang.String a(byte[] r4) throws java.lang.Exception {
            r0 = 44
            byte[] r0 = new byte[r0]
            r0 = {x0028: FILL_ARRAY_DATA , data: [69, 114, 116, -33, 125, -54, -31, 86, -11, 11, -78, -96, -17, -99, 64, 23, -95, -126, -82, -64, 113, 116, -16, -103, 49, -30, 9, -39, 33, -80, -68, -78, -117, 53, 30, -122, 64, -104, 74, -49, 106, 85, -38, -93} // fill-array
            java.lang.String r1 = "HmacSHA1"
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r1)
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec
            byte[] r0 = com.alipay.sdk.m.l0.e.a(r0)
            java.lang.String r3 = r1.getAlgorithm()
            r2.<init>(r0, r3)
            r1.init(r2)
            byte[] r4 = r1.doFinal(r4)
            r0 = 2
            java.lang.String r4 = com.alipay.sdk.m.l0.b.c(r4, r0)
            return r4
    }

    private boolean a(java.lang.String r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L2a
            java.lang.String r1 = "\n"
            boolean r1 = r5.endsWith(r1)
            r2 = 1
            if (r1 == 0) goto L15
            int r1 = r5.length()
            int r1 = r1 - r2
            java.lang.String r5 = r5.substring(r0, r1)
        L15:
            int r1 = r5.length()
            r3 = 24
            if (r3 != r1) goto L2a
            java.util.regex.Pattern r1 = r4.h
            java.util.regex.Matcher r5 = r1.matcher(r5)
            boolean r5 = r5.find()
            if (r5 != 0) goto L2a
            return r2
        L2a:
            return r0
    }

    private void b(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.a(r3)
            if (r0 == 0) goto L2f
            java.lang.String r0 = "\n"
            boolean r0 = r3.endsWith(r0)
            if (r0 == 0) goto L19
            int r0 = r3.length()
            int r0 = r0 + (-1)
            r1 = 0
            java.lang.String r3 = r3.substring(r1, r0)
        L19:
            int r0 = r3.length()
            r1 = 24
            if (r0 != r1) goto L2f
            com.alipay.sdk.m.m0.a r0 = r2.g
            if (r0 == 0) goto L2f
            java.lang.String r1 = "UTDID2"
            r0.a(r1, r3)
            com.alipay.sdk.m.m0.a r3 = r2.g
            r3.a()
        L2f:
            return
    }

    private void c(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L1e
            com.alipay.sdk.m.m0.a r0 = r2.f
            if (r0 == 0) goto L1e
            java.lang.String r1 = r2.d
            java.lang.String r0 = r0.a(r1)
            boolean r0 = r3.equals(r0)
            if (r0 != 0) goto L1e
            com.alipay.sdk.m.m0.a r0 = r2.f
            java.lang.String r1 = r2.d
            r0.a(r1, r3)
            com.alipay.sdk.m.m0.a r3 = r2.f
            r3.a()
        L1e:
            return
    }

    private void d() {
            r4 = this;
            com.alipay.sdk.m.m0.a r0 = r4.g
            if (r0 == 0) goto L67
            java.lang.String r1 = "UTDID2"
            java.lang.String r0 = r0.a(r1)
            boolean r0 = com.alipay.sdk.m.l0.f.a(r0)
            if (r0 == 0) goto L21
            com.alipay.sdk.m.m0.a r0 = r4.g
            java.lang.String r1 = "UTDID"
            java.lang.String r0 = r0.a(r1)
            boolean r1 = com.alipay.sdk.m.l0.f.a(r0)
            if (r1 != 0) goto L21
            r4.b(r0)
        L21:
            r0 = 0
            com.alipay.sdk.m.m0.a r1 = r4.g
            java.lang.String r2 = "DID"
            java.lang.String r1 = r1.a(r2)
            boolean r1 = com.alipay.sdk.m.l0.f.a(r1)
            r3 = 1
            if (r1 != 0) goto L37
            com.alipay.sdk.m.m0.a r0 = r4.g
            r0.b(r2)
            r0 = 1
        L37:
            com.alipay.sdk.m.m0.a r1 = r4.g
            java.lang.String r2 = "EI"
            java.lang.String r1 = r1.a(r2)
            boolean r1 = com.alipay.sdk.m.l0.f.a(r1)
            if (r1 != 0) goto L4b
            com.alipay.sdk.m.m0.a r0 = r4.g
            r0.b(r2)
            r0 = 1
        L4b:
            com.alipay.sdk.m.m0.a r1 = r4.g
            java.lang.String r2 = "SI"
            java.lang.String r1 = r1.a(r2)
            boolean r1 = com.alipay.sdk.m.l0.f.a(r1)
            if (r1 != 0) goto L5f
            com.alipay.sdk.m.m0.a r0 = r4.g
            r0.b(r2)
            goto L60
        L5f:
            r3 = r0
        L60:
            if (r3 == 0) goto L67
            com.alipay.sdk.m.m0.a r0 = r4.g
            r0.a()
        L67:
            return
    }

    private byte[] e() throws java.lang.Exception {
            r5 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r2 = (int) r1
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            int r1 = r1.nextInt()
            byte[] r2 = com.alipay.sdk.m.l0.c.a(r2)
            byte[] r1 = com.alipay.sdk.m.l0.c.a(r1)
            r3 = 4
            r4 = 0
            r0.write(r2, r4, r3)
            r0.write(r1, r4, r3)
            r1 = 3
            r0.write(r1)
            r0.write(r4)
            android.content.Context r1 = r5.a     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = com.alipay.sdk.m.l0.d.a(r1)     // Catch: java.lang.Exception -> L34
            goto L4e
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            java.util.Random r2 = new java.util.Random
            r2.<init>()
            int r2 = r2.nextInt()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
        L4e:
            int r1 = com.alipay.sdk.m.l0.f.a(r1)
            byte[] r1 = com.alipay.sdk.m.l0.c.a(r1)
            r0.write(r1, r4, r3)
            byte[] r1 = r0.toByteArray()
            java.lang.String r1 = a(r1)
            int r1 = com.alipay.sdk.m.l0.f.a(r1)
            byte[] r1 = com.alipay.sdk.m.l0.c.a(r1)
            r0.write(r1)
            byte[] r0 = r0.toByteArray()
            return r0
    }

    private java.lang.String f() {
            r2 = this;
            com.alipay.sdk.m.m0.a r0 = r2.g
            if (r0 == 0) goto L19
            java.lang.String r1 = "UTDID2"
            java.lang.String r0 = r0.a(r1)
            boolean r1 = com.alipay.sdk.m.l0.f.a(r0)
            if (r1 != 0) goto L19
            com.alipay.sdk.m.n0.e r1 = r2.c
            java.lang.String r1 = r1.a(r0)
            if (r1 == 0) goto L19
            return r0
        L19:
            r0 = 0
            return r0
    }

    public synchronized java.lang.String a() {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = r2.c()     // Catch: java.lang.Throwable -> L37
            r2.b = r0     // Catch: java.lang.Throwable -> L37
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L37
            if (r0 != 0) goto L11
            java.lang.String r0 = r2.b     // Catch: java.lang.Throwable -> L37
            monitor-exit(r2)
            return r0
        L11:
            byte[] r0 = r2.e()     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            if (r0 == 0) goto L34
            r1 = 2
            java.lang.String r1 = com.alipay.sdk.m.l0.b.c(r0, r1)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            r2.b = r1     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            r2.b(r1)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            com.alipay.sdk.m.n0.e r1 = r2.c     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            java.lang.String r0 = r1.a(r0)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            if (r0 == 0) goto L2c
            r2.c(r0)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
        L2c:
            java.lang.String r0 = r2.b     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L37
            monitor-exit(r2)
            return r0
        L30:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L37
        L34:
            r0 = 0
            monitor-exit(r2)
            return r0
        L37:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized java.lang.String b() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.b     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return r0
        L7:
            java.lang.String r0 = r1.a()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return r0
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.lang.String c() {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r3.f()     // Catch: java.lang.Throwable -> L53
            boolean r1 = r3.a(r0)     // Catch: java.lang.Throwable -> L53
            if (r1 == 0) goto L18
            com.alipay.sdk.m.n0.e r1 = r3.c     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = r1.a(r0)     // Catch: java.lang.Throwable -> L53
            r3.c(r1)     // Catch: java.lang.Throwable -> L53
            r3.b = r0     // Catch: java.lang.Throwable -> L53
            monitor-exit(r3)
            return r0
        L18:
            com.alipay.sdk.m.m0.a r0 = r3.f     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = r3.d     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L53
            boolean r1 = com.alipay.sdk.m.l0.f.a(r0)     // Catch: java.lang.Throwable -> L53
            if (r1 != 0) goto L50
            com.alipay.sdk.m.n0.f r1 = new com.alipay.sdk.m.n0.f     // Catch: java.lang.Throwable -> L53
            r1.<init>()     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = r1.a(r0)     // Catch: java.lang.Throwable -> L53
            boolean r2 = r3.a(r1)     // Catch: java.lang.Throwable -> L53
            if (r2 != 0) goto L3b
            com.alipay.sdk.m.n0.e r1 = r3.c     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = r1.b(r0)     // Catch: java.lang.Throwable -> L53
        L3b:
            boolean r0 = r3.a(r1)     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L50
            boolean r0 = com.alipay.sdk.m.l0.f.a(r1)     // Catch: java.lang.Throwable -> L53
            if (r0 != 0) goto L50
            r3.b = r1     // Catch: java.lang.Throwable -> L53
            r3.b(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> L53
            monitor-exit(r3)
            return r0
        L50:
            r0 = 0
            monitor-exit(r3)
            return r0
        L53:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }
}
