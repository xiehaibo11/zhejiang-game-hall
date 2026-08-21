package org.cocos2dx.okio;

import javax.annotation.Nullable;

final class SegmentPool {
    static final long MAX_SIZE = 65536;
    static long byteCount;

    @Nullable
    static Segment next;

    private SegmentPool() {
    }

    static Segment take() {
        monitor-enter(SegmentPool.class);
    L12:
        th = move-exception;
        throw th;
    L5:
        if (next == null) goto L9;
        Segment r1 = next;     // Catch: Throwable -> L12
        next = r1.next;     // Catch: Throwable -> L12
        r1.next = null;     // Catch: Throwable -> L12
        byteCount -= 8192;
        monitor-exit(SegmentPool.class);     // Catch: Throwable -> L12
        return r1;
    L9:
        monitor-exit(SegmentPool.class);     // Catch: Throwable -> L12
        return new Segment();
    }

    static void recycle(Segment r8) {
        if (r8.next != null) goto L22;
        if (r8.prev != null) goto L22;
        if (r8.shared == false) goto L10;
        return;
    L10:
        monitor-enter(SegmentPool.class);
    L18:
        th = move-exception;
        throw th;
    L12:
        if ((byteCount + 8192) <= MAX_SIZE) goto L15;
        monitor-exit(SegmentPool.class);     // Catch: Throwable -> L18
        return;
    L15:
        byteCount += 8192;
        r8.next = next;     // Catch: Throwable -> L18
        r8.limit = 0;     // Catch: Throwable -> L18
        r8.pos = 0;     // Catch: Throwable -> L18
        next = r8;     // Catch: Throwable -> L18
        monitor-exit(SegmentPool.class);     // Catch: Throwable -> L18
        return;
    L22:
        throw new IllegalArgumentException();
    }
}
