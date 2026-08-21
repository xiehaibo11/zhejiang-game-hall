package org.bouncycastle.crypto.paddings;

public class ISO10126d2Padding implements org.bouncycastle.crypto.paddings.BlockCipherPadding {
    java.security.SecureRandom random;

    public ISO10126d2Padding() {
            r0 = this;
            r0.<init>()
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
            if (r4 >= r1) goto L14
            java.security.SecureRandom r1 = r2.random
            int r1 = r1.nextInt()
            byte r1 = (byte) r1
            r3[r4] = r1
            int r4 = r4 + 1
            goto L3
        L14:
            r3[r4] = r0
            return r0
    }

    @Override
    public java.lang.String getPaddingName() {
            r1 = this;
            java.lang.String r0 = "ISO10126-2"
            return r0
    }

    @Override
    public void init(java.security.SecureRandom r1) throws java.lang.IllegalArgumentException {
            r0 = this;
            if (r1 == 0) goto L3
            goto L8
        L3:
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
        L8:
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
