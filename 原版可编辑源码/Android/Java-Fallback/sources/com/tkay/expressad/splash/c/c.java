package com.tkay.expressad.splash.c;

public final class c {
    private static java.lang.String c = "SplashLoadManager";
    private static final int l = 1;
    private static final int m = 2;
    private static final int n = 3;
    private java.lang.String A;
    private int B;
    private android.os.Handler C;
    private java.lang.Runnable D;
    boolean a;
    com.tkay.expressad.foundation.d.c b;
    private java.lang.String d;
    private java.lang.String e;
    private long f;
    private long g;
    private com.tkay.expressad.splash.b.c h;
    private android.content.Context i;
    private com.tkay.expressad.splash.view.TYSplashView j;
    private com.tkay.expressad.d.c k;
    private boolean o;
    private int p;
    private int q;
    private int r;
    private java.lang.String s;
    private int t;
    private boolean u;
    private volatile boolean v;
    private com.tkay.expressad.videocommon.d.b w;
    private com.tkay.expressad.videocommon.b.g.d x;
    private java.lang.String y;
    private int z;




    final class 4 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.splash.c.c c;


        4(com.tkay.expressad.splash.c.c r1, com.tkay.expressad.foundation.d.c r2, int r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                r0 = 0
                com.tkay.expressad.foundation.d.c r1 = r6.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
                java.lang.String r1 = r1.d()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
                java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
                r2.<init>(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
                boolean r1 = r2.exists()     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                if (r1 != 0) goto L8a
                com.tkay.expressad.foundation.g.c.c r1 = com.tkay.expressad.foundation.g.c.c.i     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                java.lang.String r1 = com.tkay.expressad.foundation.g.c.f.b(r1)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                com.tkay.expressad.foundation.d.c r3 = r6.a     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                java.lang.String r3 = r3.d()     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r3)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                if (r4 == 0) goto L34
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
            L34:
                java.lang.String r4 = ".html"
                java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                r4.<init>(r1, r3)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L93
                boolean r1 = r4.exists()     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> L93
                if (r1 != 0) goto L86
                java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> L93
                r1.<init>(r4)     // Catch: java.lang.Exception -> L88 java.lang.Throwable -> L93
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                r0.<init>()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                java.lang.String r2 = "<script>"
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                com.tkay.expressad.d.b.a.a()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                java.lang.String r2 = com.tkay.expressad.d.b.a.b()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                java.lang.String r2 = "</script>"
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                com.tkay.expressad.foundation.d.c r2 = r6.a     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                java.lang.String r2 = r2.d()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                r1.write(r0)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                r1.flush()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
                r0 = r1
                goto L86
            L7c:
                r0 = move-exception
                r5 = r1
                r1 = r0
                r0 = r5
                goto Ldc
            L81:
                r0 = move-exception
                r5 = r1
                r1 = r0
                r0 = r5
                goto L97
            L86:
                r2 = r4
                goto L8a
            L88:
                r1 = move-exception
                goto L97
            L8a:
                if (r0 == 0) goto La7
                r0.close()     // Catch: java.lang.Exception -> Le2
                goto La7
            L90:
                r1 = move-exception
                r4 = r2
                goto L97
            L93:
                r1 = move-exception
                goto Ldc
            L95:
                r1 = move-exception
                r4 = r0
            L97:
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L93
                com.tkay.expressad.foundation.d.c r1 = r6.a     // Catch: java.lang.Throwable -> L93
                java.lang.String r2 = ""
                r1.j(r2)     // Catch: java.lang.Throwable -> L93
                if (r0 == 0) goto La6
                r0.close()     // Catch: java.lang.Exception -> Le2
            La6:
                r2 = r4
            La7:
                boolean r0 = r2.exists()     // Catch: java.lang.Exception -> Le2
                if (r0 == 0) goto Lcf
                boolean r0 = r2.isFile()     // Catch: java.lang.Exception -> Le2
                if (r0 == 0) goto Lcf
                boolean r0 = r2.canRead()     // Catch: java.lang.Exception -> Le2
                if (r0 == 0) goto Lcf
                com.tkay.expressad.foundation.d.c r0 = r6.a     // Catch: java.lang.Exception -> Le2
                java.lang.String r1 = r2.getAbsolutePath()     // Catch: java.lang.Exception -> Le2
                r0.b(r1)     // Catch: java.lang.Exception -> Le2
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Le2
                com.tkay.expressad.splash.c.c$4$1 r1 = new com.tkay.expressad.splash.c.c$4$1     // Catch: java.lang.Exception -> Le2
                r1.<init>(r6, r2)     // Catch: java.lang.Exception -> Le2
                r0.a(r1)     // Catch: java.lang.Exception -> Le2
                return
            Lcf:
                com.tkay.expressad.splash.c.c r0 = r6.c     // Catch: java.lang.Exception -> Le2
                java.lang.String r1 = "html file write failed"
                com.tkay.expressad.splash.c.c r2 = r6.c     // Catch: java.lang.Exception -> Le2
                com.tkay.expressad.splash.c.c.a(r2)     // Catch: java.lang.Exception -> Le2
                com.tkay.expressad.splash.c.c.a(r0, r1)     // Catch: java.lang.Exception -> Le2
                return
            Ldc:
                if (r0 == 0) goto Le1
                r0.close()     // Catch: java.lang.Exception -> Le2
            Le1:
                throw r1     // Catch: java.lang.Exception -> Le2
            Le2:
                r0 = move-exception
                com.tkay.expressad.splash.c.c r1 = r6.c
                java.lang.String r0 = r0.getMessage()
                com.tkay.expressad.splash.c.c r2 = r6.c
                com.tkay.expressad.splash.c.c.a(r2)
                com.tkay.expressad.splash.c.c.a(r1, r0)
                return
        }
    }

    final class 5 implements com.tkay.expressad.videocommon.b.g.d {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.splash.c.c c;

        5(com.tkay.expressad.splash.c.c r1, com.tkay.expressad.foundation.d.c r2, int r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                android.os.Message r2 = android.os.Message.obtain()
                r0 = 1
                r2.what = r0
                com.tkay.expressad.foundation.d.c r0 = r1.a
                r2.obj = r0
                int r0 = r1.b
                r2.arg1 = r0
                com.tkay.expressad.splash.c.c r0 = r1.c
                android.os.Handler r0 = com.tkay.expressad.splash.c.c.d(r0)
                r0.sendMessage(r2)
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.splash.c.c r3 = r1.c
                com.tkay.expressad.splash.c.c.a(r3)
                com.tkay.expressad.splash.c.c.a(r3, r2)
                android.os.Message r3 = android.os.Message.obtain()
                r0 = 2
                r3.what = r0
                r3.obj = r2
                com.tkay.expressad.splash.c.c r2 = r1.c
                android.os.Handler r2 = com.tkay.expressad.splash.c.c.d(r2)
                r2.sendMessage(r3)
                return
        }
    }

    final class 6 implements com.tkay.expressad.splash.b.a {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.splash.c.c c;

        6(com.tkay.expressad.splash.c.c r1, com.tkay.expressad.foundation.d.c r2, int r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a(android.view.View r3) {
                r2 = this;
                com.tkay.expressad.splash.c.c r0 = r2.c
                com.tkay.expressad.splash.view.TYSplashView r0 = com.tkay.expressad.splash.c.c.c(r0)
                if (r0 == 0) goto L24
                com.tkay.expressad.splash.c.c r0 = r2.c
                com.tkay.expressad.splash.view.TYSplashView r0 = com.tkay.expressad.splash.c.c.c(r0)
                r1 = 1
                r0.setDynamicView(r1)
                com.tkay.expressad.splash.c.c r0 = r2.c
                com.tkay.expressad.splash.view.TYSplashView r0 = com.tkay.expressad.splash.c.c.c(r0)
                r0.setSplashNativeView(r3)
                com.tkay.expressad.splash.c.c r3 = r2.c
                com.tkay.expressad.foundation.d.c r0 = r2.a
                int r1 = r2.b
                com.tkay.expressad.splash.c.c.a(r3, r0, r1)
            L24:
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.splash.c.c r0 = r1.c
                com.tkay.expressad.splash.c.c.a(r0)
                com.tkay.expressad.splash.c.c.a(r0, r2)
                return
        }
    }

    final class 7 implements com.tkay.expressad.splash.c.e.b {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.splash.c.c c;

        7(com.tkay.expressad.splash.c.c r1, com.tkay.expressad.foundation.d.c r2, int r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r3 = this;
                com.tkay.expressad.foundation.d.c r0 = r3.a
                boolean r0 = r0.s()
                if (r0 != 0) goto L11
                com.tkay.expressad.splash.c.c r0 = r3.c
                com.tkay.expressad.foundation.d.c r1 = r3.a
                int r2 = r3.b
                com.tkay.expressad.splash.c.c.c(r0, r1, r2)
            L11:
                return
        }

        @Override
        public final void a(int r3) {
                r2 = this;
                r0 = 1
                if (r3 != r0) goto Ld
                com.tkay.expressad.splash.c.c r3 = r2.c
                com.tkay.expressad.foundation.d.c r0 = r2.a
                int r1 = r2.b
                com.tkay.expressad.splash.c.c.c(r3, r0, r1)
                return
            Ld:
                com.tkay.expressad.splash.c.c r3 = r2.c
                java.lang.String r0 = "readyState 2"
                com.tkay.expressad.splash.c.c.b(r3, r0)
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.splash.c.c r0 = r1.c
                com.tkay.expressad.splash.c.c.b(r0, r2)
                return
        }
    }

    final class 8 implements com.tkay.expressad.videocommon.d.b {
        final com.tkay.expressad.foundation.d.c a;
        final com.tkay.expressad.splash.c.c b;

        8(com.tkay.expressad.splash.c.c r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.splash.c.c r2 = r1.b
                com.tkay.expressad.splash.view.TYSplashView r2 = com.tkay.expressad.splash.c.c.c(r2)
                r0 = 1
                r2.setVideoReady(r0)
                com.tkay.expressad.splash.c.c.d()
                android.os.Message r2 = android.os.Message.obtain()
                com.tkay.expressad.foundation.d.c r0 = r1.a
                r2.obj = r0
                r0 = 3
                r2.what = r0
                com.tkay.expressad.splash.c.c r0 = r1.b
                android.os.Handler r0 = com.tkay.expressad.splash.c.c.d(r0)
                r0.sendMessage(r2)
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.splash.c.c r3 = r1.b
                com.tkay.expressad.splash.view.TYSplashView r3 = com.tkay.expressad.splash.c.c.c(r3)
                r0 = 0
                r3.setVideoReady(r0)
                com.tkay.expressad.splash.c.c.d()
                android.os.Message r3 = android.os.Message.obtain()
                r3.obj = r2
                r2 = 2
                r3.what = r2
                com.tkay.expressad.splash.c.c r2 = r1.b
                android.os.Handler r2 = com.tkay.expressad.splash.c.c.d(r2)
                r2.sendMessage(r3)
                return
        }
    }

    static {
            return
    }

    public c(java.lang.String r3, java.lang.String r4, long r5) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.A = r0
            com.tkay.expressad.splash.c.c$1 r0 = new com.tkay.expressad.splash.c.c$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.C = r0
            com.tkay.expressad.splash.c.c$2 r0 = new com.tkay.expressad.splash.c.c$2
            r0.<init>(r2)
            r2.D = r0
            r0 = 0
            r2.a = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r2.i = r0
            r2.e = r3
            r2.d = r4
            r2.g = r5
            return
    }

    static java.lang.String a(com.tkay.expressad.splash.c.c r0) {
            java.lang.String r0 = r0.s
            return r0
    }

    private void a(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.C
            java.lang.Runnable r1 = r2.D
            r0.postDelayed(r1, r3)
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r6, int r7) {
            r5 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            if (r0 == 0) goto L8
            r1 = 0
            r0.setDynamicView(r1)
        L8:
            boolean r0 = r6.j()
            if (r0 == 0) goto L11
            r5.d(r6, r7)
        L11:
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            boolean r0 = com.tkay.expressad.splash.c.b.a(r0, r6)
            if (r0 == 0) goto L1d
            r5.b(r6, r7)
            return
        L1d:
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            r0.clearResState()
            java.lang.String r0 = r6.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L46
            boolean r0 = r6.j()
            if (r0 != 0) goto L46
            com.tkay.expressad.splash.c.c$5 r0 = new com.tkay.expressad.splash.c.c$5
            r0.<init>(r5, r6, r7)
            r5.x = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r6.c()
            com.tkay.expressad.videocommon.b.g$d r2 = r5.x
            r0.b(r1, r2)
        L46:
            boolean r0 = r6.j()
            if (r0 != 0) goto Lb8
            java.lang.String r0 = r6.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L62
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.splash.c.c$4 r1 = new com.tkay.expressad.splash.c.c$4
            r1.<init>(r5, r6, r7)
            r0.a(r1)
        L62:
            java.lang.String r0 = r6.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lab
            com.tkay.expressad.splash.c.c$8 r0 = new com.tkay.expressad.splash.c.c$8
            r0.<init>(r5, r6)
            r5.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r5.d
            com.tkay.expressad.videocommon.d.b r3 = r5.w
            r4 = 297(0x129, float:4.16E-43)
            r1.a(r2, r0, r4, r3)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.d
            boolean r2 = r6.A()
            boolean r0 = r0.a(r4, r1, r2)
            if (r0 != 0) goto La2
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.d
            r0.d(r1)
            goto Lab
        La2:
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            r1 = 1
            r0.setVideoReady(r1)
            r5.b(r6, r7)
        Lab:
            java.lang.String r0 = r6.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb8
            r5.d(r6, r7)
        Lb8:
            return
    }

    private void a(com.tkay.expressad.foundation.d.d r7, int r8) {
            r6 = this;
            r0 = 1
            r1 = 0
            if (r7 == 0) goto L75
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r7.J
            if (r2 == 0) goto L75
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r7.J
            java.lang.Object r3 = r3.get(r1)
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3
            java.lang.String r4 = r6.d
            r3.l(r4)
            java.lang.String r7 = r7.c()
            r6.y = r7
            int r7 = r3.O()
            r4 = 99
            if (r7 == r4) goto L76
            java.lang.String r7 = r3.c()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L3c
            java.lang.String r7 = r3.d()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L76
        L3c:
            boolean r7 = com.tkay.expressad.foundation.h.t.a(r3)
            if (r7 == 0) goto L54
            android.content.Context r7 = r6.i
            java.lang.String r4 = r3.ba()
            boolean r7 = com.tkay.expressad.foundation.h.t.a(r7, r4)
            if (r7 == 0) goto L50
            r7 = r0
            goto L51
        L50:
            r7 = 2
        L51:
            r3.i(r7)
        L54:
            int r7 = r3.ae()
            if (r7 == r0) goto L71
            android.content.Context r7 = r6.i
            java.lang.String r4 = r3.ba()
            boolean r7 = com.tkay.expressad.foundation.h.t.a(r7, r4)
            if (r7 != 0) goto L67
            goto L71
        L67:
            boolean r7 = com.tkay.expressad.foundation.h.t.a(r3)
            if (r7 == 0) goto L76
            r2.add(r3)
            goto L76
        L71:
            r2.add(r3)
            goto L76
        L75:
            r2 = 0
        L76:
            if (r2 == 0) goto L17a
            int r7 = r2.size()
            if (r7 <= 0) goto L17a
            r6.g()
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r3 = "onload load suc size:"
            r7.<init>(r3)
            int r3 = r2.size()
            r7.append(r3)
            java.lang.Object r7 = r2.get(r1)
            com.tkay.expressad.foundation.d.c r7 = (com.tkay.expressad.foundation.d.c) r7
            java.lang.String r2 = r7.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto Lbd
            java.lang.String r2 = r7.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lb6
            java.lang.String r2 = r7.d()
            java.lang.String r3 = "<MBTPLMARK>"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto Lb6
            goto Lbd
        Lb6:
            r7.a(r1)
            r7.b(r0)
            goto Lc3
        Lbd:
            r7.a(r0)
            r7.b(r1)
        Lc3:
            com.tkay.expressad.splash.view.TYSplashView r2 = r6.j
            if (r2 == 0) goto Lca
            r2.setDynamicView(r1)
        Lca:
            boolean r1 = r7.j()
            if (r1 == 0) goto Ld3
            r6.d(r7, r8)
        Ld3:
            com.tkay.expressad.splash.view.TYSplashView r1 = r6.j
            boolean r1 = com.tkay.expressad.splash.c.b.a(r1, r7)
            if (r1 == 0) goto Ldf
            r6.b(r7, r8)
            return
        Ldf:
            com.tkay.expressad.splash.view.TYSplashView r1 = r6.j
            r1.clearResState()
            java.lang.String r1 = r7.c()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L108
            boolean r1 = r7.j()
            if (r1 != 0) goto L108
            com.tkay.expressad.splash.c.c$5 r1 = new com.tkay.expressad.splash.c.c$5
            r1.<init>(r6, r7, r8)
            r6.x = r1
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r7.c()
            com.tkay.expressad.videocommon.b.g$d r3 = r6.x
            r1.b(r2, r3)
        L108:
            boolean r1 = r7.j()
            if (r1 != 0) goto L179
            java.lang.String r1 = r7.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L124
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.splash.c.c$4 r2 = new com.tkay.expressad.splash.c.c$4
            r2.<init>(r6, r7, r8)
            r1.a(r2)
        L124:
            java.lang.String r1 = r7.S()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L16c
            com.tkay.expressad.splash.c.c$8 r1 = new com.tkay.expressad.splash.c.c$8
            r1.<init>(r6, r7)
            r6.w = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r7)
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r3 = r6.d
            com.tkay.expressad.videocommon.d.b r4 = r6.w
            r5 = 297(0x129, float:4.16E-43)
            r2.a(r3, r1, r5, r4)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r6.d
            boolean r3 = r7.A()
            boolean r1 = r1.a(r5, r2, r3)
            if (r1 != 0) goto L164
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r6.d
            r0.d(r1)
            goto L16c
        L164:
            com.tkay.expressad.splash.view.TYSplashView r1 = r6.j
            r1.setVideoReady(r0)
            r6.b(r7, r8)
        L16c:
            java.lang.String r0 = r7.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L179
            r6.d(r7, r8)
        L179:
            return
        L17a:
            java.lang.String r7 = "invalid  campaign"
            r6.a(r7)
            return
    }

    static void a(com.tkay.expressad.splash.c.c r0, com.tkay.expressad.foundation.d.c r1, int r2) {
            r0.b(r1, r2)
            return
    }

    static void a(com.tkay.expressad.splash.c.c r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static void a(com.tkay.expressad.splash.c.c r2, java.lang.String r3, com.tkay.expressad.foundation.d.c r4, int r5) {
            com.tkay.expressad.splash.c.e$c r0 = new com.tkay.expressad.splash.c.e$c
            r0.<init>()
            java.lang.String r1 = r2.d
            r0.c(r1)
            java.lang.String r1 = r2.e
            r0.b(r1)
            r0.a(r4)
            r0.a(r3)
            boolean r3 = r2.o
            r0.b(r3)
            int r3 = r2.p
            r0.a(r3)
            boolean r3 = r2.a
            r0.a(r3)
            com.tkay.expressad.splash.c.c$7 r3 = new com.tkay.expressad.splash.c.c$7
            r3.<init>(r2, r4, r5)
            com.tkay.expressad.splash.c.e r4 = com.tkay.expressad.splash.c.e.a.a()
            com.tkay.expressad.splash.view.TYSplashView r2 = r2.j
            r4.a(r2, r0, r3)
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.u
            if (r0 == 0) goto L8
            r2 = 0
            r1.u = r2
            return
        L8:
            r1.b(r2)
            return
    }

    private void a(java.lang.String r3, com.tkay.expressad.foundation.d.c r4, int r5) {
            r2 = this;
            com.tkay.expressad.splash.c.e$c r0 = new com.tkay.expressad.splash.c.e$c
            r0.<init>()
            java.lang.String r1 = r2.d
            r0.c(r1)
            java.lang.String r1 = r2.e
            r0.b(r1)
            r0.a(r4)
            r0.a(r3)
            boolean r3 = r2.o
            r0.b(r3)
            int r3 = r2.p
            r0.a(r3)
            boolean r3 = r2.a
            r0.a(r3)
            com.tkay.expressad.splash.c.c$7 r3 = new com.tkay.expressad.splash.c.c$7
            r3.<init>(r2, r4, r5)
            com.tkay.expressad.splash.c.e r4 = com.tkay.expressad.splash.c.e.a.a()
            com.tkay.expressad.splash.view.TYSplashView r5 = r2.j
            r4.a(r5, r0, r3)
            return
    }

    static int b(com.tkay.expressad.splash.c.c r0) {
            int r0 = r0.t
            return r0
    }

    private java.util.List<com.tkay.expressad.foundation.d.c> b(com.tkay.expressad.foundation.d.d r5) {
            r4 = this;
            if (r5 == 0) goto L75
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r5.J
            if (r0 == 0) goto L75
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r5.J
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            java.lang.String r2 = r4.d
            r1.l(r2)
            java.lang.String r5 = r5.c()
            r4.y = r5
            int r5 = r1.O()
            r2 = 99
            if (r5 == r2) goto L76
            java.lang.String r5 = r1.c()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L3b
            java.lang.String r5 = r1.d()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L76
        L3b:
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r1)
            r2 = 1
            if (r5 == 0) goto L54
            android.content.Context r5 = r4.i
            java.lang.String r3 = r1.ba()
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r5, r3)
            if (r5 == 0) goto L50
            r5 = r2
            goto L51
        L50:
            r5 = 2
        L51:
            r1.i(r5)
        L54:
            int r5 = r1.ae()
            if (r5 == r2) goto L71
            android.content.Context r5 = r4.i
            java.lang.String r2 = r1.ba()
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r5, r2)
            if (r5 != 0) goto L67
            goto L71
        L67:
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r1)
            if (r5 == 0) goto L76
            r0.add(r1)
            goto L76
        L71:
            r0.add(r1)
            goto L76
        L75:
            r0 = 0
        L76:
            return r0
    }

    private void b(com.tkay.expressad.foundation.d.c r2, int r3) {
            r1 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.j
            boolean r0 = com.tkay.expressad.splash.c.b.a(r0, r2)
            if (r0 == 0) goto L1b
            boolean r0 = r1.v
            if (r0 != 0) goto L1b
            r1.l()
            r1.b = r2
            r0 = 1
            r1.v = r0
            com.tkay.expressad.splash.b.c r0 = r1.h
            if (r0 == 0) goto L1b
            r0.a(r2, r3)
        L1b:
            return
    }

    static void b(com.tkay.expressad.splash.c.c r9, com.tkay.expressad.foundation.d.c r10, int r11) {
            boolean r0 = r10.j()
            if (r0 == 0) goto Ldf
            com.tkay.expressad.splash.a.b$a r0 = new com.tkay.expressad.splash.a.b$a
            r0.<init>()
            java.lang.String r1 = r9.d
            com.tkay.expressad.splash.a.b$a r1 = r0.b(r1)
            java.lang.String r2 = r9.e
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r2)
            boolean r2 = r9.o
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r2)
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r10)
            int r2 = r9.p
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r2)
            int r2 = r9.B
            r1.h(r2)
            java.lang.String r1 = r10.c()     // Catch: java.lang.Throwable -> Lc9
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r1 != 0) goto Lcd
            java.lang.String r1 = r10.c()     // Catch: java.lang.Throwable -> Lc9
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = "hdbtn"
            java.lang.String r2 = r1.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r3 = "alecfc"
            java.lang.String r3 = r1.getQueryParameter(r3)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r4 = "hdinfo"
            java.lang.String r4 = r1.getQueryParameter(r4)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r5 = "shake_show"
            java.lang.String r5 = r1.getQueryParameter(r5)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r6 = "shake_strength"
            java.lang.String r6 = r1.getQueryParameter(r6)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r7 = "shake_time"
            java.lang.String r7 = r1.getQueryParameter(r7)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r8 = "n_logo"
            java.lang.String r1 = r1.getQueryParameter(r8)     // Catch: java.lang.Throwable -> Lc9
            boolean r8 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc9
            if (r8 != 0) goto L75
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> Lc9
            r0.b(r2)     // Catch: java.lang.Throwable -> Lc9
        L75:
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L82
            int r2 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> Lc9
            r0.c(r2)     // Catch: java.lang.Throwable -> Lc9
        L82:
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L8f
            int r2 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> Lc9
            r0.d(r2)     // Catch: java.lang.Throwable -> Lc9
        L8f:
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L9c
            int r2 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> Lc9
            r0.e(r2)     // Catch: java.lang.Throwable -> Lc9
        L9c:
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto La9
            int r2 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> Lc9
            r0.f(r2)     // Catch: java.lang.Throwable -> Lc9
        La9:
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto Lb6
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Lc9
            r0.g(r2)     // Catch: java.lang.Throwable -> Lc9
        Lb6:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto Lcd
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r1 != 0) goto Lc4
            r1 = 0
            goto Lc5
        Lc4:
            r1 = 1
        Lc5:
            r0.i(r1)     // Catch: java.lang.Throwable -> Lc9
            goto Lcd
        Lc9:
            r1 = move-exception
            r1.getMessage()
        Lcd:
            com.tkay.expressad.splash.c.a.a.a()
            com.tkay.expressad.splash.view.TYSplashView r1 = r9.j
            com.tkay.expressad.splash.a.b r2 = new com.tkay.expressad.splash.a.b
            r2.<init>(r0)
            com.tkay.expressad.splash.c.c$6 r0 = new com.tkay.expressad.splash.c.c$6
            r0.<init>(r9, r10, r11)
            com.tkay.expressad.splash.c.a.a(r1, r2, r0)
        Ldf:
            return
    }

    static void b(com.tkay.expressad.splash.c.c r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.v
            if (r0 != 0) goto L11
            r1.l()
            r0 = 1
            r1.v = r0
            com.tkay.expressad.splash.b.c r0 = r1.h
            if (r0 == 0) goto L11
            r0.a(r2)
        L11:
            return
    }

    static com.tkay.expressad.splash.view.TYSplashView c(com.tkay.expressad.splash.c.c r0) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r0.j
            return r0
    }

    private void c(com.tkay.expressad.foundation.d.c r6, int r7) {
            r5 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            r0.clearResState()
            java.lang.String r0 = r6.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29
            boolean r0 = r6.j()
            if (r0 != 0) goto L29
            com.tkay.expressad.splash.c.c$5 r0 = new com.tkay.expressad.splash.c.c$5
            r0.<init>(r5, r6, r7)
            r5.x = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r6.c()
            com.tkay.expressad.videocommon.b.g$d r2 = r5.x
            r0.b(r1, r2)
        L29:
            boolean r0 = r6.j()
            if (r0 != 0) goto L9b
            java.lang.String r0 = r6.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L45
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.splash.c.c$4 r1 = new com.tkay.expressad.splash.c.c$4
            r1.<init>(r5, r6, r7)
            r0.a(r1)
        L45:
            java.lang.String r0 = r6.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8e
            com.tkay.expressad.splash.c.c$8 r0 = new com.tkay.expressad.splash.c.c$8
            r0.<init>(r5, r6)
            r5.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r5.d
            com.tkay.expressad.videocommon.d.b r3 = r5.w
            r4 = 297(0x129, float:4.16E-43)
            r1.a(r2, r0, r4, r3)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.d
            boolean r2 = r6.A()
            boolean r0 = r0.a(r4, r1, r2)
            if (r0 != 0) goto L85
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.d
            r0.d(r1)
            goto L8e
        L85:
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            r1 = 1
            r0.setVideoReady(r1)
            r5.b(r6, r7)
        L8e:
            java.lang.String r0 = r6.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L9b
            r5.d(r6, r7)
        L9b:
            return
    }

    static void c(com.tkay.expressad.splash.c.c r2, com.tkay.expressad.foundation.d.c r3, int r4) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.j
            boolean r0 = r0.isH5Ready()
            if (r0 != 0) goto L11
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.j
            r1 = 1
            r0.setH5Ready(r1)
            r2.b(r3, r4)
        L11:
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.a(r1)
            return
    }

    static android.os.Handler d(com.tkay.expressad.splash.c.c r0) {
            android.os.Handler r0 = r0.C
            return r0
    }

    static java.lang.String d() {
            java.lang.String r0 = com.tkay.expressad.splash.c.c.c
            return r0
    }

    private void d(com.tkay.expressad.foundation.d.c r3, int r4) {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.j
            com.tkay.expressad.splash.c.c$3 r1 = new com.tkay.expressad.splash.c.c$3
            r1.<init>(r2, r3, r4)
            com.tkay.expressad.splash.c.b.a(r0, r3, r1)
            return
    }

    private void e(com.tkay.expressad.foundation.d.c r3, int r4) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.splash.c.c$4 r1 = new com.tkay.expressad.splash.c.c$4
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    private boolean e() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    private int f() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    private void f(com.tkay.expressad.foundation.d.c r2, int r3) {
            r1 = this;
            boolean r0 = r2.j()
            if (r0 != 0) goto L1a
            com.tkay.expressad.splash.c.c$5 r0 = new com.tkay.expressad.splash.c.c$5
            r0.<init>(r1, r2, r3)
            r1.x = r0
            com.tkay.expressad.videocommon.b.g r3 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r2.c()
            com.tkay.expressad.videocommon.b.g$d r0 = r1.x
            r3.b(r2, r0)
        L1a:
            return
    }

    private void g() {
            r2 = this;
            int r0 = r2.z     // Catch: java.lang.Exception -> L22
            int r0 = r0 + 1
            r2.z = r0     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.d.c r1 = r2.k     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L12
            com.tkay.expressad.d.c r1 = r2.k     // Catch: java.lang.Exception -> L22
            int r1 = r1.t()     // Catch: java.lang.Exception -> L22
            if (r0 <= r1) goto L15
        L12:
            r0 = 0
            r2.z = r0     // Catch: java.lang.Exception -> L22
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "onload,next offset is:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L22
            int r1 = r2.z     // Catch: java.lang.Exception -> L22
            r0.append(r1)     // Catch: java.lang.Exception -> L22
            return
        L22:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private void g(com.tkay.expressad.foundation.d.c r10, int r11) {
            r9 = this;
            boolean r0 = r10.j()
            if (r0 == 0) goto Ldf
            com.tkay.expressad.splash.a.b$a r0 = new com.tkay.expressad.splash.a.b$a
            r0.<init>()
            java.lang.String r1 = r9.d
            com.tkay.expressad.splash.a.b$a r1 = r0.b(r1)
            java.lang.String r2 = r9.e
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r2)
            boolean r2 = r9.o
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r2)
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r10)
            int r2 = r9.p
            com.tkay.expressad.splash.a.b$a r1 = r1.a(r2)
            int r2 = r9.B
            r1.h(r2)
            java.lang.String r1 = r10.c()     // Catch: java.lang.Throwable -> Lc9
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r1 != 0) goto Lcd
            java.lang.String r1 = r10.c()     // Catch: java.lang.Throwable -> Lc9
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = "hdbtn"
            java.lang.String r2 = r1.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r3 = "alecfc"
            java.lang.String r3 = r1.getQueryParameter(r3)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r4 = "hdinfo"
            java.lang.String r4 = r1.getQueryParameter(r4)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r5 = "shake_show"
            java.lang.String r5 = r1.getQueryParameter(r5)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r6 = "shake_strength"
            java.lang.String r6 = r1.getQueryParameter(r6)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r7 = "shake_time"
            java.lang.String r7 = r1.getQueryParameter(r7)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r8 = "n_logo"
            java.lang.String r1 = r1.getQueryParameter(r8)     // Catch: java.lang.Throwable -> Lc9
            boolean r8 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc9
            if (r8 != 0) goto L75
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> Lc9
            r0.b(r2)     // Catch: java.lang.Throwable -> Lc9
        L75:
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L82
            int r2 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> Lc9
            r0.c(r2)     // Catch: java.lang.Throwable -> Lc9
        L82:
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L8f
            int r2 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> Lc9
            r0.d(r2)     // Catch: java.lang.Throwable -> Lc9
        L8f:
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L9c
            int r2 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> Lc9
            r0.e(r2)     // Catch: java.lang.Throwable -> Lc9
        L9c:
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto La9
            int r2 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> Lc9
            r0.f(r2)     // Catch: java.lang.Throwable -> Lc9
        La9:
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto Lb6
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Lc9
            r0.g(r2)     // Catch: java.lang.Throwable -> Lc9
        Lb6:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto Lcd
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r1 != 0) goto Lc4
            r1 = 0
            goto Lc5
        Lc4:
            r1 = 1
        Lc5:
            r0.i(r1)     // Catch: java.lang.Throwable -> Lc9
            goto Lcd
        Lc9:
            r1 = move-exception
            r1.getMessage()
        Lcd:
            com.tkay.expressad.splash.c.a.a.a()
            com.tkay.expressad.splash.view.TYSplashView r1 = r9.j
            com.tkay.expressad.splash.a.b r2 = new com.tkay.expressad.splash.a.b
            r2.<init>(r0)
            com.tkay.expressad.splash.c.c$6 r0 = new com.tkay.expressad.splash.c.c$6
            r0.<init>(r9, r10, r11)
            com.tkay.expressad.splash.c.a.a(r1, r2, r0)
        Ldf:
            return
    }

    private static void h() {
            return
    }

    private void h(com.tkay.expressad.foundation.d.c r3, int r4) {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.j
            boolean r0 = r0.isH5Ready()
            if (r0 != 0) goto L11
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.j
            r1 = 1
            r0.setH5Ready(r1)
            r2.b(r3, r4)
        L11:
            return
    }

    private static void i() {
            return
    }

    private void i(com.tkay.expressad.foundation.d.c r6, int r7) {
            r5 = this;
            com.tkay.expressad.splash.c.c$8 r0 = new com.tkay.expressad.splash.c.c$8
            r0.<init>(r5, r6)
            r5.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r5.d
            com.tkay.expressad.videocommon.d.b r3 = r5.w
            r4 = 297(0x129, float:4.16E-43)
            r1.a(r2, r0, r4, r3)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.d
            boolean r2 = r6.A()
            boolean r0 = r0.a(r4, r1, r2)
            if (r0 != 0) goto L36
            com.tkay.expressad.videocommon.b.c r6 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r7 = r5.d
            r6.d(r7)
            return
        L36:
            com.tkay.expressad.splash.view.TYSplashView r0 = r5.j
            r1 = 1
            r0.setVideoReady(r1)
            r5.b(r6, r7)
            return
    }

    private void j() {
            r1 = this;
            r0 = 0
            r1.z = r0
            return
    }

    private static void k() {
            return
    }

    private void l() {
            r2 = this;
            android.os.Handler r0 = r2.C
            java.lang.Runnable r1 = r2.D
            r0.removeCallbacks(r1)
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.A
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public final void a(int r1, int r2) {
            r0 = this;
            r0.r = r1
            r0.q = r2
            return
    }

    public final void a(com.tkay.expressad.d.c r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r8) {
            r7 = this;
            r0 = 0
            r7.v = r0
            java.lang.String r1 = ""
            r7.s = r1
            r1 = 2
            r7.t = r1
            r2 = 1
            if (r8 == 0) goto L7e
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r8.J
            if (r3 == 0) goto L7e
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r4 = r8.J
            java.lang.Object r4 = r4.get(r0)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            java.lang.String r5 = r7.d
            r4.l(r5)
            java.lang.String r8 = r8.c()
            r7.y = r8
            int r8 = r4.O()
            r5 = 99
            if (r8 == r5) goto L7f
            java.lang.String r8 = r4.c()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto L45
            java.lang.String r8 = r4.d()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L7f
        L45:
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r4)
            if (r8 == 0) goto L5d
            android.content.Context r8 = r7.i
            java.lang.String r5 = r4.ba()
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r8, r5)
            if (r8 == 0) goto L59
            r8 = r2
            goto L5a
        L59:
            r8 = r1
        L5a:
            r4.i(r8)
        L5d:
            int r8 = r4.ae()
            if (r8 == r2) goto L7a
            android.content.Context r8 = r7.i
            java.lang.String r5 = r4.ba()
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r8, r5)
            if (r8 != 0) goto L70
            goto L7a
        L70:
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r4)
            if (r8 == 0) goto L7f
            r3.add(r4)
            goto L7f
        L7a:
            r3.add(r4)
            goto L7f
        L7e:
            r3 = 0
        L7f:
            if (r3 == 0) goto L183
            int r8 = r3.size()
            if (r8 <= 0) goto L183
            r7.g()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r4 = "onload load suc size:"
            r8.<init>(r4)
            int r4 = r3.size()
            r8.append(r4)
            java.lang.Object r8 = r3.get(r0)
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8
            java.lang.String r3 = r8.c()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto Lc6
            java.lang.String r3 = r8.d()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto Lbf
            java.lang.String r3 = r8.d()
            java.lang.String r4 = "<MBTPLMARK>"
            boolean r3 = r3.contains(r4)
            if (r3 == 0) goto Lbf
            goto Lc6
        Lbf:
            r8.a(r0)
            r8.b(r2)
            goto Lcc
        Lc6:
            r8.a(r2)
            r8.b(r0)
        Lcc:
            com.tkay.expressad.splash.view.TYSplashView r3 = r7.j
            if (r3 == 0) goto Ld3
            r3.setDynamicView(r0)
        Ld3:
            boolean r0 = r8.j()
            if (r0 == 0) goto Ldc
            r7.d(r8, r1)
        Ldc:
            com.tkay.expressad.splash.view.TYSplashView r0 = r7.j
            boolean r0 = com.tkay.expressad.splash.c.b.a(r0, r8)
            if (r0 == 0) goto Le8
            r7.b(r8, r1)
            return
        Le8:
            com.tkay.expressad.splash.view.TYSplashView r0 = r7.j
            r0.clearResState()
            java.lang.String r0 = r8.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L111
            boolean r0 = r8.j()
            if (r0 != 0) goto L111
            com.tkay.expressad.splash.c.c$5 r0 = new com.tkay.expressad.splash.c.c$5
            r0.<init>(r7, r8, r1)
            r7.x = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r8.c()
            com.tkay.expressad.videocommon.b.g$d r4 = r7.x
            r0.b(r3, r4)
        L111:
            boolean r0 = r8.j()
            if (r0 != 0) goto L182
            java.lang.String r0 = r8.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12d
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.splash.c.c$4 r3 = new com.tkay.expressad.splash.c.c$4
            r3.<init>(r7, r8, r1)
            r0.a(r3)
        L12d:
            java.lang.String r0 = r8.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L175
            com.tkay.expressad.splash.c.c$8 r0 = new com.tkay.expressad.splash.c.c$8
            r0.<init>(r7, r8)
            r7.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r8)
            com.tkay.expressad.videocommon.b.c r3 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r4 = r7.d
            com.tkay.expressad.videocommon.d.b r5 = r7.w
            r6 = 297(0x129, float:4.16E-43)
            r3.a(r4, r0, r6, r5)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r3 = r7.d
            boolean r4 = r8.A()
            boolean r0 = r0.a(r6, r3, r4)
            if (r0 != 0) goto L16d
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r7.d
            r0.d(r2)
            goto L175
        L16d:
            com.tkay.expressad.splash.view.TYSplashView r0 = r7.j
            r0.setVideoReady(r2)
            r7.b(r8, r1)
        L175:
            java.lang.String r0 = r8.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L182
            r7.d(r8, r1)
        L182:
            return
        L183:
            java.lang.String r8 = "invalid  campaign"
            r7.a(r8)
            return
    }

    public final void a(com.tkay.expressad.splash.b.c r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(com.tkay.expressad.splash.view.TYSplashView r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void b() {
            r2 = this;
            com.tkay.expressad.splash.b.c r0 = r2.h
            r1 = 0
            if (r0 == 0) goto L7
            r2.h = r1
        L7:
            com.tkay.expressad.videocommon.d.b r0 = r2.w
            if (r0 == 0) goto Ld
            r2.w = r1
        Ld:
            com.tkay.expressad.videocommon.b.g$d r0 = r2.x
            if (r0 == 0) goto L13
            r2.x = r1
        L13:
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final com.tkay.expressad.foundation.d.c c() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.b
            return r0
    }
}
