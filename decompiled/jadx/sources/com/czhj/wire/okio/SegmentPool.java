package com.czhj.wire.okio;

/* JADX INFO: loaded from: classes.dex */
final class SegmentPool {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final long f1904a = 65536;
    static Segment b;
    static long c;

    private SegmentPool() {
    }

    static Segment a() {
        synchronized (SegmentPool.class) {
            if (b == null) {
                return new Segment();
            }
            Segment segment = b;
            b = segment.h;
            segment.h = null;
            c -= 8192;
            return segment;
        }
    }

    static void a(Segment segment) {
        if (segment.h != null || segment.i != null) {
            throw new IllegalArgumentException();
        }
        if (segment.f) {
            return;
        }
        synchronized (SegmentPool.class) {
            if (c + 8192 > f1904a) {
                return;
            }
            c += 8192;
            segment.h = b;
            segment.e = 0;
            segment.d = 0;
            b = segment;
        }
    }
}
