package com.tkay.expressad.exoplayer.l;

public final class f {
    private static final long a = 500;
    private static final long b = 20000000;
    private static final long c = 80;
    private static final int d = 6;
    private final android.view.WindowManager e;
    private final com.tkay.expressad.exoplayer.l.f.b f;
    private final com.tkay.expressad.exoplayer.l.f.a g;
    private long h;
    private long i;
    private long j;
    private long k;
    private long l;
    private boolean m;
    private long n;
    private long o;
    private long p;

    private final class a implements android.hardware.display.DisplayManager.DisplayListener {
        final com.tkay.expressad.exoplayer.l.f a;
        private final android.hardware.display.DisplayManager b;

        public a(com.tkay.expressad.exoplayer.l.f r1, android.hardware.display.DisplayManager r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        public final void a() {
                r2 = this;
                android.hardware.display.DisplayManager r0 = r2.b
                r1 = 0
                r0.registerDisplayListener(r2, r1)
                return
        }

        public final void b() {
                r1 = this;
                android.hardware.display.DisplayManager r0 = r1.b
                r0.unregisterDisplayListener(r1)
                return
        }

        @Override
        public final void onDisplayAdded(int r1) {
                r0 = this;
                return
        }

        @Override
        public final void onDisplayChanged(int r1) {
                r0 = this;
                if (r1 != 0) goto L7
                com.tkay.expressad.exoplayer.l.f r1 = r0.a
                com.tkay.expressad.exoplayer.l.f.a(r1)
            L7:
                return
        }

        @Override
        public final void onDisplayRemoved(int r1) {
                r0 = this;
                return
        }
    }

    private static final class b implements android.os.Handler.Callback, android.view.Choreographer.FrameCallback {
        private static final int b = 0;
        private static final int c = 1;
        private static final int d = 2;
        private static final com.tkay.expressad.exoplayer.l.f.b e = null;
        public volatile long a;
        private final android.os.Handler f;
        private final android.os.HandlerThread g;
        private android.view.Choreographer h;
        private int i;

        static {
                com.tkay.expressad.exoplayer.l.f$b r0 = new com.tkay.expressad.exoplayer.l.f$b
                r0.<init>()
                com.tkay.expressad.exoplayer.l.f.b.e = r0
                return
        }

        private b() {
                r2 = this;
                r2.<init>()
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r2.a = r0
                android.os.HandlerThread r0 = new android.os.HandlerThread
                java.lang.String r1 = "ChoreographerOwner:Handler"
                r0.<init>(r1)
                r2.g = r0
                r0.start()
                android.os.Handler r0 = new android.os.Handler
                android.os.HandlerThread r1 = r2.g
                android.os.Looper r1 = r1.getLooper()
                r0.<init>(r1, r2)
                r2.f = r0
                r1 = 0
                r0.sendEmptyMessage(r1)
                return
        }

        public static com.tkay.expressad.exoplayer.l.f.b a() {
                com.tkay.expressad.exoplayer.l.f$b r0 = com.tkay.expressad.exoplayer.l.f.b.e
                return r0
        }

        private void d() {
                r1 = this;
                android.view.Choreographer r0 = android.view.Choreographer.getInstance()
                r1.h = r0
                return
        }

        private void e() {
                r3 = this;
                android.view.Choreographer r0 = r3.h
                if (r0 == 0) goto Lf
                int r1 = r3.i
                r2 = 1
                int r1 = r1 + r2
                r3.i = r1
                if (r1 != r2) goto Lf
                r0.postFrameCallback(r3)
            Lf:
                return
        }

        private void f() {
                r2 = this;
                android.view.Choreographer r0 = r2.h
                if (r0 == 0) goto L16
                int r1 = r2.i
                int r1 = r1 + (-1)
                r2.i = r1
                if (r1 != 0) goto L16
                r0.removeFrameCallback(r2)
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r2.a = r0
            L16:
                return
        }

        public final void b() {
                r2 = this;
                android.os.Handler r0 = r2.f
                r1 = 1
                r0.sendEmptyMessage(r1)
                return
        }

