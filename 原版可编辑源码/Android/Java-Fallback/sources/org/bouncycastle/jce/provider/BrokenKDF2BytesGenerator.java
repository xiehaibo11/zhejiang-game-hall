package org.bouncycastle.jce.provider;

public class BrokenKDF2BytesGenerator implements org.bouncycastle.crypto.DerivationFunction {
    private org.bouncycastle.crypto.Digest digest;
    private byte[] iv;
    private byte[] shared;

    public BrokenKDF2BytesGenerator(org.bouncycastle.crypto.Digest r1) {
            r0 = this;
            r0.<init>()
            r0.digest = r1
            return
    }

    @Override
    public int generateBytes(byte[] r9, int r10, int r11) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalArgumentException {
            r8 = this;
            int r0 = r9.length
            int r0 = r0 - r11
            if (r0 < r10) goto L84
            int r0 = r11 * 8
            long r0 = (long) r0
            org.bouncycastle.crypto.Digest r2 = r8.digest
            int r2 = r2.getDigestSize()
            int r2 = r2 * 8
            long r2 = (long) r2
            r4 = 29
            long r2 = r2 * r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1f
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Output length to large"
            r2.<init>(r3)
        L1f:
            org.bouncycastle.crypto.Digest r2 = r8.digest
            int r2 = r2.getDigestSize()
            long r2 = (long) r2
            long r0 = r0 / r2
            int r1 = (int) r0
            org.bouncycastle.crypto.Digest r0 = r8.digest
            int r0 = r0.getDigestSize()
            byte[] r2 = new byte[r0]
            r3 = 1
        L31:
            if (r3 > r1) goto L7e
            org.bouncycastle.crypto.Digest r4 = r8.digest
            byte[] r5 = r8.shared
            int r6 = r5.length
            r7 = 0
            r4.update(r5, r7, r6)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            r5 = r3 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5
            r4.update(r5)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            int r5 = r3 >> 8
            r5 = r5 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5
            r4.update(r5)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            int r5 = r3 >> 16
            r5 = r5 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5
            r4.update(r5)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            int r5 = r3 >> 24
            r5 = r5 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5
            r4.update(r5)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            byte[] r5 = r8.iv
            int r6 = r5.length
            r4.update(r5, r7, r6)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            r4.doFinal(r2, r7)
            int r4 = r11 - r10
            if (r4 <= r0) goto L78
            java.lang.System.arraycopy(r2, r7, r9, r10, r0)
            int r10 = r10 + r0
            goto L7b
        L78:
            java.lang.System.arraycopy(r2, r7, r9, r10, r4)
        L7b:
            int r3 = r3 + 1
            goto L31
        L7e:
            org.bouncycastle.crypto.Digest r9 = r8.digest
            r9.reset()
            return r11
        L84:
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
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.KDFParameters
            if (r0 == 0) goto L13
            org.bouncycastle.crypto.params.KDFParameters r2 = (org.bouncycastle.crypto.params.KDFParameters) r2
            byte[] r0 = r2.getSharedSecret()
            r1.shared = r0
            byte[] r2 = r2.getIV()
            r1.iv = r2
            return
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "KDF parameters required for KDF2Generator"
            r2.<init>(r0)
            throw r2
    }
}
