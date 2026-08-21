package org.bouncycastle.crypto;

public class BufferedBlockCipher {
    protected byte[] buf;
    protected int bufOff;
    protected org.bouncycastle.crypto.BlockCipher cipher;
    protected boolean forEncryption;
    protected boolean partialBlockOkay;
    protected boolean pgpCFB;

    protected BufferedBlockCipher() {
            r0 = this;
            r0.<init>()
            return
    }

    public BufferedBlockCipher(org.bouncycastle.crypto.BlockCipher r5) {
            r4 = this;
            r4.<init>()
            r4.cipher = r5
            int r0 = r5.getBlockSize()
            byte[] r0 = new byte[r0]
            r4.buf = r0
            r0 = 0
            r4.bufOff = r0
            java.lang.String r5 = r5.getAlgorithmName()
            r1 = 47
            int r1 = r5.indexOf(r1)
            r2 = 1
            int r1 = r1 + r2
            if (r1 <= 0) goto L28
            java.lang.String r3 = "PGP"
            boolean r3 = r5.startsWith(r3, r1)
            if (r3 == 0) goto L28
            r3 = 1
            goto L29
        L28:
            r3 = 0
        L29:
            r4.pgpCFB = r3
            if (r3 == 0) goto L30
            r4.partialBlockOkay = r2
            goto L5d
        L30:
            if (r1 <= 0) goto L5b
            java.lang.String r3 = "CFB"
            boolean r3 = r5.startsWith(r3, r1)
            if (r3 != 0) goto L5a
            java.lang.String r3 = "OFB"
            boolean r3 = r5.startsWith(r3, r1)
            if (r3 != 0) goto L5a
            java.lang.String r3 = "OpenPGP"
            boolean r3 = r5.startsWith(r3, r1)
            if (r3 != 0) goto L5a
            java.lang.String r3 = "SIC"
            boolean r3 = r5.startsWith(r3, r1)
            if (r3 != 0) goto L5a
            java.lang.String r3 = "GCTR"
            boolean r5 = r5.startsWith(r3, r1)
            if (r5 == 0) goto L5b
        L5a:
            r0 = 1
        L5b:
            r4.partialBlockOkay = r0
        L5d:
            return
    }

    public int doFinal(byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r3 = this;
            int r0 = r3.bufOff
            int r1 = r5 + r0
            int r2 = r4.length
            if (r1 > r2) goto L30
            r1 = 0
            if (r0 == 0) goto L20
            boolean r0 = r3.partialBlockOkay
            if (r0 == 0) goto L20
            org.bouncycastle.crypto.BlockCipher r0 = r3.cipher
            byte[] r2 = r3.buf
            r0.processBlock(r2, r1, r2, r1)
            int r0 = r3.bufOff
            r3.bufOff = r1
            byte[] r2 = r3.buf
            java.lang.System.arraycopy(r2, r1, r4, r5, r0)
            r1 = r0
            goto L24
        L20:
            int r4 = r3.bufOff
            if (r4 != 0) goto L28
        L24:
            r3.reset()
            return r1
        L28:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "data not block size aligned"
            r4.<init>(r5)
            throw r4
        L30:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "output buffer too short for doFinal()"
            r4.<init>(r5)
            throw r4
    }

