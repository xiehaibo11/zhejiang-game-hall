package com.tkay.expressad.exoplayer.j;

public final class t implements com.tkay.expressad.exoplayer.j.u {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    private final java.util.concurrent.ExecutorService e;
    private com.tkay.expressad.exoplayer.j.t.b<? extends com.tkay.expressad.exoplayer.j.t.c> f;
    private java.io.IOException g;

    public interface a<T extends com.tkay.expressad.exoplayer.j.t.c> {
        int a(T r1, long r2, long r4, java.io.IOException r6);

        void a(T r1, long r2, long r4);

        void a(T r1, long r2, long r4, boolean r6);
    }

    private final class b<T extends com.tkay.expressad.exoplayer.j.t.c> extends android.os.Handler implements java.lang.Runnable {
        private static final java.lang.String c = "LoadTask";
        private static final int d = 0;
        private static final int e = 1;
        private static final int f = 2;
        private static final int g = 3;
        private static final int h = 4;
        public final int a;
        final com.tkay.expressad.exoplayer.j.t b;
        private final T i;
        private final long j;
        private com.tkay.expressad.exoplayer.j.t.a<T> k;
        private java.io.IOException l;
        private int m;
        private volatile java.lang.Thread n;
        private volatile boolean o;
        private volatile boolean p;

        public b(com.tkay.expressad.exoplayer.j.t r1, android.os.Looper r2, T r3, com.tkay.expressad.exoplayer.j.t.a<T> r4, int r5, long r6) {
                r0 = this;
                r0.b = r1
                r0.<init>(r2)
                r0.i = r3
                r0.k = r4
                r0.a = r5
                r0.j = r6
                return
        }

        private void a() {
                r2 = this;
                r0 = 0
                r2.l = r0
                com.tkay.expressad.exoplayer.j.t r0 = r2.b
                java.util.concurrent.ExecutorService r0 = com.tkay.expressad.exoplayer.j.t.b(r0)
                com.tkay.expressad.exoplayer.j.t r1 = r2.b
                com.tkay.expressad.exoplayer.j.t$b r1 = com.tkay.expressad.exoplayer.j.t.a(r1)
                r0.execute(r1)
                return
        }

        private void b() {
                r2 = this;
                com.tkay.expressad.exoplayer.j.t r0 = r2.b
                r1 = 0
                com.tkay.expressad.exoplayer.j.t.a(r0, r1)
                return
        }

        private long c() {
                r2 = this;
                int r0 = r2.m
                int r0 = r0 + (-1)
                int r0 = r0 * 1000
                r1 = 5000(0x1388, float:7.006E-42)
                int r0 = java.lang.Math.min(r0, r1)
                long r0 = (long) r0
                return r0
        }

        public final void a(int r3) {
                r2 = this;
                java.io.IOException r0 = r2.l
                if (r0 == 0) goto La
                int r1 = r2.m
                if (r1 > r3) goto L9
                goto La
            L9:
                throw r0
            La:
                return
        }

