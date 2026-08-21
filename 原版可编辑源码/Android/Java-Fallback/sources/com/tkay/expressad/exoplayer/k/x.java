package com.tkay.expressad.exoplayer.k;

public final class x extends java.io.BufferedOutputStream {
    private boolean a;

    public x(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public x(java.io.OutputStream r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public final void a(java.io.OutputStream r2) {
            r1 = this;
            boolean r0 = r1.a
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.out = r2
            r2 = 0
            r1.count = r2
            r1.a = r2
            return
    }

    @Override
    public final void close() {
            r2 = this;
            r0 = 1
            r2.a = r0
            r2.flush()     // Catch: java.lang.Throwable -> L8
            r0 = 0
            goto L9
        L8:
            r0 = move-exception
        L9:
            java.io.OutputStream r1 = r2.out     // Catch: java.lang.Throwable -> Lf
            r1.close()     // Catch: java.lang.Throwable -> Lf
            goto L13
        Lf:
            r1 = move-exception
            if (r0 != 0) goto L13
            r0 = r1
        L13:
            if (r0 == 0) goto L18
            com.tkay.expressad.exoplayer.k.af.a(r0)
        L18:
            return
    }
}
