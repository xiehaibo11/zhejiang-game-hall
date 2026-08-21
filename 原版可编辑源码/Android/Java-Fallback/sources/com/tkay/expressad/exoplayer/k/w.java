package com.tkay.expressad.exoplayer.k;

public final class w {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    private w() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(int r5, int r6) {
            r0 = 1
            r1 = r0
        L2:
            r2 = 2
            if (r1 > r2) goto L21
            int r3 = r5 + r1
            int r3 = r3 % 3
            r4 = 0
            if (r3 == 0) goto L1a
            if (r3 == r0) goto L16
            if (r3 == r2) goto L11
            goto L1b
        L11:
            r2 = r6 & 2
            if (r2 == 0) goto L1b
            goto L1a
        L16:
            r2 = r6 & 1
            if (r2 == 0) goto L1b
        L1a:
            r4 = r0
        L1b:
            if (r4 == 0) goto L1e
            return r3
        L1e:
            int r1 = r1 + 1
            goto L2
        L21:
            return r5
    }

    private static boolean b(int r3, int r4) {
            r0 = 1
            if (r3 == 0) goto L16
            r1 = 0
            if (r3 == r0) goto L10
            r2 = 2
            if (r3 == r2) goto La
            return r1
        La:
            r3 = r4 & 2
            if (r3 == 0) goto Lf
            return r0
        Lf:
            return r1
        L10:
            r3 = r4 & 1
            if (r3 == 0) goto L15
            return r0
        L15:
            return r1
        L16:
            return r0
    }
}
