package com.tkay.expressad.mbbanner.a.d;

public class b {
    private static final java.lang.String a = null;
    private android.content.Context b;
    private int c;
    private com.tkay.expressad.mbbanner.a.b.e d;
    private com.tkay.expressad.mbbanner.a.e.a e;
    private com.tkay.expressad.mbbanner.a.c.b f;
    private com.tkay.expressad.mbbanner.a.c.d g;
    private volatile boolean h;
    private java.util.Timer i;
    private volatile java.util.List<java.lang.String> j;
    private volatile boolean k;
    private volatile boolean l;
    private volatile boolean m;

    final class 1 extends java.util.TimerTask {
        final java.lang.String a;
        final com.tkay.expressad.mbbanner.a.d.b b;

        1(com.tkay.expressad.mbbanner.a.d.b r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r5 = this;
                com.tkay.expressad.mbbanner.a.d.b r0 = r5.b
                boolean r0 = com.tkay.expressad.mbbanner.a.d.b.a(r0)
                if (r0 != 0) goto L18
                com.tkay.expressad.mbbanner.a.d.b r0 = r5.b
                com.tkay.expressad.mbbanner.a.d.b.b(r0)
                com.tkay.expressad.mbbanner.a.d.b r0 = r5.b
                java.lang.String r1 = r5.a
                r2 = -1
                r3 = 0
                java.lang.String r4 = ""
                r0.a(r1, r2, r4, r3)
            L18:
                return
        }
    }

    final class 2 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.d.d a;
        final com.tkay.expressad.mbbanner.a.d.b b;

        2(com.tkay.expressad.mbbanner.a.d.b r1, com.tkay.expressad.foundation.d.d r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.expressad.mbbanner.a.d.b.a()
                com.tkay.expressad.foundation.d.d r0 = r1.a
                if (r0 == 0) goto L1d
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
                if (r0 == 0) goto L1d
                com.tkay.expressad.foundation.d.d r0 = r1.a
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
                int r0 = r0.size()
                if (r0 <= 0) goto L1d
                com.tkay.expressad.mbbanner.a.d.b r0 = r1.b
                com.tkay.expressad.mbbanner.a.d.b.c(r0)
                com.tkay.expressad.mbbanner.a.e.b.a()
            L1d:
                com.tkay.expressad.mbbanner.a.d.b.a()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.mbbanner.a.d.b> r0 = com.tkay.expressad.mbbanner.a.d.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.mbbanner.a.d.b.a = r0
            return
    }

    public b(android.content.Context r3, com.tkay.expressad.mbbanner.a.b.e r4, com.tkay.expressad.mbbanner.a.c.b r5, com.tkay.expressad.mbbanner.a.e.a r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r2.h = r0
            java.util.Timer r1 = new java.util.Timer
            r1.<init>()
            r2.i = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.j = r1
            r2.k = r0
            r2.l = r0
            r2.m = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.b = r3
            r2.d = r4
            r2.f = r5
            r2.e = r6
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.mbbanner.a.d.b.a
            return r0
    }

