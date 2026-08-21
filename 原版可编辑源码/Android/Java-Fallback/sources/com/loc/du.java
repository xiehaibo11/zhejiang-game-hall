package com.loc;

public final class du {
    private static volatile com.loc.du g;
    private static java.lang.Object h;
    private android.util.LongSparseArray<com.loc.du.a> a;
    private android.util.LongSparseArray<com.loc.du.a> b;
    private android.util.LongSparseArray<com.loc.du.a> c;
    private android.util.LongSparseArray<com.loc.du.a> d;
    private java.lang.Object e;
    private java.lang.Object f;

    private static class a {
        int a;
        long b;
        boolean c;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.loc.du.h = r0
            return
    }

    private du() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.e = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.f = r0
            android.util.LongSparseArray r0 = new android.util.LongSparseArray
            r0.<init>()
            r1.a = r0
            android.util.LongSparseArray r0 = new android.util.LongSparseArray
            r0.<init>()
            r1.b = r0
            android.util.LongSparseArray r0 = new android.util.LongSparseArray
            r0.<init>()
            r1.c = r0
            android.util.LongSparseArray r0 = new android.util.LongSparseArray
            r0.<init>()
            r1.d = r0
            return
    }

    public static com.loc.du a() {
            com.loc.du r0 = com.loc.du.g
            if (r0 != 0) goto L17
            java.lang.Object r0 = com.loc.du.h
            monitor-enter(r0)
            com.loc.du r1 = com.loc.du.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.loc.du r1 = new com.loc.du     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.loc.du.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.loc.du r0 = com.loc.du.g
            return r0
    }

    private static short a(android.util.LongSparseArray<com.loc.du.a> r8, long r9) {
            monitor-enter(r8)
            java.lang.Object r9 = r8.get(r9)     // Catch: java.lang.Throwable -> L2d
            com.loc.du$a r9 = (com.loc.du.a) r9     // Catch: java.lang.Throwable -> L2d
            if (r9 != 0) goto Lc
            r9 = 0
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L2d
            return r9
        Lc:
            r0 = 1
            r2 = 32767(0x7fff, double:1.6189E-319)
            long r4 = b()     // Catch: java.lang.Throwable -> L2d
            long r6 = r9.b     // Catch: java.lang.Throwable -> L2d
            long r4 = r4 - r6
            r6 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r6
            long r2 = java.lang.Math.min(r2, r4)     // Catch: java.lang.Throwable -> L2d
            long r0 = java.lang.Math.max(r0, r2)     // Catch: java.lang.Throwable -> L2d
            int r10 = (int) r0     // Catch: java.lang.Throwable -> L2d
            short r10 = (short) r10     // Catch: java.lang.Throwable -> L2d
            boolean r9 = r9.c     // Catch: java.lang.Throwable -> L2d
            if (r9 == 0) goto L29
            goto L2b
        L29:
            int r9 = -r10
            short r10 = (short) r9     // Catch: java.lang.Throwable -> L2d
        L2b:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L2d
            return r10
        L2d:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L2d
            throw r9
    }

    private static void a(java.util.List<com.loc.dt> r10, android.util.LongSparseArray<com.loc.du.a> r11, android.util.LongSparseArray<com.loc.du.a> r12) {
            long r0 = b()
            int r2 = r11.size()
            r3 = 0
            java.util.Iterator r10 = r10.iterator()
            if (r2 != 0) goto L33
        Lf:
            boolean r11 = r10.hasNext()
            if (r11 == 0) goto L32
            java.lang.Object r11 = r10.next()
            com.loc.dt r11 = (com.loc.dt) r11
            com.loc.du$a r2 = new com.loc.du$a
            r2.<init>(r3)
            int r4 = r11.b()
            r2.a = r4
            r2.b = r0
            r2.c = r3
            long r4 = r11.a()
            r12.put(r4, r2)
            goto Lf
        L32:
            return
        L33:
            boolean r2 = r10.hasNext()
            if (r2 == 0) goto L69
            java.lang.Object r2 = r10.next()
            com.loc.dt r2 = (com.loc.dt) r2
            long r4 = r2.a()
            java.lang.Object r6 = r11.get(r4)
            com.loc.du$a r6 = (com.loc.du.a) r6
            r7 = 1
            if (r6 != 0) goto L5c
            com.loc.du$a r6 = new com.loc.du$a
            r6.<init>(r3)
        L51:
            int r2 = r2.b()
            r6.a = r2
            r6.b = r0
            r6.c = r7
            goto L65
        L5c:
            int r8 = r6.a
            int r9 = r2.b()
            if (r8 == r9) goto L65
            goto L51
        L65:
            r12.put(r4, r6)
            goto L33
        L69:
            return
    }

    private static long b() {
            long r0 = android.os.SystemClock.elapsedRealtime()
            return r0
    }

    final short a(long r2) {
            r1 = this;
            android.util.LongSparseArray<com.loc.du$a> r0 = r1.a
            short r2 = a(r0, r2)
            return r2
    }

    final void a(java.util.List<com.loc.dt> r4) {
            r3 = this;
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.Object r0 = r3.e
            monitor-enter(r0)
            android.util.LongSparseArray<com.loc.du$a> r1 = r3.a     // Catch: java.lang.Throwable -> L1e
            android.util.LongSparseArray<com.loc.du$a> r2 = r3.b     // Catch: java.lang.Throwable -> L1e
            a(r4, r1, r2)     // Catch: java.lang.Throwable -> L1e
            android.util.LongSparseArray<com.loc.du$a> r4 = r3.a     // Catch: java.lang.Throwable -> L1e
            android.util.LongSparseArray<com.loc.du$a> r1 = r3.b     // Catch: java.lang.Throwable -> L1e
            r3.a = r1     // Catch: java.lang.Throwable -> L1e
            r3.b = r4     // Catch: java.lang.Throwable -> L1e
            r4.clear()     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r4
    }

    final short b(long r2) {
            r1 = this;
            android.util.LongSparseArray<com.loc.du$a> r0 = r1.c
            short r2 = a(r0, r2)
            return r2
    }

    final void b(java.util.List<com.loc.dt> r4) {
            r3 = this;
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.Object r0 = r3.f
            monitor-enter(r0)
            android.util.LongSparseArray<com.loc.du$a> r1 = r3.c     // Catch: java.lang.Throwable -> L1e
            android.util.LongSparseArray<com.loc.du$a> r2 = r3.d     // Catch: java.lang.Throwable -> L1e
            a(r4, r1, r2)     // Catch: java.lang.Throwable -> L1e
            android.util.LongSparseArray<com.loc.du$a> r4 = r3.c     // Catch: java.lang.Throwable -> L1e
            android.util.LongSparseArray<com.loc.du$a> r1 = r3.d     // Catch: java.lang.Throwable -> L1e
            r3.c = r1     // Catch: java.lang.Throwable -> L1e
            r3.d = r4     // Catch: java.lang.Throwable -> L1e
            r4.clear()     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r4
    }
}
