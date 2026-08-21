package com.tkay.expressad.exoplayer.e;

public final class l {
    public static final com.tkay.expressad.exoplayer.e.l a = null;
    public final long b;
    public final long c;

    static {
            com.tkay.expressad.exoplayer.e.l r0 = new com.tkay.expressad.exoplayer.e.l
            r1 = 0
            r0.<init>(r1, r1)
            com.tkay.expressad.exoplayer.e.l.a = r0
            return
    }

    public l(long r1, long r3) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r3
            return
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto L25
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L25
        L12:
            com.tkay.expressad.exoplayer.e.l r7 = (com.tkay.expressad.exoplayer.e.l) r7
            long r2 = r6.b
            long r4 = r7.b
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L25
            long r2 = r6.c
            long r4 = r7.c
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L25
            return r0
        L25:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            long r0 = r3.b
            int r0 = (int) r0
            int r0 = r0 * 31
            long r1 = r3.c
            int r1 = (int) r1
            int r0 = r0 + r1
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "[timeUs="
            r0.<init>(r1)
            long r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = ", position="
            r0.append(r1)
            long r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
