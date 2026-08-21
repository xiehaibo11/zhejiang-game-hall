package com.tkay.expressad.exoplayer.h.b;

public final class b implements com.tkay.expressad.exoplayer.h.b.d.b {
    private static final java.lang.String a = "BaseMediaChunkOutput";
    private final int[] b;
    private final com.tkay.expressad.exoplayer.h.x[] c;

    public b(int[] r1, com.tkay.expressad.exoplayer.h.x[] r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.e.m a(int r4) {
            r3 = this;
            r0 = 0
        L1:
            int[] r1 = r3.b
            int r2 = r1.length
            if (r0 >= r2) goto L12
            r1 = r1[r0]
            if (r4 != r1) goto Lf
            com.tkay.expressad.exoplayer.h.x[] r4 = r3.c
            r4 = r4[r0]
            return r4
        Lf:
            int r0 = r0 + 1
            goto L1
        L12:
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r0 = "Unmatched track of type: "
            java.lang.String r4 = r0.concat(r4)
            java.lang.String r0 = "BaseMediaChunkOutput"
            android.util.Log.e(r0, r4)
            com.tkay.expressad.exoplayer.e.d r4 = new com.tkay.expressad.exoplayer.e.d
            r4.<init>()
            return r4
    }

    public final void a(long r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.c
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L10
            r3 = r0[r2]
            if (r3 == 0) goto Ld
            r3.a(r5)
        Ld:
            int r2 = r2 + 1
            goto L4
        L10:
            return
    }

    public final int[] a() {
            r4 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.c
            int r0 = r0.length
            int[] r0 = new int[r0]
            r1 = 0
        L6:
            com.tkay.expressad.exoplayer.h.x[] r2 = r4.c
            int r3 = r2.length
            if (r1 >= r3) goto L1a
            r3 = r2[r1]
            if (r3 == 0) goto L17
            r2 = r2[r1]
            int r2 = r2.b()
            r0[r1] = r2
        L17:
            int r1 = r1 + 1
            goto L6
        L1a:
            return r0
    }
}
