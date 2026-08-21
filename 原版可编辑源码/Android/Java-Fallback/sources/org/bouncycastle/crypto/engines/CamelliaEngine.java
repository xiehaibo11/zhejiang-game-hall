package org.bouncycastle.crypto.engines;

public class CamelliaEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int BLOCK_SIZE = 16;
    private static final long MASK32 = 4294967295L;
    private static final long MASK8 = 255;
    private static final long SIGMA1 = -6872943284670656373L;
    private static final long SIGMA2 = -5297666545706961998L;
    private static final long SIGMA3 = -4112007255848680770L;
    private static final long SIGMA4 = 6124705990439038748L;
    private static final long SIGMA5 = 1217423232700263709L;
    private static final long SIGMA6 = -5740250305213840899L;
    private final byte[] SBOX1;
    private final byte[] SBOX2;
    private final byte[] SBOX3;
    private final byte[] SBOX4;
    private long _k1;
    private long _k10;
    private long _k11;
    private long _k12;
    private long _k13;
    private long _k14;
    private long _k15;
    private long _k16;
    private long _k17;
    private long _k18;
    private long _k19;
    private long _k2;
    private long _k20;
    private long _k21;
    private long _k22;
    private long _k23;
    private long _k24;
    private long _k3;
    private long _k4;
    private long _k5;
    private long _k6;
    private long _k7;
    private long _k8;
    private long _k9;
    private long _ke1;
    private long _ke2;
    private long _ke3;
    private long _ke4;
    private long _ke5;
    private long _ke6;
    private boolean _keyIs128;
    private long _kw1;
    private long _kw2;
    private long _kw3;
    private long _kw4;
    private boolean initialised;

    public CamelliaEngine() {
            r6 = this;
            r6.<init>()
            r0 = 256(0x100, float:3.59E-43)
            byte[] r1 = new byte[r0]
            r1 = {x0048: FILL_ARRAY_DATA , data: [112, -126, 44, -20, -77, 39, -64, -27, -28, -123, 87, 53, -22, 12, -82, 65, 35, -17, 107, -109, 69, 25, -91, 33, -19, 14, 79, 78, 29, 101, -110, -67, -122, -72, -81, -113, 124, -21, 31, -50, 62, 48, -36, 95, 94, -59, 11, 26, -90, -31, 57, -54, -43, 71, 93, 61, -39, 1, 90, -42, 81, 86, 108, 77, -117, 13, -102, 102, -5, -52, -80, 45, 116, 18, 43, 32, -16, -79, -124, -103, -33, 76, -53, -62, 52, 126, 118, 5, 109, -73, -87, 49, -47, 23, 4, -41, 20, 88, 58, 97, -34, 27, 17, 28, 50, 15, -100, 22, 83, 24, -14, 34, -2, 68, -49, -78, -61, -75, 122, -111, 36, 8, -24, -88, 96, -4, 105, 80, -86, -48, -96, 125, -95, -119, 98, -105, 84, 91, 30, -107, -32, -1, 100, -46, 16, -60, 0, 72, -93, -9, 117, -37, -118, 3, -26, -38, 9, 63, -35, -108, -121, 92, -125, 2, -51, 74, -112, 51, 115, 103, -10, -13, -99, 127, -65, -30, 82, -101, -40, 38, -56, 55, -58, 59, -127, -106, 111, 75, 19, -66, 99, 46, -23, 121, -89, -116, -97, 110, -68, -114, 41, -11, -7, -74, 47, -3, -76, 89, 120, -104, 6, 106, -25, 70, 113, -70, -44, 37, -85, 66, -120, -94, -115, -6, 114, 7, -71, 85, -8, -18, -84, 10, 54, 73, 42, 104, 60, 56, -15, -92, 64, 40, -45, 123, -69, -55, 67, -63, 21, -29, -83, -12, 119, -57, -128, -98} // fill-array
            r6.SBOX1 = r1
            byte[] r1 = new byte[r0]
            r6.SBOX2 = r1
            byte[] r1 = new byte[r0]
            r6.SBOX3 = r1
            byte[] r1 = new byte[r0]
            r6.SBOX4 = r1
            r1 = 0
        L19:
            if (r1 == r0) goto L47
            byte[] r2 = r6.SBOX2
            byte[] r3 = r6.SBOX1
            r3 = r3[r1]
            r4 = 1
            byte r3 = r6.lRot8(r3, r4)
            r2[r1] = r3
            byte[] r2 = r6.SBOX3
            byte[] r3 = r6.SBOX1
            r3 = r3[r1]
            r5 = 7
            byte r3 = r6.lRot8(r3, r5)
            r2[r1] = r3
            byte[] r2 = r6.SBOX4
            byte[] r3 = r6.SBOX1
            byte r5 = (byte) r1
            byte r4 = r6.lRot8(r5, r4)
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3 = r3[r4]
            r2[r1] = r3
            int r1 = r1 + 1
            goto L19
        L47:
            return
    }

    private long bytesToWord(byte[] r6, int r7) {
            r5 = this;
            r0 = 0
            r2 = 0
        L3:
            r3 = 8
            if (r2 >= r3) goto L13
            long r0 = r0 << r3
            int r3 = r2 + r7
            r3 = r6[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 + r3
            int r2 = r2 + 1
            goto L3
        L13:
            return r0
    }

    private long f(long r18, long r20) {
            r17 = this;
            r0 = r17
            long r1 = r18 ^ r20
            r3 = 32
            long r4 = r1 >> r3
            int r5 = (int) r4
            int r2 = (int) r1
            byte[] r1 = r0.SBOX1
            int r4 = r5 >> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            byte[] r6 = r0.SBOX2
            int r7 = r5 >> 16
            r7 = r7 & 255(0xff, float:3.57E-43)
            r7 = r6[r7]
            byte[] r8 = r0.SBOX3
            int r9 = r5 >> 8
            r9 = r9 & 255(0xff, float:3.57E-43)
            r9 = r8[r9]
            byte[] r10 = r0.SBOX4
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r10[r5]
            int r11 = r2 >> 24
            r11 = r11 & 255(0xff, float:3.57E-43)
            r6 = r6[r11]
            int r11 = r2 >> 16
            r11 = r11 & 255(0xff, float:3.57E-43)
            r8 = r8[r11]
            int r11 = r2 >> 8
            r11 = r11 & 255(0xff, float:3.57E-43)
            r10 = r10[r11]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1 = r1[r2]
            r2 = r4 ^ r9
            r2 = r2 ^ r5
            r2 = r2 ^ r8
            r2 = r2 ^ r10
            r2 = r2 ^ r1
            r11 = r4 ^ r7
            r12 = r11 ^ r5
            r12 = r12 ^ r6
            r12 = r12 ^ r10
            r12 = r12 ^ r1
            r13 = r11 ^ r9
            r13 = r13 ^ r6
            r13 = r13 ^ r8
            r13 = r13 ^ r1
            r7 = r7 ^ r9
            r14 = r7 ^ r5
            r14 = r14 ^ r6
            r14 = r14 ^ r8
            r14 = r14 ^ r10
            r11 = r11 ^ r8
            r11 = r11 ^ r10
            r11 = r11 ^ r1
            r7 = r7 ^ r6
            r7 = r7 ^ r10
            r7 = r7 ^ r1
            r9 = r9 ^ r5
            r9 = r9 ^ r6
            r9 = r9 ^ r8
            r1 = r1 ^ r9
            r4 = r4 ^ r5
            r4 = r4 ^ r6
            r4 = r4 ^ r8
            r4 = r4 ^ r10
            long r5 = (long) r2
            r2 = 56
            long r5 = r5 << r2
            long r8 = (long) r12
            r15 = 255(0xff, double:1.26E-321)
            long r8 = r8 & r15
            r2 = 48
            long r8 = r8 << r2
            long r5 = r5 | r8
            long r8 = (long) r13
            long r8 = r8 & r15
            r2 = 40
            long r8 = r8 << r2
            long r5 = r5 | r8
            long r8 = (long) r14
            long r8 = r8 & r15
            long r2 = r8 << r3
            long r2 = r2 | r5
            long r5 = (long) r11
            long r5 = r5 & r15
            r8 = 24
            long r5 = r5 << r8
            long r2 = r2 | r5
            long r5 = (long) r7
            long r5 = r5 & r15
            r7 = 16
            long r5 = r5 << r7
            long r2 = r2 | r5
            long r5 = (long) r1
            long r5 = r5 & r15
            r1 = 8
            long r5 = r5 << r1
            long r1 = r2 | r5
            long r3 = (long) r4
            long r3 = r3 & r15
            long r1 = r1 | r3
            return r1
    }

    private long fl(long r6, long r8) {
            r5 = this;
            r0 = 32
            long r1 = r6 >> r0
            int r2 = (int) r1
            int r7 = (int) r6
            long r3 = r8 >> r0
            int r6 = (int) r3
            int r9 = (int) r8
            r6 = r6 & r2
            r8 = 1
            int r6 = r5.lRot32(r6, r8)
            r6 = r6 ^ r7
            r7 = r6 | r9
            r7 = r7 ^ r2
            long r7 = (long) r7
            long r7 = r7 << r0
            long r0 = (long) r6
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r6 = r7 | r0
            return r6
    }

    private long flInv(long r6, long r8) {
            r5 = this;
            r0 = 32
            long r1 = r6 >> r0
            int r2 = (int) r1
            int r7 = (int) r6
            long r3 = r8 >> r0
            int r6 = (int) r3
            int r9 = (int) r8
            r8 = r7 | r9
            r8 = r8 ^ r2
            r6 = r6 & r8
            r9 = 1
            int r6 = r5.lRot32(r6, r9)
            r6 = r6 ^ r7
            long r7 = (long) r8
            long r7 = r7 << r0
            long r0 = (long) r6
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r6 = r7 | r0
            return r6
    }

    private long lRot128high(long r2, long r4, int r6) {
            r1 = this;
            r0 = 64
            if (r6 >= r0) goto L9
            long r2 = r2 << r6
            int r6 = -r6
            long r4 = r4 >>> r6
            long r4 = r4 | r2
            goto L11
        L9:
            if (r6 != r0) goto Lc
            goto L11
        Lc:
            int r6 = r6 - r0
            long r4 = r4 << r6
            int r6 = -r6
            long r2 = r2 >>> r6
            long r4 = r4 | r2
        L11:
            return r4
    }

    private long lRot128low(long r2, long r4, int r6) {
            r1 = this;
            r0 = 64
            if (r6 >= r0) goto L9
            long r4 = r4 << r6
            int r6 = -r6
            long r2 = r2 >>> r6
            long r2 = r2 | r4
            goto L11
        L9:
            if (r6 != r0) goto Lc
            goto L11
        Lc:
            int r6 = r6 - r0
            long r2 = r2 << r6
            int r6 = -r6
            long r4 = r4 >>> r6
            long r2 = r2 | r4
        L11:
            return r2
    }

    private int lRot32(int r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            int r3 = -r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private byte lRot8(byte r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = 8 - r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            byte r2 = (byte) r2
            return r2
    }

    private int processBlock128(byte[] r5, int r6, byte[] r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r4 = this;
            long r0 = r4.bytesToWord(r5, r6)
            int r6 = r6 + 8
            long r5 = r4.bytesToWord(r5, r6)
            long r2 = r4._kw1
            long r0 = r0 ^ r2
            long r2 = r4._kw2
            long r5 = r5 ^ r2
            long r2 = r4._k1
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k2
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k3
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k4
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k5
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k6
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._ke1
            long r0 = r4.fl(r0, r2)
            long r2 = r4._ke2
            long r5 = r4.flInv(r5, r2)
            long r2 = r4._k7
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k8
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k9
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k10
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k11
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k12
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._ke3
            long r0 = r4.fl(r0, r2)
            long r2 = r4._ke4
            long r5 = r4.flInv(r5, r2)
            long r2 = r4._k13
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k14
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k15
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k16
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k17
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k18
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._kw3
            long r5 = r5 ^ r2
            long r2 = r4._kw4
            long r0 = r0 ^ r2
            r4.wordToBytes(r5, r7, r8)
            int r8 = r8 + 8
            r4.wordToBytes(r0, r7, r8)
            r5 = 16
            return r5
    }

    private int processBlock192or256(byte[] r5, int r6, byte[] r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r4 = this;
            long r0 = r4.bytesToWord(r5, r6)
            int r6 = r6 + 8
            long r5 = r4.bytesToWord(r5, r6)
            long r2 = r4._kw1
            long r0 = r0 ^ r2
            long r2 = r4._kw2
            long r5 = r5 ^ r2
            long r2 = r4._k1
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k2
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k3
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k4
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k5
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k6
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._ke1
            long r0 = r4.fl(r0, r2)
            long r2 = r4._ke2
            long r5 = r4.flInv(r5, r2)
            long r2 = r4._k7
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k8
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k9
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k10
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k11
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k12
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._ke3
            long r0 = r4.fl(r0, r2)
            long r2 = r4._ke4
            long r5 = r4.flInv(r5, r2)
            long r2 = r4._k13
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k14
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k15
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k16
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k17
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k18
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._ke5
            long r0 = r4.fl(r0, r2)
            long r2 = r4._ke6
            long r5 = r4.flInv(r5, r2)
            long r2 = r4._k19
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k20
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k21
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k22
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._k23
            long r2 = r4.f(r0, r2)
            long r5 = r5 ^ r2
            long r2 = r4._k24
            long r2 = r4.f(r5, r2)
            long r0 = r0 ^ r2
            long r2 = r4._kw3
            long r5 = r5 ^ r2
            long r2 = r4._kw4
            long r0 = r0 ^ r2
            r4.wordToBytes(r5, r7, r8)
            int r8 = r8 + 8
            r4.wordToBytes(r0, r7, r8)
            r5 = 16
            return r5
    }

    private void setKey(boolean r25, byte[] r26) {
            r24 = this;
            r6 = r24
            r0 = r26
            int r1 = r0.length
            r2 = 0
            r4 = 8
            r5 = 16
            r7 = 0
            if (r1 == r5) goto L4c
            r2 = 24
            if (r1 == r2) goto L34
            r3 = 32
            if (r1 != r3) goto L2c
            long r8 = r6.bytesToWord(r0, r7)
            long r3 = r6.bytesToWord(r0, r4)
            long r10 = r6.bytesToWord(r0, r5)
            long r0 = r6.bytesToWord(r0, r2)
            r6._keyIs128 = r7
            r14 = r0
            r12 = r3
            r7 = r8
            goto L5a
        L2c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "only a key sizes of 128/192/256 are acceptable."
            r0.<init>(r1)
            throw r0
        L34:
            long r1 = r6.bytesToWord(r0, r7)
            long r3 = r6.bytesToWord(r0, r4)
            long r8 = r6.bytesToWord(r0, r5)
            long r10 = r6.bytesToWord(r0, r5)
            long r10 = ~r10
            r6._keyIs128 = r7
            r12 = r3
            r14 = r10
            r10 = r8
            r7 = r1
            goto L5a
        L4c:
            r1 = 1
            r6._keyIs128 = r1
            long r7 = r6.bytesToWord(r0, r7)
            long r0 = r6.bytesToWord(r0, r4)
            r12 = r0
            r10 = r2
            r14 = r10
        L5a:
            long r0 = r7 ^ r10
            long r2 = r12 ^ r14
            r4 = -6872943284670656373(0xa09e667f3bcc908b, double:-1.451112860296783E-151)
            long r4 = r6.f(r0, r4)
            long r2 = r2 ^ r4
            r4 = -5297666545706961998(0xb67ae8584caa73b2, double:-2.945748034025331E-46)
            long r4 = r6.f(r2, r4)
            long r0 = r0 ^ r4
            long r0 = r0 ^ r7
            long r2 = r2 ^ r12
            r4 = -4112007255848680770(0xc6ef372fe94f82be, double:-5.065016596017141E33)
            long r4 = r6.f(r0, r4)
            long r3 = r2 ^ r4
            r16 = r14
            r14 = 6124705990439038748(0x54ff53a5f1d36f1c, double:2.740778341307747E101)
            long r14 = r6.f(r3, r14)
            long r14 = r14 ^ r0
            boolean r0 = r6._keyIs128
            if (r0 == 0) goto L263
            if (r25 == 0) goto L17d
            r6._kw1 = r7
            r6._kw2 = r12
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r14
            r9 = r3
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._kw3 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._kw4 = r0
            r6._k1 = r14
            r6._k2 = r9
            r5 = 15
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k3 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k4 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k5 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k6 = r0
            r5 = 45
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k7 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k8 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k9 = r0
            r5 = 60
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k10 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k11 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k12 = r0
            r5 = 94
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k13 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k14 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k15 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k16 = r0
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k17 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k18 = r0
            r5 = 30
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke1 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke2 = r0
            r5 = 77
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke3 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke4 = r0
            goto L51c
        L17d:
            r9 = r3
            r6._kw3 = r7
            r6._kw4 = r12
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._kw1 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._kw2 = r0
            r6._k18 = r14
            r6._k17 = r9
            r5 = 15
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k16 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k15 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k14 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k13 = r0
            r5 = 45
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k12 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k11 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k10 = r0
            r5 = 60
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k9 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k8 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k7 = r0
            r5 = 94
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k6 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k5 = r0
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k4 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k3 = r0
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k2 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k1 = r0
            r5 = 30
            r0 = r24
            r1 = r14
            r3 = r9
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke4 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke3 = r0
            r5 = 77
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke2 = r0
            r0 = r24
            r1 = r7
            goto L516
        L263:
            r18 = r3
            long r0 = r14 ^ r10
            long r2 = r18 ^ r16
            r4 = 1217423232700263709(0x10e527fade682d1d, double:2.7908106104629055E-227)
            long r4 = r6.f(r0, r4)
            long r3 = r2 ^ r4
            r20 = r14
            r14 = -5740250305213840899(0xb05688c2b3e6c1fd, double:-7.784373207690578E-76)
            long r14 = r6.f(r3, r14)
            long r14 = r14 ^ r0
            if (r25 == 0) goto L3cc
            r6._kw1 = r7
            r6._kw2 = r12
            r6._k1 = r14
            r6._k2 = r3
            r5 = 15
            r0 = r24
            r1 = r10
            r25 = r3
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k3 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k4 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k5 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k6 = r0
            r5 = 30
            r0 = r24
            r1 = r10
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke1 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke2 = r0
            r0 = r24
            r1 = r14
            r3 = r25
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k7 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k8 = r0
            r5 = 45
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k9 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k10 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k11 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k12 = r0
            r5 = 60
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke3 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke4 = r0
            r0 = r24
            r1 = r10
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k13 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k14 = r0
            r0 = r24
            r1 = r14
            r3 = r25
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k15 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k16 = r0
            r5 = 77
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k17 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k18 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke5 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke6 = r0
            r5 = 94
            r0 = r24
            r1 = r10
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k19 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k20 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k21 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k22 = r0
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k23 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k24 = r0
            r0 = r24
            r1 = r14
            r3 = r25
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._kw3 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._kw4 = r0
            goto L51c
        L3cc:
            r25 = r3
            r6._kw3 = r7
            r6._kw4 = r12
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._kw1 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._kw2 = r0
            r6._k24 = r14
            r6._k23 = r3
            r5 = 15
            r0 = r24
            r1 = r10
            r22 = r3
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k22 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k21 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k20 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k19 = r0
            r5 = 30
            r0 = r24
            r1 = r14
            r3 = r22
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k18 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k17 = r0
            r5 = 45
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k16 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k15 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k14 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k13 = r0
            r5 = 60
            r0 = r24
            r1 = r10
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k12 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k11 = r0
            r0 = r24
            r1 = r14
            r3 = r22
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k10 = r0
            r0 = r24
            r1 = r14
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k9 = r0
            r5 = 77
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k8 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k7 = r0
            r5 = 94
            r0 = r24
            r1 = r10
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k6 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k5 = r0
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k4 = r0
            r0 = r24
            r1 = r20
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k3 = r0
            r5 = 111(0x6f, float:1.56E-43)
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._k2 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._k1 = r0
            r5 = 30
            r0 = r24
            r1 = r10
            r3 = r16
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke6 = r0
            r0 = r24
            r1 = r10
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke5 = r0
            r5 = 60
            r0 = r24
            r1 = r7
            r3 = r12
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke4 = r0
            r0 = r24
            r1 = r7
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke3 = r0
            r5 = 77
            r0 = r24
            r1 = r20
            r3 = r18
            long r0 = r0.lRot128high(r1, r3, r5)
            r6._ke2 = r0
            r0 = r24
            r1 = r20
        L516:
            long r0 = r0.lRot128low(r1, r3, r5)
            r6._ke1 = r0
        L51c:
            return
    }

    private void wordToBytes(long r5, byte[] r7, int r8) {
            r4 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto L10
            int r2 = 7 - r0
            int r2 = r2 + r8
            int r3 = (int) r5
            byte r3 = (byte) r3
            r7[r2] = r3
            long r5 = r5 >>> r1
            int r0 = r0 + 1
            goto L1
        L10:
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Camellia"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) throws java.lang.IllegalArgumentException {
            r1 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L11
            org.bouncycastle.crypto.params.KeyParameter r3 = (org.bouncycastle.crypto.params.KeyParameter) r3
            byte[] r3 = r3.getKey()
            r1.setKey(r2, r3)
            r2 = 1
            r1.initialised = r2
            return
        L11:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "only simple KeyParameter expected."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public int processBlock(byte[] r3, int r4, byte[] r5, int r6) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r2 = this;
            boolean r0 = r2.initialised
            if (r0 == 0) goto L2c
            int r0 = r4 + 16
            int r1 = r3.length
            if (r0 > r1) goto L24
            int r0 = r6 + 16
            int r1 = r5.length
            if (r0 > r1) goto L1c
            boolean r0 = r2._keyIs128
            if (r0 == 0) goto L17
            int r3 = r2.processBlock128(r3, r4, r5, r6)
            return r3
        L17:
            int r3 = r2.processBlock192or256(r3, r4, r5, r6)
            return r3
        L1c:
            org.bouncycastle.crypto.DataLengthException r3 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r4 = "output buffer too short"
            r3.<init>(r4)
            throw r3
        L24:
            org.bouncycastle.crypto.DataLengthException r3 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r4 = "input buffer too short"
            r3.<init>(r4)
            throw r3
        L2c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Camellia engine not initialised"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
