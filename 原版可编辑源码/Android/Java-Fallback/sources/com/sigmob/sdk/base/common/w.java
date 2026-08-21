package com.sigmob.sdk.base.common;

public class w {
    private int a;
    private java.lang.String b;
    private int c;
    private java.lang.String d;
    private java.net.ServerSocket e;
    private java.net.Socket f;
    private java.net.SocketAddress g;
    private boolean h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;


    public w(int r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.a = r0
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.c = r2     // Catch: java.lang.Throwable -> L12
            java.lang.String r2 = "localhost"
            r1.d = r2     // Catch: java.lang.Throwable -> L12
            goto L18
        L12:
            r2 = move-exception
            java.lang.String r0 = "MediaPlayerHttpStreamProxy init "
            com.czhj.sdk.logger.SigmobLog.e(r0, r2)
        L18:
            return
    }

    static void a(com.sigmob.sdk.base.common.w r0) {
            r0.c()
            return
    }

    private void b() {
            r1 = this;
            r0 = 1
            r1.h = r0
            return
    }

    private void c() {
            r11 = this;
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.net.ServerSocket r1 = new java.net.ServerSocket     // Catch: java.io.IOException -> Led
            int r2 = r11.c     // Catch: java.io.IOException -> Led
            java.lang.String r3 = r11.d     // Catch: java.io.IOException -> Led
            java.net.InetAddress r3 = java.net.InetAddress.getByName(r3)     // Catch: java.io.IOException -> Led
            r4 = 1
            r1.<init>(r2, r4, r3)     // Catch: java.io.IOException -> Led
            r11.e = r1     // Catch: java.io.IOException -> Led
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress
            java.lang.String r2 = r11.b
            int r3 = r11.a
            r1.<init>(r2, r3)
            r11.g = r1
        L1f:
            boolean r1 = r11.h
            if (r1 != 0) goto Lec
            java.net.Socket r1 = r11.f     // Catch: java.io.IOException -> L2c
            if (r1 == 0) goto L2c
            java.net.Socket r1 = r11.f     // Catch: java.io.IOException -> L2c
            r1.close()     // Catch: java.io.IOException -> L2c
        L2c:
            java.net.ServerSocket r1 = r11.e     // Catch: java.lang.Exception -> Ldb
            java.net.Socket r1 = r1.accept()     // Catch: java.lang.Exception -> Ldb
            r11.f = r1     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "------------------------------------------------------------------"
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Exception -> Ldb
            java.net.Socket r1 = r11.f     // Catch: java.lang.Exception -> Ldb
            r1.setKeepAlive(r4)     // Catch: java.lang.Exception -> Ldb
            com.sigmob.sdk.base.network.c$b r1 = new com.sigmob.sdk.base.network.c$b     // Catch: java.lang.Exception -> Ldb
            java.lang.String r2 = r11.b     // Catch: java.lang.Exception -> Ldb
            int r3 = r11.a     // Catch: java.lang.Exception -> Ldb
            java.lang.String r5 = r11.d     // Catch: java.lang.Exception -> Ldb
            int r6 = r11.c     // Catch: java.lang.Exception -> Ldb
            r1.<init>(r2, r3, r5, r6)     // Catch: java.lang.Exception -> Ldb
            com.sigmob.sdk.base.network.c$a r2 = new com.sigmob.sdk.base.network.c$a     // Catch: java.lang.Exception -> Ldb
            java.net.Socket r3 = r11.f     // Catch: java.lang.Exception -> Ldb
            java.net.SocketAddress r5 = r11.g     // Catch: java.lang.Exception -> Ldb
            r2.<init>(r3, r5)     // Catch: java.lang.Exception -> Ldb
            r3 = 0
        L55:
            java.net.Socket r5 = r11.f     // Catch: java.lang.Exception -> Ldb
            java.io.InputStream r5 = r5.getInputStream()     // Catch: java.lang.Exception -> Ldb
            int r5 = r5.read(r0)     // Catch: java.lang.Exception -> Ldb
            r6 = -1
            if (r5 == r6) goto L6c
            byte[] r5 = r1.a(r0, r5)     // Catch: java.lang.Exception -> Ldb
            if (r5 == 0) goto L55
            com.sigmob.sdk.base.network.c$b$a r3 = r1.a(r5)     // Catch: java.lang.Exception -> Ldb
        L6c:
            java.lang.String r1 = r1.a()     // Catch: java.lang.Exception -> Ldb
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> Ldb
            r2.a(r1)     // Catch: java.lang.Exception -> Ldb
            r1 = 0
            r5 = r1
        L79:
            if (r1 != 0) goto Lcf
            java.lang.String r6 = r11.i     // Catch: java.lang.Throwable -> Lb8
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r8 = r11.j     // Catch: java.lang.Throwable -> Lb8
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lb8
            boolean r7 = r7.isFile()     // Catch: java.lang.Throwable -> Lb8
            if (r7 == 0) goto L96
            java.lang.String r6 = r11.j     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = "final video path is exist"
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L93
            r1 = r4
            goto La6
        L93:
            r1 = move-exception
            r6 = r4
            goto Lbc
        L96:
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> Lb8
            r7.<init>(r6)     // Catch: java.lang.Throwable -> Lb8
            boolean r7 = r7.isFile()     // Catch: java.lang.Throwable -> Lb8
            if (r7 == 0) goto Lad
            java.lang.String r7 = "temp video path is exist"
            com.czhj.sdk.logger.SigmobLog.d(r7)     // Catch: java.lang.Throwable -> Lb8
        La6:
            long r7 = r3.b     // Catch: java.lang.Throwable -> Lb8
            int r5 = r2.a(r6, r7)     // Catch: java.lang.Throwable -> Lb8
            goto Lc4
        Lad:
            java.lang.String r6 = "can't find invalid video path , sleep 100ms"
            com.czhj.sdk.logger.SigmobLog.d(r6)     // Catch: java.lang.Throwable -> Lb8
            r6 = 100
            java.lang.Thread.sleep(r6)     // Catch: java.lang.Throwable -> Lb8
            goto L79
        Lb8:
            r6 = move-exception
            r10 = r6
            r6 = r1
            r1 = r10
        Lbc:
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> Ldb
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Exception -> Ldb
            r1 = r6
        Lc4:
            if (r5 <= 0) goto L79
            long r6 = (long) r5     // Catch: java.lang.Exception -> Ldb
            long r8 = r3.b     // Catch: java.lang.Exception -> Ldb
            long r6 = r6 + r8
            int r6 = (int) r6     // Catch: java.lang.Exception -> Ldb
            long r6 = (long) r6     // Catch: java.lang.Exception -> Ldb
            r3.b = r6     // Catch: java.lang.Exception -> Ldb
            goto L79
        Lcf:
            java.lang.String r1 = ".........over.........."
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Exception -> Ldb
            java.net.Socket r1 = r11.f     // Catch: java.lang.Exception -> Ldb
            r1.close()     // Catch: java.lang.Exception -> Ldb
            goto L1f
        Ldb:
            r1 = move-exception
            java.lang.String r2 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            java.lang.String r1 = com.sigmob.sdk.base.network.c.a(r1)
            com.czhj.sdk.logger.SigmobLog.e(r1)
            goto L1f
        Lec:
            return
        Led:
            r0 = move-exception
            java.lang.String r1 = "localserver fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
            return
    }

