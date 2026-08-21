package org.bouncycastle.crypto.generators;

public class MGF1BytesGenerator implements org.bouncycastle.crypto.DerivationFunction {
    private org.bouncycastle.crypto.Digest digest;
    private int hLen;
    private byte[] seed;

    public MGF1BytesGenerator(org.bouncycastle.crypto.Digest r1) {
            r0 = this;
            r0.<init>()
            r0.digest = r1
            int r1 = r1.getDigestSize()
            r0.hLen = r1
            return
    }

    private void ItoOSP(int r4, byte[] r5) {
            r3 = this;
            int r0 = r4 >>> 24
            byte r0 = (byte) r0
            r1 = 0
            r5[r1] = r0
            int r0 = r4 >>> 16
            byte r0 = (byte) r0
            r2 = 1
            r5[r2] = r0
            int r0 = r4 >>> 8
            byte r0 = (byte) r0
            r2 = 2
            r5[r2] = r0
            int r4 = r4 >>> r1
            byte r4 = (byte) r4
            r0 = 3
            r5[r0] = r4
            return
    }

    @Override
    public int generateBytes(byte[] r9, int r10, int r11) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalArgumentException {
            r8 = this;
            int r0 = r9.length
            int r0 = r0 - r11
            if (r0 < r10) goto L65
            int r0 = r8.hLen
            byte[] r0 = new byte[r0]
            r1 = 4
            byte[] r2 = new byte[r1]
            org.bouncycastle.crypto.Digest r3 = r8.digest
            r3.reset()
            int r3 = r8.hLen
            r4 = 0
            if (r11 <= r3) goto L3c
            r3 = 0
        L16:
            r8.ItoOSP(r3, r2)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            byte[] r6 = r8.seed
            int r7 = r6.length
            r5.update(r6, r4, r7)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.update(r2, r4, r1)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.doFinal(r0, r4)
            int r5 = r8.hLen
            int r6 = r3 * r5
            int r6 = r6 + r10
            java.lang.System.arraycopy(r0, r4, r9, r6, r5)
            int r3 = r3 + 1
            int r5 = r8.hLen
            int r5 = r11 / r5
            if (r3 < r5) goto L16
            goto L3d
        L3c:
            r3 = 0
        L3d:
            int r5 = r8.hLen
            int r5 = r5 * r3
            if (r5 >= r11) goto L64
            r8.ItoOSP(r3, r2)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            byte[] r6 = r8.seed
            int r7 = r6.length
            r5.update(r6, r4, r7)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.update(r2, r4, r1)
            org.bouncycastle.crypto.Digest r1 = r8.digest
            r1.doFinal(r0, r4)
            int r1 = r8.hLen
            int r2 = r3 * r1
            int r10 = r10 + r2
            int r3 = r3 * r1
            int r1 = r11 - r3
            java.lang.System.arraycopy(r0, r4, r9, r10, r1)
        L64:
            return r11
        L65:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "output buffer too small"
            r9.<init>(r10)
            throw r9
    }

    @Override
    public org.bouncycastle.crypto.Digest getDigest() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.DerivationParameters r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.MGFParameters
            if (r0 == 0) goto Ld
            org.bouncycastle.crypto.params.MGFParameters r2 = (org.bouncycastle.crypto.params.MGFParameters) r2
            byte[] r2 = r2.getSeed()
            r1.seed = r2
            return
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "MGF parameters required for MGF1Generator"
            r2.<init>(r0)
            throw r2
    }
}