    public int getBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            int r0 = r0.getBlockSize()
            return r0
    }

    public int getOutputSize(int r3) {
            r2 = this;
            int r0 = r2.bufOff
            int r3 = r3 + r0
            boolean r0 = r2.pgpCFB
            if (r0 == 0) goto L16
            byte[] r0 = r2.buf
            int r0 = r0.length
            int r0 = r3 % r0
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            int r1 = r1.getBlockSize()
            int r1 = r1 + 2
            int r0 = r0 - r1
            goto L1e
        L16:
            byte[] r0 = r2.buf
            int r0 = r0.length
            int r0 = r3 % r0
            if (r0 != 0) goto L1e
            return r3
        L1e:
            int r3 = r3 - r0
            byte[] r0 = r2.buf
            int r0 = r0.length
            int r3 = r3 + r0
            return r3
    }

    public org.bouncycastle.crypto.BlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            return r0
    }

    public int getUpdateOutputSize(int r3) {
            r2 = this;
            int r0 = r2.bufOff
            int r3 = r3 + r0
            boolean r0 = r2.pgpCFB
            if (r0 == 0) goto L16
            byte[] r0 = r2.buf
            int r0 = r0.length
            int r0 = r3 % r0
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            int r1 = r1.getBlockSize()
            int r1 = r1 + 2
            int r0 = r0 - r1
            goto L1b
        L16:
            byte[] r0 = r2.buf
            int r0 = r0.length
            int r0 = r3 % r0
        L1b:
            int r3 = r3 - r0
            return r3
    }

    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) throws java.lang.IllegalArgumentException {
            r1 = this;
            r1.forEncryption = r2
            r1.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            r0.init(r2, r3)
            return
    }

    public int processByte(byte r4, byte[] r5, int r6) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r3 = this;
            byte[] r0 = r3.buf
            int r1 = r3.bufOff
            int r2 = r1 + 1
            r3.bufOff = r2
            r0[r1] = r4
            int r4 = r0.length
            r1 = 0
            if (r2 != r4) goto L17
            org.bouncycastle.crypto.BlockCipher r4 = r3.cipher
            int r4 = r4.processBlock(r0, r1, r5, r6)
            r3.bufOff = r1
            r1 = r4
        L17:
            return r1
    }

    public int processBytes(byte[] r6, int r7, int r8, byte[] r9, int r10) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            if (r8 < 0) goto L60
            int r0 = r5.getBlockSize()
            int r1 = r5.getUpdateOutputSize(r8)
            if (r1 <= 0) goto L19
            int r1 = r1 + r10
            int r2 = r9.length
            if (r1 > r2) goto L11
            goto L19
        L11:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L19:
            byte[] r1 = r5.buf
            int r2 = r1.length
            int r3 = r5.bufOff
            int r2 = r2 - r3
            r4 = 0
            if (r8 <= r2) goto L43
            java.lang.System.arraycopy(r6, r7, r1, r3, r2)
            org.bouncycastle.crypto.BlockCipher r1 = r5.cipher
            byte[] r3 = r5.buf
            int r1 = r1.processBlock(r3, r4, r9, r10)
            int r1 = r1 + r4
            r5.bufOff = r4
            int r8 = r8 - r2
            int r7 = r7 + r2
        L32:
            byte[] r2 = r5.buf
            int r2 = r2.length
            if (r8 <= r2) goto L44
            org.bouncycastle.crypto.BlockCipher r2 = r5.cipher
            int r3 = r10 + r1
            int r2 = r2.processBlock(r6, r7, r9, r3)
            int r1 = r1 + r2
            int r8 = r8 - r0
            int r7 = r7 + r0
            goto L32
        L43:
            r1 = 0
        L44:
            byte[] r0 = r5.buf
            int r2 = r5.bufOff
            java.lang.System.arraycopy(r6, r7, r0, r2, r8)
            int r6 = r5.bufOff
            int r6 = r6 + r8
            r5.bufOff = r6
            byte[] r7 = r5.buf
            int r8 = r7.length
            if (r6 != r8) goto L5f
            org.bouncycastle.crypto.BlockCipher r6 = r5.cipher
            int r10 = r10 + r1
            int r6 = r6.processBlock(r7, r4, r9, r10)
            int r1 = r1 + r6
            r5.bufOff = r4
        L5f:
            return r1
        L60:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "Can't have a negative input length!"
            r6.<init>(r7)
            throw r6
    }

    public void reset() {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            byte[] r2 = r4.buf
            int r3 = r2.length
            if (r1 >= r3) goto Lc
            r2[r1] = r0
            int r1 = r1 + 1
            goto L2
        Lc:
            r4.bufOff = r0
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
