package org.bouncycastle.crypto.modes;

public class OFBBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    private byte[] IV;
    private final int blockSize;
    private final org.bouncycastle.crypto.BlockCipher cipher;
    private byte[] ofbOutV;
    private byte[] ofbV;

    public OFBBlockCipher(org.bouncycastle.crypto.BlockCipher r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            int r2 = r2 / 8
            r0.blockSize = r2
            int r2 = r1.getBlockSize()
            byte[] r2 = new byte[r2]
            r0.IV = r2
            int r2 = r1.getBlockSize()
            byte[] r2 = new byte[r2]
            r0.ofbV = r2
            int r1 = r1.getBlockSize()
            byte[] r1 = new byte[r1]
            r0.ofbOutV = r1
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
            java.lang.String r1 = "/OFB"
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
            boolean r7 = r8 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            r0 = 1
            if (r7 == 0) goto L34
            org.bouncycastle.crypto.params.ParametersWithIV r8 = (org.bouncycastle.crypto.params.ParametersWithIV) r8
            byte[] r7 = r8.getIV()
            int r1 = r7.length
            byte[] r2 = r6.IV
            int r3 = r2.length
            r4 = 0
            if (r1 >= r3) goto L26
            int r1 = r2.length
            int r3 = r7.length
            int r1 = r1 - r3
            int r3 = r7.length
            java.lang.System.arraycopy(r7, r4, r2, r1, r3)
            r1 = 0
        L1a:
            byte[] r2 = r6.IV
            int r3 = r2.length
            int r5 = r7.length
            int r3 = r3 - r5
            if (r1 >= r3) goto L2a
            r2[r1] = r4
            int r1 = r1 + 1
            goto L1a
        L26:
            int r1 = r2.length
            java.lang.System.arraycopy(r7, r4, r2, r4, r1)
        L2a:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r7 = r6.cipher
            org.bouncycastle.crypto.CipherParameters r8 = r8.getParameters()
            goto L39
        L34:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r7 = r6.cipher
        L39:
            r7.init(r0, r8)
            return
    }

    @Override
    public int processBlock(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            int r0 = r5.blockSize
            int r1 = r7 + r0
            int r2 = r6.length
            if (r1 > r2) goto L48
            int r0 = r0 + r9
            int r1 = r8.length
            if (r0 > r1) goto L40
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.ofbV
            byte[] r2 = r5.ofbOutV
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            r0 = 0
        L16:
            int r1 = r5.blockSize
            if (r0 >= r1) goto L2b
            int r1 = r9 + r0
            byte[] r2 = r5.ofbOutV
            r2 = r2[r0]
            int r4 = r7 + r0
            r4 = r6[r4]
            r2 = r2 ^ r4
            byte r2 = (byte) r2
            r8[r1] = r2
            int r0 = r0 + 1
            goto L16
        L2b:
            byte[] r6 = r5.ofbV
            int r7 = r6.length
            int r7 = r7 - r1
            java.lang.System.arraycopy(r6, r1, r6, r3, r7)
            byte[] r6 = r5.ofbOutV
            byte[] r7 = r5.ofbV
            int r8 = r7.length
            int r9 = r5.blockSize
            int r8 = r8 - r9
            java.lang.System.arraycopy(r6, r3, r7, r8, r9)
            int r6 = r5.blockSize
            return r6
        L40:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L48:
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