    private java.lang.String a(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            java.lang.String r1 = ""
            if (r0 != 0) goto L9a
            r0 = 0
            com.tkay.expressad.foundation.g.c.c r2 = com.tkay.expressad.foundation.g.c.c.i     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r2 = com.tkay.expressad.foundation.g.c.f.b(r2)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r8)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            if (r4 == 0) goto L25
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
        L25:
            java.lang.String r4 = ".html"
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r4.<init>(r2, r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            android.net.Uri r2 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r2.getPath()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            byte[] r0 = r8.getBytes()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            r2.write(r0)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            r2.flush()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            java.lang.String r0 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            r2.close()     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r1 = move-exception
            r1.printStackTrace()
        L52:
            r1 = r0
            goto L6c
        L54:
            r7 = move-exception
            r0 = r2
            goto L8f
        L57:
            r0 = move-exception
            r5 = r2
            r2 = r0
            r0 = r5
            goto L5f
        L5c:
            r7 = move-exception
            goto L8f
        L5e:
            r2 = move-exception
        L5f:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L6c
            r0.close()     // Catch: java.lang.Exception -> L68
            goto L6c
        L68:
            r0 = move-exception
            r0.printStackTrace()
        L6c:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r2 = r0.exists()
            r3 = 2
            if (r2 == 0) goto L8a
            boolean r2 = r0.isFile()
            if (r2 == 0) goto L8a
            boolean r0 = r0.canRead()
            if (r0 != 0) goto L85
            goto L8a
        L85:
            r0 = 1
            r6.a(r7, r3, r8, r0)
            goto L9a
        L8a:
            r0 = 0
            r6.a(r7, r3, r8, r0)
            goto L9a
        L8f:
            if (r0 == 0) goto L99
            r0.close()     // Catch: java.lang.Exception -> L95
            goto L99
        L95:
            r8 = move-exception
            r8.printStackTrace()
        L99:
            throw r7
        L9a:
            return r1
    }

