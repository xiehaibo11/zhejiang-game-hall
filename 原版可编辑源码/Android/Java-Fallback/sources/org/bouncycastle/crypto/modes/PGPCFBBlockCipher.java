package org.bouncycastle.crypto.modes;

public class PGPCFBBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    private byte[] FR;
    private byte[] FRE;
    private byte[] IV;
    private int blockSize;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private int count;
    private boolean forEncryption;
    private boolean inlineIv;
    private byte[] tmp;

    public PGPCFBBlockCipher(org.bouncycastle.crypto.BlockCipher r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            r0.inlineIv = r2
            int r1 = r1.getBlockSize()
            r0.blockSize = r1
            byte[] r2 = new byte[r1]
            r0.IV = r2
            byte[] r2 = new byte[r1]
            r0.FR = r2
            byte[] r2 = new byte[r1]
            r0.FRE = r2
            byte[] r1 = new byte[r1]
            r0.tmp = r1
            return
    }

    private int decryptBlock(byte[] r5, int r6, byte[] r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r4 = this;
            int r0 = r4.blockSize
            int r1 = r6 + r0
            int r2 = r5.length
            if (r1 > r2) goto L41
            int r0 = r0 + r8
            int r1 = r7.length
            if (r0 > r1) goto L39
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            byte[] r1 = r4.FR
            byte[] r2 = r4.FRE
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            r0 = 0
        L16:
            int r1 = r4.blockSize
            if (r0 >= r1) goto L29
            int r1 = r8 + r0
            int r2 = r6 + r0
            r2 = r5[r2]
            byte r2 = r4.encryptByte(r2, r0)
            r7[r1] = r2
            int r0 = r0 + 1
            goto L16
        L29:
            int r7 = r4.blockSize
            if (r3 >= r7) goto L38
            byte[] r7 = r4.FR
            int r8 = r6 + r3
            r8 = r5[r8]
            r7[r3] = r8
            int r3 = r3 + 1
            goto L29
        L38:
            return r7
        L39:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "output buffer too short"
            r5.<init>(r6)
            throw r5
        L41:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "input buffer too short"
            r5.<init>(r6)
            throw r5
    }

    private int decryptBlockWithIV(byte[] r7, int r8, byte[] r9, int r10) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r6 = this;
            int r0 = r6.blockSize
            int r1 = r8 + r0
            int r2 = r7.length
            if (r1 > r2) goto Lea
            int r1 = r10 + r0
            int r2 = r9.length
            if (r1 > r2) goto Le2
            int r1 = r6.count
            r2 = 0
            if (r1 != 0) goto L32
            r9 = 0
        L12:
            int r10 = r6.blockSize
            if (r9 >= r10) goto L21
            byte[] r10 = r6.FR
            int r0 = r8 + r9
            r0 = r7[r0]
            r10[r9] = r0
            int r9 = r9 + 1
            goto L12
        L21:
            org.bouncycastle.crypto.BlockCipher r7 = r6.cipher
            byte[] r8 = r6.FR
            byte[] r9 = r6.FRE
            r7.processBlock(r8, r2, r9, r2)
            int r7 = r6.count
            int r8 = r6.blockSize
            int r7 = r7 + r8
            r6.count = r7
            return r2
        L32:
            r3 = 1
            r4 = 2
            if (r1 != r0) goto L84
            byte[] r1 = r6.tmp
            java.lang.System.arraycopy(r7, r8, r1, r2, r0)
            byte[] r7 = r6.FR
            int r8 = r6.blockSize
            int r8 = r8 - r4
            java.lang.System.arraycopy(r7, r4, r7, r2, r8)
            byte[] r7 = r6.FR
            int r8 = r6.blockSize
            int r0 = r8 + (-2)
            byte[] r1 = r6.tmp
            r5 = r1[r2]
            r7[r0] = r5
            int r8 = r8 - r3
            r0 = r1[r3]
            r7[r8] = r0
            org.bouncycastle.crypto.BlockCipher r8 = r6.cipher
            byte[] r0 = r6.FRE
            r8.processBlock(r7, r2, r0, r2)
            r7 = 0
        L5c:
            int r8 = r6.blockSize
            int r0 = r8 + (-2)
            if (r7 >= r0) goto L73
            int r8 = r10 + r7
            byte[] r0 = r6.tmp
            int r1 = r7 + 2
            r0 = r0[r1]
            byte r0 = r6.encryptByte(r0, r7)
            r9[r8] = r0
            int r7 = r7 + 1
            goto L5c
        L73:
            byte[] r7 = r6.tmp
            byte[] r9 = r6.FR
            int r8 = r8 - r4
            java.lang.System.arraycopy(r7, r4, r9, r2, r8)
            int r7 = r6.count
            int r7 = r7 + r4
            r6.count = r7
            int r7 = r6.blockSize
            int r7 = r7 - r4
            return r7
        L84:
            int r5 = r0 + 2
            if (r1 < r5) goto Ldf
            byte[] r1 = r6.tmp
            java.lang.System.arraycopy(r7, r8, r1, r2, r0)
            int r7 = r10 + 0
            byte[] r8 = r6.tmp
            r8 = r8[r2]
            int r0 = r6.blockSize
            int r0 = r0 - r4
            byte r8 = r6.encryptByte(r8, r0)
            r9[r7] = r8
            int r7 = r10 + 1
            byte[] r8 = r6.tmp
            r8 = r8[r3]
            int r0 = r6.blockSize
            int r0 = r0 - r3
            byte r8 = r6.encryptByte(r8, r0)
            r9[r7] = r8
            byte[] r7 = r6.tmp
            byte[] r8 = r6.FR
            int r0 = r6.blockSize
            int r0 = r0 - r4
            java.lang.System.arraycopy(r7, r2, r8, r0, r4)
            org.bouncycastle.crypto.BlockCipher r7 = r6.cipher
            byte[] r8 = r6.FR
            byte[] r0 = r6.FRE
            r7.processBlock(r8, r2, r0, r2)
            r7 = 0
        Lbf:
            int r8 = r6.blockSize
            int r0 = r8 + (-2)
            if (r7 >= r0) goto Ld7
            int r8 = r10 + r7
            int r8 = r8 + r4
            byte[] r0 = r6.tmp
            int r1 = r7 + 2
            r0 = r0[r1]
            byte r0 = r6.encryptByte(r0, r7)
            r9[r8] = r0
            int r7 = r7 + 1
            goto Lbf
        Ld7:
            byte[] r7 = r6.tmp
            byte[] r9 = r6.FR
            int r8 = r8 - r4
            java.lang.System.arraycopy(r7, r4, r9, r2, r8)
        Ldf:
            int r7 = r6.blockSize
            return r7
        Le2:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        Lea:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "input buffer too short"
            r7.<init>(r8)
            throw r7
    }

    private int encryptBlock(byte[] r5, int r6, byte[] r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r4 = this;
            int r0 = r4.blockSize
            int r1 = r6 + r0
            int r2 = r5.length
            if (r1 > r2) goto L41
            int r0 = r0 + r8
            int r1 = r7.length
            if (r0 > r1) goto L39
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            byte[] r1 = r4.FR
            byte[] r2 = r4.FRE
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            r0 = 0
        L16:
            int r1 = r4.blockSize
            if (r0 >= r1) goto L29
            int r1 = r8 + r0
            int r2 = r6 + r0
            r2 = r5[r2]
            byte r2 = r4.encryptByte(r2, r0)
            r7[r1] = r2
            int r0 = r0 + 1
            goto L16
        L29:
            int r5 = r4.blockSize
            if (r3 >= r5) goto L38
            byte[] r5 = r4.FR
            int r6 = r8 + r3
            r6 = r7[r6]
            r5[r3] = r6
            int r3 = r3 + 1
            goto L29
        L38:
            return r5
        L39:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "output buffer too short"
            r5.<init>(r6)
            throw r5
        L41:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "input buffer too short"
            r5.<init>(r6)
            throw r5
    }

    private int encryptBlockWithIV(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            int r0 = r5.blockSize
            int r1 = r7 + r0
            int r2 = r6.length
            if (r1 > r2) goto Lce
            int r1 = r9 + r0
            int r2 = r8.length
            if (r1 > r2) goto Lc6
            int r1 = r5.count
            r2 = 0
            if (r1 != 0) goto L9d
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.FR
            byte[] r3 = r5.FRE
            r0.processBlock(r1, r2, r3, r2)
            r0 = 0
        L1b:
            int r1 = r5.blockSize
            if (r0 >= r1) goto L2e
            int r1 = r9 + r0
            byte[] r3 = r5.IV
            r3 = r3[r0]
            byte r3 = r5.encryptByte(r3, r0)
            r8[r1] = r3
            int r0 = r0 + 1
            goto L1b
        L2e:
            byte[] r0 = r5.FR
            java.lang.System.arraycopy(r8, r9, r0, r2, r1)
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.FR
            byte[] r3 = r5.FRE
            r0.processBlock(r1, r2, r3, r2)
            int r0 = r5.blockSize
            int r1 = r9 + r0
            byte[] r3 = r5.IV
            int r0 = r0 + (-2)
            r0 = r3[r0]
            byte r0 = r5.encryptByte(r0, r2)
            r8[r1] = r0
            int r0 = r5.blockSize
            int r1 = r9 + r0
            r3 = 1
            int r1 = r1 + r3
            byte[] r4 = r5.IV
            int r0 = r0 - r3
            r0 = r4[r0]
            byte r0 = r5.encryptByte(r0, r3)
            r8[r1] = r0
            int r0 = r9 + 2
            byte[] r1 = r5.FR
            int r3 = r5.blockSize
            java.lang.System.arraycopy(r8, r0, r1, r2, r3)
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.FR
            byte[] r3 = r5.FRE
            r0.processBlock(r1, r2, r3, r2)
            r0 = 0
        L70:
            int r1 = r5.blockSize
            if (r0 >= r1) goto L85
            int r1 = r1 + r9
            int r1 = r1 + 2
            int r1 = r1 + r0
            int r3 = r7 + r0
            r3 = r6[r3]
            byte r3 = r5.encryptByte(r3, r0)
            r8[r1] = r3
            int r0 = r0 + 1
            goto L70
        L85:
            int r9 = r9 + r1
            int r9 = r9 + 2
            byte[] r6 = r5.FR
            java.lang.System.arraycopy(r8, r9, r6, r2, r1)
            int r6 = r5.count
            int r7 = r5.blockSize
            int r8 = r7 * 2
            int r8 = r8 + 2
            int r6 = r6 + r8
            r5.count = r6
            int r7 = r7 * 2
            int r7 = r7 + 2
            return r7
        L9d:
            int r0 = r0 + 2
            if (r1 < r0) goto Lc3
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.FR
            byte[] r3 = r5.FRE
            r0.processBlock(r1, r2, r3, r2)
            r0 = 0
        Lab:
            int r1 = r5.blockSize
            if (r0 >= r1) goto Lbe
            int r1 = r9 + r0
            int r3 = r7 + r0
            r3 = r6[r3]
            byte r3 = r5.encryptByte(r3, r0)
            r8[r1] = r3
            int r0 = r0 + 1
            goto Lab
        Lbe:
            byte[] r6 = r5.FR
            java.lang.System.arraycopy(r8, r9, r6, r2, r1)
        Lc3:
            int r6 = r5.blockSize
            return r6
        Lc6:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        Lce:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "input buffer too short"
            r6.<init>(r7)
            throw r6
    }

    private byte encryptByte(byte r2, int r3) {
            r1 = this;
            byte[] r0 = r1.FRE
            r3 = r0[r3]
            r2 = r2 ^ r3
            byte r2 = (byte) r2
            return r2
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            boolean r0 = r2.inlineIv
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/PGPCFBwithIV"
        L14:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L1c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/PGPCFB"
            goto L14
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
    public void init(boolean r7, org.bouncycastle.crypto.CipherParameters r8) throws java.lang.IllegalArgumentException {
            r6 = this;
            r6.forEncryption = r7
            boolean r7 = r8 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            r0 = 1
            if (r7 == 0) goto L36
            org.bouncycastle.crypto.params.ParametersWithIV r8 = (org.bouncycastle.crypto.params.ParametersWithIV) r8
            byte[] r7 = r8.getIV()
            int r1 = r7.length
            byte[] r2 = r6.IV
            int r3 = r2.length
            r4 = 0
            if (r1 >= r3) goto L28
            int r1 = r2.length
            int r3 = r7.length
            int r1 = r1 - r3
            int r3 = r7.length
            java.lang.System.arraycopy(r7, r4, r2, r1, r3)
            r1 = 0
        L1c:
            byte[] r2 = r6.IV
            int r3 = r2.length
            int r5 = r7.length
            int r3 = r3 - r5
            if (r1 >= r3) goto L2c
            r2[r1] = r4
            int r1 = r1 + 1
            goto L1c
        L28:
            int r1 = r2.length
            java.lang.System.arraycopy(r7, r4, r2, r4, r1)
        L2c:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r7 = r6.cipher
            org.bouncycastle.crypto.CipherParameters r8 = r8.getParameters()
            goto L3b
        L36:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r7 = r6.cipher
        L3b:
            r7.init(r0, r8)
            return
    }

    @Override
    public int processBlock(byte[] r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.inlineIv
            if (r0 == 0) goto L12
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto Ld
            int r2 = r1.encryptBlockWithIV(r2, r3, r4, r5)
            goto L11
        Ld:
            int r2 = r1.decryptBlockWithIV(r2, r3, r4, r5)
        L11:
            return r2
        L12:
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto L1b
            int r2 = r1.encryptBlock(r2, r3, r4, r5)
            goto L1f
        L1b:
            int r2 = r1.decryptBlock(r2, r3, r4, r5)
        L1f:
            return r2
    }

    @Override
    public void reset() {
            r4 = this;
            r0 = 0
            r4.count = r0
            r1 = 0
        L4:
            byte[] r2 = r4.FR
            int r3 = r2.length
            if (r1 == r3) goto L19
            boolean r3 = r4.inlineIv
            if (r3 == 0) goto L10
            r2[r1] = r0
            goto L16
        L10:
            byte[] r3 = r4.IV
            r3 = r3[r1]
            r2[r1] = r3
        L16:
            int r1 = r1 + 1
            goto L4
        L19:
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
