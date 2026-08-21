package org.bouncycastle.crypto.paddings;

public class ZeroBytePadding implements org.bouncycastle.crypto.paddings.BlockCipherPadding {
    public ZeroBytePadding() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int addPadding(byte[] r3, int r4) {
            r2 = this;
            int r0 = r3.length
            int r0 = r0 - r4
        L2:
            int r1 = r3.length
            if (r4 >= r1) goto Lb
            r1 = 0
            r3[r4] = r1
            int r4 = r4 + 1
            goto L2
        Lb:
            return r0
    }

    @Override
    public java.lang.String getPaddingName() {
            r1 = this;
            java.lang.String r0 = "ZeroByte"
            return r0
    }

    @Override
    public void init(java.security.SecureRandom r1) throws java.lang.IllegalArgumentException {
            r0 = this;
            return
    }

    @Override
    public int padCount(byte[] r3) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r2 = this;
            int r0 = r3.length
        L1:
            if (r0 <= 0) goto Ld
            int r1 = r0 + (-1)
            r1 = r3[r1]
            if (r1 == 0) goto La
            goto Ld
        La:
            int r0 = r0 + (-1)
            goto L1
        Ld:
            int r3 = r3.length
            int r3 = r3 - r0
            return r3
    }
}
