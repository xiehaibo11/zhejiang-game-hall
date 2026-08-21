package org.bouncycastle.crypto.modes;

public class CTSBlockCipher extends org.bouncycastle.crypto.BufferedBlockCipher {
    private int blockSize;

    public CTSBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = r2 instanceof org.bouncycastle.crypto.modes.OFBBlockCipher
            if (r0 != 0) goto L1d
            boolean r0 = r2 instanceof org.bouncycastle.crypto.modes.CFBBlockCipher
            if (r0 != 0) goto L1d
            r1.cipher = r2
            int r2 = r2.getBlockSize()
            r1.blockSize = r2
            int r2 = r2 * 2
            byte[] r2 = new byte[r2]
            r1.buf = r2
            r2 = 0
            r1.bufOff = r2
            return
        L1d:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "CTSBlockCipher can only accept ECB, or CBC ciphers"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public int doFinal(byte[] r10, int r11) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r9 = this;
            int r0 = r9.bufOff
            int r0 = r0 + r11
            int r1 = r10.length
            if (r0 > r1) goto Lb4
            org.bouncycastle.crypto.BlockCipher r0 = r9.cipher
            int r0 = r0.getBlockSize()
            int r1 = r9.bufOff
            int r1 = r1 - r0
            byte[] r2 = new byte[r0]
            boolean r3 = r9.forEncryption
            r4 = 0
            if (r3 == 0) goto L6f
            org.bouncycastle.crypto.BlockCipher r3 = r9.cipher
            byte[] r5 = r9.buf
            r3.processBlock(r5, r4, r2, r4)
            int r3 = r9.bufOff
            if (r3 < r0) goto L67
            int r3 = r9.bufOff
        L23:
            byte[] r5 = r9.buf
            int r5 = r5.length
            if (r3 == r5) goto L33
            byte[] r5 = r9.buf
            int r6 = r3 - r0
            r6 = r2[r6]
            r5[r3] = r6
            int r3 = r3 + 1
            goto L23
        L33:
            r3 = r0
        L34:
            int r5 = r9.bufOff
            if (r3 == r5) goto L47
            byte[] r5 = r9.buf
            r6 = r5[r3]
            int r7 = r3 - r0
            r7 = r2[r7]
            r6 = r6 ^ r7
            byte r6 = (byte) r6
            r5[r3] = r6
            int r3 = r3 + 1
            goto L34
        L47:
            org.bouncycastle.crypto.BlockCipher r3 = r9.cipher
            boolean r3 = r3 instanceof org.bouncycastle.crypto.modes.CBCBlockCipher
            if (r3 == 0) goto L5b
            org.bouncycastle.crypto.BlockCipher r3 = r9.cipher
            org.bouncycastle.crypto.modes.CBCBlockCipher r3 = (org.bouncycastle.crypto.modes.CBCBlockCipher) r3
            org.bouncycastle.crypto.BlockCipher r3 = r3.getUnderlyingCipher()
            byte[] r5 = r9.buf
            r3.processBlock(r5, r0, r10, r11)
            goto L62
        L5b:
            org.bouncycastle.crypto.BlockCipher r3 = r9.cipher
            byte[] r5 = r9.buf
            r3.processBlock(r5, r0, r10, r11)
        L62:
            int r11 = r11 + r0
            java.lang.System.arraycopy(r2, r4, r10, r11, r1)
            goto Lae
        L67:
            org.bouncycastle.crypto.DataLengthException r10 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r11 = "need at least one block of input for CTS"
            r10.<init>(r11)
            throw r10
        L6f:
            byte[] r3 = new byte[r0]
            org.bouncycastle.crypto.BlockCipher r5 = r9.cipher
            boolean r5 = r5 instanceof org.bouncycastle.crypto.modes.CBCBlockCipher
            if (r5 == 0) goto L85
            org.bouncycastle.crypto.BlockCipher r5 = r9.cipher
            org.bouncycastle.crypto.modes.CBCBlockCipher r5 = (org.bouncycastle.crypto.modes.CBCBlockCipher) r5
            org.bouncycastle.crypto.BlockCipher r5 = r5.getUnderlyingCipher()
            byte[] r6 = r9.buf
            r5.processBlock(r6, r4, r2, r4)
            goto L8c
        L85:
            org.bouncycastle.crypto.BlockCipher r5 = r9.cipher
            byte[] r6 = r9.buf
            r5.processBlock(r6, r4, r2, r4)
        L8c:
            r5 = r0
        L8d:
            int r6 = r9.bufOff
            if (r5 == r6) goto La0
            int r6 = r5 - r0
            r7 = r2[r6]
            byte[] r8 = r9.buf
            r8 = r8[r5]
            r7 = r7 ^ r8
            byte r7 = (byte) r7
            r3[r6] = r7
            int r5 = r5 + 1
            goto L8d
        La0:
            byte[] r5 = r9.buf
            java.lang.System.arraycopy(r5, r0, r2, r4, r1)
            org.bouncycastle.crypto.BlockCipher r5 = r9.cipher
            r5.processBlock(r2, r4, r10, r11)
            int r11 = r11 + r0
            java.lang.System.arraycopy(r3, r4, r10, r11, r1)
        Lae:
            int r10 = r9.bufOff
            r9.reset()
            return r10
        Lb4:
            org.bouncycastle.crypto.DataLengthException r10 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r11 = "output buffer to small in doFinal"
            r10.<init>(r11)
            throw r10
    }

    @Override
    public int getOutputSize(int r2) {
            r1 = this;
            int r0 = r1.bufOff
            int r2 = r2 + r0
            return r2
    }

    @Override
    public int getUpdateOutputSize(int r2) {
            r1 = this;
            int r0 = r1.bufOff
            int r2 = r2 + r0
            byte[] r0 = r1.buf
            int r0 = r0.length
            int r0 = r2 % r0
            if (r0 != 0) goto Lf
            byte[] r0 = r1.buf
            int r0 = r0.length
            int r2 = r2 - r0
            return r2
        Lf:
            int r2 = r2 - r0
            return r2
    }

    @Override
    public int processByte(byte r5, byte[] r6, int r7) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r4 = this;
            int r0 = r4.bufOff
            byte[] r1 = r4.buf
            int r1 = r1.length
            r2 = 0
            if (r0 != r1) goto L20
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            byte[] r1 = r4.buf
            int r6 = r0.processBlock(r1, r2, r6, r7)
            byte[] r7 = r4.buf
            int r0 = r4.blockSize
            byte[] r1 = r4.buf
            int r3 = r4.blockSize
            java.lang.System.arraycopy(r7, r0, r1, r2, r3)
            int r7 = r4.blockSize
            r4.bufOff = r7
            r2 = r6
        L20:
            byte[] r6 = r4.buf
            int r7 = r4.bufOff
            int r0 = r7 + 1
            r4.bufOff = r0
            r6[r7] = r5
            return r2
    }

    @Override
    public int processBytes(byte[] r7, int r8, int r9, byte[] r10, int r11) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r6 = this;
            if (r9 < 0) goto L69
            int r0 = r6.getBlockSize()
            int r1 = r6.getUpdateOutputSize(r9)
            if (r1 <= 0) goto L19
            int r1 = r1 + r11
            int r2 = r10.length
            if (r1 > r2) goto L11
            goto L19
        L11:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        L19:
            byte[] r1 = r6.buf
            int r1 = r1.length
            int r2 = r6.bufOff
            int r1 = r1 - r2
            r2 = 0
            if (r9 <= r1) goto L5c
            byte[] r3 = r6.buf
            int r4 = r6.bufOff
            java.lang.System.arraycopy(r7, r8, r3, r4, r1)
            org.bouncycastle.crypto.BlockCipher r3 = r6.cipher
            byte[] r4 = r6.buf
            int r3 = r3.processBlock(r4, r2, r10, r11)
            int r3 = r3 + r2
            byte[] r4 = r6.buf
            byte[] r5 = r6.buf
            java.lang.System.arraycopy(r4, r0, r5, r2, r0)
            r6.bufOff = r0
            int r9 = r9 - r1
            int r8 = r8 + r1
        L3d:
            if (r9 <= r0) goto L5b
            byte[] r1 = r6.buf
            int r4 = r6.bufOff
            java.lang.System.arraycopy(r7, r8, r1, r4, r0)
            org.bouncycastle.crypto.BlockCipher r1 = r6.cipher
            byte[] r4 = r6.buf
            int r5 = r11 + r3
            int r1 = r1.processBlock(r4, r2, r10, r5)
            int r3 = r3 + r1
            byte[] r1 = r6.buf
            byte[] r4 = r6.buf
            java.lang.System.arraycopy(r1, r0, r4, r2, r0)
            int r9 = r9 - r0
            int r8 = r8 + r0
            goto L3d
        L5b:
            r2 = r3
        L5c:
            byte[] r10 = r6.buf
            int r11 = r6.bufOff
            java.lang.System.arraycopy(r7, r8, r10, r11, r9)
            int r7 = r6.bufOff
            int r7 = r7 + r9
            r6.bufOff = r7
            return r2
        L69:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Can't have a negative input length!"
            r7.<init>(r8)
            throw r7
    }
}
