package org.bouncycastle.crypto.generators;

public class BaseKDFBytesGenerator implements org.bouncycastle.crypto.DerivationFunction {
    private int counterStart;
    private org.bouncycastle.crypto.Digest digest;
    private byte[] iv;
    private byte[] shared;

    protected BaseKDFBytesGenerator(int r1, org.bouncycastle.crypto.Digest r2) {
            r0 = this;
            r0.<init>()
            r0.counterStart = r1
            r0.digest = r2
            return
    }

    @Override
    public int generateBytes(byte[] r10, int r11, int r12) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalArgumentException {
            r9 = this;
            int r0 = r10.length
            int r0 = r0 - r12
            if (r0 < r11) goto L7c
            long r0 = (long) r12
            org.bouncycastle.crypto.Digest r2 = r9.digest
            int r2 = r2.getDigestSize()
            r3 = 8589934591(0x1ffffffff, double:4.2439915814E-314)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 > 0) goto L74
            long r3 = (long) r2
            long r0 = r0 + r3
            r5 = 1
            long r0 = r0 - r5
            long r0 = r0 / r3
            int r1 = (int) r0
            org.bouncycastle.crypto.Digest r0 = r9.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            int r3 = r9.counterStart
            r4 = 0
            r5 = 0
        L27:
            if (r5 >= r1) goto L6e
            org.bouncycastle.crypto.Digest r6 = r9.digest
            byte[] r7 = r9.shared
            int r8 = r7.length
            r6.update(r7, r4, r8)
            org.bouncycastle.crypto.Digest r6 = r9.digest
            int r7 = r3 >> 24
            byte r7 = (byte) r7
            r6.update(r7)
            org.bouncycastle.crypto.Digest r6 = r9.digest
            int r7 = r3 >> 16
            byte r7 = (byte) r7
            r6.update(r7)
            org.bouncycastle.crypto.Digest r6 = r9.digest
            int r7 = r3 >> 8
            byte r7 = (byte) r7
            r6.update(r7)
            org.bouncycastle.crypto.Digest r6 = r9.digest
            byte r7 = (byte) r3
            r6.update(r7)
            byte[] r6 = r9.iv
            if (r6 == 0) goto L59
            org.bouncycastle.crypto.Digest r7 = r9.digest
            int r8 = r6.length
            r7.update(r6, r4, r8)
        L59:
            org.bouncycastle.crypto.Digest r6 = r9.digest
            r6.doFinal(r0, r4)
            if (r12 <= r2) goto L66
            java.lang.System.arraycopy(r0, r4, r10, r11, r2)
            int r11 = r11 + r2
            int r12 = r12 - r2
            goto L69
        L66:
            java.lang.System.arraycopy(r0, r4, r10, r11, r12)
        L69:
            int r3 = r3 + 1
            int r5 = r5 + 1
            goto L27
        L6e:
            org.bouncycastle.crypto.Digest r10 = r9.digest
            r10.reset()
            return r12
        L74:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "Output length too large"
            r10.<init>(r11)
            throw r10
        L7c:
            org.bouncycastle.crypto.DataLengthException r10 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r11 = "output buffer too small"
            r10.<init>(r11)
            throw r10
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
            goto L22
        L13:
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.ISO18033KDFParameters
            if (r0 == 0) goto L23
            org.bouncycastle.crypto.params.ISO18033KDFParameters r2 = (org.bouncycastle.crypto.params.ISO18033KDFParameters) r2
            byte[] r2 = r2.getSeed()
            r1.shared = r2
            r2 = 0
            r1.iv = r2
        L22:
            return
        L23:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "KDF parameters required for KDF2Generator"
            r2.<init>(r0)
            throw r2
    }
}
