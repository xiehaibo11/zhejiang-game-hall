package org.bouncycastle.crypto.paddings;

public class ISO7816d4Padding implements org.bouncycastle.crypto.paddings.BlockCipherPadding {
    public ISO7816d4Padding() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int addPadding(byte[] r3, int r4) {
            r2 = this;
            int r0 = r3.length
            int r0 = r0 - r4
            r1 = -128(0xffffffffffffff80, float:NaN)
            r3[r4] = r1
        L6:
            int r4 = r4 + 1
            int r1 = r3.length
            if (r4 >= r1) goto Lf
            r1 = 0
            r3[r4] = r1
            goto L6
        Lf:
            return r0
    }

    @Override
    public java.lang.String getPaddingName() {
            r1 = this;
            java.lang.String r0 = "ISO7816-4"
            return r0
    }

    @Override
    public void init(java.security.SecureRandom r1) throws java.lang.IllegalArgumentException {
            r0 = this;
            return
    }

    @Override
    public int padCount(byte[] r4) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r3 = this;
            int r0 = r4.length
            int r0 = r0 + (-1)
        L3:
            if (r0 <= 0) goto Lc
            r1 = r4[r0]
            if (r1 != 0) goto Lc
            int r0 = r0 + (-1)
            goto L3
        Lc:
            r1 = r4[r0]
            r2 = -128(0xffffffffffffff80, float:NaN)
            if (r1 != r2) goto L15
            int r4 = r4.length
            int r4 = r4 - r0
            return r4
        L15:
            org.bouncycastle.crypto.InvalidCipherTextException r4 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r0 = "pad block corrupted"
            r4.<init>(r0)
            throw r4
    }
}