        public final void a(long r5) {
                r4 = this;
                com.tkay.expressad.exoplayer.j.t r0 = r4.b
                com.tkay.expressad.exoplayer.j.t$b r0 = com.tkay.expressad.exoplayer.j.t.a(r0)
                r1 = 0
                if (r0 != 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = r1
            Lc:
                com.tkay.expressad.exoplayer.k.a.b(r0)
                com.tkay.expressad.exoplayer.j.t r0 = r4.b
                com.tkay.expressad.exoplayer.j.t.a(r0, r4)
                r2 = 0
                int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
                if (r0 <= 0) goto L1e
                r4.sendEmptyMessageDelayed(r1, r5)
                return
            L1e:
                r4.a()
                return
        }

        public final void a(boolean r10) {
                r9 = this;
                r9.p = r10
                r0 = 0
                r9.l = r0
                r1 = 0
                boolean r2 = r9.hasMessages(r1)
                r3 = 1
                if (r2 == 0) goto L16
                r9.removeMessages(r1)
                if (r10 != 0) goto L26
                r9.sendEmptyMessage(r3)
                goto L26
            L16:
                r9.o = r3
                T extends com.tkay.expressad.exoplayer.j.t$c r1 = r9.i
                r1.a()
                java.lang.Thread r1 = r9.n
                if (r1 == 0) goto L26
                java.lang.Thread r1 = r9.n
                r1.interrupt()
            L26:
                if (r10 == 0) goto L3d
                r9.b()
                long r4 = android.os.SystemClock.elapsedRealtime()
                com.tkay.expressad.exoplayer.j.t$a<T extends com.tkay.expressad.exoplayer.j.t$c> r2 = r9.k
                T extends com.tkay.expressad.exoplayer.j.t$c r3 = r9.i
                long r6 = r9.j
                long r6 = r4 - r6
                r8 = 1
                r2.a(r3, r4, r6, r8)
                r9.k = r0
            L3d:
                return
        }

        @Override
        public final void handleMessage(android.os.Message r12) {
                r11 = this;
                boolean r0 = r11.p
                if (r0 == 0) goto L5
                return
            L5:
                int r0 = r12.what
                if (r0 != 0) goto Ld
                r11.a()
                return
            Ld:
                int r0 = r12.what
                r1 = 4
                if (r0 == r1) goto L8c
                r11.b()
                long r4 = android.os.SystemClock.elapsedRealtime()
                long r0 = r11.j
                long r6 = r4 - r0
                boolean r0 = r11.o
                if (r0 == 0) goto L2a
                com.tkay.expressad.exoplayer.j.t$a<T extends com.tkay.expressad.exoplayer.j.t$c> r2 = r11.k
                T extends com.tkay.expressad.exoplayer.j.t$c r3 = r11.i
                r8 = 0
                r2.a(r3, r4, r6, r8)
                return
            L2a:
                int r0 = r12.what
                r1 = 1
                if (r0 == r1) goto L83
                r9 = 2
                if (r0 == r9) goto L68
                r10 = 3
                if (r0 == r10) goto L36
                goto L67
            L36:
                java.lang.Object r12 = r12.obj
                r8 = r12
                java.io.IOException r8 = (java.io.IOException) r8
                r11.l = r8
                com.tkay.expressad.exoplayer.j.t$a<T extends com.tkay.expressad.exoplayer.j.t$c> r2 = r11.k
                T extends com.tkay.expressad.exoplayer.j.t$c r3 = r11.i
                int r12 = r2.a(r3, r4, r6, r8)
                if (r12 != r10) goto L4f
                com.tkay.expressad.exoplayer.j.t r12 = r11.b
                java.io.IOException r0 = r11.l
                com.tkay.expressad.exoplayer.j.t.a(r12, r0)
                return
            L4f:
                if (r12 == r9) goto L67
                if (r12 != r1) goto L55
                r12 = r1
                goto L58
            L55:
                int r12 = r11.m
                int r12 = r12 + r1
            L58:
                r11.m = r12
                int r12 = r12 - r1
                int r12 = r12 * 1000
                r0 = 5000(0x1388, float:7.006E-42)
                int r12 = java.lang.Math.min(r12, r0)
                long r0 = (long) r12
                r11.a(r0)
            L67:
                return
            L68:
                com.tkay.expressad.exoplayer.j.t$a<T extends com.tkay.expressad.exoplayer.j.t$c> r2 = r11.k     // Catch: java.lang.RuntimeException -> L70
                T extends com.tkay.expressad.exoplayer.j.t$c r3 = r11.i     // Catch: java.lang.RuntimeException -> L70
                r2.a(r3, r4, r6)     // Catch: java.lang.RuntimeException -> L70
                return
            L70:
                r12 = move-exception
                java.lang.String r0 = "LoadTask"
                java.lang.String r1 = "Unexpected exception handling load completed"
                android.util.Log.e(r0, r1, r12)
                com.tkay.expressad.exoplayer.j.t r0 = r11.b
                com.tkay.expressad.exoplayer.j.t$g r1 = new com.tkay.expressad.exoplayer.j.t$g
                r1.<init>(r12)
                com.tkay.expressad.exoplayer.j.t.a(r0, r1)
                return
            L83:
                com.tkay.expressad.exoplayer.j.t$a<T extends com.tkay.expressad.exoplayer.j.t$c> r2 = r11.k
                T extends com.tkay.expressad.exoplayer.j.t$c r3 = r11.i
                r8 = 0
                r2.a(r3, r4, r6, r8)
                return
            L8c:
                java.lang.Object r12 = r12.obj
                java.lang.Error r12 = (java.lang.Error) r12
                throw r12
        }

        @Override
        public final void run() {
                r5 = this;
                java.lang.String r0 = "LoadTask"
                r1 = 2
                r2 = 3
                java.lang.Thread r3 = java.lang.Thread.currentThread()     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                r5.n = r3     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                boolean r3 = r5.o     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                if (r3 != 0) goto L37
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                java.lang.String r4 = "load:"
                r3.<init>(r4)     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                T extends com.tkay.expressad.exoplayer.j.t$c r4 = r5.i     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                java.lang.String r4 = r4.getSimpleName()     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                r3.append(r4)     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                com.tkay.expressad.exoplayer.k.ad.a(r3)     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                T extends com.tkay.expressad.exoplayer.j.t$c r3 = r5.i     // Catch: java.lang.Throwable -> L32
                r3.b()     // Catch: java.lang.Throwable -> L32
                com.tkay.expressad.exoplayer.k.ad.a()     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                goto L37
            L32:
                r3 = move-exception
                com.tkay.expressad.exoplayer.k.ad.a()     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                throw r3     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
            L37:
                boolean r3 = r5.p     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
                if (r3 != 0) goto L3e
                r5.sendEmptyMessage(r1)     // Catch: java.lang.Error -> L3f java.lang.OutOfMemoryError -> L52 java.lang.Exception -> L69 java.lang.InterruptedException -> L80 java.io.IOException -> L8d
            L3e:
                return
            L3f:
                r1 = move-exception
                java.lang.String r2 = "Unexpected error loading stream"
                android.util.Log.e(r0, r2, r1)
                boolean r0 = r5.p
                if (r0 != 0) goto L51
                r0 = 4
                android.os.Message r0 = r5.obtainMessage(r0, r1)
                r0.sendToTarget()
            L51:
                throw r1
            L52:
                r1 = move-exception
                java.lang.String r3 = "OutOfMemory error loading stream"
                android.util.Log.e(r0, r3, r1)
                boolean r0 = r5.p
                if (r0 != 0) goto L68
                com.tkay.expressad.exoplayer.j.t$g r0 = new com.tkay.expressad.exoplayer.j.t$g
                r0.<init>(r1)
                android.os.Message r0 = r5.obtainMessage(r2, r0)
                r0.sendToTarget()
            L68:
                return
            L69:
                r1 = move-exception
                java.lang.String r3 = "Unexpected exception loading stream"
                android.util.Log.e(r0, r3, r1)
                boolean r0 = r5.p
                if (r0 != 0) goto L7f
                com.tkay.expressad.exoplayer.j.t$g r0 = new com.tkay.expressad.exoplayer.j.t$g
                r0.<init>(r1)
                android.os.Message r0 = r5.obtainMessage(r2, r0)
                r0.sendToTarget()
            L7f:
                return
            L80:
                boolean r0 = r5.o
                com.tkay.expressad.exoplayer.k.a.b(r0)
                boolean r0 = r5.p
                if (r0 != 0) goto L8c
                r5.sendEmptyMessage(r1)
            L8c:
                return
            L8d:
                r0 = move-exception
                boolean r1 = r5.p
                if (r1 != 0) goto L99
                android.os.Message r0 = r5.obtainMessage(r2, r0)
                r0.sendToTarget()
            L99:
                return
        }
    }

