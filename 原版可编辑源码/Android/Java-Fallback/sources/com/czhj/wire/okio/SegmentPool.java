package com.czhj.wire.okio;

final class SegmentPool {
    static final long a = 65536;
    static com.czhj.wire.okio.Segment b;
    static long c;

    private SegmentPool() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.czhj.wire.okio.Segment a() {
            java.lang.Class<com.czhj.wire.okio.SegmentPool> r0 = com.czhj.wire.okio.SegmentPool.class
            monitor-enter(r0)
            com.czhj.wire.okio.Segment r1 = com.czhj.wire.okio.SegmentPool.b     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L19
            com.czhj.wire.okio.Segment r1 = com.czhj.wire.okio.SegmentPool.b     // Catch: java.lang.Throwable -> L20
            com.czhj.wire.okio.Segment r2 = r1.h     // Catch: java.lang.Throwable -> L20
            com.czhj.wire.okio.SegmentPool.b = r2     // Catch: java.lang.Throwable -> L20
            r2 = 0
            r1.h = r2     // Catch: java.lang.Throwable -> L20
            long r2 = com.czhj.wire.okio.SegmentPool.c     // Catch: java.lang.Throwable -> L20
            r4 = 8192(0x2000, double:4.0474E-320)
            long r2 = r2 - r4
            com.czhj.wire.okio.SegmentPool.c = r2     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return r1
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            com.czhj.wire.okio.Segment r0 = new com.czhj.wire.okio.Segment
            r0.<init>()
            return r0
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }

    static void a(com.czhj.wire.okio.Segment r7) {
            com.czhj.wire.okio.Segment r0 = r7.h
            if (r0 != 0) goto L33
            com.czhj.wire.okio.Segment r0 = r7.i
            if (r0 != 0) goto L33
            boolean r0 = r7.f
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.Class<com.czhj.wire.okio.SegmentPool> r0 = com.czhj.wire.okio.SegmentPool.class
            monitor-enter(r0)
            long r1 = com.czhj.wire.okio.SegmentPool.c     // Catch: java.lang.Throwable -> L30
            r3 = 8192(0x2000, double:4.0474E-320)
            long r1 = r1 + r3
            r5 = 65536(0x10000, double:3.2379E-319)
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 <= 0) goto L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L1e:
            long r1 = com.czhj.wire.okio.SegmentPool.c     // Catch: java.lang.Throwable -> L30
            long r1 = r1 + r3
            com.czhj.wire.okio.SegmentPool.c = r1     // Catch: java.lang.Throwable -> L30
            com.czhj.wire.okio.Segment r1 = com.czhj.wire.okio.SegmentPool.b     // Catch: java.lang.Throwable -> L30
            r7.h = r1     // Catch: java.lang.Throwable -> L30
            r1 = 0
            r7.e = r1     // Catch: java.lang.Throwable -> L30
            r7.d = r1     // Catch: java.lang.Throwable -> L30
            com.czhj.wire.okio.SegmentPool.b = r7     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r7
        L33:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            r7.<init>()
            throw r7
    }
}
