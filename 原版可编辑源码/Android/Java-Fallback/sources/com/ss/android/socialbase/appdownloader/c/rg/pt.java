package com.ss.android.socialbase.appdownloader.c.rg;

public class pt {
    private boolean df;
    private int q;
    private java.io.InputStream rg;

    public pt() {
            r0 = this;
            r0.<init>()
            return
    }

    public pt(java.io.InputStream r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.rg(r1, r2)
            return
    }

    public final int df() throws java.io.IOException {
            r1 = this;
            r0 = 4
            int r0 = r1.rg(r0)
            return r0
    }

    public final int[] df(int r3) throws java.io.IOException {
            r2 = this;
            int[] r0 = new int[r3]
            r1 = 0
            r2.rg(r0, r1, r3)
            return r0
    }

    public final void q() throws java.io.IOException {
            r1 = this;
            r0 = 4
            r1.q(r0)
            return
    }

    public final void q(int r8) throws java.io.IOException {
            r7 = this;
            if (r8 <= 0) goto L1b
            java.io.InputStream r0 = r7.rg
            long r1 = (long) r8
            long r3 = r0.skip(r1)
            int r8 = r7.q
            long r5 = (long) r8
            long r5 = r5 + r3
            int r8 = (int) r5
            r7.q = r8
            int r8 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r8 != 0) goto L15
            goto L1b
        L15:
            java.io.EOFException r8 = new java.io.EOFException
            r8.<init>()
            throw r8
        L1b:
            return
    }

    public final int rg(int r6) throws java.io.IOException {
            r5 = this;
            if (r6 < 0) goto L4a
            r0 = 4
            if (r6 > r0) goto L4a
            boolean r0 = r5.df
            r1 = -1
            r2 = 0
            if (r0 == 0) goto L2a
            int r6 = r6 + (-1)
            int r6 = r6 * 8
        Lf:
            if (r6 < 0) goto L49
            java.io.InputStream r0 = r5.rg
            int r0 = r0.read()
            if (r0 == r1) goto L24
            int r3 = r5.q
            int r3 = r3 + 1
            r5.q = r3
            int r0 = r0 << r6
            r2 = r2 | r0
            int r6 = r6 + (-8)
            goto Lf
        L24:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L2a:
            int r6 = r6 * 8
            r0 = r2
        L2d:
            if (r2 == r6) goto L48
            java.io.InputStream r3 = r5.rg
            int r3 = r3.read()
            if (r3 == r1) goto L42
            int r4 = r5.q
            int r4 = r4 + 1
            r5.q = r4
            int r3 = r3 << r2
            r0 = r0 | r3
            int r2 = r2 + 8
            goto L2d
        L42:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L48:
            r2 = r0
        L49:
            return r2
        L4a:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            r6.<init>()
            throw r6
    }

    public final void rg() {
            r2 = this;
            java.io.InputStream r0 = r2.rg
            if (r0 == 0) goto Le
            r0.close()     // Catch: java.io.IOException -> L7
        L7:
            r0 = 0
            java.io.InputStream r0 = (java.io.InputStream) r0
            r1 = 0
            r2.rg(r0, r1)
        Le:
            return
    }

    public final void rg(java.io.InputStream r1, boolean r2) {
            r0 = this;
            r0.rg = r1
            r0.df = r2
            r1 = 0
            r0.q = r1
            return
    }

    public final void rg(int[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
        L0:
            if (r5 <= 0) goto Le
            int r0 = r4 + 1
            int r1 = r2.df()
            r3[r4] = r1
            int r5 = r5 + (-1)
            r4 = r0
            goto L0
        Le:
            return
    }
}
