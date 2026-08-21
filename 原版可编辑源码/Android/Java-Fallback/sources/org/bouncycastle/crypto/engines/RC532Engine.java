package org.bouncycastle.crypto.engines;

public class RC532Engine implements org.bouncycastle.crypto.BlockCipher {
    private static final int P32 = -1209970333;
    private static final int Q32 = -1640531527;
    private int[] _S;
    private int _noRounds;
    private boolean forEncryption;

    public RC532Engine() {
            r1 = this;
            r1.<init>()
            r0 = 12
            r1._noRounds = r0
            r0 = 0
            r1._S = r0
            return
    }

    private int bytesToWord(byte[] r3, int r4) {
            r2 = this;
            r0 = r3[r4]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r4 + 1
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r1 = r4 + 2
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r4 = r4 + 3
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 24
            r3 = r3 | r0
            return r3
    }

    private int decryptBlock(byte[] r5, int r6, byte[] r7, int r8) {
            r4 = this;
            int r0 = r4.bytesToWord(r5, r6)
            int r6 = r6 + 4
            int r5 = r4.bytesToWord(r5, r6)
            int r6 = r4._noRounds
        Lc:
            r1 = 1
            if (r6 < r1) goto L2a
            int[] r1 = r4._S
            int r2 = r6 * 2
            int r3 = r2 + 1
            r1 = r1[r3]
            int r5 = r5 - r1
            int r5 = r4.rotateRight(r5, r0)
            r5 = r5 ^ r0
            int[] r1 = r4._S
            r1 = r1[r2]
            int r0 = r0 - r1
            int r0 = r4.rotateRight(r0, r5)
            r0 = r0 ^ r5
            int r6 = r6 + (-1)
            goto Lc
        L2a:
            int[] r6 = r4._S
            r2 = 0
            r6 = r6[r2]
            int r0 = r0 - r6
            r4.wordToBytes(r0, r7, r8)
            int[] r6 = r4._S
            r6 = r6[r1]
            int r5 = r5 - r6
            int r8 = r8 + 4
            r4.wordToBytes(r5, r7, r8)
            r5 = 8
            return r5
    }

    private int encryptBlock(byte[] r5, int r6, byte[] r7, int r8) {
            r4 = this;
            int r0 = r4.bytesToWord(r5, r6)
            int[] r1 = r4._S
            r2 = 0
            r1 = r1[r2]
            int r0 = r0 + r1
            int r6 = r6 + 4
            int r5 = r4.bytesToWord(r5, r6)
            int[] r6 = r4._S
            r1 = 1
            r6 = r6[r1]
            int r5 = r5 + r6
            r6 = 1
        L17:
            int r2 = r4._noRounds
            if (r6 > r2) goto L35
            r0 = r0 ^ r5
            int r0 = r4.rotateLeft(r0, r5)
            int[] r2 = r4._S
            int r3 = r6 * 2
            r2 = r2[r3]
            int r0 = r0 + r2
            r5 = r5 ^ r0
            int r5 = r4.rotateLeft(r5, r0)
            int[] r2 = r4._S
            int r3 = r3 + r1
            r2 = r2[r3]
            int r5 = r5 + r2
            int r6 = r6 + 1
            goto L17
        L35:
            r4.wordToBytes(r0, r7, r8)
            int r8 = r8 + 4
            r4.wordToBytes(r5, r7, r8)
            r5 = 8
            return r5
    }

    private int rotateLeft(int r2, int r3) {
            r1 = this;
            r3 = r3 & 31
            int r0 = r2 << r3
            int r3 = 32 - r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private int rotateRight(int r2, int r3) {
            r1 = this;
            r3 = r3 & 31
            int r0 = r2 >>> r3
            int r3 = 32 - r3
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
            int[] r2 = new int[r0]
            r3 = 0
            r4 = 0
        L9:
            int r5 = r12.length
            if (r4 == r5) goto L1f
            int r5 = r4 / 4
            r6 = r2[r5]
            r7 = r12[r4]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r8 = r4 % 4
            int r8 = r8 * 8
            int r7 = r7 << r8
            int r6 = r6 + r7
            r2[r5] = r6
            int r4 = r4 + 1
            goto L9
        L1f:
            int r12 = r11._noRounds
            r4 = 1
            int r12 = r12 + r4
            int r12 = r12 * 2
            int[] r12 = new int[r12]
            r11._S = r12
            r5 = -1209970333(0xffffffffb7e15163, float:-2.6859989E-5)
            r12[r3] = r5
            r12 = 1
        L2f:
            int[] r5 = r11._S
            int r6 = r5.length
            if (r12 >= r6) goto L41
            int r6 = r12 + (-1)
            r6 = r5[r6]
            r7 = -1640531527(0xffffffff9e3779b9, float:-9.713111E-21)
            int r6 = r6 + r7
            r5[r12] = r6
            int r12 = r12 + 1
            goto L2f
        L41:
            int r12 = r5.length
            if (r0 <= r12) goto L47
            int r12 = r0 * 3
            goto L4a
        L47:
            int r12 = r5.length
            int r12 = r12 * 3
        L4a:
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
        L4e:
            if (r3 >= r12) goto L71
            int[] r9 = r11._S
            r10 = r9[r5]
            int r10 = r10 + r6
            int r10 = r10 + r7
            int r6 = r11.rotateLeft(r10, r1)
            r9[r5] = r6
            r9 = r2[r8]
            int r9 = r9 + r6
            int r9 = r9 + r7
            int r7 = r7 + r6
            int r7 = r11.rotateLeft(r9, r7)
            r2[r8] = r7
            int r5 = r5 + r4
            int[] r9 = r11._S
            int r9 = r9.length
            int r5 = r5 % r9
            int r8 = r8 + r4
            int r8 = r8 % r0
            int r3 = r3 + 1
            goto L4e
        L71:
            return
    }

    private void wordToBytes(int r3, byte[] r4, int r5) {
            r2 = this;
            byte r0 = (byte) r3
            r4[r5] = r0
            int r0 = r5 + 1
            int r1 = r3 >> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r5 = r5 + 3
            int r3 = r3 >> 24
            byte r3 = (byte) r3
            r4[r5] = r3
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "RC5-32"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.RC5Parameters
            if (r0 == 0) goto L14
            org.bouncycastle.crypto.params.RC5Parameters r4 = (org.bouncycastle.crypto.params.RC5Parameters) r4
            int r0 = r4.getRounds()
            r2._noRounds = r0
            byte[] r4 = r4.getKey()
            r2.setKey(r4)
            goto L21
        L14:
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L24
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r4 = r4.getKey()
            r2.setKey(r4)
        L21:
            r2.forEncryption = r3
            return
        L24:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to RC532 init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public int processBlock(byte[] r2, int r3, byte[] r4, int r5) {
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
            r0 = this;
            return
    }
}
