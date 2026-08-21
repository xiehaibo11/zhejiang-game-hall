package org.bouncycastle.crypto.paddings;

public class PaddedBufferedBlockCipher extends org.bouncycastle.crypto.BufferedBlockCipher {
    org.bouncycastle.crypto.paddings.BlockCipherPadding padding;

    public PaddedBufferedBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            org.bouncycastle.crypto.paddings.PKCS7Padding r0 = new org.bouncycastle.crypto.paddings.PKCS7Padding
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    public PaddedBufferedBlockCipher(org.bouncycastle.crypto.BlockCipher r1, org.bouncycastle.crypto.paddings.BlockCipherPadding r2) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            r0.padding = r2
            int r1 = r1.getBlockSize()
            byte[] r1 = new byte[r1]
            r0.buf = r1
            r1 = 0
            r0.bufOff = r1
            return
    }

    @Override
    public int doFinal(byte[] r6, int r7) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r5 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            int r0 = r0.getBlockSize()
            boolean r1 = r5.forEncryption
            r2 = 0
            if (r1 == 0) goto L43
            int r1 = r5.bufOff
            if (r1 != r0) goto L2b
            int r0 = r0 * 2
            int r0 = r0 + r7
            int r1 = r6.length
            if (r0 > r1) goto L20
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.buf
            int r0 = r0.processBlock(r1, r2, r6, r7)
            r5.bufOff = r2
            goto L2c
        L20:
            r5.reset()
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L2b:
            r0 = 0
        L2c:
            org.bouncycastle.crypto.paddings.BlockCipherPadding r1 = r5.padding
            byte[] r3 = r5.buf
            int r4 = r5.bufOff
            r1.addPadding(r3, r4)
            org.bouncycastle.crypto.BlockCipher r1 = r5.cipher
            byte[] r3 = r5.buf
            int r7 = r7 + r0
            int r6 = r1.processBlock(r3, r2, r6, r7)
            int r0 = r0 + r6
        L3f:
            r5.reset()
            goto L62
        L43:
            int r1 = r5.bufOff
            if (r1 != r0) goto L68
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            byte[] r1 = r5.buf
            byte[] r3 = r5.buf
            int r0 = r0.processBlock(r1, r2, r3, r2)
            r5.bufOff = r2
            org.bouncycastle.crypto.paddings.BlockCipherPadding r1 = r5.padding     // Catch: java.lang.Throwable -> L63
            byte[] r3 = r5.buf     // Catch: java.lang.Throwable -> L63
            int r1 = r1.padCount(r3)     // Catch: java.lang.Throwable -> L63
            int r0 = r0 - r1
            byte[] r1 = r5.buf     // Catch: java.lang.Throwable -> L63
            java.lang.System.arraycopy(r1, r2, r6, r7, r0)     // Catch: java.lang.Throwable -> L63
            goto L3f
        L62:
            return r0
        L63:
            r6 = move-exception
            r5.reset()
            throw r6
        L68:
            r5.reset()
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "last block incomplete in decryption"
            r6.<init>(r7)
            throw r6
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
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) throws java.lang.IllegalArgumentException {
            r2 = this;
            r2.forEncryption = r3
            r2.reset()
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L1b
            org.bouncycastle.crypto.params.ParametersWithRandom r4 = (org.bouncycastle.crypto.params.ParametersWithRandom) r4
            org.bouncycastle.crypto.paddings.BlockCipherPadding r0 = r2.padding
            java.security.SecureRandom r1 = r4.getRandom()
            r0.init(r1)
            org.bouncycastle.crypto.BlockCipher r0 = r2.cipher
            org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
            goto L23
        L1b:
            org.bouncycastle.crypto.paddings.BlockCipherPadding r0 = r2.padding
            r1 = 0
            r0.init(r1)
            org.bouncycastle.crypto.BlockCipher r0 = r2.cipher
        L23:
            r0.init(r3, r4)
            return
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
