package com.tkay.expressad.exoplayer;

public final class aa {
    public static final com.tkay.expressad.exoplayer.aa a = null;
    public final int b;

    static {
            com.tkay.expressad.exoplayer.aa r0 = new com.tkay.expressad.exoplayer.aa
            r1 = 0
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.aa.a = r0
            return
    }

    public aa(int r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L1b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L1b
        L12:
            com.tkay.expressad.exoplayer.aa r5 = (com.tkay.expressad.exoplayer.aa) r5
            int r2 = r4.b
            int r5 = r5.b
            if (r2 != r5) goto L1b
            return r0
        L1b:
            return r1
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}