    public interface c {
        void a();

        void b();
    }

    public interface d {
        void g();
    }

    private static final class e implements java.lang.Runnable {
        private final com.tkay.expressad.exoplayer.j.t.d a;

        public e(com.tkay.expressad.exoplayer.j.t.d r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.expressad.exoplayer.j.t$d r0 = r1.a
                r0.g()
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface f {
    }

    public static final class g extends java.io.IOException {
        public g(java.lang.Throwable r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Unexpected "
                r0.<init>(r1)
                java.lang.Class r1 = r3.getClass()
                java.lang.String r1 = r1.getSimpleName()
                r0.append(r1)
                java.lang.String r1 = ": "
                r0.append(r1)
                java.lang.String r1 = r3.getMessage()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0, r3)
                return
        }
    }

    public t(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.util.concurrent.ExecutorService r1 = com.tkay.expressad.exoplayer.k.af.a(r1)
            r0.e = r1
            return
    }

    static com.tkay.expressad.exoplayer.j.t.b a(com.tkay.expressad.exoplayer.j.t r0) {
            com.tkay.expressad.exoplayer.j.t$b<? extends com.tkay.expressad.exoplayer.j.t$c> r0 = r0.f
            return r0
    }

    static com.tkay.expressad.exoplayer.j.t.b a(com.tkay.expressad.exoplayer.j.t r0, com.tkay.expressad.exoplayer.j.t.b r1) {
            r0.f = r1
            return r1
    }

