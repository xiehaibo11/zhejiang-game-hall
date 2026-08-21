package com.tkay.expressad.exoplayer.h;

import com.tkay.expressad.exoplayer.ae;

/* JADX INFO: loaded from: classes3.dex */
public final class ab extends com.tkay.expressad.exoplayer.ae {
    private static final Object b = new Object();
    private final long c;
    private final long d;
    private final long e;
    private final long f;
    private final long g;
    private final long h;
    private final boolean i;
    private final boolean j;
    private final Object k;

    @Override // com.tkay.expressad.exoplayer.ae
    public final int b() {
        return 1;
    }

    @Override // com.tkay.expressad.exoplayer.ae
    public final int c() {
        return 1;
    }

    private ab(long j, boolean z, boolean z2) {
        this(j, z, z2, null);
    }

    public ab(long j, boolean z, boolean z2, Object obj) {
        this(j, j, z, z2, obj, (byte) 0);
    }

    private ab(long j, long j2, boolean z, boolean z2, Object obj, byte b2) {
        this(j, j2, z, z2, obj);
    }

    private ab(long j, long j2, boolean z, boolean z2, Object obj) {
        this.c = -9223372036854775807L;
        this.d = -9223372036854775807L;
        this.e = j;
        this.f = j2;
        this.g = 0L;
        this.h = 0L;
        this.i = z;
        this.j = z2;
        this.k = obj;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x002f A[PHI: r1
      0x002f: PHI (r1v4 long) = (r1v3 long), (r1v3 long), (r1v6 long) binds: [B:7:0x0018, B:9:0x001e, B:14:0x002c] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.tkay.expressad.exoplayer.ae
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.tkay.expressad.exoplayer.ae.b a(int r17, com.tkay.expressad.exoplayer.ae.b r18, boolean r19, long r20) {
        /*
            r16 = this;
            r0 = r16
            r1 = 1
            r2 = r17
            com.tkay.expressad.exoplayer.k.a.a(r2, r1)
            if (r19 == 0) goto Ld
            java.lang.Object r1 = r0.k
            goto Le
        Ld:
            r1 = 0
        Le:
            r3 = r1
            long r1 = r0.h
            boolean r4 = r0.j
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 == 0) goto L2f
            r7 = 0
            int r4 = (r20 > r7 ? 1 : (r20 == r7 ? 0 : -1))
            if (r4 == 0) goto L2f
            long r7 = r0.f
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 != 0) goto L28
        L26:
            r10 = r5
            goto L30
        L28:
            long r1 = r1 + r20
            int r4 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r4 <= 0) goto L2f
            goto L26
        L2f:
            r10 = r1
        L30:
            long r4 = r0.c
            long r6 = r0.d
            boolean r8 = r0.i
            boolean r9 = r0.j
            long r12 = r0.f
            long r14 = r0.g
            r2 = r18
            com.tkay.expressad.exoplayer.ae$b r1 = r2.a(r3, r4, r6, r8, r9, r10, r12, r14)
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.h.ab.a(int, com.tkay.expressad.exoplayer.ae$b, boolean, long):com.tkay.expressad.exoplayer.ae$b");
    }

    @Override // com.tkay.expressad.exoplayer.ae
    public final ae.a a(int i, ae.a aVar, boolean z) {
        com.tkay.expressad.exoplayer.k.a.a(i, 1);
        return aVar.a(null, z ? b : null, this.e, -this.g);
    }

    @Override // com.tkay.expressad.exoplayer.ae
    public final int a(Object obj) {
        return b.equals(obj) ? 0 : -1;
    }
}
