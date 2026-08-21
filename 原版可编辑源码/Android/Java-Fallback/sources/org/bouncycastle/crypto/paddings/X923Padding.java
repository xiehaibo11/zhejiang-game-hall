package org.bouncycastle.crypto.paddings;

public class X923Padding implements org.bouncycastle.crypto.paddings.BlockCipherPadding {
    java.security.SecureRandom random;

    public X923Padding() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.random = r0
            return
    }

    @Override
    public int addPadding(byte[] r3, int r4) {
            r2 = this;
            int r0 = r3.length
            int r0 = r0 - r4
            byte r0 = (byte) r0
        L3:
            int r1 = r3.length
            int r1 = r1 + (-1)
            if (r4 >= r1) goto L1a
            java.security.SecureRandom r1 = r2.random
            if (r1 != 0) goto L10
            r1 = 0
            r3[r4] = r1
            goto L17
        L10:
            int r1 = r1.nextInt()
            byte r1 = (byte) r1
            r3[r4] = r1
        L17:
            int r4 = r4 + 1
            goto L3
        L1a:
            r3[r4] = r0
            return r0
    }

    @Override
    public java.lang.String getPaddingName() {
            r1 = this;
            java.lang.String r0 = "X9.23"
            return r0
    }

    @Override
    public void init(java.security.SecureRandom r1) throws java.lang.IllegalArgumentException {
            r0 = this;
            r0.random = r1
            return
    }

    @Override
    public int padCount(byte[] r2) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r1 = this;
            int r0 = r2.length
            int r0 = r0 + (-1)
            r0 = r2[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r2 = r2.length
            if (r0 > r2) goto Lb
            return r0
        Lb:
            org.bouncycastle.crypto.InvalidCipherTextException r2 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r0 = "pad block corrupted"
            r2.<init>(r0)
            throw r2
    }
}
