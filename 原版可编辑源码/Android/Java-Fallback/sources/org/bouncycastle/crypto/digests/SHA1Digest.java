package org.bouncycastle.crypto.digests;

public class SHA1Digest extends org.bouncycastle.crypto.digests.GeneralDigest {
    private static final int DIGEST_LENGTH = 20;
    private static final int Y1 = 1518500249;
    private static final int Y2 = 1859775393;
    private static final int Y3 = -1894007588;
    private static final int Y4 = -899497514;
    private int H1;
    private int H2;
    private int H3;
    private int H4;
    private int H5;
    private int[] X;
    private int xOff;

    public SHA1Digest() {
            r1 = this;
            r1.<init>()
            r0 = 80
            int[] r0 = new int[r0]
            r1.X = r0
            r1.reset()
            return
    }

    public SHA1Digest(org.bouncycastle.crypto.digests.SHA1Digest r5) {
            r4 = this;
            r4.<init>(r5)
            r0 = 80
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
            int r1 = r5.H5
            r4.H5 = r1
            int[] r1 = r5.X
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            int r5 = r5.xOff
            r4.xOff = r5
            return
    }

    private int f(int r1, int r2, int r3) {
            r0 = this;
            r2 = r2 & r1
            int r1 = ~r1
            r1 = r1 & r3
            r1 = r1 | r2
            return r1
    }

    private int g(int r2, int r3, int r4) {
            r1 = this;
            r0 = r2 & r3
            r2 = r2 & r4
            r2 = r2 | r0
            r3 = r3 & r4
            r2 = r2 | r3
            return r2
    }

    private int h(int r1, int r2, int r3) {
            r0 = this;
            r1 = r1 ^ r2
            r1 = r1 ^ r3
            return r1
    }

