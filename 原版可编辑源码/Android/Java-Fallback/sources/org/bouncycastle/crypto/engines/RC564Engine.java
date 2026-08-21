package org.bouncycastle.crypto.engines;

public class RC564Engine implements org.bouncycastle.crypto.BlockCipher {
    private static final long P64 = -5196783011329398165L;
    private static final long Q64 = -7046029254386353131L;
    private static final int bytesPerWord = 8;
    private static final int wordSize = 64;
    private long[] _S;
    private int _noRounds;
    private boolean forEncryption;

    public RC564Engine() {
            r1 = this;
            r1.<init>()
            r0 = 12
            r1._noRounds = r0
            r0 = 0
            r1._S = r0
            return
    }

    private long bytesToWord(byte[] r6, int r7) {
            r5 = this;
            r0 = 0
            r2 = 7
        L3:
            if (r2 < 0) goto L13
            r3 = 8
            long r0 = r0 << r3
            int r3 = r2 + r7
            r3 = r6[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 + r3
            int r2 = r2 + (-1)
            goto L3
        L13:
            return r0
    }

    private int decryptBlock(byte[] r8, int r9, byte[] r10, int r11) {
            r7 = this;
            long r0 = r7.bytesToWord(r8, r9)
            int r9 = r9 + 8
            long r8 = r7.bytesToWord(r8, r9)
            int r2 = r7._noRounds
        Lc:
            r3 = 1
            if (r2 < r3) goto L2a
            long[] r3 = r7._S
            int r4 = r2 * 2
            int r5 = r4 + 1
            r5 = r3[r5]
            long r8 = r8 - r5
            long r8 = r7.rotateRight(r8, r0)
            long r8 = r8 ^ r0
            long[] r3 = r7._S
            r4 = r3[r4]
            long r0 = r0 - r4
            long r0 = r7.rotateRight(r0, r8)
            long r0 = r0 ^ r8
            int r2 = r2 + (-1)
            goto Lc
        L2a:
            long[] r2 = r7._S
            r4 = 0
            r4 = r2[r4]
            long r0 = r0 - r4
            r7.wordToBytes(r0, r10, r11)
            long[] r0 = r7._S
            r1 = r0[r3]
            long r8 = r8 - r1
            int r11 = r11 + 8
            r7.wordToBytes(r8, r10, r11)
            r8 = 16
            return r8
    }

    private int encryptBlock(byte[] r9, int r10, byte[] r11, int r12) {
            r8 = this;
            long r0 = r8.bytesToWord(r9, r10)
            long[] r2 = r8._S
            r3 = 0
            r3 = r2[r3]
            long r0 = r0 + r3
            int r10 = r10 + 8
            long r9 = r8.bytesToWord(r9, r10)
            long[] r2 = r8._S
            r3 = 1
            r4 = r2[r3]
            long r9 = r9 + r4
            r2 = 1
        L17:
            int r4 = r8._noRounds
            if (r2 > r4) goto L35
            long r0 = r0 ^ r9
            long r0 = r8.rotateLeft(r0, r9)
            long[] r4 = r8._S
            int r5 = r2 * 2
            r6 = r4[r5]
            long r0 = r0 + r6
            long r9 = r9 ^ r0
            long r9 = r8.rotateLeft(r9, r0)
            long[] r4 = r8._S
            int r5 = r5 + r3
            r5 = r4[r5]
            long r9 = r9 + r5
            int r2 = r2 + 1
            goto L17
        L35:
            r8.wordToBytes(r0, r11, r12)
            int r12 = r12 + 8
            r8.wordToBytes(r9, r11, r12)
            r9 = 16
            return r9
    }

    private long rotateLeft(long r5, long r7) {
            r4 = this;
            r0 = 63
            long r7 = r7 & r0
            int r0 = (int) r7
            long r0 = r5 << r0
            r2 = 64
            long r2 = r2 - r7
            int r7 = (int) r2
            long r5 = r5 >>> r7
            long r5 = r5 | r0
            return r5
    }

    private long rotateRight(long r5, long r7) {
            r4 = this;
            r0 = 63
            long r7 = r7 & r0
            int r0 = (int) r7
            long r0 = r5 >>> r0
            r2 = 64
            long r2 = r2 - r7
            int r7 = (int) r2
            long r5 = r5 << r7
            long r5 = r5 | r0
            return r5
    }

    private void setKey(byte[] r14) {
            r13 = this;
            int r0 = r14.length
            int r0 = r0 + 7
            int r0 = r0 / 8
            long[] r1 = new long[r0]
            r2 = 0
            r3 = 0
        L9:
            int r4 = r14.length
            if (r3 == r4) goto L20
            int r4 = r3 / 8
            r5 = r1[r4]
            r7 = r14[r3]
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r7 = (long) r7
            int r9 = r3 % 8
            int r9 = r9 * 8
            long r7 = r7 << r9
            long r5 = r5 + r7
            r1[r4] = r5
            int r3 = r3 + 1
            goto L9
        L20:
            int r14 = r13._noRounds
            r3 = 1
            int r14 = r14 + r3
            int r14 = r14 * 2
            long[] r14 = new long[r14]
            r13._S = r14
            r4 = -5196783011329398165(0xb7e151628aed2a6b, double:-1.590398847350152E-39)
            r14[r2] = r4
            r14 = 1
        L32:
            long[] r4 = r13._S
            int r5 = r4.length
            if (r14 >= r5) goto L46
            int r5 = r14 + (-1)
            r5 = r4[r5]
            r7 = -7046029254386353131(0x9e3779b97f4a7c15, double:-4.0765893351549374E-163)
            long r5 = r5 + r7
            r4[r14] = r5
            int r14 = r14 + 1
            goto L32
        L46:
            int r14 = r4.length
            if (r0 <= r14) goto L4c
            int r14 = r0 * 3
            goto L4f
        L4c:
            int r14 = r4.length
            int r14 = r14 * 3
        L4f:
            r4 = 0
            r6 = r4
            r8 = r6
            r4 = 0
            r5 = 0
        L55:
            if (r2 >= r14) goto L7a
            long[] r10 = r13._S
            r11 = r10[r4]
            long r11 = r11 + r6
            long r11 = r11 + r8
            r6 = 3
            long r6 = r13.rotateLeft(r11, r6)
            r10[r4] = r6
            r10 = r1[r5]
            long r10 = r10 + r6
            long r10 = r10 + r8
            long r8 = r8 + r6
            long r8 = r13.rotateLeft(r10, r8)
            r1[r5] = r8
            int r4 = r4 + r3
            long[] r10 = r13._S
            int r10 = r10.length
            int r4 = r4 % r10
            int r5 = r5 + r3
            int r5 = r5 % r0
            int r2 = r2 + 1
            goto L55
        L7a:
            return
    }

    private void wordToBytes(long r5, byte[] r7, int r8) {
            r4 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto Lf
            int r2 = r0 + r8
            int r3 = (int) r5
            byte r3 = (byte) r3
            r7[r2] = r3
            long r5 = r5 >>> r1
            int r0 = r0 + 1
            goto L1
        Lf:
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "RC5-64"
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
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.RC5Parameters
            if (r0 == 0) goto L16
            org.bouncycastle.crypto.params.RC5Parameters r4 = (org.bouncycastle.crypto.params.RC5Parameters) r4
            r2.forEncryption = r3
            int r3 = r4.getRounds()
            r2._noRounds = r3
            byte[] r3 = r4.getKey()
            r2.setKey(r3)
            return
        L16:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to RC564 init - "
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
