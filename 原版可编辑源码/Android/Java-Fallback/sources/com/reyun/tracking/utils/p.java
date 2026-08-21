package com.reyun.tracking.utils;

public class p {
    private static com.reyun.tracking.utils.p a;
    private java.net.Socket b;
    private java.lang.String c;
    private int d;
    private java.io.InputStream e;
    private java.io.OutputStream f;
    private boolean g;
    private int h;
    private java.lang.String i;

    private p(java.lang.String r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.g = r0
            r0 = 0
            r1.h = r0
            r1.c = r2
            r1.d = r3
            return
    }

    private byte a(java.lang.String r1) {
            r0 = this;
            byte r1 = com.reyun.tracking.sdk.Tracking.mapApi2Byte(r1)
            return r1
    }

    public static com.reyun.tracking.utils.p a() {
            com.reyun.tracking.utils.p r0 = com.reyun.tracking.utils.p.a
            return r0
    }

    public static com.reyun.tracking.utils.p a(java.lang.String r1, int r2) {
            com.reyun.tracking.utils.p r0 = com.reyun.tracking.utils.p.a
            if (r0 != 0) goto L11
            com.reyun.tracking.utils.p r0 = new com.reyun.tracking.utils.p
            r0.<init>(r1, r2)
            com.reyun.tracking.utils.p.a = r0
            r1 = 1
            r0.g = r1
            r1 = 0
            r0.h = r1
        L11:
            com.reyun.tracking.utils.p r1 = com.reyun.tracking.utils.p.a
            return r1
    }

    static short a(com.reyun.tracking.utils.p r0, java.io.InputStream r1) {
            short r0 = r0.a(r1)
            return r0
    }