        public final void c() {
                r2 = this;
                android.os.Handler r0 = r2.f
                r1 = 2
                r0.sendEmptyMessage(r1)
                return
        }

        @Override
        public final void doFrame(long r3) {
                r2 = this;
                android.view.Choreographer r0 = r2.h
                if (r0 == 0) goto Ld
                r2.a = r3
                android.view.Choreographer r3 = r2.h
                r0 = 500(0x1f4, double:2.47E-321)
                r3.postFrameCallbackDelayed(r2, r0)
            Ld:
                return
        }

        @Override
        public final boolean handleMessage(android.os.Message r4) {
                r3 = this;
                int r4 = r4.what
                r0 = 1
                if (r4 == 0) goto L31
                if (r4 == r0) goto L22
                r1 = 2
                if (r4 == r1) goto Lc
                r4 = 0
                return r4
            Lc:
                android.view.Choreographer r4 = r3.h
                if (r4 == 0) goto L21
                int r1 = r3.i
                int r1 = r1 - r0
                r3.i = r1
                if (r1 != 0) goto L21
                r4.removeFrameCallback(r3)
                r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r3.a = r1
            L21:
                return r0
            L22:
                android.view.Choreographer r4 = r3.h
                if (r4 == 0) goto L30
                int r1 = r3.i
                int r1 = r1 + r0
                r3.i = r1
                if (r1 != r0) goto L30
                r4.postFrameCallback(r3)
            L30:
                return r0
            L31:
                android.view.Choreographer r4 = android.view.Choreographer.getInstance()     // Catch: java.lang.Throwable -> L37
                r3.h = r4     // Catch: java.lang.Throwable -> L37
            L37:
                return r0
        }
    }

    public f() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public f(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            if (r4 == 0) goto L15
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r1 = "window"
            java.lang.Object r1 = r4.getSystemService(r1)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            r3.e = r1
            goto L17
        L15:
            r3.e = r0
        L17:
            android.view.WindowManager r1 = r3.e
            if (r1 == 0) goto L39
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 17
            if (r1 < r2) goto L30
            java.lang.String r1 = "display"
            java.lang.Object r4 = r4.getSystemService(r1)
            android.hardware.display.DisplayManager r4 = (android.hardware.display.DisplayManager) r4
            if (r4 == 0) goto L30
            com.tkay.expressad.exoplayer.l.f$a r0 = new com.tkay.expressad.exoplayer.l.f$a
            r0.<init>(r3, r4)
        L30:
            r3.g = r0
            com.tkay.expressad.exoplayer.l.f$b r4 = com.tkay.expressad.exoplayer.l.f.b.a()
            r3.f = r4
            goto L3d
        L39:
            r3.g = r0
            r3.f = r0
        L3d:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.h = r0
            r3.i = r0
            return
    }

