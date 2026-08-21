package org.cocos2dx.okio;

final class SegmentPool {
    static final long MAX_SIZE = 65536;
    static long byteCount;

    @javax.annotation.Nullable
    static org.cocos2dx.okio.Segment next;

    private SegmentPool() {
            r0 = this;
            r0.<init>()
            return
    }

    static void recycle(org.cocos2dx.okio.Segment r8) {
            org.cocos2dx.okio.Segment r0 = r8.next
            if (r0 != 0) goto L33
            org.cocos2dx.okio.Segment r0 = r8.prev
            if (r0 != 0) goto L33
            boolean r0 = r8.shared
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.Class<org.cocos2dx.okio.SegmentPool> r0 = org.cocos2dx.okio.SegmentPool.class
            monitor-enter(r0)
            long r1 = org.cocos2dx.okio.SegmentPool.byteCount     // Catch: java.lang.Throwable -> L30
            r3 = 8192(0x2000, double:4.0474E-320)
            long r1 = r1 + r3
            r5 = 65536(0x10000, double:3.2379E-319)
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 <= 0) goto L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L1e:
            long r1 = org.cocos2dx.okio.SegmentPool.byteCount     // Catch: java.lang.Throwable -> L30
            long r1 = r1 + r3
            org.cocos2dx.okio.SegmentPool.byteCount = r1     // Catch: java.lang.Throwable -> L30
            org.cocos2dx.okio.Segment r1 = org.cocos2dx.okio.SegmentPool.next     // Catch: java.lang.Throwable -> L30
            r8.next = r1     // Catch: java.lang.Throwable -> L30
            r1 = 0
            r8.limit = r1     // Catch: java.lang.Throwable -> L30
            r8.pos = r1     // Catch: java.lang.Throwable -> L30
            org.cocos2dx.okio.SegmentPool.next = r8     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r8
        L33:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            r8.<init>()
            throw r8
    }

    static org.cocos2dx.okio.Segment take() {
            java.lang.Class<org.cocos2dx.okio.SegmentPool> r0 = org.cocos2dx.okio.SegmentPool.class
            monitor-enter(r0)
            org.cocos2dx.okio.Segment r1 = org.cocos2dx.okio.SegmentPool.next     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L19
            org.cocos2dx.okio.Segment r1 = org.cocos2dx.okio.SegmentPool.next     // Catch: java.lang.Throwable -> L20
            org.cocos2dx.okio.Segment r2 = r1.next     // Catch: java.lang.Throwable -> L20
            org.cocos2dx.okio.SegmentPool.next = r2     // Catch: java.lang.Throwable -> L20
            r2 = 0
            r1.next = r2     // Catch: java.lang.Throwable -> L20
            long r2 = org.cocos2dx.okio.SegmentPool.byteCount     // Catch: java.lang.Throwable -> L20
            r4 = 8192(0x2000, double:4.0474E-320)
            long r2 = r2 - r4
            org.cocos2dx.okio.SegmentPool.byteCount = r2     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return r1
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            org.cocos2dx.okio.Segment r0 = new org.cocos2dx.okio.Segment
            r0.<init>()
            return r0
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }
}
