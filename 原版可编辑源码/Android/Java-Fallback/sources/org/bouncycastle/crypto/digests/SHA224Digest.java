package org.bouncycastle.crypto.digests;

public class SHA224Digest extends org.bouncycastle.crypto.digests.GeneralDigest {
    private static final int DIGEST_LENGTH = 28;
    static final int[] K = null;
    private int H1;
    private int H2;
    private int H3;
    private int H4;
    private int H5;
    private int H6;
    private int H7;
    private int H8;
    private int[] X;
    private int xOff;

    static {
            r0 = 64
            int[] r0 = new int[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [1116352408, 1899447441, -1245643825, -373957723, 961987163, 1508970993, -1841331548, -1424204075, -670586216, 310598401, 607225278, 1426881987, 1925078388, -2132889090, -1680079193, -1046744716, -459576895, -272742522, 264347078, 604807628, 770255983, 1249150122, 1555081692, 1996064986, -1740746414, -1473132947, -1341970488, -1084653625, -958395405, -710438585, 113926993, 338241895, 666307205, 773529912, 1294757372, 1396182291, 1695183700, 1986661051, -2117940946, -1838011259, -1564481375, -1474664885, -1035236496, -949202525, -778901479, -694614492, -200395387, 275423344, 430227734, 506948616, 659060556, 883997877, 958139571, 1322822218, 1537002063, 1747873779, 1955562222, 2024104815, -2067236844, -1933114872, -1866530822, -1538233109, -1090935817, -965641998} // fill-array
            org.bouncycastle.crypto.digests.SHA224Digest.K = r0
            return
    }

    public SHA224Digest() {
            r1 = this;
            r1.<init>()
            r0 = 64
            int[] r0 = new int[r0]
            r1.X = r0
            r1.reset()
            return
    }

    public SHA224Digest(org.bouncycastle.crypto.digests.SHA224Digest r5) {
            r4 = this;
            r4.<init>(r5)
            r0 = 64
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
            int r1 = r5.H6
            r4.H6 = r1
            int r1 = r5.H7
            r4.H7 = r1
            int r1 = r5.H8
            r4.H8 = r1
            int[] r1 = r5.X
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            int r5 = r5.xOff
            r4.xOff = r5
            return
    }

    private int Ch(int r1, int r2, int r3) {
            r0 = this;
            r2 = r2 & r1
            int r1 = ~r1
            r1 = r1 & r3
            r1 = r1 ^ r2
            return r1
    }

    private int Maj(int r2, int r3, int r4) {
            r1 = this;
            r0 = r2 & r3
            r2 = r2 & r4
            r2 = r2 ^ r0
            r3 = r3 & r4
            r2 = r2 ^ r3
            return r2
    }

    private int Sum0(int r4) {
            r3 = this;
            int r0 = r4 >>> 2
            int r1 = r4 << 30
            r0 = r0 | r1
            int r1 = r4 >>> 13
            int r2 = r4 << 19
            r1 = r1 | r2
            r0 = r0 ^ r1
            int r1 = r4 >>> 22
            int r4 = r4 << 10
            r4 = r4 | r1
            r4 = r4 ^ r0
            return r4
    }

    private int Sum1(int r4) {
            r3 = this;
            int r0 = r4 >>> 6
            int r1 = r4 << 26
            r0 = r0 | r1
            int r1 = r4 >>> 11
            int r2 = r4 << 21
            r1 = r1 | r2
            r0 = r0 ^ r1
            int r1 = r4 >>> 25
            int r4 = r4 << 7
            r4 = r4 | r1
            r4 = r4 ^ r0
            return r4
    }

    private int Theta0(int r4) {
            r3 = this;
            int r0 = r4 >>> 7
            int r1 = r4 << 25
            r0 = r0 | r1
            int r1 = r4 >>> 18
            int r2 = r4 << 14
            r1 = r1 | r2
            r0 = r0 ^ r1
            int r4 = r4 >>> 3
            r4 = r4 ^ r0
            return r4
    }

    private int Theta1(int r4) {
            r3 = this;
            int r0 = r4 >>> 17
            int r1 = r4 << 15
            r0 = r0 | r1
            int r1 = r4 >>> 19
            int r2 = r4 << 13
            r1 = r1 | r2
            r0 = r0 ^ r1
            int r4 = r4 >>> 10
            r4 = r4 ^ r0
            return r4
    }

    private void unpackWord(int r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r3 >>> 24
            byte r0 = (byte) r0
            r4[r5] = r0
            int r0 = r5 + 1
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            int r5 = r5 + 3
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
            int r1 = r4 + 12
            r2.unpackWord(r0, r3, r1)
            int r0 = r2.H5
            int r1 = r4 + 16
            r2.unpackWord(r0, r3, r1)
            int r0 = r2.H6
            int r1 = r4 + 20
            r2.unpackWord(r0, r3, r1)
            int r0 = r2.H7
            int r4 = r4 + 24
            r2.unpackWord(r0, r3, r4)
            r2.reset()
            r3 = 28
            return r3
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "SHA-224"
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 28
            return r0
    }

    @Override
    protected void processBlock() {
            r15 = this;
            r0 = 16
            r1 = 16
        L4:
            r2 = 63
            if (r1 > r2) goto L2e
            int[] r2 = r15.X
            int r3 = r1 + (-2)
            r3 = r2[r3]
            int r3 = r15.Theta1(r3)
            int[] r4 = r15.X
            int r5 = r1 + (-7)
            r5 = r4[r5]
            int r3 = r3 + r5
            int r5 = r1 + (-15)
            r4 = r4[r5]
            int r4 = r15.Theta0(r4)
            int r3 = r3 + r4
            int[] r4 = r15.X
            int r5 = r1 + (-16)
            r4 = r4[r5]
            int r3 = r3 + r4
            r2[r1] = r3
            int r1 = r1 + 1
            goto L4
        L2e:
            int r1 = r15.H1
            int r2 = r15.H2
            int r3 = r15.H3
            int r4 = r15.H4
            int r5 = r15.H5
            int r6 = r15.H6
            int r7 = r15.H7
            int r8 = r15.H8
            r9 = 0
            r10 = 0
            r11 = 0
        L41:
            r12 = 8
            if (r10 >= r12) goto L152
            int r12 = r15.Sum1(r5)
            int r13 = r15.Ch(r5, r6, r7)
            int r12 = r12 + r13
            int[] r13 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r13 = r13[r11]
            int r12 = r12 + r13
            int[] r13 = r15.X
            int r14 = r11 + 1
            r11 = r13[r11]
            int r12 = r12 + r11
            int r8 = r8 + r12
            int r4 = r4 + r8
            int r11 = r15.Sum0(r1)
            int r12 = r15.Maj(r1, r2, r3)
            int r11 = r11 + r12
            int r8 = r8 + r11
            int r11 = r15.Sum1(r4)
            int r12 = r15.Ch(r4, r5, r6)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r14]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r13 = r14 + 1
            r12 = r12[r14]
            int r11 = r11 + r12
            int r7 = r7 + r11
            int r3 = r3 + r7
            int r11 = r15.Sum0(r8)
            int r12 = r15.Maj(r8, r1, r2)
            int r11 = r11 + r12
            int r7 = r7 + r11
            int r11 = r15.Sum1(r3)
            int r12 = r15.Ch(r3, r4, r5)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r13]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r14 = r13 + 1
            r12 = r12[r13]
            int r11 = r11 + r12
            int r6 = r6 + r11
            int r2 = r2 + r6
            int r11 = r15.Sum0(r7)
            int r12 = r15.Maj(r7, r8, r1)
            int r11 = r11 + r12
            int r6 = r6 + r11
            int r11 = r15.Sum1(r2)
            int r12 = r15.Ch(r2, r3, r4)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r14]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r13 = r14 + 1
            r12 = r12[r14]
            int r11 = r11 + r12
            int r5 = r5 + r11
            int r1 = r1 + r5
            int r11 = r15.Sum0(r6)
            int r12 = r15.Maj(r6, r7, r8)
            int r11 = r11 + r12
            int r5 = r5 + r11
            int r11 = r15.Sum1(r1)
            int r12 = r15.Ch(r1, r2, r3)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r13]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r14 = r13 + 1
            r12 = r12[r13]
            int r11 = r11 + r12
            int r4 = r4 + r11
            int r8 = r8 + r4
            int r11 = r15.Sum0(r5)
            int r12 = r15.Maj(r5, r6, r7)
            int r11 = r11 + r12
            int r4 = r4 + r11
            int r11 = r15.Sum1(r8)
            int r12 = r15.Ch(r8, r1, r2)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r14]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r13 = r14 + 1
            r12 = r12[r14]
            int r11 = r11 + r12
            int r3 = r3 + r11
            int r7 = r7 + r3
            int r11 = r15.Sum0(r4)
            int r12 = r15.Maj(r4, r5, r6)
            int r11 = r11 + r12
            int r3 = r3 + r11
            int r11 = r15.Sum1(r7)
            int r12 = r15.Ch(r7, r8, r1)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r13]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r14 = r13 + 1
            r12 = r12[r13]
            int r11 = r11 + r12
            int r2 = r2 + r11
            int r6 = r6 + r2
            int r11 = r15.Sum0(r3)
            int r12 = r15.Maj(r3, r4, r5)
            int r11 = r11 + r12
            int r2 = r2 + r11
            int r11 = r15.Sum1(r6)
            int r12 = r15.Ch(r6, r7, r8)
            int r11 = r11 + r12
            int[] r12 = org.bouncycastle.crypto.digests.SHA224Digest.K
            r12 = r12[r14]
            int r11 = r11 + r12
            int[] r12 = r15.X
            int r13 = r14 + 1
            r12 = r12[r14]
            int r11 = r11 + r12
            int r1 = r1 + r11
            int r5 = r5 + r1
            int r11 = r15.Sum0(r2)
            int r12 = r15.Maj(r2, r3, r4)
            int r11 = r11 + r12
            int r1 = r1 + r11
            int r10 = r10 + 1
            r11 = r13
            goto L41
        L152:
            int r10 = r15.H1
            int r10 = r10 + r1
            r15.H1 = r10
            int r1 = r15.H2
            int r1 = r1 + r2
            r15.H2 = r1
            int r1 = r15.H3
            int r1 = r1 + r3
            r15.H3 = r1
            int r1 = r15.H4
            int r1 = r1 + r4
            r15.H4 = r1
            int r1 = r15.H5
            int r1 = r1 + r5
            r15.H5 = r1
            int r1 = r15.H6
            int r1 = r1 + r6
            r15.H6 = r1
            int r1 = r15.H7
            int r1 = r1 + r7
            r15.H7 = r1
            int r1 = r15.H8
            int r1 = r1 + r8
            r15.H8 = r1
            r15.xOff = r9
            r1 = 0
        L17d:
            if (r1 >= r0) goto L186
            int[] r2 = r15.X
            r2[r1] = r9
            int r1 = r1 + 1
            goto L17d
        L186:
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
            r0 = -1056596264(0xffffffffc1059ed8, float:-8.35128)
            r4.H1 = r0
            r0 = 914150663(0x367cd507, float:3.7674924E-6)
            r4.H2 = r0
            r0 = 812702999(0x3070dd17, float:8.762568E-10)
            r4.H3 = r0
            r0 = -150054599(0xfffffffff70e5939, float:-2.887171E33)
            r4.H4 = r0
            r0 = -4191439(0xffffffffffc00b31, float:NaN)
            r4.H5 = r0
            r0 = 1750603025(0x68581511, float:4.081679E24)
            r4.H6 = r0
            r0 = 1694076839(0x64f98fa7, float:3.6828724E22)
            r4.H7 = r0
            r0 = -1090891868(0xffffffffbefa4fa4, float:-0.48888886)
            r4.H8 = r0
            r0 = 0
            r4.xOff = r0
            r1 = 0
        L2f:
            int[] r2 = r4.X
            int r3 = r2.length
            if (r1 == r3) goto L39
            r2[r1] = r0
            int r1 = r1 + 1
            goto L2f
        L39:
            return
    }
}