    private static long a(long r4, long r6, long r8) {
            long r0 = r4 - r6
            long r0 = r0 / r8
            long r0 = r0 * r8
            long r6 = r6 + r0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 > 0) goto Lc
            long r8 = r6 - r8
            goto L10
        Lc:
            long r8 = r8 + r6
            r2 = r6
            r6 = r8
            r8 = r2
        L10:
            long r0 = r6 - r4
            long r4 = r4 - r8
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 >= 0) goto L18
            return r6
        L18:
            return r8
    }

    private com.tkay.expressad.exoplayer.l.f.a a(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "display"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.hardware.display.DisplayManager r2 = (android.hardware.display.DisplayManager) r2
            if (r2 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            com.tkay.expressad.exoplayer.l.f$a r0 = new com.tkay.expressad.exoplayer.l.f$a
            r0.<init>(r1, r2)
            return r0
    }

    static void a(com.tkay.expressad.exoplayer.l.f r0) {
            r0.c()
            return
    }

    private boolean b(long r3, long r5) {
            r2 = this;
            long r0 = r2.o
            long r3 = r3 - r0
            long r0 = r2.n
            long r5 = r5 - r0
            long r5 = r5 - r3
            long r3 = java.lang.Math.abs(r5)
            r5 = 20000000(0x1312d00, double:9.881313E-317)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L14
            r3 = 1
            return r3
        L14:
            r3 = 0
            return r3
    }

    private void c() {
            r4 = this;
            android.view.WindowManager r0 = r4.e     // Catch: java.lang.Throwable -> L1e
            android.view.Display r0 = r0.getDefaultDisplay()     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L1e
            float r0 = r0.getRefreshRate()     // Catch: java.lang.Throwable -> L1e
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L1e
            r2 = 4741671816366391296(0x41cdcd6500000000, double:1.0E9)
            double r2 = r2 / r0
            long r0 = (long) r2     // Catch: java.lang.Throwable -> L1e
            r4.h = r0     // Catch: java.lang.Throwable -> L1e
            r2 = 80
            long r0 = r0 * r2
            r2 = 100
            long r0 = r0 / r2
            r4.i = r0     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    public final long a(long r11, long r13) {
            r10 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r11
            boolean r2 = r10.m
            if (r2 == 0) goto L41
            long r2 = r10.j
            int r2 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r2 == 0) goto L18
            long r2 = r10.p
            r4 = 1
            long r2 = r2 + r4
            r10.p = r2
            long r2 = r10.l
            r10.k = r2
        L18:
            long r2 = r10.p
            r4 = 6
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r5 = 0
            if (r4 < 0) goto L39
            long r6 = r10.o
            long r6 = r0 - r6
            long r6 = r6 / r2
            long r2 = r10.k
            long r2 = r2 + r6
            boolean r4 = r10.b(r2, r13)
            if (r4 == 0) goto L32
            r10.m = r5
            goto L41
        L32:
            long r4 = r10.n
            long r4 = r4 + r2
            long r6 = r10.o
            long r4 = r4 - r6
            goto L43
        L39:
            boolean r2 = r10.b(r0, r13)
            if (r2 == 0) goto L41
            r10.m = r5
        L41:
            r4 = r13
            r2 = r0
        L43:
            boolean r6 = r10.m
            if (r6 != 0) goto L52
            r10.o = r0
            r10.n = r13
            r13 = 0
            r10.p = r13
            r13 = 1
            r10.m = r13
        L52:
            r10.j = r11
            r10.l = r2
            com.tkay.expressad.exoplayer.l.f$b r11 = r10.f
            if (r11 == 0) goto L8c
            long r12 = r10.h
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r12 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r12 != 0) goto L66
            goto L8c
        L66:
            long r11 = r11.a
            int r13 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r13 != 0) goto L6d
            return r4
        L6d:
            long r13 = r10.h
            long r0 = r4 - r11
            long r0 = r0 / r13
            long r0 = r0 * r13
            long r11 = r11 + r0
            int r0 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r0 > 0) goto L7b
            long r13 = r11 - r13
            goto L7f
        L7b:
            long r13 = r13 + r11
            r8 = r11
            r11 = r13
            r13 = r8
        L7f:
            long r0 = r11 - r4
            long r4 = r4 - r13
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 >= 0) goto L87
            goto L88
        L87:
            r11 = r13
        L88:
            long r13 = r10.i
            long r11 = r11 - r13
            return r11
        L8c:
            return r4
    }

    public final void a() {
            r1 = this;
            r0 = 0
            r1.m = r0
            android.view.WindowManager r0 = r1.e
            if (r0 == 0) goto L16
            com.tkay.expressad.exoplayer.l.f$b r0 = r1.f
            r0.b()
            com.tkay.expressad.exoplayer.l.f$a r0 = r1.g
            if (r0 == 0) goto L13
            r0.a()
        L13:
            r1.c()
        L16:
            return
    }

    public final void b() {
            r1 = this;
            android.view.WindowManager r0 = r1.e
            if (r0 == 0) goto L10
            com.tkay.expressad.exoplayer.l.f$a r0 = r1.g
            if (r0 == 0) goto Lb
            r0.b()
        Lb:
            com.tkay.expressad.exoplayer.l.f$b r0 = r1.f
            r0.c()
        L10:
            return
    }
}
