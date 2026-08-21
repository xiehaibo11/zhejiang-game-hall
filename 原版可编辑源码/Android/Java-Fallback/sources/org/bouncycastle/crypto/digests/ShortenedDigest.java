package org.bouncycastle.crypto.digests;

public class ShortenedDigest implements org.bouncycastle.crypto.ExtendedDigest {
    private org.bouncycastle.crypto.ExtendedDigest baseDigest;
    private int length;

    public ShortenedDigest(org.bouncycastle.crypto.ExtendedDigest r2, int r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L18
            int r0 = r2.getDigestSize()
            if (r3 > r0) goto L10
            r1.baseDigest = r2
            r1.length = r3
            return
        L10:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "baseDigest output not large enough to support length"
            r2.<init>(r3)
            throw r2
        L18:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "baseDigest must not be null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public int doFinal(byte[] r4, int r5) {
            r3 = this;
            org.bouncycastle.crypto.ExtendedDigest r0 = r3.baseDigest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.ExtendedDigest r1 = r3.baseDigest
            r2 = 0
            r1.doFinal(r0, r2)
            int r1 = r3.length
            java.lang.System.arraycopy(r0, r2, r4, r5, r1)
            int r4 = r3.length
            return r4
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.ExtendedDigest r1 = r2.baseDigest
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "("
            r0.append(r1)
            int r1 = r2.length
            int r1 = r1 * 8
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int getByteLength() {
            r1 = this;
            org.bouncycastle.crypto.ExtendedDigest r0 = r1.baseDigest
            int r0 = r0.getByteLength()
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            int r0 = r1.length
            return r0
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.ExtendedDigest r0 = r1.baseDigest
            r0.reset()
            return
    }

    @Override
    public void update(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.ExtendedDigest r0 = r1.baseDigest
            r0.update(r2)
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.ExtendedDigest r0 = r1.baseDigest
            r0.update(r2, r3, r4)
            return
    }
}
