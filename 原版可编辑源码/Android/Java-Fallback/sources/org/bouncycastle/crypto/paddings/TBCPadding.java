package org.bouncycastle.crypto.paddings;

public class TBCPadding implements org.bouncycastle.crypto.paddings.BlockCipherPadding {
    public TBCPadding() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int addPadding(byte[] r5, int r6) {
            r4 = this;
            int r0 = r5.length
            int r0 = r0 - r6
            r1 = 255(0xff, float:3.57E-43)
            r2 = 0
            if (r6 <= 0) goto L10
            int r3 = r6 + (-1)
            r3 = r5[r3]
            r3 = r3 & 1
            if (r3 != 0) goto L1a
            goto L1b
        L10:
            int r3 = r5.length
            int r3 = r3 + (-1)
            r3 = r5[r3]
            r3 = r3 & 1
            if (r3 != 0) goto L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            byte r1 = (byte) r1
        L1c:
            int r2 = r5.length
            if (r6 >= r2) goto L24
            r5[r6] = r1
            int r6 = r6 + 1
            goto L1c
        L24:
            return r0
    }

    @Override
    public java.lang.String getPaddingName() {
            r1 = this;
            java.lang.String r0 = "TBC"
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
            r0 = r4[r0]
            int r1 = r4.length
            int r1 = r1 + (-1)
        L8:
            if (r1 <= 0) goto L13
            int r2 = r1 + (-1)
            r2 = r4[r2]
            if (r2 != r0) goto L13
            int r1 = r1 + (-1)
            goto L8
        L13:
            int r4 = r4.length
            int r4 = r4 - r1
            return r4
    }
}