    private void unpackWord(int r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r5 + 1
            int r1 = r3 >>> 24
            byte r1 = (byte) r1
            r4[r5] = r1
            int r5 = r0 + 1
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 1
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r5] = r1
            byte r3 = (byte) r3
            r4[r0] = r3
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
            int r1 = r4 + 12
            r2.unpackWord(r0, r3, r1)
            int r0 = r2.H5
            int r4 = r4 + 16
            r2.unpackWord(r0, r3, r4)
            r2.reset()
            r3 = 20
            return r3
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "SHA-1"
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 20
            return r0
    }

    @Override
    protected void processBlock() {
            r14 = this;
            r0 = 16
            r1 = 16
        L4:
            r2 = 80
            if (r1 >= r2) goto L27
            int[] r2 = r14.X
            int r3 = r1 + (-3)
            r3 = r2[r3]
            int r4 = r1 + (-8)
            r4 = r2[r4]
            r3 = r3 ^ r4
            int r4 = r1 + (-14)
            r4 = r2[r4]
            r3 = r3 ^ r4
            int r4 = r1 + (-16)
            r4 = r2[r4]
            r3 = r3 ^ r4
            int r4 = r3 << 1
            int r3 = r3 >>> 31
            r3 = r3 | r4
            r2[r1] = r3
            int r1 = r1 + 1
            goto L4
        L27:
            int r1 = r14.H1
            int r2 = r14.H2
            int r3 = r14.H3
            int r4 = r14.H4
            int r5 = r14.H5
            r6 = 0
            r7 = 0
            r8 = 0
        L34:
            r9 = 4
            if (r7 >= r9) goto Lb7
            int r9 = r1 << 5
            int r10 = r1 >>> 27
            r9 = r9 | r10
            int r10 = r14.f(r2, r3, r4)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r11 = r8 + 1
            r8 = r10[r8]
            int r9 = r9 + r8
            r8 = 1518500249(0x5a827999, float:1.8362723E16)
            int r9 = r9 + r8
            int r5 = r5 + r9
            int r9 = r2 << 30
            int r2 = r2 >>> 2
            r2 = r2 | r9
            int r9 = r5 << 5
            int r10 = r5 >>> 27
            r9 = r9 | r10
            int r10 = r14.f(r1, r2, r3)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r12 = r11 + 1
            r10 = r10[r11]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r4 = r4 + r9
            int r9 = r1 << 30
            int r1 = r1 >>> 2
            r1 = r1 | r9
            int r9 = r4 << 5
            int r10 = r4 >>> 27
            r9 = r9 | r10
            int r10 = r14.f(r5, r1, r2)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r11 = r12 + 1
            r10 = r10[r12]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r3 = r3 + r9
            int r9 = r5 << 30
            int r5 = r5 >>> 2
            r5 = r5 | r9
            int r9 = r3 << 5
            int r10 = r3 >>> 27
            r9 = r9 | r10
            int r10 = r14.f(r4, r5, r1)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r12 = r11 + 1
            r10 = r10[r11]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r2 = r2 + r9
            int r9 = r4 << 30
            int r4 = r4 >>> 2
            r4 = r4 | r9
            int r9 = r2 << 5
            int r10 = r2 >>> 27
            r9 = r9 | r10
            int r10 = r14.f(r3, r4, r5)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r11 = r12 + 1
            r10 = r10[r12]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r1 = r1 + r9
            int r8 = r3 << 30
            int r3 = r3 >>> 2
            r3 = r3 | r8
            int r7 = r7 + 1
            r8 = r11
            goto L34
        Lb7:
            r7 = 0
        Lb8:
            if (r7 >= r9) goto L13a
            int r10 = r1 << 5
            int r11 = r1 >>> 27
            r10 = r10 | r11
            int r11 = r14.h(r2, r3, r4)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r12 = r8 + 1
            r8 = r11[r8]
            int r10 = r10 + r8
            r8 = 1859775393(0x6ed9eba1, float:3.3721552E28)
            int r10 = r10 + r8
            int r5 = r5 + r10
            int r10 = r2 << 30
            int r2 = r2 >>> 2
            r2 = r2 | r10
            int r10 = r5 << 5
            int r11 = r5 >>> 27
            r10 = r10 | r11
            int r11 = r14.h(r1, r2, r3)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r13 = r12 + 1
            r11 = r11[r12]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r4 = r4 + r10
            int r10 = r1 << 30
            int r1 = r1 >>> 2
            r1 = r1 | r10
            int r10 = r4 << 5
            int r11 = r4 >>> 27
            r10 = r10 | r11
            int r11 = r14.h(r5, r1, r2)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r12 = r13 + 1
            r11 = r11[r13]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r3 = r3 + r10
            int r10 = r5 << 30
            int r5 = r5 >>> 2
            r5 = r5 | r10
            int r10 = r3 << 5
            int r11 = r3 >>> 27
            r10 = r10 | r11
            int r11 = r14.h(r4, r5, r1)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r13 = r12 + 1
            r11 = r11[r12]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r2 = r2 + r10
            int r10 = r4 << 30
            int r4 = r4 >>> 2
            r4 = r4 | r10
            int r10 = r2 << 5
            int r11 = r2 >>> 27
            r10 = r10 | r11
            int r11 = r14.h(r3, r4, r5)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r12 = r13 + 1
            r11 = r11[r13]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r1 = r1 + r10
            int r8 = r3 << 30
            int r3 = r3 >>> 2
            r3 = r3 | r8
            int r7 = r7 + 1
            r8 = r12
            goto Lb8
        L13a:
            r7 = 0
        L13b:
            if (r7 >= r9) goto L1bd
            int r10 = r1 << 5
            int r11 = r1 >>> 27
            r10 = r10 | r11
            int r11 = r14.g(r2, r3, r4)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r12 = r8 + 1
            r8 = r11[r8]
            int r10 = r10 + r8
            r8 = -1894007588(0xffffffff8f1bbcdc, float:-7.678463E-30)
            int r10 = r10 + r8
            int r5 = r5 + r10
            int r10 = r2 << 30
            int r2 = r2 >>> 2
            r2 = r2 | r10
            int r10 = r5 << 5
            int r11 = r5 >>> 27
            r10 = r10 | r11
            int r11 = r14.g(r1, r2, r3)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r13 = r12 + 1
            r11 = r11[r12]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r4 = r4 + r10
            int r10 = r1 << 30
            int r1 = r1 >>> 2
            r1 = r1 | r10
            int r10 = r4 << 5
            int r11 = r4 >>> 27
            r10 = r10 | r11
            int r11 = r14.g(r5, r1, r2)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r12 = r13 + 1
            r11 = r11[r13]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r3 = r3 + r10
            int r10 = r5 << 30
            int r5 = r5 >>> 2
            r5 = r5 | r10
            int r10 = r3 << 5
            int r11 = r3 >>> 27
            r10 = r10 | r11
            int r11 = r14.g(r4, r5, r1)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r13 = r12 + 1
            r11 = r11[r12]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r2 = r2 + r10
            int r10 = r4 << 30
            int r4 = r4 >>> 2
            r4 = r4 | r10
            int r10 = r2 << 5
            int r11 = r2 >>> 27
            r10 = r10 | r11
            int r11 = r14.g(r3, r4, r5)
            int r10 = r10 + r11
            int[] r11 = r14.X
            int r12 = r13 + 1
            r11 = r11[r13]
            int r10 = r10 + r11
            int r10 = r10 + r8
            int r1 = r1 + r10
            int r8 = r3 << 30
            int r3 = r3 >>> 2
            r3 = r3 | r8
            int r7 = r7 + 1
            r8 = r12
            goto L13b
        L1bd:
            r7 = 0
        L1be:
            r9 = 3
            if (r7 > r9) goto L241
            int r9 = r1 << 5
            int r10 = r1 >>> 27
            r9 = r9 | r10
            int r10 = r14.h(r2, r3, r4)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r11 = r8 + 1
            r8 = r10[r8]
            int r9 = r9 + r8
            r8 = -899497514(0xffffffffca62c1d6, float:-3715189.5)
            int r9 = r9 + r8
            int r5 = r5 + r9
            int r9 = r2 << 30
            int r2 = r2 >>> 2
            r2 = r2 | r9
            int r9 = r5 << 5
            int r10 = r5 >>> 27
            r9 = r9 | r10
            int r10 = r14.h(r1, r2, r3)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r12 = r11 + 1
            r10 = r10[r11]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r4 = r4 + r9
            int r9 = r1 << 30
            int r1 = r1 >>> 2
            r1 = r1 | r9
            int r9 = r4 << 5
            int r10 = r4 >>> 27
            r9 = r9 | r10
            int r10 = r14.h(r5, r1, r2)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r11 = r12 + 1
            r10 = r10[r12]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r3 = r3 + r9
            int r9 = r5 << 30
            int r5 = r5 >>> 2
            r5 = r5 | r9
            int r9 = r3 << 5
            int r10 = r3 >>> 27
            r9 = r9 | r10
            int r10 = r14.h(r4, r5, r1)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r12 = r11 + 1
            r10 = r10[r11]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r2 = r2 + r9
            int r9 = r4 << 30
            int r4 = r4 >>> 2
            r4 = r4 | r9
            int r9 = r2 << 5
            int r10 = r2 >>> 27
            r9 = r9 | r10
            int r10 = r14.h(r3, r4, r5)
            int r9 = r9 + r10
            int[] r10 = r14.X
            int r11 = r12 + 1
            r10 = r10[r12]
            int r9 = r9 + r10
            int r9 = r9 + r8
            int r1 = r1 + r9
            int r8 = r3 << 30
            int r3 = r3 >>> 2
            r3 = r3 | r8
            int r7 = r7 + 1
            r8 = r11
            goto L1be
        L241:
            int r7 = r14.H1
            int r7 = r7 + r1
            r14.H1 = r7
            int r1 = r14.H2
            int r1 = r1 + r2
            r14.H2 = r1
            int r1 = r14.H3
            int r1 = r1 + r3
            r14.H3 = r1
            int r1 = r14.H4
            int r1 = r1 + r4
            r14.H4 = r1
            int r1 = r14.H5
            int r1 = r1 + r5
            r14.H5 = r1
            r14.xOff = r6
            r1 = 0
        L25d:
            if (r1 >= r0) goto L266
            int[] r2 = r14.X
            r2[r1] = r6
            int r1 = r1 + 1
            goto L25d
        L266:
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
            r2 = 32
            long r2 = r5 >>> r2
            int r3 = (int) r2
            r0[r1] = r3
            r1 = 15
            r2 = -1
            long r5 = r5 & r2
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
            int r3 = r3 << 24
            int r4 = r8 + 1
            r4 = r7[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = 16
            int r4 = r4 << r5
            r3 = r3 | r4
            int r4 = r8 + 2
            r4 = r7[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 8
            r3 = r3 | r4
            int r8 = r8 + 3
            r7 = r7[r8]
            r7 = r7 & 255(0xff, float:3.57E-43)
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
            r0 = -1009589776(0xffffffffc3d2e1f0, float:-421.76514)
            r4.H5 = r0
            r0 = 0
            r4.xOff = r0
            r1 = 0
        L20:
            int[] r2 = r4.X
            int r3 = r2.length
            if (r1 == r3) goto L2a
            r2[r1] = r0
            int r1 = r1 + 1
            goto L20
        L2a:
            return
    }
}
