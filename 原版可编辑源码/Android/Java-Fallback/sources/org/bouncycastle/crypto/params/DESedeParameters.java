package org.bouncycastle.crypto.params;

public class DESedeParameters extends org.bouncycastle.crypto.params.DESParameters {
    public static final int DES_EDE_KEY_LENGTH = 24;

    public DESedeParameters(byte[] r3) {
            r2 = this;
            r2.<init>(r3)
            int r0 = r3.length
            r1 = 0
            boolean r3 = isWeakKey(r3, r1, r0)
            if (r3 != 0) goto Lc
            return
        Lc:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "attempt to create weak DESede key"
            r3.<init>(r0)
            throw r3
    }

    public static boolean isWeakKey(byte[] r1, int r2) {
            int r0 = r1.length
            int r0 = r0 - r2
            boolean r1 = isWeakKey(r1, r2, r0)
            return r1
    }

    public static boolean isWeakKey(byte[] r1, int r2, int r3) {
        L0:
            if (r2 >= r3) goto Ld
            boolean r0 = org.bouncycastle.crypto.params.DESParameters.isWeakKey(r1, r2)
            if (r0 == 0) goto La
            r1 = 1
            return r1
        La:
            int r2 = r2 + 8
            goto L0
        Ld:
            r1 = 0
            return r1
    }
}
