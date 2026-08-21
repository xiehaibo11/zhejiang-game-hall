package com.bytedance.pangle.f.a;

public final class f {
    int[] a;
    int[] b;

    f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final int a(int[] r1, int r2) {
            int r0 = r2 / 4
            r1 = r1[r0]
            int r2 = r2 % 4
            int r2 = r2 / 2
            if (r2 != 0) goto Lf
            r2 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r2
            return r1
        Lf:
            int r1 = r1 >>> 16
            return r1
    }

    public final java.lang.String a(int r4) {
            r3 = this;
            if (r4 < 0) goto L2c
            int[] r0 = r3.a
            if (r0 == 0) goto L2c
            int r1 = r0.length
            if (r4 >= r1) goto L2c
            r4 = r0[r4]
            int[] r0 = r3.b
            int r0 = a(r0, r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
        L16:
            if (r0 == 0) goto L27
            int r4 = r4 + 2
            int[] r2 = r3.b
            int r2 = a(r2, r4)
            char r2 = (char) r2
            r1.append(r2)
            int r0 = r0 + (-1)
            goto L16
        L27:
            java.lang.String r4 = r1.toString()
            return r4
        L2c:
            r4 = 0
            return r4
    }
}
