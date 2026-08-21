package org.bouncycastle.crypto.digests;

public class MD4Digest extends org.bouncycastle.crypto.digests.GeneralDigest {
    private static final int DIGEST_LENGTH = 16;
    private static final int S11 = 3;
    private static final int S12 = 7;
    private static final int S13 = 11;
    private static final int S14 = 19;
    private static final int S21 = 3;
    private static final int S22 = 5;
    private static final int S23 = 9;
    private static final int S24 = 13;
    private static final int S31 = 3;
    private static final int S32 = 9;
    private static final int S33 = 11;
    private static final int S34 = 15;
    private int H1;
    private int H2;
    private int H3;
    private int H4;
    private int[] X;
    private int xOff;

    public MD4Digest() {
            r1 = this;
            r1.<init>()
            r0 = 16
            int[] r0 = new int[r0]
            r1.X = r0
            r1.reset()
            return
    }

    public MD4Digest(org.bouncycastle.crypto.digests.MD4Digest r5) {
            r4 = this;
            r4.<init>(r5)
            r0 = 16
            int[] r0 = new int[r0]
            r4.X = r0
            int r1 = r5.H1
            r4.H1 = r1
            int r1 = r5.H2
            r4.H2 = r1
            int r1 = r5.H3
            r4.H3 = r1
            int r1 = r5.H4
            r4.H4 = r1
            int[] r1 = r5.X
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            int r5 = r5.xOff
            r4.xOff = r5
            return
    }

    private int F(int r1, int r2, int r3) {
            r0 = this;
            r2 = r2 & r1
            int r1 = ~r1
            r1 = r1 & r3
            r1 = r1 | r2
            return r1
    }

    private int G(int r2, int r3, int r4) {
            r1 = this;
            r0 = r2 & r3
            r2 = r2 & r4
            r2 = r2 | r0
            r3 = r3 & r4
            r2 = r2 | r3
            return r2
    }

    private int H(int r1, int r2, int r3) {
            r0 = this;
            r1 = r1 ^ r2
            r1 = r1 ^ r3
            return r1
    }

