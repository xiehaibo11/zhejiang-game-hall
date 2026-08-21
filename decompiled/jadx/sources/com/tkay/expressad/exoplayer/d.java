package com.tkay.expressad.exoplayer;

import com.tkay.expressad.exoplayer.k.af;

/* JADX INFO: loaded from: classes3.dex */
public final class d implements p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6519a = 15000;
    public static final int b = 50000;
    public static final int c = 2500;
    public static final int d = 5000;
    public static final int e = -1;
    public static final boolean f = true;
    private final com.tkay.expressad.exoplayer.j.l g;
    private final long h;
    private final long i;
    private final long j;
    private final long k;
    private final int l;
    private final boolean m;
    private final com.tkay.expressad.exoplayer.k.v n;
    private int o;
    private boolean p;

    @Override // com.tkay.expressad.exoplayer.p
    public final long e() {
        return 0L;
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final boolean f() {
        return false;
    }

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private com.tkay.expressad.exoplayer.j.l f6520a = null;
        private int b = 15000;
        private int c = 50000;
        private int d = 2500;
        private int e = 5000;
        private int f = -1;
        private boolean g = true;
        private com.tkay.expressad.exoplayer.k.v h = null;

        private a a(com.tkay.expressad.exoplayer.j.l lVar) {
            this.f6520a = lVar;
            return this;
        }

        private a a(int i, int i2, int i3, int i4) {
            this.b = i;
            this.c = i2;
            this.d = i3;
            this.e = i4;
            return this;
        }

        private a a(int i) {
            this.f = i;
            return this;
        }

        private a a(boolean z) {
            this.g = z;
            return this;
        }

        private a a(com.tkay.expressad.exoplayer.k.v vVar) {
            this.h = vVar;
            return this;
        }

        private d a() {
            if (this.f6520a == null) {
                this.f6520a = new com.tkay.expressad.exoplayer.j.l((byte) 0);
            }
            return new d(this.f6520a, this.b, this.c, this.d, this.e, this.f, this.g, this.h);
        }
    }

    public d() {
        this(new com.tkay.expressad.exoplayer.j.l((byte) 0));
    }

    @Deprecated
    private d(com.tkay.expressad.exoplayer.j.l lVar) {
        this(lVar, (byte) 0);
    }

    @Deprecated
    private d(com.tkay.expressad.exoplayer.j.l lVar, byte b2) {
        this(lVar, 15000, 50000, 2500, 5000, -1, true, null);
    }

    @Deprecated
    public d(com.tkay.expressad.exoplayer.j.l lVar, int i, int i2, int i3, int i4, int i5, boolean z, com.tkay.expressad.exoplayer.k.v vVar) {
        a(i3, 0, "bufferForPlaybackMs", "0");
        a(i4, 0, "bufferForPlaybackAfterRebufferMs", "0");
        a(i, i3, "minBufferMs", "bufferForPlaybackMs");
        a(i, i4, "minBufferMs", "bufferForPlaybackAfterRebufferMs");
        a(i2, i, "maxBufferMs", "minBufferMs");
        this.g = lVar;
        this.h = ((long) i) * 1000;
        this.i = ((long) i2) * 1000;
        this.j = ((long) i3) * 1000;
        this.k = ((long) i4) * 1000;
        this.l = i5;
        this.m = z;
        this.n = vVar;
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final void a() {
        a(false);
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final void a(y[] yVarArr, com.tkay.expressad.exoplayer.i.g gVar) {
        int i = this.l;
        if (i == -1) {
            int iG = 0;
            for (int i2 = 0; i2 < yVarArr.length; i2++) {
                if (gVar.a(i2) != null) {
                    iG += af.g(yVarArr[i2].a());
                }
            }
            i = iG;
        }
        this.o = i;
        this.g.a(i);
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final void b() {
        a(true);
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final void c() {
        a(true);
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final com.tkay.expressad.exoplayer.j.b d() {
        return this.g;
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final boolean a(long j, float f2) {
        boolean z;
        boolean z2 = true;
        boolean z3 = this.g.c() >= this.o;
        boolean z4 = this.p;
        long jMin = this.h;
        if (f2 > 1.0f) {
            jMin = Math.min(af.a(jMin, f2), this.i);
        }
        if (j < jMin) {
            if (!this.m && z3) {
                z2 = false;
            }
            this.p = z2;
        } else if (j > this.i || z3) {
            this.p = false;
        }
        com.tkay.expressad.exoplayer.k.v vVar = this.n;
        if (vVar != null && (z = this.p) != z4) {
            if (z) {
                vVar.a();
            } else {
                vVar.c();
            }
        }
        return this.p;
    }

    @Override // com.tkay.expressad.exoplayer.p
    public final boolean a(long j, float f2, boolean z) {
        long jB = af.b(j, f2);
        long j2 = z ? this.k : this.j;
        if (j2 <= 0 || jB >= j2) {
            return true;
        }
        return !this.m && this.g.c() >= this.o;
    }

    private static int b(y[] yVarArr, com.tkay.expressad.exoplayer.i.g gVar) {
        int iG = 0;
        for (int i = 0; i < yVarArr.length; i++) {
            if (gVar.a(i) != null) {
                iG += af.g(yVarArr[i].a());
            }
        }
        return iG;
    }

    private void a(boolean z) {
        this.o = 0;
        com.tkay.expressad.exoplayer.k.v vVar = this.n;
        if (vVar != null && this.p) {
            vVar.c();
        }
        this.p = false;
        if (z) {
            this.g.e();
        }
    }

    private static void a(int i, int i2, String str, String str2) {
        com.tkay.expressad.exoplayer.k.a.a(i >= i2, str + " cannot be less than " + str2);
    }
}
