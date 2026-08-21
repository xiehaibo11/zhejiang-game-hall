package org.bouncycastle.crypto;

public class StreamBlockCipher implements org.bouncycastle.crypto.StreamCipher {
    private org.bouncycastle.crypto.BlockCipher cipher;
    private byte[] oneByte;

    public StreamBlockCipher(org.bouncycastle.crypto.BlockCipher r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            byte[] r1 = new byte[r0]
            r2.oneByte = r1
            int r1 = r3.getBlockSize()
            if (r1 != r0) goto L11
            r2.cipher = r3
            return
        L11:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "block cipher block size != 1."
            r3.<init>(r0)
            throw r3
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            java.lang.String r0 = r0.getAlgorithmName()
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            r0.init(r2, r3)
            return
    }

    @Override
    public void processBytes(byte[] r5, int r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException {
            r4 = this;
            int r0 = r9 + r7
            int r1 = r8.length
            if (r0 > r1) goto L15
            r0 = 0
        L6:
            if (r0 == r7) goto L14
            org.bouncycastle.crypto.BlockCipher r1 = r4.cipher
            int r2 = r6 + r0
            int r3 = r9 + r0
            r1.processBlock(r5, r2, r8, r3)
            int r0 = r0 + 1
            goto L6
        L14:
            return
        L15:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "output buffer too small in processBytes()"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            r0.reset()
            return
    }

    @Override
    public byte returnByte(byte r3) {
            r2 = this;
            byte[] r0 = r2.oneByte
            r1 = 0
            r0[r1] = r3
            org.bouncycastle.crypto.BlockCipher r3 = r2.cipher
            r3.processBlock(r0, r1, r0, r1)
            byte[] r3 = r2.oneByte
            r3 = r3[r1]
            return r3
    }
}
