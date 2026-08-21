package org.bouncycastle.crypto.modes;

public class OpenPGPCFBBlockCipher implements org.bouncycastle.crypto.BlockCipher {
    private byte[] FR;
    private byte[] FRE;
    private byte[] IV;
    private int blockSize;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private int count;
    private boolean forEncryption;
    private byte[] tmp;

    public OpenPGPCFBBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            r1.cipher = r2
            int r2 = r2.getBlockSize()
            r1.blockSize = r2
            byte[] r0 = new byte[r2]
            r1.IV = r0
            byte[] r0 = new byte[r2]
            r1.FR = r0
            byte[] r0 = new byte[r2]
            r1.FRE = r0
            byte[] r2 = new byte[r2]
            r1.tmp = r2
            return
    }

    private int decryptBlock(byte[] r9, int r10, byte[] r11, int r12) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r8 = this;
            int r0 = r8.blockSize
            int r1 = r10 + r0
            int r2 = r9.length
            if (r1 > r2) goto Lff
            int r1 = r12 + r0
            int r2 = r11.length
            if (r1 > r2) goto Lf7
            int r1 = r8.count
            r2 = 1
            r3 = 2
            r4 = 0
            if (r1 <= r0) goto L67
            byte[] r1 = r8.tmp
            java.lang.System.arraycopy(r9, r10, r1, r4, r0)
            byte[] r9 = r8.tmp
            r9 = r9[r4]
            int r10 = r8.blockSize
            int r10 = r10 - r3
            byte r9 = r8.encryptByte(r9, r10)
            r11[r12] = r9
            int r9 = r12 + 1
            byte[] r10 = r8.tmp
            r10 = r10[r2]
            int r0 = r8.blockSize
            int r0 = r0 - r2
            byte r10 = r8.encryptByte(r10, r0)
            r11[r9] = r10
            byte[] r9 = r8.tmp
            byte[] r10 = r8.FR
            int r0 = r8.blockSize
            int r0 = r0 - r3
            java.lang.System.arraycopy(r9, r4, r10, r0, r3)
            org.bouncycastle.crypto.BlockCipher r9 = r8.cipher
            byte[] r10 = r8.FR
            byte[] r0 = r8.FRE
            r9.processBlock(r10, r4, r0, r4)
            r9 = 2
        L48:
            int r10 = r8.blockSize
            if (r9 >= r10) goto L5d
            int r10 = r12 + r9
            byte[] r0 = r8.tmp
            r0 = r0[r9]
            int r1 = r9 + (-2)
            byte r0 = r8.encryptByte(r0, r1)
            r11[r10] = r0
            int r9 = r9 + 1
            goto L48
        L5d:
            byte[] r9 = r8.tmp
            byte[] r11 = r8.FR
            int r10 = r10 - r3
            java.lang.System.arraycopy(r9, r3, r11, r4, r10)
            goto Lf4
        L67:
            if (r1 != 0) goto L8f
            org.bouncycastle.crypto.BlockCipher r12 = r8.cipher
            byte[] r0 = r8.FR
            byte[] r1 = r8.FRE
            r12.processBlock(r0, r4, r1, r4)
        L72:
            int r12 = r8.blockSize
            if (r4 >= r12) goto L89
            byte[] r12 = r8.FR
            int r0 = r10 + r4
            r1 = r9[r0]
            r12[r4] = r1
            r12 = r9[r0]
            byte r12 = r8.encryptByte(r12, r4)
            r11[r4] = r12
            int r4 = r4 + 1
            goto L72
        L89:
            int r9 = r8.count
            int r9 = r9 + r12
        L8c:
            r8.count = r9
            goto Lf4
        L8f:
            if (r1 != r0) goto Lf4
            byte[] r1 = r8.tmp
            java.lang.System.arraycopy(r9, r10, r1, r4, r0)
            org.bouncycastle.crypto.BlockCipher r0 = r8.cipher
            byte[] r1 = r8.FR
            byte[] r5 = r8.FRE
            r0.processBlock(r1, r4, r5, r4)
            byte[] r0 = r8.tmp
            r0 = r0[r4]
            byte r0 = r8.encryptByte(r0, r4)
            r11[r12] = r0
            int r0 = r12 + 1
            byte[] r1 = r8.tmp
            r1 = r1[r2]
            byte r1 = r8.encryptByte(r1, r2)
            r11[r0] = r1
            byte[] r0 = r8.FR
            int r1 = r8.blockSize
            int r1 = r1 - r3
            java.lang.System.arraycopy(r0, r3, r0, r4, r1)
            byte[] r0 = r8.FR
            int r1 = r8.blockSize
            int r5 = r1 + (-2)
            byte[] r6 = r8.tmp
            r7 = r6[r4]
            r0[r5] = r7
            int r1 = r1 - r2
            r2 = r6[r2]
            r0[r1] = r2
            org.bouncycastle.crypto.BlockCipher r1 = r8.cipher
            byte[] r2 = r8.FRE
            r1.processBlock(r0, r4, r2, r4)
        Ld5:
            int r0 = r8.blockSize
            if (r3 >= r0) goto Lf0
            byte[] r0 = r8.FR
            int r1 = r3 + (-2)
            int r2 = r10 + r3
            r4 = r9[r2]
            r0[r1] = r4
            int r0 = r12 + r3
            r2 = r9[r2]
            byte r1 = r8.encryptByte(r2, r1)
            r11[r0] = r1
            int r3 = r3 + 1
            goto Ld5
        Lf0:
            int r9 = r8.count
            int r9 = r9 + r0
            goto L8c
        Lf4:
            int r9 = r8.blockSize
            return r9
        Lf7:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "output buffer too short"
            r9.<init>(r10)
            throw r9
        Lff:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "input buffer too short"
            r9.<init>(r10)
            throw r9
    }

    private int encryptBlock(byte[] r9, int r10, byte[] r11, int r12) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r8 = this;
            int r0 = r8.blockSize
            int r1 = r10 + r0
            int r2 = r9.length
            if (r1 > r2) goto Lec
            int r1 = r12 + r0
            int r2 = r11.length
            if (r1 > r2) goto Le4
            int r1 = r8.count
            r2 = 1
            r3 = 0
            r4 = 2
            if (r1 <= r0) goto L5f
            byte[] r1 = r8.FR
            int r5 = r0 + (-2)
            r6 = r9[r10]
            int r0 = r0 - r4
            byte r0 = r8.encryptByte(r6, r0)
            r11[r12] = r0
            r1[r5] = r0
            byte[] r0 = r8.FR
            int r1 = r8.blockSize
            int r5 = r1 + (-1)
            int r6 = r12 + 1
            int r7 = r10 + 1
            r7 = r9[r7]
            int r1 = r1 - r2
            byte r1 = r8.encryptByte(r7, r1)
            r11[r6] = r1
            r0[r5] = r1
            org.bouncycastle.crypto.BlockCipher r0 = r8.cipher
            byte[] r1 = r8.FR
            byte[] r2 = r8.FRE
            r0.processBlock(r1, r3, r2, r3)
            r0 = 2
        L41:
            int r1 = r8.blockSize
            if (r0 >= r1) goto L56
            int r1 = r12 + r0
            int r2 = r10 + r0
            r2 = r9[r2]
            int r5 = r0 + (-2)
            byte r2 = r8.encryptByte(r2, r5)
            r11[r1] = r2
            int r0 = r0 + 1
            goto L41
        L56:
            int r12 = r12 + r4
            byte[] r9 = r8.FR
            int r1 = r1 - r4
            java.lang.System.arraycopy(r11, r12, r9, r3, r1)
            goto Le1
        L5f:
            if (r1 != 0) goto L8b
            org.bouncycastle.crypto.BlockCipher r0 = r8.cipher
            byte[] r1 = r8.FR
            byte[] r2 = r8.FRE
            r0.processBlock(r1, r3, r2, r3)
            r0 = 0
        L6b:
            int r1 = r8.blockSize
            if (r0 >= r1) goto L7e
            int r1 = r12 + r0
            int r2 = r10 + r0
            r2 = r9[r2]
            byte r2 = r8.encryptByte(r2, r0)
            r11[r1] = r2
            int r0 = r0 + 1
            goto L6b
        L7e:
            byte[] r9 = r8.FR
            java.lang.System.arraycopy(r11, r12, r9, r3, r1)
        L83:
            int r9 = r8.count
            int r10 = r8.blockSize
            int r9 = r9 + r10
            r8.count = r9
            goto Le1
        L8b:
            if (r1 != r0) goto Le1
            org.bouncycastle.crypto.BlockCipher r0 = r8.cipher
            byte[] r1 = r8.FR
            byte[] r5 = r8.FRE
            r0.processBlock(r1, r3, r5, r3)
            r0 = r9[r10]
            byte r0 = r8.encryptByte(r0, r3)
            r11[r12] = r0
            int r0 = r12 + 1
            int r1 = r10 + 1
            r1 = r9[r1]
            byte r1 = r8.encryptByte(r1, r2)
            r11[r0] = r1
            byte[] r0 = r8.FR
            int r1 = r8.blockSize
            int r1 = r1 - r4
            java.lang.System.arraycopy(r0, r4, r0, r3, r1)
            byte[] r0 = r8.FR
            int r1 = r8.blockSize
            int r1 = r1 - r4
            java.lang.System.arraycopy(r11, r12, r0, r1, r4)
            org.bouncycastle.crypto.BlockCipher r0 = r8.cipher
            byte[] r1 = r8.FR
            byte[] r2 = r8.FRE
            r0.processBlock(r1, r3, r2, r3)
            r0 = 2
        Lc4:
            int r1 = r8.blockSize
            if (r0 >= r1) goto Ld9
            int r1 = r12 + r0
            int r2 = r10 + r0
            r2 = r9[r2]
            int r5 = r0 + (-2)
            byte r2 = r8.encryptByte(r2, r5)
            r11[r1] = r2
            int r0 = r0 + 1
            goto Lc4
        Ld9:
            int r12 = r12 + r4
            byte[] r9 = r8.FR
            int r1 = r1 - r4
            java.lang.System.arraycopy(r11, r12, r9, r3, r1)
            goto L83
        Le1:
            int r9 = r8.blockSize
            return r9
        Le4:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "output buffer too short"
            r9.<init>(r10)
            throw r9
        Lec:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "input buffer too short"
            r9.<init>(r10)
            throw r9
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
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/OpenPGPCFB"
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
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) throws java.lang.IllegalArgumentException {
            r1 = this;
            r1.forEncryption = r2
            r1.reset()
            org.bouncycastle.crypto.BlockCipher r2 = r1.cipher
            r0 = 1
            r2.init(r0, r3)
            return
    }

    @Override
    public int processBlock(byte[] r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r1 = this;
            boolean r0 = r1.forEncryption
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
            r0 = 0
            r4.count = r0
            byte[] r1 = r4.IV
            byte[] r2 = r4.FR
            int r3 = r2.length
            java.lang.System.arraycopy(r1, r0, r2, r0, r3)
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            r0.reset()
            return
    }
}
