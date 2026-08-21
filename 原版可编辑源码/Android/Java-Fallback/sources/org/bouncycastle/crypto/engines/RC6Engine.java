package org.bouncycastle.crypto.engines;

public class RC6Engine implements org.bouncycastle.crypto.BlockCipher {
    private static final int LGW = 5;
    private static final int P32 = -1209970333;
    private static final int Q32 = -1640531527;
    private static final int _noRounds = 20;
    private static final int bytesPerWord = 4;
    private static final int wordSize = 32;
    private int[] _S;
    private boolean forEncryption;

    public RC6Engine() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1._S = r0
            return
    }

    private int bytesToWord(byte[] r4, int r5) {
            r3 = this;
            r0 = 0
            r1 = 3
        L2:
            if (r1 < 0) goto L10
            int r0 = r0 << 8
            int r2 = r1 + r5
            r2 = r4[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r2
            int r1 = r1 + (-1)
            goto L2
        L10:
            return r0
    }

    private int decryptBlock(byte[] r10, int r11, byte[] r12, int r13) {
            r9 = this;
            int r0 = r9.bytesToWord(r10, r11)
            int r1 = r11 + 4
            int r1 = r9.bytesToWord(r10, r1)
            int r2 = r11 + 8
            int r2 = r9.bytesToWord(r10, r2)
            int r11 = r11 + 12
            int r10 = r9.bytesToWord(r10, r11)
            int[] r11 = r9._S
            r3 = 43
            r3 = r11[r3]
            int r2 = r2 - r3
            r3 = 42
            r11 = r11[r3]
            int r0 = r0 - r11
            r11 = 20
        L24:
            r3 = 1
            if (r11 < r3) goto L5a
            int r4 = r0 * 2
            int r4 = r4 + r3
            int r4 = r4 * r0
            r5 = 5
            int r4 = r9.rotateLeft(r4, r5)
            int r6 = r2 * 2
            int r6 = r6 + r3
            int r6 = r6 * r2
            int r3 = r9.rotateLeft(r6, r5)
            int[] r5 = r9._S
            int r6 = r11 * 2
            int r7 = r6 + 1
            r5 = r5[r7]
            int r1 = r1 - r5
            int r1 = r9.rotateRight(r1, r4)
            r1 = r1 ^ r3
            int[] r5 = r9._S
            r5 = r5[r6]
            int r10 = r10 - r5
            int r10 = r9.rotateRight(r10, r3)
            r10 = r10 ^ r4
            int r11 = r11 + (-1)
            r8 = r0
            r0 = r10
            r10 = r2
            r2 = r1
            r1 = r8
            goto L24
        L5a:
            int[] r11 = r9._S
            r3 = r11[r3]
            int r10 = r10 - r3
            r3 = 0
            r11 = r11[r3]
            int r1 = r1 - r11
            r9.wordToBytes(r0, r12, r13)
            int r11 = r13 + 4
            r9.wordToBytes(r1, r12, r11)
            int r11 = r13 + 8
            r9.wordToBytes(r2, r12, r11)
            int r13 = r13 + 12
            r9.wordToBytes(r10, r12, r13)
            r10 = 16
            return r10
    }

    private int encryptBlock(byte[] r10, int r11, byte[] r12, int r13) {
            r9 = this;
            int r0 = r9.bytesToWord(r10, r11)
            int r1 = r11 + 4
            int r1 = r9.bytesToWord(r10, r1)
            int r2 = r11 + 8
            int r2 = r9.bytesToWord(r10, r2)
            int r11 = r11 + 12
            int r10 = r9.bytesToWord(r10, r11)
            int[] r11 = r9._S
            r3 = 0
            r3 = r11[r3]
            int r1 = r1 + r3
            r3 = 1
            r11 = r11[r3]
            int r10 = r10 + r11
            r11 = 1
        L21:
            r4 = 20
            if (r11 > r4) goto L57
            int r4 = r1 * 2
            int r4 = r4 + r3
            int r4 = r4 * r1
            r5 = 5
            int r4 = r9.rotateLeft(r4, r5)
            int r6 = r10 * 2
            int r6 = r6 + r3
            int r6 = r6 * r10
            int r5 = r9.rotateLeft(r6, r5)
            r0 = r0 ^ r4
            int r0 = r9.rotateLeft(r0, r5)
            int[] r6 = r9._S
            int r7 = r11 * 2
            r6 = r6[r7]
            int r0 = r0 + r6
            r2 = r2 ^ r5
            int r2 = r9.rotateLeft(r2, r4)
            int[] r4 = r9._S
            int r7 = r7 + r3
            r4 = r4[r7]
            int r2 = r2 + r4
            int r11 = r11 + 1
            r8 = r2
            r2 = r10
            r10 = r0
            r0 = r1
            r1 = r8
            goto L21
        L57:
            int[] r11 = r9._S
            r3 = 42
            r3 = r11[r3]
            int r0 = r0 + r3
            r3 = 43
            r11 = r11[r3]
            int r2 = r2 + r11
            r9.wordToBytes(r0, r12, r13)
            int r11 = r13 + 4
            r9.wordToBytes(r1, r12, r11)
            int r11 = r13 + 8
            r9.wordToBytes(r2, r12, r11)
            int r13 = r13 + 12
            r9.wordToBytes(r10, r12, r13)
            r10 = 16
            return r10
    }

    private int rotateLeft(int r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            int r3 = -r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private int rotateRight(int r2, int r3) {
            r1 = this;
            int r0 = r2 >>> r3
            int r3 = -r3
            int r2 = r2 << r3
            r2 = r2 | r0
            return r2
    }

    private void setKey(byte[] r12) {
            r11 = this;
            int r0 = r12.length
            r1 = 3
            int r0 = r0 + r1
            int r0 = r0 / 4
            int r0 = r12.length
            int r0 = r0 + 4
            r2 = 1
            int r0 = r0 - r2
            int r0 = r0 / 4
            int[] r3 = new int[r0]
            int r4 = r12.length
            int r4 = r4 - r2
        L10:
            if (r4 < 0) goto L22
            int r5 = r4 / 4
            r6 = r3[r5]
            int r6 = r6 << 8
            r7 = r12[r4]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r6 = r6 + r7
            r3[r5] = r6
            int r4 = r4 + (-1)
            goto L10
        L22:
            r12 = 44
            int[] r12 = new int[r12]
            r11._S = r12
            r4 = -1209970333(0xffffffffb7e15163, float:-2.6859989E-5)
            r5 = 0
            r12[r5] = r4
            r12 = 1
        L2f:
            int[] r4 = r11._S
            int r6 = r4.length
            if (r12 >= r6) goto L41
            int r6 = r12 + (-1)
            r6 = r4[r6]
            r7 = -1640531527(0xffffffff9e3779b9, float:-9.713111E-21)
            int r6 = r6 + r7
            r4[r12] = r6
            int r12 = r12 + 1
            goto L2f
        L41:
            int r12 = r4.length
            if (r0 <= r12) goto L47
            int r12 = r0 * 3
            goto L4a
        L47:
            int r12 = r4.length
            int r12 = r12 * 3
        L4a:
            r4 = 0
            r6 = 0
            r7 = 0
            r8 = 0
        L4e:
            if (r5 >= r12) goto L71
            int[] r9 = r11._S
            r10 = r9[r4]
            int r10 = r10 + r6
            int r10 = r10 + r7
            int r6 = r11.rotateLeft(r10, r1)
            r9[r4] = r6
            r9 = r3[r8]
            int r9 = r9 + r6
            int r9 = r9 + r7
            int r7 = r7 + r6
            int r7 = r11.rotateLeft(r9, r7)
            r3[r8] = r7
            int r4 = r4 + r2
            int[] r9 = r11._S
            int r9 = r9.length
            int r4 = r4 % r9
            int r8 = r8 + r2
            int r8 = r8 % r0
            int r5 = r5 + 1
            goto L4e
        L71:
            return
    }

    private void wordToBytes(int r4, byte[] r5, int r6) {
            r3 = this;
            r0 = 0
        L1:
            r1 = 4
            if (r0 >= r1) goto Le
            int r1 = r0 + r6
            byte r2 = (byte) r4
            r5[r1] = r2
            int r4 = r4 >>> 8
            int r0 = r0 + 1
            goto L1
        Le:
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "RC6"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L10
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            r2.forEncryption = r3
            byte[] r3 = r4.getKey()
            r2.setKey(r3)
            return
        L10:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to RC6 init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public int processBlock(byte[] r4, int r5, byte[] r6, int r7) {
            r3 = this;
            int r0 = r3.getBlockSize()
            int[] r1 = r3._S
            if (r1 == 0) goto L2f
            int r1 = r5 + r0
            int r2 = r4.length
            if (r1 > r2) goto L27
            int r0 = r0 + r7
            int r1 = r6.length
            if (r0 > r1) goto L1f
            boolean r0 = r3.forEncryption
            if (r0 == 0) goto L1a
            int r4 = r3.encryptBlock(r4, r5, r6, r7)
            goto L1e
        L1a:
            int r4 = r3.decryptBlock(r4, r5, r6, r7)
        L1e:
            return r4
        L1f:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "output buffer too short"
            r4.<init>(r5)
            throw r4
        L27:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "input buffer too short"
            r4.<init>(r5)
            throw r4
        L2f:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "RC6 engine not initialised"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
