package com.tencent.open.utils;

public final class n implements java.lang.Cloneable {
    private long a;

    public n(long r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public byte[] a() {
            r6 = this;
            r0 = 4
            byte[] r0 = new byte[r0]
            long r1 = r6.a
            r3 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r1
            int r4 = (int) r3
            byte r3 = (byte) r4
            r4 = 0
            r0[r4] = r3
            r3 = 65280(0xff00, double:3.22526E-319)
            long r3 = r3 & r1
            r5 = 8
            long r3 = r3 >> r5
            int r4 = (int) r3
            byte r3 = (byte) r4
            r4 = 1
            r0[r4] = r3
            r3 = 16711680(0xff0000, double:8.256667E-317)
            long r3 = r3 & r1
            r5 = 16
            long r3 = r3 >> r5
            int r4 = (int) r3
            byte r3 = (byte) r4
            r4 = 2
            r0[r4] = r3
            r3 = 4278190080(0xff000000, double:2.113706745E-314)
            long r1 = r1 & r3
            r3 = 24
            long r1 = r1 >> r3
            int r2 = (int) r1
            byte r1 = (byte) r2
            r2 = 3
            r0[r2] = r1
            return r0
    }

    public long b() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L15
            boolean r1 = r6 instanceof com.tencent.open.utils.n
            if (r1 != 0) goto L8
            goto L15
        L8:
            long r1 = r5.a
            com.tencent.open.utils.n r6 = (com.tencent.open.utils.n) r6
            long r3 = r6.b()
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 != 0) goto L15
            r0 = 1
        L15:
            return r0
    }

    public int hashCode() {
            r2 = this;
            long r0 = r2.a
            int r1 = (int) r0
            return r1
    }
}
