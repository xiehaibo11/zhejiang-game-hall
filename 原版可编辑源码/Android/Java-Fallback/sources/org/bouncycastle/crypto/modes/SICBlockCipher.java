package org.bouncycastle.crypto.modes;

public class SICBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    private byte[] IV;
    private final int blockSize;
    private final org.bouncycastle.crypto.BlockCipher cipher;
    private byte[] counter;
    private byte[] counterOut;

    public SICBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            r1.cipher = r2
            int r2 = r2.getBlockSize()
            r1.blockSize = r2
            byte[] r0 = new byte[r2]
            r1.IV = r0
            byte[] r0 = new byte[r2]
            r1.counter = r0
            byte[] r2 = new byte[r2]
            r1.counterOut = r2
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
            java.lang.String r1 = "/SIC"
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
    public void init(boolean r4, org.bouncycastle.crypto.CipherParameters r5) throws java.lang.IllegalArgumentException {
            r3 = this;
            boolean r4 = r5 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r4 == 0) goto L1e
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            byte[] r4 = r5.getIV()
            byte[] r0 = r3.IV
            int r1 = r0.length
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)
            r3.reset()
            org.bouncycastle.crypto.BlockCipher r4 = r3.cipher
            r0 = 1
            org.bouncycastle.crypto.CipherParameters r5 = r5.getParameters()
            r4.init(r0, r5)
        L1e:
            return
    }

    @Override
    public int processBlock(byte[] r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.counter
            byte[] r2 = r5.counterOut
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            r0 = 0
        Lb:
            byte[] r1 = r5.counterOut
            int r2 = r1.length
            if (r0 >= r2) goto L1f
            int r2 = r9 + r0
            r1 = r1[r0]
            int r4 = r7 + r0
            r4 = r6[r4]
            r1 = r1 ^ r4
            byte r1 = (byte) r1
            r8[r2] = r1
            int r0 = r0 + 1
            goto Lb
        L1f:
            byte[] r6 = r5.counter
            int r6 = r6.length
            r7 = 1
            int r6 = r6 - r7
            r8 = 1
        L25:
            if (r6 < 0) goto L3c
            byte[] r9 = r5.counter
            r9 = r9[r6]
            r0 = 255(0xff, float:3.57E-43)
            r9 = r9 & r0
            int r9 = r9 + r8
            if (r9 <= r0) goto L33
            r8 = 1
            goto L34
        L33:
            r8 = 0
        L34:
            byte[] r0 = r5.counter
            byte r9 = (byte) r9
            r0[r6] = r9
            int r6 = r6 + (-1)
            goto L25
        L3c:
            byte[] r6 = r5.counter
            int r6 = r6.length
            return r6
    }

    @Override
    public void reset() {
            r4 = this;
            byte[] r0 = r4.IV
            byte[] r1 = r4.counter
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
