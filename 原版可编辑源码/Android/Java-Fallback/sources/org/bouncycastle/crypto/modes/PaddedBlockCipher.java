package org.bouncycastle.crypto.modes;

public class PaddedBlockCipher extends org.bouncycastle.crypto.BufferedBlockCipher {
    public PaddedBlockCipher(org.bouncycastle.crypto.BlockCipher r1) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            int r1 = r1.getBlockSize()
            byte[] r1 = new byte[r1]
            r0.buf = r1
            r1 = 0
            r0.bufOff = r1
            return
    }

    @Override
    public int doFinal(byte[] r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r6 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            int r0 = r0.getBlockSize()
            boolean r1 = r6.forEncryption
            r2 = 0
            if (r1 == 0) goto L4a
            int r1 = r6.bufOff
            if (r1 != r0) goto L28
            int r1 = r0 * 2
            int r1 = r1 + r8
            int r3 = r7.length
            if (r1 > r3) goto L20
            org.bouncycastle.crypto.BlockCipher r1 = r6.cipher
            byte[] r3 = r6.buf
            int r1 = r1.processBlock(r3, r2, r7, r8)
            r6.bufOff = r2
            goto L29
        L20:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        L28:
            r1 = 0
        L29:
            int r3 = r6.bufOff
            int r3 = r0 - r3
            byte r3 = (byte) r3
        L2e:
            int r4 = r6.bufOff
            if (r4 >= r0) goto L3f
            byte[] r4 = r6.buf
            int r5 = r6.bufOff
            r4[r5] = r3
            int r4 = r6.bufOff
            int r4 = r4 + 1
            r6.bufOff = r4
            goto L2e
        L3f:
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            byte[] r3 = r6.buf
            int r8 = r8 + r1
            int r7 = r0.processBlock(r3, r2, r7, r8)
            int r1 = r1 + r7
            goto L6c
        L4a:
            int r1 = r6.bufOff
            if (r1 != r0) goto L78
            org.bouncycastle.crypto.BlockCipher r1 = r6.cipher
            byte[] r3 = r6.buf
            byte[] r4 = r6.buf
            int r1 = r1.processBlock(r3, r2, r4, r2)
            r6.bufOff = r2
            byte[] r3 = r6.buf
            int r4 = r0 + (-1)
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            if (r3 < 0) goto L70
            if (r3 > r0) goto L70
            int r1 = r1 - r3
            byte[] r0 = r6.buf
            java.lang.System.arraycopy(r0, r2, r7, r8, r1)
        L6c:
            r6.reset()
            return r1
        L70:
            org.bouncycastle.crypto.InvalidCipherTextException r7 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r8 = "pad block corrupted"
            r7.<init>(r8)
            throw r7
        L78:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "last block incomplete in decryption"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public int getOutputSize(int r2) {
            r1 = this;
            int r0 = r1.bufOff
            int r2 = r2 + r0
            byte[] r0 = r1.buf
            int r0 = r0.length
            int r0 = r2 % r0
            if (r0 != 0) goto L13
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto L12
            byte[] r0 = r1.buf
            int r0 = r0.length
        L11:
            int r2 = r2 + r0
        L12:
            return r2
        L13:
            int r2 = r2 - r0
            byte[] r0 = r1.buf
            int r0 = r0.length
            goto L11
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
    public int processByte(byte r4, byte[] r5, int r6) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r3 = this;
            int r0 = r3.bufOff
            byte[] r1 = r3.buf
            int r1 = r1.length
            r2 = 0
            if (r0 != r1) goto L13
            org.bouncycastle.crypto.BlockCipher r0 = r3.cipher
            byte[] r1 = r3.buf
            int r5 = r0.processBlock(r1, r2, r5, r6)
            r3.bufOff = r2
            r2 = r5
        L13:
            byte[] r5 = r3.buf
            int r6 = r3.bufOff
            int r0 = r6 + 1
            r3.bufOff = r0
            r5[r6] = r4
            return r2
    }

    @Override
    public int processBytes(byte[] r6, int r7, int r8, byte[] r9, int r10) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r5 = this;
            if (r8 < 0) goto L55
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
            int r1 = r1.length
            int r2 = r5.bufOff
            int r1 = r1 - r2
            r2 = 0
            if (r8 <= r1) goto L48
            byte[] r3 = r5.buf
            int r4 = r5.bufOff
            java.lang.System.arraycopy(r6, r7, r3, r4, r1)
            org.bouncycastle.crypto.BlockCipher r3 = r5.cipher
            byte[] r4 = r5.buf
            int r3 = r3.processBlock(r4, r2, r9, r10)
            int r3 = r3 + r2
            r5.bufOff = r2
            int r8 = r8 - r1
            int r7 = r7 + r1
            r2 = r3
        L37:
            byte[] r1 = r5.buf
            int r1 = r1.length
            if (r8 <= r1) goto L48
            org.bouncycastle.crypto.BlockCipher r1 = r5.cipher
            int r3 = r10 + r2
            int r1 = r1.processBlock(r6, r7, r9, r3)
            int r2 = r2 + r1
            int r8 = r8 - r0
            int r7 = r7 + r0
            goto L37
        L48:
            byte[] r9 = r5.buf
            int r10 = r5.bufOff
            java.lang.System.arraycopy(r6, r7, r9, r10, r8)
            int r6 = r5.bufOff
            int r6 = r6 + r8
            r5.bufOff = r6
            return r2
        L55:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "Can't have a negative input length!"
            r6.<init>(r7)
            throw r6
    }
}