    private int rotateLeft(int r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            int r3 = 32 - r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private void unpackWord(int r3, byte[] r4, int r5) {
            r2 = this;
            byte r0 = (byte) r3
            r4[r5] = r0
            int r0 = r5 + 1
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r5 = r5 + 3
            int r3 = r3 >>> 24
            byte r3 = (byte) r3
            r4[r5] = r3
            return
    }

    @Override
    public int doFinal(byte[] r3, int r4) {
            r2 = this;
            r2.finish()
            int r0 = r2.H1
            r2.unpackWord(r0, r3, r4)
            int r0 = r2.H2
            int r1 = r4 + 4
            r2.unpackWord(r0, r3, r1)
            int r0 = r2.H3
            int r1 = r4 + 8
            r2.unpackWord(r0, r3, r1)
            int r0 = r2.H4
            int r4 = r4 + 12
            r2.unpackWord(r0, r3, r4)
            r2.reset()
            r3 = 16
            return r3
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "MD4"
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    protected void processBlock() {
            r23 = this;
            r0 = r23
            int r1 = r0.H1
            int r2 = r0.H2
            int r3 = r0.H3
            int r4 = r0.H4
            int r5 = r0.F(r2, r3, r4)
            int r1 = r1 + r5
            int[] r5 = r0.X
            r6 = 0
            r5 = r5[r6]
            int r1 = r1 + r5
            r5 = 3
            int r1 = r0.rotateLeft(r1, r5)
            int r7 = r0.F(r1, r2, r3)
            int r4 = r4 + r7
            int[] r7 = r0.X
            r8 = 1
            r7 = r7[r8]
            int r4 = r4 + r7
            r7 = 7
            int r4 = r0.rotateLeft(r4, r7)
            int r9 = r0.F(r4, r1, r2)
            int r3 = r3 + r9
            int[] r9 = r0.X
            r10 = 2
            r9 = r9[r10]
            int r3 = r3 + r9
            r9 = 11
            int r3 = r0.rotateLeft(r3, r9)
            int r11 = r0.F(r3, r4, r1)
            int r2 = r2 + r11
            int[] r11 = r0.X
            r11 = r11[r5]
            int r2 = r2 + r11
            r11 = 19
            int r2 = r0.rotateLeft(r2, r11)
            int r12 = r0.F(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r13 = 4
            r12 = r12[r13]
            int r1 = r1 + r12
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.F(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r14 = 5
            r12 = r12[r14]
            int r4 = r4 + r12
            int r4 = r0.rotateLeft(r4, r7)
            int r12 = r0.F(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r15 = 6
            r12 = r12[r15]
            int r3 = r3 + r12
            int r3 = r0.rotateLeft(r3, r9)
            int r12 = r0.F(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r7]
            int r2 = r2 + r12
            int r2 = r0.rotateLeft(r2, r11)
            int r12 = r0.F(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r16 = 8
            r12 = r12[r16]
            int r1 = r1 + r12
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.F(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r15 = 9
            r12 = r12[r15]
            int r4 = r4 + r12
            int r4 = r0.rotateLeft(r4, r7)
            int r12 = r0.F(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r18 = 10
            r12 = r12[r18]
            int r3 = r3 + r12
            int r3 = r0.rotateLeft(r3, r9)
            int r12 = r0.F(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r9]
            int r2 = r2 + r12
            int r2 = r0.rotateLeft(r2, r11)
            int r12 = r0.F(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r19 = 12
            r12 = r12[r19]
            int r1 = r1 + r12
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.F(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r10 = 13
            r12 = r12[r10]
            int r4 = r4 + r12
            int r4 = r0.rotateLeft(r4, r7)
            int r12 = r0.F(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r21 = 14
            r12 = r12[r21]
            int r3 = r3 + r12
            int r3 = r0.rotateLeft(r3, r9)
            int r12 = r0.F(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r9 = 15
            r12 = r12[r9]
            int r2 = r2 + r12
            int r2 = r0.rotateLeft(r2, r11)
            int r11 = r0.G(r2, r3, r4)
            int r1 = r1 + r11
            int[] r11 = r0.X
            r11 = r11[r6]
            int r1 = r1 + r11
            r11 = 1518500249(0x5a827999, float:1.8362723E16)
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.G(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r12 = r12[r13]
            int r4 = r4 + r12
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r14)
            int r12 = r0.G(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r12 = r12[r16]
            int r3 = r3 + r12
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r15)
            int r12 = r0.G(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r19]
            int r2 = r2 + r12
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r10)
            int r12 = r0.G(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r12 = r12[r8]
            int r1 = r1 + r12
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.G(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r12 = r12[r14]
            int r4 = r4 + r12
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r14)
            int r12 = r0.G(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r12 = r12[r15]
            int r3 = r3 + r12
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r15)
            int r12 = r0.G(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r10]
            int r2 = r2 + r12
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r10)
            int r12 = r0.G(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r20 = 2
            r12 = r12[r20]
            int r1 = r1 + r12
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.G(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r17 = 6
            r12 = r12[r17]
            int r4 = r4 + r12
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r14)
            int r12 = r0.G(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r12 = r12[r18]
            int r3 = r3 + r12
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r15)
            int r12 = r0.G(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r21]
            int r2 = r2 + r12
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r10)
            int r12 = r0.G(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r12 = r12[r5]
            int r1 = r1 + r12
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.G(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r12 = r12[r7]
            int r4 = r4 + r12
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r14)
            int r12 = r0.G(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r22 = 11
            r12 = r12[r22]
            int r3 = r3 + r12
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r15)
            int r12 = r0.G(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r9]
            int r2 = r2 + r12
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r10)
            int r11 = r0.H(r2, r3, r4)
            int r1 = r1 + r11
            int[] r11 = r0.X
            r11 = r11[r6]
            int r1 = r1 + r11
            r11 = 1859775393(0x6ed9eba1, float:3.3721552E28)
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.H(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r12 = r12[r16]
            int r4 = r4 + r12
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r15)
            int r12 = r0.H(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r12 = r12[r13]
            int r3 = r3 + r12
            int r3 = r3 + r11
            r12 = 11
            int r3 = r0.rotateLeft(r3, r12)
            int r12 = r0.H(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r19]
            int r2 = r2 + r12
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r12 = r0.H(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r13 = 2
            r12 = r12[r13]
            int r1 = r1 + r12
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r12 = r0.H(r1, r2, r3)
            int r4 = r4 + r12
            int[] r12 = r0.X
            r12 = r12[r18]
            int r4 = r4 + r12
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r15)
            int r12 = r0.H(r4, r1, r2)
            int r3 = r3 + r12
            int[] r12 = r0.X
            r13 = 6
            r12 = r12[r13]
            int r3 = r3 + r12
            int r3 = r3 + r11
            r12 = 11
            int r3 = r0.rotateLeft(r3, r12)
            int r12 = r0.H(r3, r4, r1)
            int r2 = r2 + r12
            int[] r12 = r0.X
            r12 = r12[r21]
            int r2 = r2 + r12
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r12 = r0.H(r2, r3, r4)
            int r1 = r1 + r12
            int[] r12 = r0.X
            r8 = r12[r8]
            int r1 = r1 + r8
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r8 = r0.H(r1, r2, r3)
            int r4 = r4 + r8
            int[] r8 = r0.X
            r8 = r8[r15]
            int r4 = r4 + r8
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r15)
            int r8 = r0.H(r4, r1, r2)
            int r3 = r3 + r8
            int[] r8 = r0.X
            r8 = r8[r14]
            int r3 = r3 + r8
            int r3 = r3 + r11
            r8 = 11
            int r3 = r0.rotateLeft(r3, r8)
            int r8 = r0.H(r3, r4, r1)
            int r2 = r2 + r8
            int[] r8 = r0.X
            r8 = r8[r10]
            int r2 = r2 + r8
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r8 = r0.H(r2, r3, r4)
            int r1 = r1 + r8
            int[] r8 = r0.X
            r8 = r8[r5]
            int r1 = r1 + r8
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r5)
            int r5 = r0.H(r1, r2, r3)
            int r4 = r4 + r5
            int[] r5 = r0.X
            r8 = 11
            r5 = r5[r8]
            int r4 = r4 + r5
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r15)
            int r5 = r0.H(r4, r1, r2)
            int r3 = r3 + r5
            int[] r5 = r0.X
            r5 = r5[r7]
            int r3 = r3 + r5
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r8)
            int r5 = r0.H(r3, r4, r1)
            int r2 = r2 + r5
            int[] r5 = r0.X
            r5 = r5[r9]
            int r2 = r2 + r5
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r5 = r0.H1
            int r5 = r5 + r1
            r0.H1 = r5
            int r1 = r0.H2
            int r1 = r1 + r2
            r0.H2 = r1
            int r1 = r0.H3
            int r1 = r1 + r3
            r0.H3 = r1
            int r1 = r0.H4
            int r1 = r1 + r4
            r0.H4 = r1
            r0.xOff = r6
            r1 = 0
        L311:
            int[] r2 = r0.X
            int r3 = r2.length
            if (r1 == r3) goto L31b
            r2[r1] = r6
            int r1 = r1 + 1
            goto L311
        L31b:
            return
    }

    @Override
    protected void processLength(long r5) {
            r4 = this;
            int r0 = r4.xOff
            r1 = 14
            if (r0 <= r1) goto L9
            r4.processBlock()
        L9:
            int[] r0 = r4.X
            r2 = -1
            long r2 = r2 & r5
            int r3 = (int) r2
            r0[r1] = r3
            r1 = 15
            r2 = 32
            long r5 = r5 >>> r2
            int r6 = (int) r5
            r0[r1] = r6
            return
    }

    @Override
    protected void processWord(byte[] r7, int r8) {
            r6 = this;
            int[] r0 = r6.X
            int r1 = r6.xOff
            int r2 = r1 + 1
            r6.xOff = r2
            r3 = r7[r8]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r4 = r8 + 1
            r4 = r7[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 8
            r3 = r3 | r4
            int r4 = r8 + 2
            r4 = r7[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = 16
            int r4 = r4 << r5
            r3 = r3 | r4
            int r8 = r8 + 3
            r7 = r7[r8]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 << 24
            r7 = r7 | r3
            r0[r1] = r7
            if (r2 != r5) goto L2f
            r6.processBlock()
        L2f:
            return
    }

    @Override
    public void reset() {
            r4 = this;
            super.reset()
            r0 = 1732584193(0x67452301, float:9.309519E23)
            r4.H1 = r0
            r0 = -271733879(0xffffffffefcdab89, float:-1.273036E29)
            r4.H2 = r0
            r0 = -1732584194(0xffffffff98badcfe, float:-4.830302E-24)
            r4.H3 = r0
            r0 = 271733878(0x10325476, float:3.5169377E-29)
            r4.H4 = r0
            r0 = 0
            r4.xOff = r0
            r1 = 0
        L1b:
            int[] r2 = r4.X
            int r3 = r2.length
            if (r1 == r3) goto L25
            r2[r1] = r0
            int r1 = r1 + 1
            goto L1b
        L25:
            return
    }
}