    private java.util.List<com.tkay.expressad.foundation.d.c> a(com.tkay.expressad.foundation.d.d r7) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r7 == 0) goto La7
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r7.J     // Catch: java.lang.Exception -> La3
            if (r1 == 0) goto La7
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r7.J     // Catch: java.lang.Exception -> La3
            int r1 = r1.size()     // Catch: java.lang.Exception -> La3
            if (r1 <= 0) goto La7
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r7 = r7.J     // Catch: java.lang.Exception -> La3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            java.lang.String r2 = "getNeedShowList total campaign:"
            r1.<init>(r2)     // Catch: java.lang.Exception -> La3
            int r2 = r7.size()     // Catch: java.lang.Exception -> La3
            r1.append(r2)     // Catch: java.lang.Exception -> La3
            r1 = 0
        L24:
            int r2 = r7.size()     // Catch: java.lang.Exception -> La3
            if (r1 >= r2) goto L94
            java.lang.Object r2 = r7.get(r1)     // Catch: java.lang.Exception -> La3
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2     // Catch: java.lang.Exception -> La3
            if (r2 == 0) goto L91
            int r3 = r2.O()     // Catch: java.lang.Exception -> La3
            r4 = 99
            if (r3 == r4) goto L91
            java.lang.String r3 = r2.p()     // Catch: java.lang.Exception -> La3
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> La3
            if (r3 == 0) goto L58
            java.lang.String r3 = r2.q()     // Catch: java.lang.Exception -> La3
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> La3
            if (r3 == 0) goto L58
            java.lang.String r3 = r2.be()     // Catch: java.lang.Exception -> La3
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> La3
            if (r3 != 0) goto L91
        L58:
            boolean r3 = com.tkay.expressad.foundation.h.t.a(r2)     // Catch: java.lang.Exception -> La3
            r4 = 1
            if (r3 == 0) goto L71
            android.content.Context r3 = r6.b     // Catch: java.lang.Exception -> La3
            java.lang.String r5 = r2.ba()     // Catch: java.lang.Exception -> La3
            boolean r3 = com.tkay.expressad.foundation.h.t.a(r3, r5)     // Catch: java.lang.Exception -> La3
            if (r3 == 0) goto L6d
            r3 = r4
            goto L6e
        L6d:
            r3 = 2
        L6e:
            r2.i(r3)     // Catch: java.lang.Exception -> La3
        L71:
            int r3 = r2.ae()     // Catch: java.lang.Exception -> La3
            if (r3 == r4) goto L8e
            android.content.Context r3 = r6.b     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = r2.ba()     // Catch: java.lang.Exception -> La3
            boolean r3 = com.tkay.expressad.foundation.h.t.a(r3, r4)     // Catch: java.lang.Exception -> La3
            if (r3 != 0) goto L84
            goto L8e
        L84:
            boolean r3 = com.tkay.expressad.foundation.h.t.a(r2)     // Catch: java.lang.Exception -> La3
            if (r3 == 0) goto L91
            r0.add(r2)     // Catch: java.lang.Exception -> La3
            goto L91
        L8e:
            r0.add(r2)     // Catch: java.lang.Exception -> La3
        L91:
            int r1 = r1 + 1
            goto L24
        L94:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            java.lang.String r1 = "getNeedShowList return these campaign with video res:"
            r7.<init>(r1)     // Catch: java.lang.Exception -> La3
            int r1 = r0.size()     // Catch: java.lang.Exception -> La3
            r7.append(r1)     // Catch: java.lang.Exception -> La3
            goto La7
        La3:
            r7 = move-exception
            r7.printStackTrace()
        La7:
            return r0
    }

    private void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.m
            if (r0 != 0) goto L2a
            boolean r0 = r2.k
            if (r0 != 0) goto Lc
            boolean r0 = r2.l
            if (r0 == 0) goto L2a
        Lc:
            java.util.List<java.lang.String> r0 = r2.j
            int r0 = r0.size()
            if (r0 != 0) goto L2a
            r0 = 1
            r2.h = r0
            r2.m = r0
            java.util.Timer r0 = r2.i
            r0.cancel()
            com.tkay.expressad.mbbanner.a.e.a r0 = r2.e
            com.tkay.expressad.mbbanner.a.c.b r1 = r2.f
            r0.a(r1, r3)
            com.tkay.expressad.mbbanner.a.c.d r0 = r2.g
            r0.a(r3)
        L2a:
            return
    }

    private void a(java.lang.String r4, java.util.List<com.tkay.expressad.foundation.d.c> r5) {
            r3 = this;
            if (r5 == 0) goto L3e
            int r0 = r5.size()
            if (r0 <= 0) goto L3e
            java.util.Iterator r5 = r5.iterator()
        Lc:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L3e
            java.lang.Object r0 = r5.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            java.lang.String r1 = r0.be()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc
            java.util.List<java.lang.String> r1 = r3.j
            java.lang.String r2 = r0.be()
            r1.add(r2)
            com.tkay.expressad.mbbanner.a.c.g r1 = new com.tkay.expressad.mbbanner.a.c.g
            r1.<init>(r3, r4)
            android.content.Context r2 = r3.b
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            java.lang.String r0 = r0.be()
            r2.a(r0, r1)
            goto Lc
        L3e:
            return
    }

    static boolean a(com.tkay.expressad.mbbanner.a.d.b r0) {
            boolean r0 = r0.h
            return r0
    }

    private java.lang.String b() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.b.e r0 = r1.d
            java.lang.String r0 = r0.a()
            return r0
    }

    private void b(com.tkay.expressad.foundation.d.d r3) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.expressad.mbbanner.a.d.b$2 r1 = new com.tkay.expressad.mbbanner.a.d.b$2
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            r0 = 1
            r2.h = r0
            com.tkay.expressad.mbbanner.a.e.a r0 = r2.e
            com.tkay.expressad.mbbanner.a.c.b r1 = r2.f
            r0.b(r1, r3)
            com.tkay.expressad.mbbanner.a.c.d r0 = r2.g
            r0.a(r3)
            return
    }

    private void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L12
            com.tkay.expressad.mbbanner.a.c.f r0 = new com.tkay.expressad.mbbanner.a.c.f
            r0.<init>(r1, r2)
            com.tkay.expressad.videocommon.b.g r2 = com.tkay.expressad.videocommon.b.g.a()
            r2.a(r3, r0)
        L12:
            return
    }

    private void b(java.lang.String r3, java.util.List<com.tkay.expressad.foundation.d.c> r4) {
            r2 = this;
            int r0 = r2.c
            if (r4 == 0) goto Lf
            int r1 = r4.size()     // Catch: java.lang.Exception -> L24
            if (r1 <= 0) goto Lf
            int r4 = r4.size()     // Catch: java.lang.Exception -> L24
            int r0 = r0 + r4
        Lf:
            com.tkay.expressad.mbbanner.a.b.e r4 = r2.d     // Catch: java.lang.Exception -> L24
            int r4 = r4.c()     // Catch: java.lang.Exception -> L24
            if (r0 <= r4) goto L18
            r0 = 0
        L18:
            boolean r3 = com.tkay.expressad.foundation.h.w.b(r3)     // Catch: java.lang.Exception -> L24
            if (r3 == 0) goto L23
            com.tkay.expressad.mbbanner.a.b.e r3 = r2.d     // Catch: java.lang.Exception -> L24
            r3.a(r0)     // Catch: java.lang.Exception -> L24
        L23:
            return
        L24:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    static boolean b(com.tkay.expressad.mbbanner.a.d.b r1) {
            r0 = 1
            r1.h = r0
            return r0
    }

    private int c() {
            r3 = this;
            r0 = 0
            com.tkay.expressad.mbbanner.a.b.e r1 = r3.d     // Catch: java.lang.Exception -> L12
            int r1 = r1.b()     // Catch: java.lang.Exception -> L12
            com.tkay.expressad.mbbanner.a.b.e r2 = r3.d     // Catch: java.lang.Exception -> L12
            int r2 = r2.c()     // Catch: java.lang.Exception -> L12
            if (r1 <= r2) goto L10
            goto L16
        L10:
            r0 = r1
            goto L16
        L12:
            r1 = move-exception
            r1.printStackTrace()
        L16:
            return r0
    }

    static android.content.Context c(com.tkay.expressad.mbbanner.a.d.b r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    private void c(java.lang.String r4) {
            r3 = this;
            com.tkay.expressad.mbbanner.a.d.b$1 r0 = new com.tkay.expressad.mbbanner.a.d.b$1
            r0.<init>(r3, r4)
            java.util.Timer r4 = r3.i
            r1 = 60000(0xea60, double:2.9644E-319)
            r4.schedule(r0, r1)
            return
    }

    private void d(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.mbbanner.a.b.e r0 = r1.d
            r0.a(r2)
            return
    }

    public final void a(java.lang.String r2, int r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r0 = 1
            if (r5 != 0) goto L29
            r4 = -1
            if (r3 != r4) goto L15
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = " unitId ="
            r3.<init>(r4)
            r3.append(r2)
            java.lang.String r4 = " --> time out!"
            r3.append(r4)
        L15:
            java.util.Timer r3 = r1.i
            r3.cancel()
            r1.h = r0
            com.tkay.expressad.mbbanner.a.e.a r3 = r1.e
            com.tkay.expressad.mbbanner.a.c.b r4 = r1.f
            r3.b(r4, r2)
            com.tkay.expressad.mbbanner.a.c.d r3 = r1.g
            r3.a(r2)
            return
        L29:
            if (r3 != r0) goto L41
            monitor-enter(r1)
            java.util.List<java.lang.String> r3 = r1.j     // Catch: java.lang.Throwable -> L3e
            r3.remove(r4)     // Catch: java.lang.Throwable -> L3e
            java.util.List<java.lang.String> r3 = r1.j     // Catch: java.lang.Throwable -> L3e
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L3e
            if (r3 != 0) goto L3c
            r1.a(r2)     // Catch: java.lang.Throwable -> L3e
        L3c:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3e
            return
        L3e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L41:
            r4 = 2
            if (r3 != r4) goto L4a
            r1.l = r0
            r1.a(r2)
            return
        L4a:
            r4 = 3
            if (r3 != r4) goto L52
            r1.k = r0
            r1.a(r2)
        L52:
            return
    }

    protected final void a(java.lang.String r6, com.tkay.expressad.foundation.d.d r7, com.tkay.expressad.mbbanner.a.c.d r8) {
            r5 = this;
            r5.g = r8
            if (r7 != 0) goto L13
            com.tkay.expressad.mbbanner.a.e.a r7 = r5.e
            com.tkay.expressad.mbbanner.a.c.b r8 = r5.f
            java.lang.String r0 = "campaignUnit is NULL!"
            r7.a(r8, r0, r6)
            com.tkay.expressad.mbbanner.a.c.d r7 = r5.g
            r7.a(r6)
            return
        L13:
            java.util.List r8 = r5.a(r7)
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.expressad.mbbanner.a.d.b$2 r1 = new com.tkay.expressad.mbbanner.a.d.b$2
            r1.<init>(r5, r7)
            r0.<init>(r1)
            r0.start()
            int r0 = r8.size()
            if (r0 != 0) goto L39
            com.tkay.expressad.mbbanner.a.e.a r7 = r5.e
            com.tkay.expressad.mbbanner.a.c.b r8 = r5.f
            java.lang.String r0 = "APP ALREADY INSTALLED"
            r7.a(r8, r0, r6)
            com.tkay.expressad.mbbanner.a.c.d r7 = r5.g
            r7.a(r6)
            return
        L39:
            com.tkay.expressad.mbbanner.a.d.b$1 r0 = new com.tkay.expressad.mbbanner.a.d.b$1
            r0.<init>(r5, r6)
            java.util.Timer r1 = r5.i
            r2 = 60000(0xea60, double:2.9644E-319)
            r1.schedule(r0, r2)
            java.lang.String r7 = r7.c()
            com.tkay.expressad.mbbanner.a.b.e r0 = r5.d
            r0.a(r7)
            int r7 = r5.c
            r0 = 0
            int r1 = r8.size()     // Catch: java.lang.Exception -> L72
            if (r1 <= 0) goto L5d
            int r1 = r8.size()     // Catch: java.lang.Exception -> L72
            int r7 = r7 + r1
        L5d:
            com.tkay.expressad.mbbanner.a.b.e r1 = r5.d     // Catch: java.lang.Exception -> L72
            int r1 = r1.c()     // Catch: java.lang.Exception -> L72
            if (r7 <= r1) goto L66
            r7 = r0
        L66:
            boolean r1 = com.tkay.expressad.foundation.h.w.b(r6)     // Catch: java.lang.Exception -> L72
            if (r1 == 0) goto L76
            com.tkay.expressad.mbbanner.a.b.e r1 = r5.d     // Catch: java.lang.Exception -> L72
            r1.a(r7)     // Catch: java.lang.Exception -> L72
            goto L76
        L72:
            r7 = move-exception
            r7.printStackTrace()
        L76:
            java.lang.Object r7 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r7 = (com.tkay.expressad.foundation.d.c) r7
            java.lang.String r1 = r7.p()
            java.lang.String r1 = r1.trim()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            r3 = 1
            if (r2 != 0) goto Lc2
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L9d
            com.tkay.expressad.mbbanner.a.c.f r2 = new com.tkay.expressad.mbbanner.a.c.f
            r2.<init>(r5, r6)
            com.tkay.expressad.videocommon.b.g r4 = com.tkay.expressad.videocommon.b.g.a()
            r4.a(r1, r2)
        L9d:
            int r1 = r8.size()
            if (r1 <= 0) goto Lff
        La3:
            int r1 = r8.size()
            if (r0 >= r1) goto Lff
            java.lang.Object r1 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            java.lang.String r2 = r7.p()
            r1.d(r2)
            java.lang.Object r1 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            r1.a(r3)
            int r0 = r0 + 1
            goto La3
        Lc2:
            java.lang.String r7 = r7.q()
            java.lang.String r7 = r7.trim()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto Lfb
            java.lang.String r1 = r5.a(r6, r7)
            int r2 = r8.size()
            if (r2 <= 0) goto Lff
        Lda:
            int r2 = r8.size()
            if (r0 >= r2) goto Lff
            java.lang.Object r2 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            r2.e(r1)
            java.lang.Object r2 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            java.lang.String r3 = "<MBTPLMARK>"
            boolean r3 = r7.contains(r3)
            r2.a(r3)
            int r0 = r0 + 1
            goto Lda
        Lfb:
            r5.l = r3
            r5.k = r3
        Lff:
            r5.a(r6, r8)
            return
    }
}
