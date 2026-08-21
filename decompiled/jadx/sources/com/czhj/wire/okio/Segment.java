package com.czhj.wire.okio;

/* JADX INFO: loaded from: classes.dex */
final class Segment {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final int f1903a = 8192;
    static final int b = 1024;
    final byte[] c;
    int d;
    int e;
    boolean f;
    boolean g;
    Segment h;
    Segment i;

    Segment() {
        this.c = new byte[8192];
        this.g = true;
        this.f = false;
    }

    Segment(Segment segment) {
        this(segment.c, segment.d, segment.e);
        segment.f = true;
    }

    Segment(byte[] bArr, int i, int i2) {
        this.c = bArr;
        this.d = i;
        this.e = i2;
        this.g = false;
        this.f = true;
    }

    public void compact() {
        Segment segment = this.i;
        if (segment == this) {
            throw new IllegalStateException();
        }
        if (segment.g) {
            int i = this.e - this.d;
            if (i > (8192 - segment.e) + (segment.f ? 0 : segment.d)) {
                return;
            }
            writeTo(this.i, i);
            pop();
            SegmentPool.a(this);
        }
    }

    public Segment pop() {
        Segment segment = this.h;
        if (segment == this) {
            segment = null;
        }
        Segment segment2 = this.i;
        segment2.h = this.h;
        this.h.i = segment2;
        this.h = null;
        this.i = null;
        return segment;
    }

    public Segment push(Segment segment) {
        segment.i = this;
        segment.h = this.h;
        this.h.i = segment;
        this.h = segment;
        return segment;
    }

    public Segment split(int i) {
        Segment segmentA;
        if (i <= 0 || i > this.e - this.d) {
            throw new IllegalArgumentException();
        }
        if (i >= 1024) {
            segmentA = new Segment(this);
        } else {
            segmentA = SegmentPool.a();
            System.arraycopy(this.c, this.d, segmentA.c, 0, i);
        }
        segmentA.e = segmentA.d + i;
        this.d += i;
        this.i.push(segmentA);
        return segmentA;
    }

    public void writeTo(Segment segment, int i) {
        if (!segment.g) {
            throw new IllegalArgumentException();
        }
        int i2 = segment.e;
        if (i2 + i > 8192) {
            if (segment.f) {
                throw new IllegalArgumentException();
            }
            int i3 = segment.d;
            if ((i2 + i) - i3 > 8192) {
                throw new IllegalArgumentException();
            }
            byte[] bArr = segment.c;
            System.arraycopy(bArr, i3, bArr, 0, i2 - i3);
            segment.e -= segment.d;
            segment.d = 0;
        }
        System.arraycopy(this.c, this.d, segment.c, segment.e, i);
        segment.e += i;
        this.d += i;
    }
}
