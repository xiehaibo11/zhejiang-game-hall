package org.bouncycastle.crypto.engines;

public class NullEngine implements org.bouncycastle.crypto.BlockCipher {
    protected static final int BLOCK_SIZE = 1;
    private boolean initialised;

    public NullEngine() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Null"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) throws java.lang.IllegalArgumentException {
            r0 = this;
            r1 = 1
            r0.initialised = r1
            return
    }

    @Override
    public int processBlock(byte[] r4, int r5, byte[] r6, int r7) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r3 = this;
            boolean r0 = r3.initialised
            if (r0 == 0) goto L2e
            int r0 = r5 + 1
            int r1 = r4.length
            if (r0 > r1) goto L26
            int r0 = r7 + 1
            int r1 = r6.length
            if (r0 > r1) goto L1e
            r0 = 0
        Lf:
            r1 = 1
            if (r0 >= r1) goto L1d
            int r1 = r7 + r0
            int r2 = r5 + r0
            r2 = r4[r2]
            r6[r1] = r2
            int r0 = r0 + 1
            goto Lf
        L1d:
            return r1
        L1e:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "output buffer too short"
            r4.<init>(r5)
            throw r4
        L26:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "input buffer too short"
            r4.<init>(r5)
            throw r4
        L2e:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "Null engine not initialised"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