    private short a(java.io.InputStream r4) {
            r3 = this;
            r0 = 2
            byte[] r4 = r3.a(r4, r0)
            r0 = 0
            r1 = 0
        L7:
            int r2 = r4.length
            if (r0 >= r2) goto L16
            int r1 = r1 << 8
            short r1 = (short) r1
            r2 = r4[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1 = r1 | r2
            short r1 = (short) r1
            int r0 = r0 + 1
            goto L7
        L16:
            return r1
    }

    private void a(com.reyun.tracking.utils.n r3) {
            r2 = this;
            java.lang.String r0 = "Tracking"
            java.lang.String r1 = "重新连接"
            com.reyun.tracking.a.a.d(r0, r1)
            r2.d()
            r0 = 6000(0x1770, double:2.9644E-320)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> Lf
        Lf:
            r2.b(r3)
            return
    }

    static void a(com.reyun.tracking.utils.p r0, com.reyun.tracking.utils.n r1) {
            r0.b(r1)
            return
    }

    static boolean a(com.reyun.tracking.utils.p r0) {
            boolean r0 = r0.e()
            return r0
    }

    public static byte[] a(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            r1 = r3 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 3
            r0[r2] = r1
            int r1 = r3 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            int r1 = r3 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r3 = r3 >> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            return r0
    }

    static byte[] a(com.reyun.tracking.utils.p r0, java.io.InputStream r1, int r2) {
            byte[] r0 = r0.a(r1, r2)
            return r0
    }

    private byte[] a(java.io.InputStream r4, int r5) {
            r3 = this;
            byte[] r0 = new byte[r5]
            r1 = 0
        L3:
            if (r1 >= r5) goto Ld
            int r2 = r5 - r1
            int r2 = r4.read(r0, r1, r2)
            int r1 = r1 + r2
            goto L3
        Ld:
            return r0
    }

    public static void b() {
            com.reyun.tracking.utils.p r0 = com.reyun.tracking.utils.p.a
            if (r0 == 0) goto Ld
            r1 = 0
            r0.g = r1
            r0.d()
            r0 = 0
            com.reyun.tracking.utils.p.a = r0
        Ld:
            return
    }

    private void b(com.reyun.tracking.utils.n r6) {
            r5 = this;
            java.lang.String r0 = "Tracking"
            java.lang.String r1 = "初始化连接"
            com.reyun.tracking.a.a.d(r0, r1)
            java.net.Socket r0 = new java.net.Socket
            r0.<init>()
            r5.b = r0
            r1 = 0
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = r5.c     // Catch: java.lang.Exception -> L54
            int r4 = r5.d     // Catch: java.lang.Exception -> L54
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> L54
            r3 = 3000(0xbb8, float:4.204E-42)
            r0.connect(r2, r3)     // Catch: java.lang.Exception -> L54
            java.net.Socket r0 = r5.b     // Catch: java.lang.Exception -> L54
            r0.setSoTimeout(r3)     // Catch: java.lang.Exception -> L54
            java.net.Socket r0 = r5.b     // Catch: java.lang.Exception -> L54
            boolean r0 = r0.isConnected()     // Catch: java.lang.Exception -> L54
            if (r0 == 0) goto L4c
            java.net.Socket r0 = r5.b     // Catch: java.lang.Exception -> L54
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Exception -> L54
            r5.e = r0     // Catch: java.lang.Exception -> L54
            java.net.Socket r0 = r5.b     // Catch: java.lang.Exception -> L54
            java.io.OutputStream r0 = r0.getOutputStream()     // Catch: java.lang.Exception -> L54
            r5.f = r0     // Catch: java.lang.Exception -> L54
            r5.h = r1     // Catch: java.lang.Exception -> L54
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()     // Catch: java.lang.Exception -> L54
            com.reyun.tracking.utils.r r2 = new com.reyun.tracking.utils.r     // Catch: java.lang.Exception -> L54
            r2.<init>(r5)     // Catch: java.lang.Exception -> L54
            r3 = 120000(0x1d4c0, double:5.9288E-319)
            r0.a(r2, r3)     // Catch: java.lang.Exception -> L54
            goto L8e
        L4c:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "没连接上"
            r0.<init>(r2)     // Catch: java.lang.Exception -> L54
            throw r0     // Catch: java.lang.Exception -> L54
        L54:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "request url:"
            r0.append(r2)
            java.lang.String r2 = r5.i
            r0.append(r2)
            java.lang.String r2 = "   errorCounter="
            r0.append(r2)
            int r2 = r5.h
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "Test"
            com.reyun.tracking.a.a.d(r2, r0)
            int r0 = r5.h
            int r0 = r0 + 1
            r5.h = r0
            r2 = 5
            if (r0 < r2) goto L87
            com.reyun.tracking.sdk.Tracking.setUseTcp(r1)
            goto L8e
        L87:
            boolean r0 = r5.g
            if (r0 == 0) goto L8e
            r5.a(r6)
        L8e:
            return
    }

    static boolean b(com.reyun.tracking.utils.p r0) {
            boolean r0 = r0.g
            return r0
    }

    static java.net.Socket c(com.reyun.tracking.utils.p r0) {
            java.net.Socket r0 = r0.b
            return r0
    }

    static int d(com.reyun.tracking.utils.p r2) {
            int r0 = r2.h
            int r1 = r0 + 1
            r2.h = r1
            return r0
    }

    private void d() {
            r2 = this;
            java.io.InputStream r0 = r2.e
            r1 = 0
            if (r0 == 0) goto La
            r0.close()     // Catch: java.lang.Exception -> L8
        L8:
            r2.e = r1
        La:
            java.io.OutputStream r0 = r2.f
            if (r0 == 0) goto L13
            r0.close()     // Catch: java.lang.Exception -> L11
        L11:
            r2.f = r1
        L13:
            java.net.Socket r0 = r2.b
            if (r0 == 0) goto L1c
            r0.close()     // Catch: java.lang.Exception -> L1a
        L1a:
            r2.b = r1
        L1c:
            return
    }

    static void e(com.reyun.tracking.utils.p r0) {
            r0.d()
            return
    }

    private boolean e() {
            r1 = this;
            java.net.Socket r0 = r1.b
            if (r0 == 0) goto Lc
            boolean r0 = r0.isConnected()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    static int f(com.reyun.tracking.utils.p r0) {
            int r0 = r0.h
            return r0
    }

    public java.lang.Runnable a(java.lang.String r8, java.lang.String r9, com.reyun.tracking.utils.n r10) {
            r7 = this;
            r7.i = r8
            byte r5 = r7.a(r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ReyunDataSyncer.getRunnable:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Tracking"
            com.reyun.tracking.a.a.d(r1, r0)
            com.reyun.tracking.utils.q r6 = new com.reyun.tracking.utils.q
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    public void c() {
            r1 = this;
            r0 = 0
            r1.h = r0
            return
    }
}
