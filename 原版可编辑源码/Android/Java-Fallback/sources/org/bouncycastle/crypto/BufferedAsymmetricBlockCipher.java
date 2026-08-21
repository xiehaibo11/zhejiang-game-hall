package org.bouncycastle.crypto;

public class BufferedAsymmetricBlockCipher {
    protected byte[] buf;
    protected int bufOff;
    private final org.bouncycastle.crypto.AsymmetricBlockCipher cipher;

    public BufferedAsymmetricBlockCipher(org.bouncycastle.crypto.AsymmetricBlockCipher r1) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            return
    }

    public byte[] doFinal() throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r4.cipher
            byte[] r1 = r4.buf
            int r2 = r4.bufOff
            r3 = 0
            byte[] r0 = r0.processBlock(r1, r3, r2)
            r4.reset()
            return r0
    }

    public int getBufferPosition() {
            r1 = this;
            int r0 = r1.bufOff
            return r0
    }

    public int getInputBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.cipher
            int r0 = r0.getInputBlockSize()
            return r0
    }

    public int getOutputBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.cipher
            int r0 = r0.getOutputBlockSize()
            return r0
    }

    public org.bouncycastle.crypto.AsymmetricBlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.cipher
            return r0
    }

    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            r1.reset()
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.cipher
            r0.init(r2, r3)
            org.bouncycastle.crypto.AsymmetricBlockCipher r3 = r1.cipher
            int r3 = r3.getInputBlockSize()
            int r3 = r3 + r2
            byte[] r2 = new byte[r3]
            r1.buf = r2
            r2 = 0
            r1.bufOff = r2
            return
    }

    public void processByte(byte r4) {
            r3 = this;
            int r0 = r3.bufOff
            byte[] r1 = r3.buf
            int r2 = r1.length
            if (r0 >= r2) goto Le
            int r2 = r0 + 1
            r3.bufOff = r2
            r1[r0] = r4
            return
        Le:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r0 = "attempt to process message too long for cipher"
            r4.<init>(r0)
            throw r4
    }

    public void processBytes(byte[] r5, int r6, int r7) {
            r4 = this;
            if (r7 != 0) goto L3
            return
        L3:
            if (r7 < 0) goto L1f
            int r0 = r4.bufOff
            int r1 = r0 + r7
            byte[] r2 = r4.buf
            int r3 = r2.length
            if (r1 > r3) goto L17
            java.lang.System.arraycopy(r5, r6, r2, r0, r7)
            int r5 = r4.bufOff
            int r5 = r5 + r7
            r4.bufOff = r5
            return
        L17:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "attempt to process message too long for cipher"
            r5.<init>(r6)
            throw r5
        L1f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Can't have a negative input length!"
            r5.<init>(r6)
            throw r5
    }

    public void reset() {
            r4 = this;
            byte[] r0 = r4.buf
            r1 = 0
            if (r0 == 0) goto L10
            r0 = 0
        L6:
            byte[] r2 = r4.buf
            int r3 = r2.length
            if (r0 >= r3) goto L10
            r2[r1] = r1
            int r0 = r0 + 1
            goto L6
        L10:
            r4.bufOff = r1
            return
    }
}
