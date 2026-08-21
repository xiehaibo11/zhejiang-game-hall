package org.bouncycastle.crypto.digests;

public class MD5Digest extends org.bouncycastle.crypto.digests.GeneralDigest {
    private static final int DIGEST_LENGTH = 16;
    private static final int S11 = 7;
    private static final int S12 = 12;
    private static final int S13 = 17;
    private static final int S14 = 22;
    private static final int S21 = 5;
    private static final int S22 = 9;
    private static final int S23 = 14;
    private static final int S24 = 20;
    private static final int S31 = 4;
    private static final int S32 = 11;
    private static final int S33 = 16;
    private static final int S34 = 23;
    private static final int S41 = 6;
    private static final int S42 = 10;
    private static final int S43 = 15;
    private static final int S44 = 21;
    private int H1;
    private int H2;
    private int H3;
    private int H4;
    private int[] X;
    private int xOff;

    public MD5Digest() {
            r1 = this;
            r1.<init>()
            r0 = 16
            int[] r0 = new int[r0]
            r1.X = r0
            r1.reset()
            return
    }

    public MD5Digest(org.bouncycastle.crypto.digests.MD5Digest r5) {
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

    private int G(int r1, int r2, int r3) {
            r0 = this;
            r1 = r1 & r3
            int r3 = ~r3
            r2 = r2 & r3
            r1 = r1 | r2
            return r1
    }

    private int H(int r1, int r2, int r3) {
            r0 = this;
            r1 = r1 ^ r2
            r1 = r1 ^ r3
            return r1
    }

    private int K(int r1, int r2, int r3) {
            r0 = this;
            int r3 = ~r3
            r1 = r1 | r3
            r1 = r1 ^ r2
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
            java.lang.String r0 = "MD5"
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
            r24 = this;
            r0 = r24
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
            r5 = -680876936(0xffffffffd76aa478, float:-2.5799211E14)
            int r1 = r1 + r5
            r5 = 7
            int r1 = r0.rotateLeft(r1, r5)
            int r1 = r1 + r2
            int r7 = r0.F(r1, r2, r3)
            int r4 = r4 + r7
            int[] r7 = r0.X
            r8 = 1
            r7 = r7[r8]
            int r4 = r4 + r7
            r7 = -389564586(0xffffffffe8c7b756, float:-7.545063E24)
            int r4 = r4 + r7
            r7 = 12
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r9 = r0.F(r4, r1, r2)
            int r3 = r3 + r9
            int[] r9 = r0.X
            r10 = 2
            r9 = r9[r10]
            int r3 = r3 + r9
            r9 = 606105819(0x242070db, float:3.4790062E-17)
            int r3 = r3 + r9
            r9 = 17
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r11 = r0.F(r3, r4, r1)
            int r2 = r2 + r11
            int[] r11 = r0.X
            r12 = 3
            r11 = r11[r12]
            int r2 = r2 + r11
            r11 = -1044525330(0xffffffffc1bdceee, float:-23.72604)
            int r2 = r2 + r11
            r11 = 22
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r13 = r0.F(r2, r3, r4)
            int r1 = r1 + r13
            int[] r13 = r0.X
            r14 = 4
            r13 = r13[r14]
            int r1 = r1 + r13
            r13 = -176418897(0xfffffffff57c0faf, float:-3.1952561E32)
            int r1 = r1 + r13
            int r1 = r0.rotateLeft(r1, r5)
            int r1 = r1 + r2
            int r13 = r0.F(r1, r2, r3)
            int r4 = r4 + r13
            int[] r13 = r0.X
            r15 = 5
            r13 = r13[r15]
            int r4 = r4 + r13
            r13 = 1200080426(0x4787c62a, float:69516.33)
            int r4 = r4 + r13
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r13 = r0.F(r4, r1, r2)
            int r3 = r3 + r13
            int[] r13 = r0.X
            r10 = 6
            r13 = r13[r10]
            int r3 = r3 + r13
            r13 = -1473231341(0xffffffffa8304613, float:-9.7851575E-15)
            int r3 = r3 + r13
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r13 = r0.F(r3, r4, r1)
            int r2 = r2 + r13
            int[] r13 = r0.X
            r13 = r13[r5]
            int r2 = r2 + r13
            r13 = -45705983(0xfffffffffd469501, float:-1.6497551E37)
            int r2 = r2 + r13
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r13 = r0.F(r2, r3, r4)
            int r1 = r1 + r13
            int[] r13 = r0.X
            r17 = 8
            r13 = r13[r17]
            int r1 = r1 + r13
            r13 = 1770035416(0x698098d8, float:1.9433036E25)
            int r1 = r1 + r13
            int r1 = r0.rotateLeft(r1, r5)
            int r1 = r1 + r2
            int r13 = r0.F(r1, r2, r3)
            int r4 = r4 + r13
            int[] r13 = r0.X
            r12 = 9
            r13 = r13[r12]
            int r4 = r4 + r13
            r13 = -1958414417(0xffffffff8b44f7af, float:-3.7934563E-32)
            int r4 = r4 + r13
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r13 = r0.F(r4, r1, r2)
            int r3 = r3 + r13
            int[] r13 = r0.X
            r14 = 10
            r13 = r13[r14]
            int r3 = r3 + r13
            r13 = -42063(0xffffffffffff5bb1, float:NaN)
            int r3 = r3 + r13
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r13 = r0.F(r3, r4, r1)
            int r2 = r2 + r13
            int[] r13 = r0.X
            r14 = 11
            r13 = r13[r14]
            int r2 = r2 + r13
            r13 = -1990404162(0xffffffff895cd7be, float:-2.6582978E-33)
            int r2 = r2 + r13
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r13 = r0.F(r2, r3, r4)
            int r1 = r1 + r13
            int[] r13 = r0.X
            r13 = r13[r7]
            int r1 = r1 + r13
            r13 = 1804603682(0x6b901122, float:3.4833245E26)
            int r1 = r1 + r13
            int r1 = r0.rotateLeft(r1, r5)
            int r1 = r1 + r2
            int r13 = r0.F(r1, r2, r3)
            int r4 = r4 + r13
            int[] r13 = r0.X
            r21 = 13
            r13 = r13[r21]
            int r4 = r4 + r13
            r13 = -40341101(0xfffffffffd987193, float:-2.5329046E37)
            int r4 = r4 + r13
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r13 = r0.F(r4, r1, r2)
            int r3 = r3 + r13
            int[] r13 = r0.X
            r7 = 14
            r13 = r13[r7]
            int r3 = r3 + r13
            r13 = -1502002290(0xffffffffa679438e, float:-8.6480783E-16)
            int r3 = r3 + r13
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r9 = r0.F(r3, r4, r1)
            int r2 = r2 + r9
            int[] r9 = r0.X
            r13 = 15
            r9 = r9[r13]
            int r2 = r2 + r9
            r9 = 1236535329(0x49b40821, float:1474820.1)
            int r2 = r2 + r9
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r9 = r0.G(r2, r3, r4)
            int r1 = r1 + r9
            int[] r9 = r0.X
            r9 = r9[r8]
            int r1 = r1 + r9
            r9 = -165796510(0xfffffffff61e2562, float:-8.018956E32)
            int r1 = r1 + r9
            int r1 = r0.rotateLeft(r1, r15)
            int r1 = r1 + r2
            int r9 = r0.G(r1, r2, r3)
            int r4 = r4 + r9
            int[] r9 = r0.X
            r9 = r9[r10]
            int r4 = r4 + r9
            r9 = -1069501632(0xffffffffc040b340, float:-3.0109406)
            int r4 = r4 + r9
            int r4 = r0.rotateLeft(r4, r12)
            int r4 = r4 + r1
            int r9 = r0.G(r4, r1, r2)
            int r3 = r3 + r9
            int[] r9 = r0.X
            r9 = r9[r14]
            int r3 = r3 + r9
            r9 = 643717713(0x265e5a51, float:7.7144124E-16)
            int r3 = r3 + r9
            int r3 = r0.rotateLeft(r3, r7)
            int r3 = r3 + r4
            int r9 = r0.G(r3, r4, r1)
            int r2 = r2 + r9
            int[] r9 = r0.X
            r9 = r9[r6]
            int r2 = r2 + r9
            r9 = -373897302(0xffffffffe9b6c7aa, float:-2.7620923E25)
            int r2 = r2 + r9
            r9 = 20
            int r2 = r0.rotateLeft(r2, r9)
            int r2 = r2 + r3
            int r11 = r0.G(r2, r3, r4)
            int r1 = r1 + r11
            int[] r11 = r0.X
            r11 = r11[r15]
            int r1 = r1 + r11
            r11 = -701558691(0xffffffffd62f105d, float:-4.8121204E13)
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r15)
            int r1 = r1 + r2
            int r11 = r0.G(r1, r2, r3)
            int r4 = r4 + r11
            int[] r11 = r0.X
            r20 = 10
            r11 = r11[r20]
            int r4 = r4 + r11
            r11 = 38016083(0x2441453, float:1.4405639E-37)
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r12)
            int r4 = r4 + r1
            int r11 = r0.G(r4, r1, r2)
            int r3 = r3 + r11
            int[] r11 = r0.X
            r11 = r11[r13]
            int r3 = r3 + r11
            r11 = -660478335(0xffffffffd8a1e681, float:-1.424091E15)
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r7)
            int r3 = r3 + r4
            int r11 = r0.G(r3, r4, r1)
            int r2 = r2 + r11
            int[] r11 = r0.X
            r19 = 4
            r11 = r11[r19]
            int r2 = r2 + r11
            r11 = -405537848(0xffffffffe7d3fbc8, float:-2.0021277E24)
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r2 = r2 + r3
            int r11 = r0.G(r2, r3, r4)
            int r1 = r1 + r11
            int[] r11 = r0.X
            r11 = r11[r12]
            int r1 = r1 + r11
            r11 = 568446438(0x21e1cde6, float:1.5301094E-18)
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r15)
            int r1 = r1 + r2
            int r11 = r0.G(r1, r2, r3)
            int r4 = r4 + r11
            int[] r11 = r0.X
            r11 = r11[r7]
            int r4 = r4 + r11
            r11 = -1019803690(0xffffffffc33707d6, float:-183.03061)
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r12)
            int r4 = r4 + r1
            int r11 = r0.G(r4, r1, r2)
            int r3 = r3 + r11
            int[] r11 = r0.X
            r18 = 3
            r11 = r11[r18]
            int r3 = r3 + r11
            r11 = -187363961(0xfffffffff4d50d87, float:-1.3503828E32)
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r7)
            int r3 = r3 + r4
            int r11 = r0.G(r3, r4, r1)
            int r2 = r2 + r11
            int[] r11 = r0.X
            r11 = r11[r17]
            int r2 = r2 + r11
            r11 = 1163531501(0x455a14ed, float:3489.3079)
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r2 = r2 + r3
            int r11 = r0.G(r2, r3, r4)
            int r1 = r1 + r11
            int[] r11 = r0.X
            r11 = r11[r21]
            int r1 = r1 + r11
            r11 = -1444681467(0xffffffffa9e3e905, float:-1.01212475E-13)
            int r1 = r1 + r11
            int r1 = r0.rotateLeft(r1, r15)
            int r1 = r1 + r2
            int r11 = r0.G(r1, r2, r3)
            int r4 = r4 + r11
            int[] r11 = r0.X
            r16 = 2
            r11 = r11[r16]
            int r4 = r4 + r11
            r11 = -51403784(0xfffffffffcefa3f8, float:-9.954277E36)
            int r4 = r4 + r11
            int r4 = r0.rotateLeft(r4, r12)
            int r4 = r4 + r1
            int r11 = r0.G(r4, r1, r2)
            int r3 = r3 + r11
            int[] r11 = r0.X
            r11 = r11[r5]
            int r3 = r3 + r11
            r11 = 1735328473(0x676f02d9, float:1.1286981E24)
            int r3 = r3 + r11
            int r3 = r0.rotateLeft(r3, r7)
            int r3 = r3 + r4
            int r11 = r0.G(r3, r4, r1)
            int r2 = r2 + r11
            int[] r11 = r0.X
            r22 = 12
            r11 = r11[r22]
            int r2 = r2 + r11
            r11 = -1926607734(0xffffffff8d2a4c8a, float:-5.2477425E-31)
            int r2 = r2 + r11
            int r2 = r0.rotateLeft(r2, r9)
            int r2 = r2 + r3
            int r9 = r0.H(r2, r3, r4)
            int r1 = r1 + r9
            int[] r9 = r0.X
            r9 = r9[r15]
            int r1 = r1 + r9
            r9 = -378558(0xfffffffffffa3942, float:NaN)
            int r1 = r1 + r9
            r9 = 4
            int r1 = r0.rotateLeft(r1, r9)
            int r1 = r1 + r2
            int r9 = r0.H(r1, r2, r3)
            int r4 = r4 + r9
            int[] r9 = r0.X
            r9 = r9[r17]
            int r4 = r4 + r9
            r9 = -2022574463(0xffffffff8771f681, float:-1.8203266E-34)
            int r4 = r4 + r9
            int r4 = r0.rotateLeft(r4, r14)
            int r4 = r4 + r1
            int r9 = r0.H(r4, r1, r2)
            int r3 = r3 + r9
            int[] r9 = r0.X
            r9 = r9[r14]
            int r3 = r3 + r9
            r9 = 1839030562(0x6d9d6122, float:6.0883216E27)
            int r3 = r3 + r9
            r9 = 16
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r11 = r0.H(r3, r4, r1)
            int r2 = r2 + r11
            int[] r11 = r0.X
            r11 = r11[r7]
            int r2 = r2 + r11
            r11 = -35309556(0xfffffffffde5380c, float:-3.8085528E37)
            int r2 = r2 + r11
            r11 = 23
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r23 = r0.H(r2, r3, r4)
            int r1 = r1 + r23
            int[] r15 = r0.X
            r15 = r15[r8]
            int r1 = r1 + r15
            r15 = -1530992060(0xffffffffa4beea44, float:-8.2796227E-17)
            int r1 = r1 + r15
            r15 = 4
            int r1 = r0.rotateLeft(r1, r15)
            int r1 = r1 + r2
            int r19 = r0.H(r1, r2, r3)
            int r4 = r4 + r19
            int[] r8 = r0.X
            r8 = r8[r15]
            int r4 = r4 + r8
            r8 = 1272893353(0x4bdecfa9, float:2.9204306E7)
            int r4 = r4 + r8
            int r4 = r0.rotateLeft(r4, r14)
            int r4 = r4 + r1
            int r8 = r0.H(r4, r1, r2)
            int r3 = r3 + r8
            int[] r8 = r0.X
            r8 = r8[r5]
            int r3 = r3 + r8
            r8 = -155497632(0xfffffffff6bb4b60, float:-1.8993912E33)
            int r3 = r3 + r8
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r8 = r0.H(r3, r4, r1)
            int r2 = r2 + r8
            int[] r8 = r0.X
            r15 = 10
            r8 = r8[r15]
            int r2 = r2 + r8
            r8 = -1094730640(0xffffffffbebfbc70, float:-0.37448454)
            int r2 = r2 + r8
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r8 = r0.H(r2, r3, r4)
            int r1 = r1 + r8
            int[] r8 = r0.X
            r8 = r8[r21]
            int r1 = r1 + r8
            r8 = 681279174(0x289b7ec6, float:1.7263436E-14)
            int r1 = r1 + r8
            r8 = 4
            int r1 = r0.rotateLeft(r1, r8)
            int r1 = r1 + r2
            int r8 = r0.H(r1, r2, r3)
            int r4 = r4 + r8
            int[] r8 = r0.X
            r8 = r8[r6]
            int r4 = r4 + r8
            r8 = -358537222(0xffffffffeaa127fa, float:-9.741292E25)
            int r4 = r4 + r8
            int r4 = r0.rotateLeft(r4, r14)
            int r4 = r4 + r1
            int r8 = r0.H(r4, r1, r2)
            int r3 = r3 + r8
            int[] r8 = r0.X
            r15 = 3
            r8 = r8[r15]
            int r3 = r3 + r8
            r8 = -722521979(0xffffffffd4ef3085, float:-8.2184897E12)
            int r3 = r3 + r8
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r8 = r0.H(r3, r4, r1)
            int r2 = r2 + r8
            int[] r8 = r0.X
            r8 = r8[r10]
            int r2 = r2 + r8
            r8 = 76029189(0x4881d05, float:3.2000097E-36)
            int r2 = r2 + r8
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r8 = r0.H(r2, r3, r4)
            int r1 = r1 + r8
            int[] r8 = r0.X
            r8 = r8[r12]
            int r1 = r1 + r8
            r8 = -640364487(0xffffffffd9d4d039, float:-7.487705E15)
            int r1 = r1 + r8
            r8 = 4
            int r1 = r0.rotateLeft(r1, r8)
            int r1 = r1 + r2
            int r8 = r0.H(r1, r2, r3)
            int r4 = r4 + r8
            int[] r8 = r0.X
            r15 = 12
            r8 = r8[r15]
            int r4 = r4 + r8
            r8 = -421815835(0xffffffffe6db99e5, float:-5.1851856E23)
            int r4 = r4 + r8
            int r4 = r0.rotateLeft(r4, r14)
            int r4 = r4 + r1
            int r8 = r0.H(r4, r1, r2)
            int r3 = r3 + r8
            int[] r8 = r0.X
            r8 = r8[r13]
            int r3 = r3 + r8
            r8 = 530742520(0x1fa27cf8, float:6.881641E-20)
            int r3 = r3 + r8
            int r3 = r0.rotateLeft(r3, r9)
            int r3 = r3 + r4
            int r8 = r0.H(r3, r4, r1)
            int r2 = r2 + r8
            int[] r8 = r0.X
            r9 = 2
            r8 = r8[r9]
            int r2 = r2 + r8
            r8 = -995338651(0xffffffffc4ac5665, float:-1378.6998)
            int r2 = r2 + r8
            int r2 = r0.rotateLeft(r2, r11)
            int r2 = r2 + r3
            int r8 = r0.K(r2, r3, r4)
            int r1 = r1 + r8
            int[] r8 = r0.X
            r8 = r8[r6]
            int r1 = r1 + r8
            r8 = -198630844(0xfffffffff4292244, float:-5.3600657E31)
            int r1 = r1 + r8
            int r1 = r0.rotateLeft(r1, r10)
            int r1 = r1 + r2
            int r8 = r0.K(r1, r2, r3)
            int r4 = r4 + r8
            int[] r8 = r0.X
            r5 = r8[r5]
            int r4 = r4 + r5
            r5 = 1126891415(0x432aff97, float:170.9984)
            int r4 = r4 + r5
            r5 = 10
            int r4 = r0.rotateLeft(r4, r5)
            int r4 = r4 + r1
            int r5 = r0.K(r4, r1, r2)
            int r3 = r3 + r5
            int[] r5 = r0.X
            r5 = r5[r7]
            int r3 = r3 + r5
            r5 = -1416354905(0xffffffffab9423a7, float:-1.0525928E-12)
            int r3 = r3 + r5
            int r3 = r0.rotateLeft(r3, r13)
            int r3 = r3 + r4
            int r5 = r0.K(r3, r4, r1)
            int r2 = r2 + r5
            int[] r5 = r0.X
            r7 = 5
            r5 = r5[r7]
            int r2 = r2 + r5
            r5 = -57434055(0xfffffffffc93a039, float:-6.132139E36)
            int r2 = r2 + r5
            r5 = 21
            int r2 = r0.rotateLeft(r2, r5)
            int r2 = r2 + r3
            int r7 = r0.K(r2, r3, r4)
            int r1 = r1 + r7
            int[] r7 = r0.X
            r8 = 12
            r7 = r7[r8]
            int r1 = r1 + r7
            r7 = 1700485571(0x655b59c3, float:6.474088E22)
            int r1 = r1 + r7
            int r1 = r0.rotateLeft(r1, r10)
            int r1 = r1 + r2
            int r7 = r0.K(r1, r2, r3)
            int r4 = r4 + r7
            int[] r7 = r0.X
            r8 = 3
            r7 = r7[r8]
            int r4 = r4 + r7
            r7 = -1894986606(0xffffffff8f0ccc92, float:-6.941932E-30)
            int r4 = r4 + r7
            r7 = 10
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r8 = r0.K(r4, r1, r2)
            int r3 = r3 + r8
            int[] r8 = r0.X
            r8 = r8[r7]
            int r3 = r3 + r8
            r7 = -1051523(0xffffffffffeff47d, float:NaN)
            int r3 = r3 + r7
            int r3 = r0.rotateLeft(r3, r13)
            int r3 = r3 + r4
            int r7 = r0.K(r3, r4, r1)
            int r2 = r2 + r7
            int[] r7 = r0.X
            r8 = 1
            r7 = r7[r8]
            int r2 = r2 + r7
            r7 = -2054922799(0xffffffff85845dd1, float:-1.2447683E-35)
            int r2 = r2 + r7
            int r2 = r0.rotateLeft(r2, r5)
            int r2 = r2 + r3
            int r7 = r0.K(r2, r3, r4)
            int r1 = r1 + r7
            int[] r7 = r0.X
            r7 = r7[r17]
            int r1 = r1 + r7
            r7 = 1873313359(0x6fa87e4f, float:1.0429236E29)
            int r1 = r1 + r7
            int r1 = r0.rotateLeft(r1, r10)
            int r1 = r1 + r2
            int r7 = r0.K(r1, r2, r3)
            int r4 = r4 + r7
            int[] r7 = r0.X
            r7 = r7[r13]
            int r4 = r4 + r7
            r7 = -30611744(0xfffffffffe2ce6e0, float:-5.7456497E37)
            int r4 = r4 + r7
            r7 = 10
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r7 = r0.K(r4, r1, r2)
            int r3 = r3 + r7
            int[] r7 = r0.X
            r7 = r7[r10]
            int r3 = r3 + r7
            r7 = -1560198380(0xffffffffa3014314, float:-7.007308E-18)
            int r3 = r3 + r7
            int r3 = r0.rotateLeft(r3, r13)
            int r3 = r3 + r4
            int r7 = r0.K(r3, r4, r1)
            int r2 = r2 + r7
            int[] r7 = r0.X
            r7 = r7[r21]
            int r2 = r2 + r7
            r7 = 1309151649(0x4e0811a1, float:5.707142E8)
            int r2 = r2 + r7
            int r2 = r0.rotateLeft(r2, r5)
            int r2 = r2 + r3
            int r7 = r0.K(r2, r3, r4)
            int r1 = r1 + r7
            int[] r7 = r0.X
            r8 = 4
            r7 = r7[r8]
            int r1 = r1 + r7
            r7 = -145523070(0xfffffffff7537e82, float:-4.2896114E33)
            int r1 = r1 + r7
            int r1 = r0.rotateLeft(r1, r10)
            int r1 = r1 + r2
            int r7 = r0.K(r1, r2, r3)
            int r4 = r4 + r7
            int[] r7 = r0.X
            r7 = r7[r14]
            int r4 = r4 + r7
            r7 = -1120210379(0xffffffffbd3af235, float:-0.045641143)
            int r4 = r4 + r7
            r7 = 10
            int r4 = r0.rotateLeft(r4, r7)
            int r4 = r4 + r1
            int r7 = r0.K(r4, r1, r2)
            int r3 = r3 + r7
            int[] r7 = r0.X
            r8 = 2
            r7 = r7[r8]
            int r3 = r3 + r7
            r7 = 718787259(0x2ad7d2bb, float:3.8337896E-13)
            int r3 = r3 + r7
            int r3 = r0.rotateLeft(r3, r13)
            int r3 = r3 + r4
            int r7 = r0.K(r3, r4, r1)
            int r2 = r2 + r7
            int[] r7 = r0.X
            r7 = r7[r12]
            int r2 = r2 + r7
            r7 = -343485551(0xffffffffeb86d391, float:-3.259903E26)
            int r2 = r2 + r7
            int r2 = r0.rotateLeft(r2, r5)
            int r2 = r2 + r3
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
        L52a:
            int[] r2 = r0.X
            int r3 = r2.length
            if (r1 == r3) goto L534
            r2[r1] = r6
            int r1 = r1 + 1
            goto L52a
        L534:
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
