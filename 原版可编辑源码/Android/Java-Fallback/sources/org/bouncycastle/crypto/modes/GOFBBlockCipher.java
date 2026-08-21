package org.bouncycastle.crypto.modes;

public class GOFBBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    static final int C1 = 16843012;
    static final int C2 = 16843009;
    private byte[] IV;
    int N3;
    int N4;
    private final int blockSize;
    private final org.bouncycastle.crypto.BlockCipher cipher;
    boolean firstStep;
    private byte[] ofbOutV;
    private byte[] ofbV;

    public GOFBBlockCipher(org.bouncycastle.crypto.BlockCipher r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.firstStep = r0
            r2.cipher = r3
            int r0 = r3.getBlockSize()
            r2.blockSize = r0
            r1 = 8
            if (r0 != r1) goto L2b
            int r0 = r3.getBlockSize()
            byte[] r0 = new byte[r0]
            r2.IV = r0
            int r0 = r3.getBlockSize()
            byte[] r0 = new byte[r0]
            r2.ofbV = r0
            int r3 = r3.getBlockSize()
            byte[] r3 = new byte[r3]
            r2.ofbOutV = r3
            return
        L2b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "GCTR only for 64 bit block ciphers"
            r3.<init>(r0)
            throw r3
    }

    private int bytesToint(byte[] r4, int r5) {
            r3 = this;
            int r0 = r5 + 3
            r0 = r4[r0]
            int r0 = r0 << 24
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r0 & r1
            int r1 = r5 + 2
            r1 = r4[r1]
            int r1 = r1 << 16
            r2 = 16711680(0xff0000, float:2.3418052E-38)
            r1 = r1 & r2
            int r0 = r0 + r1
            int r1 = r5 + 1
            r1 = r4[r1]
            int r1 = r1 << 8
            r2 = 65280(0xff00, float:9.1477E-41)
            r1 = r1 & r2
            int r0 = r0 + r1
            r4 = r4[r5]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r4
            return r0
    }

    private void intTobytes(int r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r5 + 3
            int r1 = r3 >>> 24
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 1
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            byte r3 = (byte) r3
            r4[r5] = r3
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/GCTR"
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
            r7 = 1
            r6.firstStep = r7
            r0 = 0
            r6.N3 = r0
            r6.N4 = r0
            boolean r1 = r8 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r1 == 0) goto L3a
            org.bouncycastle.crypto.params.ParametersWithIV r8 = (org.bouncycastle.crypto.params.ParametersWithIV) r8
            byte[] r1 = r8.getIV()
            int r2 = r1.length
            byte[] r3 = r6.IV
            int r4 = r3.length
            if (r2 >= r4) goto L2c
            int r2 = r3.length
            int r4 = r1.length
            int r2 = r2 - r4
            int r4 = r1.length
            java.lang.System.arraycopy(r1, r0, r3, r2, r4)
            r2 = 0
        L20:
            byte[] r3 = r6.IV
            int r4 = r3.length
            int r5 = r1.length
            int r4 = r4 - r5
            if (r2 >= r4) goto L30
            r3[r2] = r0
            int r2 = r2 + 1
            goto L20
        L2c:
            int r2 = r3.length
            java.lang.System.arraycopy(r1, r0, r3, r0, r2)
        L30:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            org.bouncycastle.crypto.CipherParameters r8 = r8.getParameters()
            goto L3f
        L3a:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
        L3f:
            r0.init(r7, r8)
            return
    }

    @Override
    public int processBlock(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            int r0 = r5.blockSize
            int r1 = r7 + r0
            int r2 = r6.length
            if (r1 > r2) goto L84
            int r0 = r0 + r9
            int r1 = r8.length
            if (r0 > r1) goto L7c
            boolean r0 = r5.firstStep
            r1 = 4
            r2 = 0
            if (r0 == 0) goto L2c
            r5.firstStep = r2
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r3 = r5.ofbV
            byte[] r4 = r5.ofbOutV
            r0.processBlock(r3, r2, r4, r2)
            byte[] r0 = r5.ofbOutV
            int r0 = r5.bytesToint(r0, r2)
            r5.N3 = r0
            byte[] r0 = r5.ofbOutV
            int r0 = r5.bytesToint(r0, r1)
            r5.N4 = r0
        L2c:
            int r0 = r5.N3
            r3 = 16843009(0x1010101, float:2.3694278E-38)
            int r0 = r0 + r3
            r5.N3 = r0
            int r3 = r5.N4
            r4 = 16843012(0x1010104, float:2.3694287E-38)
            int r3 = r3 + r4
            r5.N4 = r3
            byte[] r3 = r5.ofbV
            r5.intTobytes(r0, r3, r2)
            int r0 = r5.N4
            byte[] r3 = r5.ofbV
            r5.intTobytes(r0, r3, r1)
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.ofbV
            byte[] r3 = r5.ofbOutV
            r0.processBlock(r1, r2, r3, r2)
            r0 = 0
        L52:
            int r1 = r5.blockSize
            if (r0 >= r1) goto L67
            int r1 = r9 + r0
            byte[] r3 = r5.ofbOutV
            r3 = r3[r0]
            int r4 = r7 + r0
            r4 = r6[r4]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r8[r1] = r3
            int r0 = r0 + 1
            goto L52
        L67:
            byte[] r6 = r5.ofbV
            int r7 = r6.length
            int r7 = r7 - r1
            java.lang.System.arraycopy(r6, r1, r6, r2, r7)
            byte[] r6 = r5.ofbOutV
            byte[] r7 = r5.ofbV
            int r8 = r7.length
            int r9 = r5.blockSize
            int r8 = r8 - r9
            java.lang.System.arraycopy(r6, r2, r7, r8, r9)
            int r6 = r5.blockSize
            return r6
        L7c:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L84:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "input buffer too short"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public void reset() {
            r4 = this;
            byte[] r0 = r4.IV
            byte[] r1 = r4.ofbV
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