    public void a() {
            r1 = this;
            com.sigmob.sdk.base.common.w$1 r0 = new com.sigmob.sdk.base.common.w$1
            r0.<init>(r1)
            r0.start()
            return
    }

    public java.lang.String[] a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.i = r4
            r2.j = r5
            java.lang.String r4 = "https"
            java.lang.String r5 = "http"
            java.lang.String r3 = r3.replace(r4, r5)
            r2.k = r3
            java.net.URI r3 = java.net.URI.create(r3)
            java.lang.String r4 = r3.getHost()
            r2.b = r4
            int r4 = r3.getPort()
            java.lang.String r5 = ":"
            r0 = -1
            if (r4 == r0) goto L5c
            int r4 = r3.getPort()
            r2.a = r4
            java.lang.String r4 = r2.k
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.b
            r0.append(r1)
            r0.append(r5)
            int r3 = r3.getPort()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.d
            r0.append(r1)
            r0.append(r5)
            int r5 = r2.c
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r3 = r4.replace(r3, r5)
            goto L7e
        L5c:
            r3 = 80
            r2.a = r3
            java.lang.String r3 = r2.k
            java.lang.String r4 = r2.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.d
            r0.append(r1)
            r0.append(r5)
            int r5 = r2.c
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r3 = r3.replace(r4, r5)
        L7e:
            r4 = 2
            java.lang.String[] r4 = new java.lang.String[r4]
            r5 = 0
            java.lang.String r0 = r2.k
            r4[r5] = r0
            r5 = 1
            r4[r5] = r3
            return r4
    }
}
