package com.loc;

public final class bo {
    public static int a = 0;
    public static java.lang.String b = "";
    public static java.util.HashMap<java.lang.String, java.lang.String> c;
    public static java.util.HashMap<java.lang.String, java.lang.String> d;
    public static java.util.HashMap<java.lang.String, java.lang.String> e;
    private static com.loc.bo f;

    public interface a {
        java.net.URLConnection a();
    }

    static {
            return
    }

    public bo() {
            r0 = this;
            r0.<init>()
            com.loc.m.e()
            return
    }

    private static int a(com.loc.bt r3, long r4) {
            d(r3)     // Catch: java.lang.Throwable -> L3f
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            goto Lf
        La:
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L3f
            long r0 = r0 - r4
        Lf:
            int r4 = r3.n()     // Catch: java.lang.Throwable -> L3f
            com.loc.bt$a r5 = r3.p()     // Catch: java.lang.Throwable -> L3f
            com.loc.bt$a r2 = com.loc.bt.a.d     // Catch: java.lang.Throwable -> L3f
            if (r5 == r2) goto L3e
            com.loc.bt$a r5 = r3.p()     // Catch: java.lang.Throwable -> L3f
            com.loc.bt$a r2 = com.loc.bt.a.e     // Catch: java.lang.Throwable -> L3f
            if (r5 != r2) goto L24
            goto L3e
        L24:
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L3f
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 >= 0) goto L33
            long r4 = r4 - r0
            r0 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 >= 0) goto L31
            goto L33
        L31:
            int r3 = (int) r4     // Catch: java.lang.Throwable -> L3f
            return r3
        L33:
            r4 = 1000(0x3e8, float:1.401E-42)
            int r3 = r3.n()     // Catch: java.lang.Throwable -> L3f
            int r3 = java.lang.Math.min(r4, r3)     // Catch: java.lang.Throwable -> L3f
            return r3
        L3e:
            return r4
        L3f:
            r3 = 5000(0x1388, float:7.006E-42)
            return r3
    }

    public static com.loc.bo a() {
            com.loc.bo r0 = com.loc.bo.f
            if (r0 != 0) goto Lb
            com.loc.bo r0 = new com.loc.bo
            r0.<init>()
            com.loc.bo.f = r0
        Lb:
            com.loc.bo r0 = com.loc.bo.f
            return r0
    }

    public static com.loc.bu a(com.loc.bt r1) throws com.loc.k {
            boolean r0 = r1.s()
            com.loc.bu r1 = a(r1, r0)
            return r1
    }

    private static com.loc.bu a(com.loc.bt r0, com.loc.bt.b r1, int r2) throws com.loc.k {
            d(r0)     // Catch: java.lang.Throwable -> L13 com.loc.k -> L1f
            r0.a(r1)     // Catch: java.lang.Throwable -> L13 com.loc.k -> L1f
            r0.c(r2)     // Catch: java.lang.Throwable -> L13 com.loc.k -> L1f
            com.loc.br r1 = new com.loc.br     // Catch: java.lang.Throwable -> L13 com.loc.k -> L1f
            r1.<init>()     // Catch: java.lang.Throwable -> L13 com.loc.k -> L1f
            com.loc.bu r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L13 com.loc.k -> L1f
            return r0
        L13:
            r0 = move-exception
            r0.printStackTrace()
            com.loc.k r0 = new com.loc.k
            java.lang.String r1 = "未知的错误"
            r0.<init>(r1)
            throw r0
        L1f:
            r0 = move-exception
            throw r0
    }

    @java.lang.Deprecated
    private static com.loc.bu a(com.loc.bt r7, boolean r8) throws com.loc.k {
            d(r7)
            if (r8 == 0) goto L8
            com.loc.bt$c r8 = com.loc.bt.c.b
            goto La
        L8:
            com.loc.bt$c r8 = com.loc.bt.c.a
        La:
            r7.a(r8)
            r8 = 0
            r0 = 0
            r2 = 0
            boolean r3 = b(r7)
            if (r3 == 0) goto L45
            boolean r3 = c(r7)
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: com.loc.k -> L2c
            com.loc.bt$b r4 = b(r7, r3)     // Catch: com.loc.k -> L2c
            int r5 = d(r7, r3)     // Catch: com.loc.k -> L2c
            com.loc.bu r8 = a(r7, r4, r5)     // Catch: com.loc.k -> L2c
            goto L45
        L2c:
            r2 = move-exception
            r4 = 1
            int r5 = r2.f()
            r6 = 21
            if (r5 != r6) goto L40
            com.loc.bt$a r5 = r7.p()
            com.loc.bt$a r6 = com.loc.bt.a.b
            if (r5 == r6) goto L3f
            goto L40
        L3f:
            throw r2
        L40:
            if (r3 == 0) goto L44
            r2 = 1
            goto L45
        L44:
            throw r2
        L45:
            if (r8 == 0) goto L52
            byte[] r3 = r8.a
            if (r3 == 0) goto L52
            byte[] r3 = r8.a
            int r3 = r3.length
            if (r3 > 0) goto L51
            goto L52
        L51:
            return r8
        L52:
            com.loc.bt$b r8 = c(r7, r2)     // Catch: com.loc.k -> L5f
            int r0 = a(r7, r0)     // Catch: com.loc.k -> L5f
            com.loc.bu r7 = a(r7, r8, r0)     // Catch: com.loc.k -> L5f
            return r7
        L5f:
            r7 = move-exception
            throw r7
    }

    private static com.loc.bt.b b(com.loc.bt r2, boolean r3) {
            com.loc.bt$a r0 = r2.p()
            com.loc.bt$a r1 = com.loc.bt.a.d
            if (r0 != r1) goto Lb
            com.loc.bt$b r2 = com.loc.bt.b.e
            return r2
        Lb:
            com.loc.bt$a r2 = r2.p()
            com.loc.bt$a r0 = com.loc.bt.a.e
            if (r2 != r0) goto L16
            com.loc.bt$b r2 = com.loc.bt.b.b
            return r2
        L16:
            if (r3 == 0) goto L1b
            com.loc.bt$b r2 = com.loc.bt.b.a
            return r2
        L1b:
            com.loc.bt$b r2 = com.loc.bt.b.b
            return r2
    }

    private static boolean b(com.loc.bt r2) throws com.loc.k {
            d(r2)
            java.lang.String r0 = r2.c()     // Catch: java.lang.Throwable -> L2b
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto Lf
            r2 = 0
            return r2
        Lf:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = r1.getHost()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = r2.g()     // Catch: java.lang.Throwable -> L2b
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L26
            java.lang.String r0 = r2.g()     // Catch: java.lang.Throwable -> L2b
        L26:
            boolean r2 = com.loc.m.g(r0)     // Catch: java.lang.Throwable -> L2b
            return r2
        L2b:
            r2 = 1
            return r2
    }

    private static com.loc.bt.b c(com.loc.bt r1, boolean r2) {
            com.loc.bt$a r1 = r1.p()
            com.loc.bt$a r0 = com.loc.bt.a.d
            if (r1 != r0) goto L10
            if (r2 == 0) goto Ld
            com.loc.bt$b r1 = com.loc.bt.b.f
            return r1
        Ld:
            com.loc.bt$b r1 = com.loc.bt.b.g
            return r1
        L10:
            if (r2 == 0) goto L15
            com.loc.bt$b r1 = com.loc.bt.b.c
            return r1
        L15:
            com.loc.bt$b r1 = com.loc.bt.b.d
            return r1
    }

    private static boolean c(com.loc.bt r3) throws com.loc.k {
            d(r3)
            r0 = 1
            boolean r1 = b(r3)     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r1 = r3.c()     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = r3.b()     // Catch: java.lang.Throwable -> L29
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Throwable -> L29
            r2 = 0
            if (r1 == 0) goto L1b
            return r2
        L1b:
            com.loc.bt$a r3 = r3.p()     // Catch: java.lang.Throwable -> L29
            com.loc.bt$a r1 = com.loc.bt.a.e     // Catch: java.lang.Throwable -> L29
            if (r3 != r1) goto L24
            return r2
        L24:
            boolean r3 = com.loc.m.h     // Catch: java.lang.Throwable -> L29
            if (r3 != 0) goto L29
            return r2
        L29:
            return r0
    }

    private static int d(com.loc.bt r4, boolean r5) {
            d(r4)     // Catch: java.lang.Throwable -> L21
            int r0 = r4.n()     // Catch: java.lang.Throwable -> L21
            int r1 = com.loc.m.e     // Catch: java.lang.Throwable -> L21
            com.loc.bt$a r2 = r4.p()     // Catch: java.lang.Throwable -> L21
            com.loc.bt$a r3 = com.loc.bt.a.d     // Catch: java.lang.Throwable -> L21
            if (r2 == r3) goto L20
            com.loc.bt$a r4 = r4.p()     // Catch: java.lang.Throwable -> L21
            com.loc.bt$a r2 = com.loc.bt.a.e     // Catch: java.lang.Throwable -> L21
            if (r4 != r2) goto L1a
            goto L20
        L1a:
            if (r0 >= r1) goto L1d
            return r0
        L1d:
            if (r5 == 0) goto L20
            return r1
        L20:
            return r0
        L21:
            r4 = 5000(0x1388, float:7.006E-42)
            return r4
    }

    private static void d(com.loc.bt r1) throws com.loc.k {
            if (r1 == 0) goto L1d
            java.lang.String r0 = r1.b()
            if (r0 == 0) goto L15
            java.lang.String r1 = r1.b()
            java.lang.String r0 = ""
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L15
            return
        L15:
            com.loc.k r1 = new com.loc.k
            java.lang.String r0 = "request url is empty"
            r1.<init>(r0)
            throw r1
        L1d:
            com.loc.k r1 = new com.loc.k
            java.lang.String r0 = "requeust is null"
            r1.<init>(r0)
            throw r1
    }
}
