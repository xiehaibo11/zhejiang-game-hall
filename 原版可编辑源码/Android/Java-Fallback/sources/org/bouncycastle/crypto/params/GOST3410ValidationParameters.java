package org.bouncycastle.crypto.params;

public class GOST3410ValidationParameters {
    private int c;
    private long cL;
    private int x0;
    private long x0L;

    public GOST3410ValidationParameters(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.x0 = r1
            r0.c = r2
            return
    }

    public GOST3410ValidationParameters(long r1, long r3) {
            r0 = this;
            r0.<init>()
            r0.x0L = r1
            r0.cL = r3
            return
    }

    public boolean equals(java.lang.Object r7) {
            r6 = this;
            boolean r0 = r7 instanceof org.bouncycastle.crypto.params.GOST3410ValidationParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.GOST3410ValidationParameters r7 = (org.bouncycastle.crypto.params.GOST3410ValidationParameters) r7
            int r0 = r7.c
            int r2 = r6.c
            if (r0 == r2) goto Lf
            return r1
        Lf:
            int r0 = r7.x0
            int r2 = r6.x0
            if (r0 == r2) goto L16
            return r1
        L16:
            long r2 = r7.cL
            long r4 = r6.cL
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L1f
            return r1
        L1f:
            long r2 = r7.x0L
            long r4 = r6.x0L
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 == 0) goto L28
            return r1
        L28:
            r7 = 1
            return r7
    }

    public int getC() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public long getCL() {
            r2 = this;
            long r0 = r2.cL
            return r0
    }

    public int getX0() {
            r1 = this;
            int r0 = r1.x0
            return r0
    }

    public long getX0L() {
            r2 = this;
            long r0 = r2.x0L
            return r0
    }

    public int hashCode() {
            r5 = this;
            int r0 = r5.x0
            int r1 = r5.c
            r0 = r0 ^ r1
            long r1 = r5.x0L
            int r3 = (int) r1
            r0 = r0 ^ r3
            r3 = 32
            long r1 = r1 >> r3
            int r2 = (int) r1
            r0 = r0 ^ r2
            long r1 = r5.cL
            int r4 = (int) r1
            r0 = r0 ^ r4
            long r1 = r1 >> r3
            int r2 = (int) r1
            r0 = r0 ^ r2
            return r0
    }
}
