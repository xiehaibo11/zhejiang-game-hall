package org.bouncycastle.crypto.modes;

public class CFBBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    private byte[] IV;
    private int blockSize;
    private byte[] cfbOutV;
    private byte[] cfbV;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private boolean encrypting;

    public CFBBlockCipher(org.bouncycastle.crypto.BlockCipher r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.cipher = r0
            r1.cipher = r2
            int r3 = r3 / 8
            r1.blockSize = r3
            int r3 = r2.getBlockSize()
            byte[] r3 = new byte[r3]
            r1.IV = r3
            int r3 = r2.getBlockSize()
            byte[] r3 = new byte[r3]
            r1.cfbV = r3
            int r2 = r2.getBlockSize()
            byte[] r2 = new byte[r2]
            r1.cfbOutV = r2
            return
    }

    public int decryptBlock(byte[] r5, int r6, byte[] r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r4 = this;
            int r0 = r4.blockSize
            int r1 = r6 + r0
            int r2 = r5.length
            if (r1 > r2) goto L45
            int r0 = r0 + r8
            int r1 = r7.length
            if (r0 > r1) goto L3d
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            byte[] r1 = r4.cfbV
            byte[] r2 = r4.cfbOutV
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            byte[] r0 = r4.cfbV
            int r1 = r4.blockSize
            int r2 = r0.length
            int r2 = r2 - r1
            java.lang.System.arraycopy(r0, r1, r0, r3, r2)
            byte[] r0 = r4.cfbV
            int r1 = r0.length
            int r2 = r4.blockSize
            int r1 = r1 - r2
            java.lang.System.arraycopy(r5, r6, r0, r1, r2)
        L27:
            int r0 = r4.blockSize
            if (r3 >= r0) goto L3c
            int r0 = r8 + r3
            byte[] r1 = r4.cfbOutV
            r1 = r1[r3]
            int r2 = r6 + r3
            r2 = r5[r2]
            r1 = r1 ^ r2
            byte r1 = (byte) r1
            r7[r0] = r1
            int r3 = r3 + 1
            goto L27
        L3c:
            return r0
        L3d:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "output buffer too short"
            r5.<init>(r6)
            throw r5
        L45:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "input buffer too short"
            r5.<init>(r6)
            throw r5
    }

    public int encryptBlock(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            int r0 = r5.blockSize
            int r1 = r7 + r0
            int r2 = r6.length
            if (r1 > r2) goto L46
            int r0 = r0 + r9
            int r1 = r8.length
            if (r0 > r1) goto L3e
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.cfbV
            byte[] r2 = r5.cfbOutV
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            r0 = 0
        L16:
            int r1 = r5.blockSize
            if (r0 >= r1) goto L2b
            int r1 = r9 + r0
            byte[] r2 = r5.cfbOutV
            r2 = r2[r0]
            int r4 = r7 + r0
            r4 = r6[r4]
            r2 = r2 ^ r4
            byte r2 = (byte) r2
            r8[r1] = r2
            int r0 = r0 + 1
            goto L16
        L2b:
            byte[] r6 = r5.cfbV
            int r7 = r6.length
            int r7 = r7 - r1
            java.lang.System.arraycopy(r6, r1, r6, r3, r7)
            byte[] r6 = r5.cfbV
            int r7 = r6.length
            int r0 = r5.blockSize
            int r7 = r7 - r0
            java.lang.System.arraycopy(r8, r9, r6, r7, r0)
            int r6 = r5.blockSize
            return r6
        L3e:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L46:
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
            java.lang.String r1 = "/CFB"
            r0.append(r1)
            int r1 = r2.blockSize
            int r1 = r1 * 8
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            int r0 = r1.blockSize
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
            r6.encrypting = r7
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
            byte[] r1 = r4.cfbV
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
