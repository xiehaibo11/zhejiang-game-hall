package com.tkay.expressad.exoplayer.i;

import com.tkay.expressad.exoplayer.h.ae;
import com.tkay.expressad.exoplayer.i.f;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.m;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6688a = 10000;
    public static final int b = 25000;
    public static final int c = 25000;
    public static final float d = 0.75f;
    public static final float e = 0.75f;
    public static final long f = 2000;
    private final com.tkay.expressad.exoplayer.j.d j;
    private final long k;
    private final long l;
    private final long m;
    private final float n;
    private final float o;
    private final long p;
    private final com.tkay.expressad.exoplayer.k.c q;
    private float r;
    private int s;
    private int t;
    private long u;

    @Override // com.tkay.expressad.exoplayer.i.f
    public final Object d() {
        return null;
    }

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.i.a$a, reason: collision with other inner class name */
    public static final class C0452a implements f.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final com.tkay.expressad.exoplayer.j.d f6689a;
        private final int b;
        private final int c;
        private final int d;
        private final float e;
        private final float f;
        private final long g;
        private final com.tkay.expressad.exoplayer.k.c h;

        public C0452a(com.tkay.expressad.exoplayer.j.d dVar) {
            this(dVar, 10000, 25000, 25000, 0.75f, com.tkay.expressad.exoplayer.k.c.f6758a);
        }

        private C0452a(com.tkay.expressad.exoplayer.j.d dVar, int i, int i2, int i3, float f) {
            this(dVar, i, i2, i3, f, com.tkay.expressad.exoplayer.k.c.f6758a);
        }

        private C0452a(com.tkay.expressad.exoplayer.j.d dVar, int i, int i2, int i3, float f, com.tkay.expressad.exoplayer.k.c cVar) {
            this.f6689a = dVar;
            this.b = i;
            this.c = i2;
            this.d = i3;
            this.e = f;
            this.f = 0.75f;
            this.g = 2000L;
            this.h = cVar;
        }

        private a b(ae aeVar, int... iArr) {
            return new a(aeVar, iArr, this.f6689a, this.b, this.c, this.d, this.e, this.f, this.g, this.h);
        }

        @Override // com.tkay.expressad.exoplayer.i.f.a
        public final /* synthetic */ f a(ae aeVar, int[] iArr) {
            return new a(aeVar, iArr, this.f6689a, this.b, this.c, this.d, this.e, this.f, this.g, this.h);
        }
    }

    private a(ae aeVar, int[] iArr, com.tkay.expressad.exoplayer.j.d dVar) {
        this(aeVar, iArr, dVar, com.heytap.mcssdk.constant.a.q, 25000L, 25000L, 0.75f, 0.75f, 2000L, com.tkay.expressad.exoplayer.k.c.f6758a);
    }

    public a(ae aeVar, int[] iArr, com.tkay.expressad.exoplayer.j.d dVar, long j, long j2, long j3, float f2, float f3, long j4, com.tkay.expressad.exoplayer.k.c cVar) {
        super(aeVar, iArr);
        this.j = dVar;
        this.k = j * 1000;
        this.l = j2 * 1000;
        this.m = j3 * 1000;
        this.n = f2;
        this.o = f3;
        this.p = j4;
        this.q = cVar;
        this.r = 1.0f;
        this.t = 1;
        this.u = -9223372036854775807L;
        this.s = a(Long.MIN_VALUE);
    }

    @Override // com.tkay.expressad.exoplayer.i.b, com.tkay.expressad.exoplayer.i.f
    public final void a() {
        this.u = -9223372036854775807L;
    }

    @Override // com.tkay.expressad.exoplayer.i.b, com.tkay.expressad.exoplayer.i.f
    public final void a(float f2) {
        this.r = f2;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x004a  */
    @Override // com.tkay.expressad.exoplayer.i.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(long r6, long r8) {
        /*
            r5 = this;
            com.tkay.expressad.exoplayer.k.c r0 = r5.q
            long r0 = r0.a()
            int r2 = r5.s
            int r3 = r5.a(r0)
            r5.s = r3
            if (r3 != r2) goto L11
            return
        L11:
            boolean r0 = r5.b(r2, r0)
            if (r0 != 0) goto L58
            com.tkay.expressad.exoplayer.m r0 = r5.a(r2)
            int r1 = r5.s
            com.tkay.expressad.exoplayer.m r1 = r5.a(r1)
            int r3 = r1.d
            int r4 = r0.d
            if (r3 <= r4) goto L4a
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 == 0) goto L38
            long r3 = r5.k
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 > 0) goto L38
            r3 = 1
            goto L39
        L38:
            r3 = 0
        L39:
            if (r3 == 0) goto L41
            float r8 = (float) r8
            float r9 = r5.o
            float r8 = r8 * r9
            long r8 = (long) r8
            goto L43
        L41:
            long r8 = r5.k
        L43:
            int r8 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r8 >= 0) goto L4a
            r5.s = r2
            goto L58
        L4a:
            int r8 = r1.d
            int r9 = r0.d
            if (r8 >= r9) goto L58
            long r8 = r5.l
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 < 0) goto L58
            r5.s = r2
        L58:
            int r6 = r5.s
            if (r6 == r2) goto L5f
            r6 = 3
            r5.t = r6
        L5f:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.a.a(long, long):void");
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int b() {
        return this.s;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int c() {
        return this.t;
    }

    @Override // com.tkay.expressad.exoplayer.i.b, com.tkay.expressad.exoplayer.i.f
    public final int a(long j, List<? extends com.tkay.expressad.exoplayer.h.b.i> list) {
        long jA = this.q.a();
        long j2 = this.u;
        if (j2 != -9223372036854775807L && jA - j2 < this.p) {
            return list.size();
        }
        this.u = jA;
        if (list.isEmpty()) {
            return 0;
        }
        int size = list.size();
        if (af.b(list.get(size - 1).g - j, this.r) < this.m) {
            return size;
        }
        m mVarA = a(a(jA));
        for (int i = 0; i < size; i++) {
            com.tkay.expressad.exoplayer.h.b.i iVar = list.get(i);
            m mVar = iVar.d;
            if (af.b(iVar.g - j, this.r) >= this.m && mVar.d < mVarA.d && mVar.n != -1 && mVar.n < 720 && mVar.m != -1 && mVar.m < 1280 && mVar.n < mVarA.n) {
                return i;
            }
        }
        return size;
    }

    private int a(long j) {
        long jA = (long) (this.j.a() * this.n);
        int i = 0;
        for (int i2 = 0; i2 < this.h; i2++) {
            if (j == Long.MIN_VALUE || !b(i2, j)) {
                if (Math.round(a(i2).d * this.r) <= jA) {
                    return i2;
                }
                i = i2;
            }
        }
        return i;
    }

    private long b(long j) {
        if (j != -9223372036854775807L && j <= this.k) {
            return (long) (j * this.o);
        }
        return this.k;
    }
}
