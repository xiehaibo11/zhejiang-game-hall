package com.tkay.expressad.exoplayer.b;

final class i {
    private static final int a = 0;
    private static final int b = 1;
    private static final int c = 2;
    private static final int d = 3;
    private static final int e = 4;
    private static final int f = 5000;
    private static final int g = 10000000;
    private static final int h = 500000;
    private static final int i = 500000;
    private final com.tkay.expressad.exoplayer.b.i.a j;
    private int k;
    private long l;
    private long m;
    private long n;
    private long o;

    private static final class a {
        private final android.media.AudioTrack a;
        private final android.media.AudioTimestamp b;
        private long c;
        private long d;
        private long e;

        public a(android.media.AudioTrack r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                android.media.AudioTimestamp r1 = new android.media.AudioTimestamp
                r1.<init>()
                r0.b = r1
                return
        }

        public final boolean a() {
                r7 = this;
                android.media.AudioTrack r0 = r7.a
                android.media.AudioTimestamp r1 = r7.b
                boolean r0 = r0.getTimestamp(r1)
                if (r0 == 0) goto L25
                android.media.AudioTimestamp r1 = r7.b
                long r1 = r1.framePosition
                long r3 = r7.d
                int r3 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r3 <= 0) goto L1b
                long r3 = r7.c
                r5 = 1
                long r3 = r3 + r5
                r7.c = r3
            L1b:
                r7.d = r1
                long r3 = r7.c
                r5 = 32
                long r3 = r3 << r5
                long r1 = r1 + r3
                r7.e = r1
            L25:
                return r0
        }

        public final long b() {
                r4 = this;
                android.media.AudioTimestamp r0 = r4.b
                long r0 = r0.nanoTime
                r2 = 1000(0x3e8, double:4.94E-321)
                long r0 = r0 / r2
                return r0
        }

        public final long c() {
                r2 = this;
                long r0 = r2.e
                return r0
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface b {
    }

    public i(android.media.AudioTrack r3) {
            r2 = this;
            r2.<init>()
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 19
            if (r0 < r1) goto L14
            com.tkay.expressad.exoplayer.b.i$a r0 = new com.tkay.expressad.exoplayer.b.i$a
            r0.<init>(r3)
            r2.j = r0
            r2.e()
            return
        L14:
            r3 = 0
            r2.j = r3
            r3 = 3
            r2.a(r3)
            return
    }

    private void a(int r7) {
            r6 = this;
            r6.k = r7
            r0 = 5000(0x1388, double:2.4703E-320)
            if (r7 == 0) goto L27
            r2 = 1
            if (r7 == r2) goto L24
            r0 = 2
            if (r7 == r0) goto L1e
            r0 = 3
            if (r7 == r0) goto L1e
            r0 = 4
            if (r7 != r0) goto L18
            r0 = 500000(0x7a120, double:2.47033E-318)
            r6.m = r0
            return
        L18:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            r7.<init>()
            throw r7
        L1e:
            r0 = 10000000(0x989680, double:4.9406565E-317)
            r6.m = r0
            return
        L24:
            r6.m = r0
            return
        L27:
            r2 = 0
            r6.n = r2
            r2 = -1
            r6.o = r2
            long r2 = java.lang.System.nanoTime()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            r6.l = r2
            r6.m = r0
            return
    }

    public final void a() {
            r1 = this;
            r0 = 4
            r1.a(r0)
            return
    }

    public final boolean a(long r7) {
            r6 = this;
            com.tkay.expressad.exoplayer.b.i$a r0 = r6.j
            r1 = 0
            if (r0 == 0) goto L78
            long r2 = r6.n
            long r2 = r7 - r2
            long r4 = r6.m
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L11
            goto L78
        L11:
            r6.n = r7
            boolean r0 = r0.a()
            int r2 = r6.k
            r3 = 3
            r4 = 1
            if (r2 == 0) goto L50
            r7 = 2
            if (r2 == r4) goto L3a
            if (r2 == r7) goto L34
            if (r2 == r3) goto L2e
            r7 = 4
            if (r2 != r7) goto L28
            goto L77
        L28:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            r7.<init>()
            throw r7
        L2e:
            if (r0 == 0) goto L77
            r6.e()
            goto L77
        L34:
            if (r0 != 0) goto L77
            r6.e()
            goto L77
        L3a:
            if (r0 == 0) goto L4c
            com.tkay.expressad.exoplayer.b.i$a r8 = r6.j
            long r1 = r8.c()
            long r3 = r6.o
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 <= 0) goto L77
            r6.a(r7)
            goto L77
        L4c:
            r6.e()
            goto L77
        L50:
            if (r0 == 0) goto L6a
            com.tkay.expressad.exoplayer.b.i$a r7 = r6.j
            long r7 = r7.b()
            long r2 = r6.l
            int r7 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r7 < 0) goto L78
            com.tkay.expressad.exoplayer.b.i$a r7 = r6.j
            long r7 = r7.c()
            r6.o = r7
            r6.a(r4)
            goto L77
        L6a:
            long r1 = r6.l
            long r7 = r7 - r1
            r1 = 500000(0x7a120, double:2.47033E-318)
            int r7 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r7 <= 0) goto L77
            r6.a(r3)
        L77:
            r1 = r0
        L78:
            return r1
    }

    public final void b() {
            r2 = this;
            int r0 = r2.k
            r1 = 4
            if (r0 != r1) goto L8
            r2.e()
        L8:
            return
    }

    public final boolean c() {
            r3 = this;
            int r0 = r3.k
            r1 = 1
            if (r0 == r1) goto Lb
            r2 = 2
            if (r0 != r2) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            return r1
    }

    public final boolean d() {
            r2 = this;
            int r0 = r2.k
            r1 = 2
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public final void e() {
            r1 = this;
            com.tkay.expressad.exoplayer.b.i$a r0 = r1.j
            if (r0 == 0) goto L8
            r0 = 0
            r1.a(r0)
        L8:
            return
    }

    public final long f() {
            r2 = this;
            com.tkay.expressad.exoplayer.b.i$a r0 = r2.j
            if (r0 == 0) goto L9
            long r0 = r0.b()
            return r0
        L9:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
    }

    public final long g() {
            r2 = this;
            com.tkay.expressad.exoplayer.b.i$a r0 = r2.j
            if (r0 == 0) goto L9
            long r0 = r0.c()
            return r0
        L9:
            r0 = -1
            return r0
    }
}
