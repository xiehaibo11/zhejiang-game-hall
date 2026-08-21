package com.tkay.expressad.exoplayer;

public final class g extends java.lang.Exception {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public final int d;
    public final int e;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    private g(int r1, java.lang.String r2, java.lang.Throwable r3, int r4) {
            r0 = this;
            r0.<init>(r2, r3)
            r0.d = r1
            r0.e = r4
            return
    }

    public static com.tkay.expressad.exoplayer.g a(java.io.IOException r4) {
            com.tkay.expressad.exoplayer.g r0 = new com.tkay.expressad.exoplayer.g
            r1 = 0
            r2 = 0
            r3 = -1
            r0.<init>(r1, r2, r4, r3)
            return r0
    }

    public static com.tkay.expressad.exoplayer.g a(java.lang.Exception r3, int r4) {
            com.tkay.expressad.exoplayer.g r0 = new com.tkay.expressad.exoplayer.g
            r1 = 1
            r2 = 0
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    static com.tkay.expressad.exoplayer.g a(java.lang.RuntimeException r4) {
            com.tkay.expressad.exoplayer.g r0 = new com.tkay.expressad.exoplayer.g
            r1 = 2
            r2 = 0
            r3 = -1
            r0.<init>(r1, r2, r4, r3)
            return r0
    }

    private java.io.IOException a() {
            r1 = this;
            int r0 = r1.d
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            java.lang.Throwable r0 = r1.getCause()
            java.io.IOException r0 = (java.io.IOException) r0
            return r0
    }

    private java.lang.Exception b() {
            r2 = this;
            int r0 = r2.d
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r1)
            java.lang.Throwable r0 = r2.getCause()
            java.lang.Exception r0 = (java.lang.Exception) r0
            return r0
    }

    private java.lang.RuntimeException c() {
            r2 = this;
            int r0 = r2.d
            r1 = 2
            if (r0 != r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            java.lang.Throwable r0 = r2.getCause()
            java.lang.RuntimeException r0 = (java.lang.RuntimeException) r0
            return r0
    }
}
