package org.bouncycastle.crypto.paddings;

public class PKCS7Padding implements org.bouncycastle.crypto.paddings.BlockCipherPadding {
    public PKCS7Padding() {
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
            if (r4 >= r1) goto Lb
            r3[r4] = r0
            int r4 = r4 + 1
            goto L3
        Lb:
            return r0
    }

    @Override
    public java.lang.String getPaddingName() {
            r1 = this;
            java.lang.String r0 = "PKCS7"
            return r0
    }

    @Override
    public void init(java.security.SecureRandom r1) throws java.lang.IllegalArgumentException {
            r0 = this;
            return
    }

    @Override
    public int padCount(byte[] r5) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            int r0 = r5.length
            r1 = 1
            int r0 = r0 - r1
            r0 = r5[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r2 = r5.length
            java.lang.String r3 = "pad block corrupted"
            if (r0 > r2) goto L1e
        Lc:
            if (r1 > r0) goto L1d
            int r2 = r5.length
            int r2 = r2 - r1
            r2 = r5[r2]
            if (r2 != r0) goto L17
            int r1 = r1 + 1
            goto Lc
        L17:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            r5.<init>(r3)
            throw r5
        L1d:
            return r0
        L1e:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            r5.<init>(r3)
            throw r5
    }
}
