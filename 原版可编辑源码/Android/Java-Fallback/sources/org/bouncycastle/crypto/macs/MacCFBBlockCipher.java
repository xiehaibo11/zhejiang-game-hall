package org.bouncycastle.crypto.macs;

class MacCFBBlockCipher {
    private byte[] IV;
    private int blockSize;
    private byte[] cfbOutV;
    private byte[] cfbV;
    private org.bouncycastle.crypto.BlockCipher cipher;

    public MacCFBBlockCipher(org.bouncycastle.crypto.BlockCipher r2, int r3) {
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

    public int getBlockSize() {
            r1 = this;
            int r0 = r1.blockSize
            return r0
    }

    void getMacBlock(byte[] r4) {
            r3 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r3.cipher
            byte[] r1 = r3.cfbV
            r2 = 0
            r0.processBlock(r1, r2, r4, r2)
            return
    }

    public void init(org.bouncycastle.crypto.CipherParameters r7) throws java.lang.IllegalArgumentException {
            r6 = this;
            boolean r0 = r7 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            r1 = 1
            if (r0 == 0) goto L28
            org.bouncycastle.crypto.params.ParametersWithIV r7 = (org.bouncycastle.crypto.params.ParametersWithIV) r7
            byte[] r0 = r7.getIV()
            int r2 = r0.length
            byte[] r3 = r6.IV
            int r4 = r3.length
            r5 = 0
            if (r2 >= r4) goto L1a
            int r2 = r3.length
            int r4 = r0.length
            int r2 = r2 - r4
            int r4 = r0.length
            java.lang.System.arraycopy(r0, r5, r3, r2, r4)
            goto L1e
        L1a:
            int r2 = r3.length
            java.lang.System.arraycopy(r0, r5, r3, r5, r2)
        L1e:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            org.bouncycastle.crypto.CipherParameters r7 = r7.getParameters()
            goto L2d
        L28:
            r6.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
        L2d:
            r0.init(r1, r7)
            return
    }

    public int processBlock(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
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
