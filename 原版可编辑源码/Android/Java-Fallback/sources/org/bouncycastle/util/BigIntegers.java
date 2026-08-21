package org.bouncycastle.util;

public final class BigIntegers {
    public BigIntegers() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] asUnsignedByteArray(java.math.BigInteger r4) {
            byte[] r4 = r4.toByteArray()
            r0 = 0
            r1 = r4[r0]
            if (r1 != 0) goto L12
            int r1 = r4.length
            r2 = 1
            int r1 = r1 - r2
            byte[] r3 = new byte[r1]
            java.lang.System.arraycopy(r4, r2, r3, r0, r1)
            return r3
        L12:
            return r4
    }
}
