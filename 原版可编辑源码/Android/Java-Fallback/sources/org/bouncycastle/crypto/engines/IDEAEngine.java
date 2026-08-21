package org.bouncycastle.crypto.engines;

public class IDEAEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int BASE = 65537;
    protected static final int BLOCK_SIZE = 8;
    private static final int MASK = 65535;
    private int[] workingKey;

    public IDEAEngine() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.workingKey = r0
            return
    }

    private int bytesToWord(byte[] r3, int r4) {
            r2 = this;
            r0 = r3[r4]
            int r0 = r0 << 8
            r1 = 65280(0xff00, float:9.1477E-41)
            r0 = r0 & r1
            int r4 = r4 + 1
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r3
            return r0
    }

    private int[] expandKey(byte[] r7) {
            r6 = this;
            r0 = 52
            int[] r1 = new int[r0]
            int r2 = r7.length
            r3 = 0
            r4 = 16
            if (r2 >= r4) goto L13
            byte[] r2 = new byte[r4]
            int r5 = r7.length
            int r4 = r4 - r5
            int r5 = r7.length
            java.lang.System.arraycopy(r7, r3, r2, r4, r5)
            r7 = r2
        L13:
            r2 = 8
            if (r3 >= r2) goto L22
            int r2 = r3 * 2
            int r2 = r6.bytesToWord(r7, r2)
            r1[r3] = r2
            int r3 = r3 + 1
            goto L13
        L22:
            if (r2 >= r0) goto L69
            r7 = r2 & 7
            r3 = 65535(0xffff, float:9.1834E-41)
            r4 = 6
            if (r7 >= r4) goto L3f
            int r7 = r2 + (-7)
            r7 = r1[r7]
            r7 = r7 & 127(0x7f, float:1.78E-43)
            int r7 = r7 << 9
            int r4 = r2 + (-6)
            r4 = r1[r4]
            int r4 = r4 >> 7
            r7 = r7 | r4
            r7 = r7 & r3
            r1[r2] = r7
            goto L66
        L3f:
            if (r7 != r4) goto L54
            int r7 = r2 + (-7)
            r7 = r1[r7]
            r7 = r7 & 127(0x7f, float:1.78E-43)
            int r7 = r7 << 9
            int r4 = r2 + (-14)
            r4 = r1[r4]
            int r4 = r4 >> 7
            r7 = r7 | r4
            r7 = r7 & r3
            r1[r2] = r7
            goto L66
        L54:
            int r7 = r2 + (-15)
            r7 = r1[r7]
            r7 = r7 & 127(0x7f, float:1.78E-43)
            int r7 = r7 << 9
            int r4 = r2 + (-14)
            r4 = r1[r4]
            int r4 = r4 >> 7
            r7 = r7 | r4
            r7 = r7 & r3
            r1[r2] = r7
        L66:
            int r2 = r2 + 1
            goto L22
        L69:
            return r1
    }

    private int[] generateWorkingKey(boolean r1, byte[] r2) {
            r0 = this;
            if (r1 == 0) goto L7
            int[] r1 = r0.expandKey(r2)
            return r1
        L7:
            int[] r1 = r0.expandKey(r2)
            int[] r1 = r0.invertKey(r1)
            return r1
    }

    private void ideaFunc(int[] r9, byte[] r10, int r11, byte[] r12, int r13) {
            r8 = this;
            int r0 = r8.bytesToWord(r10, r11)
            int r1 = r11 + 2
            int r1 = r8.bytesToWord(r10, r1)
            int r2 = r11 + 4
            int r2 = r8.bytesToWord(r10, r2)
            int r11 = r11 + 6
            int r10 = r8.bytesToWord(r10, r11)
            r11 = 0
            r3 = r2
            r2 = r1
            r1 = r0
            r0 = 0
        L1b:
            r4 = 8
            if (r11 >= r4) goto L62
            int r4 = r0 + 1
            r0 = r9[r0]
            int r0 = r8.mul(r1, r0)
            int r1 = r4 + 1
            r4 = r9[r4]
            int r2 = r2 + r4
            r4 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r4
            int r5 = r1 + 1
            r1 = r9[r1]
            int r3 = r3 + r1
            r1 = r3 & r4
            int r3 = r5 + 1
            r5 = r9[r5]
            int r10 = r8.mul(r10, r5)
            r5 = r1 ^ r0
            r6 = r2 ^ r10
            int r7 = r3 + 1
            r3 = r9[r3]
            int r3 = r8.mul(r5, r3)
            int r6 = r6 + r3
            r5 = r6 & r4
            int r6 = r7 + 1
            r7 = r9[r7]
            int r5 = r8.mul(r5, r7)
            int r3 = r3 + r5
            r3 = r3 & r4
            r0 = r0 ^ r5
            r10 = r10 ^ r3
            r1 = r1 ^ r5
            r3 = r3 ^ r2
            int r11 = r11 + 1
            r2 = r1
            r1 = r0
            r0 = r6
            goto L1b
        L62:
            int r11 = r0 + 1
            r0 = r9[r0]
            int r0 = r8.mul(r1, r0)
            r8.wordToBytes(r0, r12, r13)
            int r0 = r11 + 1
            r11 = r9[r11]
            int r3 = r3 + r11
            int r11 = r13 + 2
            r8.wordToBytes(r3, r12, r11)
            int r11 = r0 + 1
            r0 = r9[r0]
            int r2 = r2 + r0
            int r0 = r13 + 4
            r8.wordToBytes(r2, r12, r0)
            r9 = r9[r11]
            int r9 = r8.mul(r10, r9)
            int r13 = r13 + 6
            r8.wordToBytes(r9, r12, r13)
            return
    }

    private int[] invertKey(int[] r9) {
            r8 = this;
            r0 = 52
            int[] r0 = new int[r0]
            r1 = 0
            r1 = r9[r1]
            int r1 = r8.mulInv(r1)
            r2 = 1
            r3 = r9[r2]
            int r3 = r8.addInv(r3)
            r4 = 2
            r4 = r9[r4]
            int r4 = r8.addInv(r4)
            r5 = 3
            r5 = r9[r5]
            int r5 = r8.mulInv(r5)
            r6 = 51
            r0[r6] = r5
            r5 = 50
            r0[r5] = r4
            r4 = 49
            r0[r4] = r3
            r3 = 48
            r0[r3] = r1
            r1 = 4
        L31:
            r4 = 8
            if (r2 >= r4) goto L79
            int r4 = r1 + 1
            r1 = r9[r1]
            int r5 = r4 + 1
            r4 = r9[r4]
            int r3 = r3 + (-1)
            r0[r3] = r4
            int r3 = r3 + (-1)
            r0[r3] = r1
            int r1 = r5 + 1
            r4 = r9[r5]
            int r4 = r8.mulInv(r4)
            int r5 = r1 + 1
            r1 = r9[r1]
            int r1 = r8.addInv(r1)
            int r6 = r5 + 1
            r5 = r9[r5]
            int r5 = r8.addInv(r5)
            int r7 = r6 + 1
            r6 = r9[r6]
            int r6 = r8.mulInv(r6)
            int r3 = r3 + (-1)
            r0[r3] = r6
            int r3 = r3 + (-1)
            r0[r3] = r1
            int r3 = r3 + (-1)
            r0[r3] = r5
            int r3 = r3 + (-1)
            r0[r3] = r4
            int r2 = r2 + 1
            r1 = r7
            goto L31
        L79:
            int r2 = r1 + 1
            r1 = r9[r1]
            int r4 = r2 + 1
            r2 = r9[r2]
            int r3 = r3 + (-1)
            r0[r3] = r2
            int r3 = r3 + (-1)
            r0[r3] = r1
            int r1 = r4 + 1
            r2 = r9[r4]
            int r2 = r8.mulInv(r2)
            int r4 = r1 + 1
            r1 = r9[r1]
            int r1 = r8.addInv(r1)
            int r5 = r4 + 1
            r4 = r9[r4]
            int r4 = r8.addInv(r4)
            r9 = r9[r5]
            int r9 = r8.mulInv(r9)
            int r3 = r3 + (-1)
            r0[r3] = r9
            int r3 = r3 + (-1)
            r0[r3] = r4
            int r3 = r3 + (-1)
            r0[r3] = r1
            int r3 = r3 + (-1)
            r0[r3] = r2
            return r0
    }

    private int mul(int r3, int r4) {
            r2 = this;
            r0 = 65535(0xffff, float:9.1834E-41)
            r1 = 65537(0x10001, float:9.1837E-41)
            if (r3 != 0) goto La
            int r1 = r1 - r4
            goto L1c
        La:
            if (r4 != 0) goto Le
            int r1 = r1 - r3
            goto L1c
        Le:
            int r3 = r3 * r4
            r4 = r3 & r0
            int r3 = r3 >>> 16
            int r1 = r4 - r3
            if (r4 >= r3) goto L1a
            r3 = 1
            goto L1b
        L1a:
            r3 = 0
        L1b:
            int r1 = r1 + r3
        L1c:
            r3 = r1 & r0
            return r3
    }

    private int mulInv(int r7) {
            r6 = this;
            r0 = 2
            if (r7 >= r0) goto L4
            return r7
        L4:
            r0 = 65537(0x10001, float:9.1837E-41)
            int r1 = r0 / r7
            int r0 = r0 % r7
            r2 = 1
            r3 = 1
        Lc:
            r4 = 65535(0xffff, float:9.1834E-41)
            if (r0 == r2) goto L23
            int r5 = r7 / r0
            int r7 = r7 % r0
            int r5 = r5 * r1
            int r3 = r3 + r5
            r3 = r3 & r4
            if (r7 != r2) goto L1b
            return r3
        L1b:
            int r5 = r0 / r7
            int r0 = r0 % r7
            int r5 = r5 * r3
            int r1 = r1 + r5
            r1 = r1 & r4
            goto Lc
        L23:
            int r2 = r2 - r1
            r7 = r2 & r4
            return r7
    }

    private void wordToBytes(int r2, byte[] r3, int r4) {
            r1 = this;
            int r0 = r2 >>> 8
            byte r0 = (byte) r0
            r3[r4] = r0
            int r4 = r4 + 1
            byte r2 = (byte) r2
            r3[r4] = r2
            return
    }

    int addInv(int r2) {
            r1 = this;
            int r2 = 0 - r2
            r0 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r0
            return r2
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "IDEA"
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
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L11
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r4 = r4.getKey()
            int[] r3 = r2.generateWorkingKey(r3, r4)
            r2.workingKey = r3
            return
        L11:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to IDEA init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public int processBlock(byte[] r7, int r8, byte[] r9, int r10) {
            r6 = this;
            int[] r1 = r6.workingKey
            if (r1 == 0) goto L29
            int r0 = r8 + 8
            int r2 = r7.length
            if (r0 > r2) goto L21
            int r0 = r10 + 8
            int r2 = r9.length
            if (r0 > r2) goto L19
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.ideaFunc(r1, r2, r3, r4, r5)
            r7 = 8
            return r7
        L19:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        L21:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "input buffer too short"
            r7.<init>(r8)
            throw r7
        L29:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "IDEA engine not initialised"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
