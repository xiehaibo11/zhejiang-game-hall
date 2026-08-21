package org.bouncycastle.crypto.modes;

public class CBCBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    private byte[] IV;
    private int blockSize;
    private byte[] cbcNextV;
    private byte[] cbcV;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private boolean encrypting;

    public CBCBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.cipher = r0
            r1.cipher = r2
            int r2 = r2.getBlockSize()
            r1.blockSize = r2
            byte[] r0 = new byte[r2]
            r1.IV = r0
            byte[] r0 = new byte[r2]
            r1.cbcV = r0
            byte[] r2 = new byte[r2]
            r1.cbcNextV = r2
            return
    }

    private int decryptBlock(byte[] r4, int r5, byte[] r6, int r7) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r3 = this;
            int r0 = r3.blockSize
            int r1 = r5 + r0
            int r2 = r4.length
            if (r1 > r2) goto L2f
            byte[] r1 = r3.cbcNextV
            r2 = 0
            java.lang.System.arraycopy(r4, r5, r1, r2, r0)
            org.bouncycastle.crypto.BlockCipher r0 = r3.cipher
            int r4 = r0.processBlock(r4, r5, r6, r7)
        L13:
            int r5 = r3.blockSize
            if (r2 >= r5) goto L26
            int r5 = r7 + r2
            r0 = r6[r5]
            byte[] r1 = r3.cbcV
            r1 = r1[r2]
            r0 = r0 ^ r1
            byte r0 = (byte) r0
            r6[r5] = r0
            int r2 = r2 + 1
            goto L13
        L26:
            byte[] r5 = r3.cbcV
            byte[] r6 = r3.cbcNextV
            r3.cbcV = r6
            r3.cbcNextV = r5
            return r4
        L2f:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "input buffer too short"
            r4.<init>(r5)
            throw r4
    }

    private int encryptBlock(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            int r0 = r5.blockSize
            int r0 = r0 + r7
            int r1 = r6.length
            if (r0 > r1) goto L2a
            r0 = 0
            r1 = 0
        L8:
            int r2 = r5.blockSize
            if (r1 >= r2) goto L1b
            byte[] r2 = r5.cbcV
            r3 = r2[r1]
            int r4 = r7 + r1
            r4 = r6[r4]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L8
        L1b:
            org.bouncycastle.crypto.BlockCipher r6 = r5.cipher
            byte[] r7 = r5.cbcV
            int r6 = r6.processBlock(r7, r0, r8, r9)
            byte[] r7 = r5.cbcV
            int r1 = r7.length
            java.lang.System.arraycopy(r8, r9, r7, r0, r1)
            return r6
        L2a:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "input buffer too short"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/CBC"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            int r0 = r0.getBlockSize()
            return r0
    }

    public org.bouncycastle.crypto.BlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            return r0
    }

    @Override
    public void init(boolean r5, org.bouncycastle.crypto.CipherParameters r6) throws java.lang.IllegalArgumentException {
            r4 = this;
            r4.encrypting = r5
            boolean r0 = r6 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r0 == 0) goto L2a
            org.bouncycastle.crypto.params.ParametersWithIV r6 = (org.bouncycastle.crypto.params.ParametersWithIV) r6
            byte[] r0 = r6.getIV()
            int r1 = r0.length
            int r2 = r4.blockSize
            if (r1 != r2) goto L22
            byte[] r1 = r4.IV
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            r4.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.CipherParameters r6 = r6.getParameters()
            goto L2f
        L22:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "initialisation vector must be the same length as block size"
            r5.<init>(r6)
            throw r5
        L2a:
            r4.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
        L2f:
            r0.init(r5, r6)
            return
    }

    @Override
    public int processBlock(byte[] r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.encrypting
            if (r0 == 0) goto L9
            int r2 = r1.encryptBlock(r2, r3, r4, r5)
            goto Ld
        L9:
            int r2 = r1.decryptBlock(r2, r3, r4, r5)
        Ld:
            return r2
    }

    @Override
    public void reset() {
            r4 = this;
            byte[] r0 = r4.IV
            byte[] r1 = r4.cbcV
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