    static java.io.IOException a(com.tkay.expressad.exoplayer.j.t r0, java.io.IOException r1) {
            r0.g = r1
            return r1
    }

    static java.util.concurrent.ExecutorService b(com.tkay.expressad.exoplayer.j.t r0) {
            java.util.concurrent.ExecutorService r0 = r0.e
            return r0
    }

    private void d() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    public final <T extends com.tkay.expressad.exoplayer.j.t.c> long a(T r12, com.tkay.expressad.exoplayer.j.t.a<T> r13, int r14) {
            r11 = this;
            android.os.Looper r2 = android.os.Looper.myLooper()
            if (r2 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r0 = 0
            r11.g = r0
            long r8 = android.os.SystemClock.elapsedRealtime()
            com.tkay.expressad.exoplayer.j.t$b r10 = new com.tkay.expressad.exoplayer.j.t$b
            r0 = r10
            r1 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r12 = 0
            r10.a(r12)
            return r8
    }

    @Override
    public final void a(int r3) {
            r2 = this;
            java.io.IOException r0 = r2.g
            if (r0 != 0) goto L12
            com.tkay.expressad.exoplayer.j.t$b<? extends com.tkay.expressad.exoplayer.j.t$c> r0 = r2.f
            if (r0 == 0) goto L11
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r3 != r1) goto Le
            int r3 = r0.a
        Le:
            r0.a(r3)
        L11:
            return
        L12:
            throw r0
    }

    public final void a(com.tkay.expressad.exoplayer.j.t.d r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.j.t$b<? extends com.tkay.expressad.exoplayer.j.t$c> r0 = r2.f
            if (r0 == 0) goto L8
            r1 = 1
            r0.a(r1)
        L8:
            if (r3 == 0) goto L14
            java.util.concurrent.ExecutorService r0 = r2.e
            com.tkay.expressad.exoplayer.j.t$e r1 = new com.tkay.expressad.exoplayer.j.t$e
            r1.<init>(r3)
            r0.execute(r1)
        L14:
            java.util.concurrent.ExecutorService r3 = r2.e
            r3.shutdown()
            return
    }

    public final boolean a() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.t$b<? extends com.tkay.expressad.exoplayer.j.t$c> r0 = r1.f
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final void b() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.t$b<? extends com.tkay.expressad.exoplayer.j.t$c> r0 = r2.f
            r1 = 0
            r0.a(r1)
            return
    }

    @Override
    public final void c() {
            r1 = this;
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.a(r0)
            return
    }
}
