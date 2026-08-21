package org.bouncycastle.crypto.engines;

public final class TwofishEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int BLOCK_SIZE = 16;
    private static final int GF256_FDBK = 361;
    private static final int GF256_FDBK_2 = 180;
    private static final int GF256_FDBK_4 = 90;
    private static final int INPUT_WHITEN = 0;
    private static final int MAX_KEY_BITS = 256;
    private static final int MAX_ROUNDS = 16;
    private static final int OUTPUT_WHITEN = 4;
    private static final byte[][] P = null;
    private static final int P_00 = 1;
    private static final int P_01 = 0;
    private static final int P_02 = 0;
    private static final int P_03 = 1;
    private static final int P_04 = 1;
    private static final int P_10 = 0;
    private static final int P_11 = 0;
    private static final int P_12 = 1;
    private static final int P_13 = 1;
    private static final int P_14 = 0;
    private static final int P_20 = 1;
    private static final int P_21 = 1;
    private static final int P_22 = 0;
    private static final int P_23 = 0;
    private static final int P_24 = 0;
    private static final int P_30 = 0;
    private static final int P_31 = 1;
    private static final int P_32 = 1;
    private static final int P_33 = 0;
    private static final int P_34 = 1;
    private static final int ROUNDS = 16;
    private static final int ROUND_SUBKEYS = 8;
    private static final int RS_GF_FDBK = 333;
    private static final int SK_BUMP = 16843009;
    private static final int SK_ROTL = 9;
    private static final int SK_STEP = 33686018;
    private static final int TOTAL_SUBKEYS = 40;
    private boolean encrypting;
    private int[] gMDS0;
    private int[] gMDS1;
    private int[] gMDS2;
    private int[] gMDS3;
    private int[] gSBox;
    private int[] gSubKeys;
    private int k64Cnt;
    private byte[] workingKey;

    static {
            r0 = 2
            byte[][] r0 = new byte[r0][]
            r1 = 256(0x100, float:3.59E-43)
            byte[] r2 = new byte[r1]
            r2 = {x0018: FILL_ARRAY_DATA , data: [-87, 103, -77, -24, 4, -3, -93, 118, -102, -110, -128, 120, -28, -35, -47, 56, 13, -58, 53, -104, 24, -9, -20, 108, 67, 117, 55, 38, -6, 19, -108, 72, -14, -48, -117, 48, -124, 84, -33, 35, 25, 91, 61, 89, -13, -82, -94, -126, 99, 1, -125, 46, -39, 81, -101, 124, -90, -21, -91, -66, 22, 12, -29, 97, -64, -116, 58, -11, 115, 44, 37, 11, -69, 78, -119, 107, 83, 106, -76, -15, -31, -26, -67, 69, -30, -12, -74, 102, -52, -107, 3, 86, -44, 28, 30, -41, -5, -61, -114, -75, -23, -49, -65, -70, -22, 119, 57, -81, 51, -55, 98, 113, -127, 121, 9, -83, 36, -51, -7, -40, -27, -59, -71, 77, 68, 8, -122, -25, -95, 29, -86, -19, 6, 112, -78, -46, 65, 123, -96, 17, 49, -62, 39, -112, 32, -10, 96, -1, -106, 92, -79, -85, -98, -100, 82, 27, 95, -109, 10, -17, -111, -123, 73, -18, 45, 79, -113, 59, 71, -121, 109, 70, -42, 62, 105, 100, 42, -50, -53, 47, -4, -105, 5, 122, -84, 127, -43, 26, 75, 14, -89, 90, 40, 20, 63, 41, -120, 60, 76, 2, -72, -38, -80, 23, 85, 31, -118, 125, 87, -57, -115, 116, -73, -60, -97, 114, 126, 21, 34, 18, 88, 7, -103, 52, 110, 80, -34, 104, 101, -68, -37, -8, -56, -88, 43, 64, -36, -2, 50, -92, -54, 16, 33, -16, -45, 93, 15, 0, 111, -99, 54, 66, 74, 94, -63, -32} // fill-array
            r3 = 0
            r0[r3] = r2
            byte[] r1 = new byte[r1]
            r1 = {x009c: FILL_ARRAY_DATA , data: [117, -13, -58, -12, -37, 123, -5, -56, 74, -45, -26, 107, 69, 125, -24, 75, -42, 50, -40, -3, 55, 113, -15, -31, 48, 15, -8, 27, -121, -6, 6, 63, 94, -70, -82, 91, -118, 0, -68, -99, 109, -63, -79, 14, -128, 93, -46, -43, -96, -124, 7, 20, -75, -112, 44, -93, -78, 115, 76, 84, -110, 116, 54, 81, 56, -80, -67, 90, -4, 96, 98, -106, 108, 66, -9, 16, 124, 40, 39, -116, 19, -107, -100, -57, 36, 70, 59, 112, -54, -29, -123, -53, 17, -48, -109, -72, -90, -125, 32, -1, -97, 119, -61, -52, 3, 111, 8, -65, 64, -25, 43, -30, 121, 12, -86, -126, 65, 58, -22, -71, -28, -102, -92, -105, 126, -38, 122, 23, 102, -108, -95, 29, 61, -16, -34, -77, 11, 114, -89, 28, -17, -47, 83, 62, -113, 51, 38, 95, -20, 118, 42, 73, -127, -120, -18, 33, -60, 26, -21, -39, -59, 57, -103, -51, -83, 49, -117, 1, 24, 35, -35, 31, 78, 45, -7, 72, 79, -14, 101, -114, 120, 92, 88, 25, -115, -27, -104, 87, 103, 127, 5, 100, -81, 99, -74, -2, -11, -73, 60, -91, -50, -23, 104, 68, -32, 77, 67, 105, 41, 46, -84, 21, 89, -88, 10, -98, 110, 71, -33, 52, 53, 106, -49, -36, 34, -55, -64, -101, -119, -44, -19, -85, 18, -94, 13, 82, -69, 2, 47, -87, -41, 97, 30, -76, 80, 4, -10, -62, 22, 37, -122, 86, 85, 9, -66, -111} // fill-array
            r2 = 1
            r0[r2] = r1
            org.bouncycastle.crypto.engines.TwofishEngine.P = r0
            return
    }

    public TwofishEngine() {
            r10 = this;
            r10.<init>()
            r0 = 0
            r10.encrypting = r0
            r1 = 256(0x100, float:3.59E-43)
            int[] r2 = new int[r1]
            r10.gMDS0 = r2
            int[] r2 = new int[r1]
            r10.gMDS1 = r2
            int[] r2 = new int[r1]
            r10.gMDS2 = r2
            int[] r2 = new int[r1]
            r10.gMDS3 = r2
            r10.k64Cnt = r0
            r2 = 0
            r10.workingKey = r2
            r2 = 2
            int[] r3 = new int[r2]
            int[] r4 = new int[r2]
            int[] r2 = new int[r2]
            r5 = 0
        L25:
            if (r5 >= r1) goto Lb4
            byte[][] r6 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r6 = r6[r0]
            r6 = r6[r5]
            r6 = r6 & 255(0xff, float:3.57E-43)
            r3[r0] = r6
            int r7 = r10.Mx_X(r6)
            r7 = r7 & 255(0xff, float:3.57E-43)
            r4[r0] = r7
            int r6 = r10.Mx_Y(r6)
            r6 = r6 & 255(0xff, float:3.57E-43)
            r2[r0] = r6
            byte[][] r6 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r7 = 1
            r6 = r6[r7]
            r6 = r6[r5]
            r6 = r6 & 255(0xff, float:3.57E-43)
            r3[r7] = r6
            int r8 = r10.Mx_X(r6)
            r8 = r8 & 255(0xff, float:3.57E-43)
            r4[r7] = r8
            int r6 = r10.Mx_Y(r6)
            r6 = r6 & 255(0xff, float:3.57E-43)
            r2[r7] = r6
            int[] r6 = r10.gMDS0
            r8 = r3[r7]
            r9 = r4[r7]
            int r9 = r9 << 8
            r8 = r8 | r9
            r9 = r2[r7]
            int r9 = r9 << 16
            r8 = r8 | r9
            r9 = r2[r7]
            int r9 = r9 << 24
            r8 = r8 | r9
            r6[r5] = r8
            int[] r6 = r10.gMDS1
            r8 = r2[r0]
            r9 = r2[r0]
            int r9 = r9 << 8
            r8 = r8 | r9
            r9 = r4[r0]
            int r9 = r9 << 16
            r8 = r8 | r9
            r9 = r3[r0]
            int r9 = r9 << 24
            r8 = r8 | r9
            r6[r5] = r8
            int[] r6 = r10.gMDS2
            r8 = r4[r7]
            r9 = r2[r7]
            int r9 = r9 << 8
            r8 = r8 | r9
            r9 = r3[r7]
            int r9 = r9 << 16
            r8 = r8 | r9
            r7 = r2[r7]
            int r7 = r7 << 24
            r7 = r7 | r8
            r6[r5] = r7
            int[] r6 = r10.gMDS3
            r7 = r4[r0]
            r8 = r3[r0]
            int r8 = r8 << 8
            r7 = r7 | r8
            r8 = r2[r0]
            int r8 = r8 << 16
            r7 = r7 | r8
            r8 = r4[r0]
            int r8 = r8 << 24
            r7 = r7 | r8
            r6[r5] = r7
            int r5 = r5 + 1
            goto L25
        Lb4:
            return
    }

    private final void Bits32ToBytes(int r3, byte[] r4, int r5) {
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

    private final int BytesTo32Bits(byte[] r3, int r4) {
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

    private final int F32(int r12, int[] r13) {
            r11 = this;
            int r0 = r11.b0(r12)
            int r1 = r11.b1(r12)
            int r2 = r11.b2(r12)
            int r12 = r11.b3(r12)
            r3 = 0
            r4 = r13[r3]
            r5 = 1
            r6 = r13[r5]
            r7 = 2
            r8 = r13[r7]
            r9 = 3
            r13 = r13[r9]
            int r10 = r11.k64Cnt
            r10 = r10 & r9
            if (r10 == 0) goto L71
            if (r10 == r5) goto L29
            if (r10 == r7) goto Ld9
            if (r10 == r9) goto La5
            goto L14d
        L29:
            int[] r13 = r11.gMDS0
            byte[][] r6 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r6 = r6[r3]
            r0 = r6[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r6 = r11.b0(r4)
            r0 = r0 ^ r6
            r13 = r13[r0]
            int[] r0 = r11.gMDS1
            byte[][] r6 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r3 = r6[r3]
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r11.b1(r4)
            r1 = r1 ^ r3
            r0 = r0[r1]
            r13 = r13 ^ r0
            int[] r0 = r11.gMDS2
            byte[][] r1 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r1 = r1[r5]
            r1 = r1[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r11.b2(r4)
            r1 = r1 ^ r2
            r0 = r0[r1]
            r13 = r13 ^ r0
            int[] r0 = r11.gMDS3
            byte[][] r1 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r1 = r1[r5]
            r12 = r1[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r1 = r11.b3(r4)
            r12 = r12 ^ r1
            r12 = r0[r12]
            goto L14b
        L71:
            byte[][] r7 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r7 = r7[r5]
            r0 = r7[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r7 = r11.b0(r13)
            r0 = r0 ^ r7
            byte[][] r7 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r7 = r7[r3]
            r1 = r7[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r7 = r11.b1(r13)
            r1 = r1 ^ r7
            byte[][] r7 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r7 = r7[r3]
            r2 = r7[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r7 = r11.b2(r13)
            r2 = r2 ^ r7
            byte[][] r7 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r7 = r7[r5]
            r12 = r7[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r13 = r11.b3(r13)
            r12 = r12 ^ r13
        La5:
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r5]
            r13 = r13[r0]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r0 = r11.b0(r8)
            r0 = r0 ^ r13
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r5]
            r13 = r13[r1]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r1 = r11.b1(r8)
            r1 = r1 ^ r13
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r3]
            r13 = r13[r2]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r2 = r11.b2(r8)
            r2 = r2 ^ r13
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r3]
            r12 = r13[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r13 = r11.b3(r8)
            r12 = r12 ^ r13
        Ld9:
            int[] r13 = r11.gMDS0
            byte[][] r7 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r8 = r7[r3]
            r7 = r7[r3]
            r0 = r7[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r7 = r11.b0(r6)
            r0 = r0 ^ r7
            r0 = r8[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r7 = r11.b0(r4)
            r0 = r0 ^ r7
            r13 = r13[r0]
            int[] r0 = r11.gMDS1
            byte[][] r7 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r8 = r7[r3]
            r7 = r7[r5]
            r1 = r7[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r7 = r11.b1(r6)
            r1 = r1 ^ r7
            r1 = r8[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r7 = r11.b1(r4)
            r1 = r1 ^ r7
            r0 = r0[r1]
            r13 = r13 ^ r0
            int[] r0 = r11.gMDS2
            byte[][] r1 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r7 = r1[r5]
            r1 = r1[r3]
            r1 = r1[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r11.b2(r6)
            r1 = r1 ^ r2
            r1 = r7[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r11.b2(r4)
            r1 = r1 ^ r2
            r0 = r0[r1]
            r13 = r13 ^ r0
            int[] r0 = r11.gMDS3
            byte[][] r1 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r2 = r1[r5]
            r1 = r1[r5]
            r12 = r1[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r1 = r11.b3(r6)
            r12 = r12 ^ r1
            r12 = r2[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r1 = r11.b3(r4)
            r12 = r12 ^ r1
            r12 = r0[r12]
        L14b:
            r3 = r13 ^ r12
        L14d:
            return r3
    }

    private final int Fe32_0(int r4) {
            r3 = this;
            int[] r0 = r3.gSBox
            r1 = r4 & 255(0xff, float:3.57E-43)
            int r1 = r1 * 2
            int r1 = r1 + 0
            r1 = r0[r1]
            int r2 = r4 >>> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 * 2
            int r2 = r2 + 1
            r2 = r0[r2]
            r1 = r1 ^ r2
            int r2 = r4 >>> 16
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 * 2
            int r2 = r2 + 512
            r2 = r0[r2]
            r1 = r1 ^ r2
            int r4 = r4 >>> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 * 2
            int r4 = r4 + 513
            r4 = r0[r4]
            r4 = r4 ^ r1
            return r4
    }

    private final int Fe32_3(int r4) {
            r3 = this;
            int[] r0 = r3.gSBox
            int r1 = r4 >>> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 * 2
            int r1 = r1 + 0
            r1 = r0[r1]
            r2 = r4 & 255(0xff, float:3.57E-43)
            int r2 = r2 * 2
            int r2 = r2 + 1
            r2 = r0[r2]
            r1 = r1 ^ r2
            int r2 = r4 >>> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 * 2
            int r2 = r2 + 512
            r2 = r0[r2]
            r1 = r1 ^ r2
            int r4 = r4 >>> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 * 2
            int r4 = r4 + 513
            r4 = r0[r4]
            r4 = r4 ^ r1
            return r4
    }

    private final int LFSR1(int r2) {
            r1 = this;
            int r0 = r2 >> 1
            r2 = r2 & 1
            if (r2 == 0) goto L9
            r2 = 180(0xb4, float:2.52E-43)
            goto La
        L9:
            r2 = 0
        La:
            r2 = r2 ^ r0
            return r2
    }

    private final int LFSR2(int r4) {
            r3 = this;
            int r0 = r4 >> 2
            r1 = r4 & 2
            r2 = 0
            if (r1 == 0) goto La
            r1 = 180(0xb4, float:2.52E-43)
            goto Lb
        La:
            r1 = 0
        Lb:
            r0 = r0 ^ r1
            r4 = r4 & 1
            if (r4 == 0) goto L12
            r2 = 90
        L12:
            r4 = r0 ^ r2
            return r4
    }

    private final int Mx_X(int r2) {
            r1 = this;
            int r0 = r1.LFSR2(r2)
            r2 = r2 ^ r0
            return r2
    }

    private final int Mx_Y(int r2) {
            r1 = this;
            int r0 = r1.LFSR1(r2)
            r0 = r0 ^ r2
            int r2 = r1.LFSR2(r2)
            r2 = r2 ^ r0
            return r2
    }

    private final int RS_MDS_Encode(int r4, int r5) {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 4
            if (r1 >= r2) goto Lc
            int r5 = r3.RS_rem(r5)
            int r1 = r1 + 1
            goto L2
        Lc:
            r4 = r4 ^ r5
        Ld:
            if (r0 >= r2) goto L16
            int r4 = r3.RS_rem(r4)
            int r0 = r0 + 1
            goto Ld
        L16:
            return r4
    }

    private final int RS_rem(int r6) {
            r5 = this;
            int r0 = r6 >>> 24
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r0 << 1
            r2 = r0 & 128(0x80, float:1.8E-43)
            r3 = 0
            if (r2 == 0) goto Le
            r2 = 333(0x14d, float:4.67E-43)
            goto Lf
        Le:
            r2 = 0
        Lf:
            r1 = r1 ^ r2
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r0 >>> 1
            r4 = r0 & 1
            if (r4 == 0) goto L1a
            r3 = 166(0xa6, float:2.33E-43)
        L1a:
            r2 = r2 ^ r3
            r2 = r2 ^ r1
            int r6 = r6 << 8
            int r3 = r2 << 24
            r6 = r6 ^ r3
            int r1 = r1 << 16
            r6 = r6 ^ r1
            int r1 = r2 << 8
            r6 = r6 ^ r1
            r6 = r6 ^ r0
            return r6
    }

    private final int b0(int r1) {
            r0 = this;
            r1 = r1 & 255(0xff, float:3.57E-43)
            return r1
    }

    private final int b1(int r1) {
            r0 = this;
            int r1 = r1 >>> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            return r1
    }

    private final int b2(int r1) {
            r0 = this;
            int r1 = r1 >>> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            return r1
    }

    private final int b3(int r1) {
            r0 = this;
            int r1 = r1 >>> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            return r1
    }

    private void decryptBlock(byte[] r11, int r12, byte[] r13, int r14) {
            r10 = this;
            int r0 = r10.BytesTo32Bits(r11, r12)
            int[] r1 = r10.gSubKeys
            r2 = 4
            r1 = r1[r2]
            r0 = r0 ^ r1
            int r1 = r12 + 4
            int r1 = r10.BytesTo32Bits(r11, r1)
            int[] r2 = r10.gSubKeys
            r3 = 5
            r2 = r2[r3]
            r1 = r1 ^ r2
            int r2 = r12 + 8
            int r2 = r10.BytesTo32Bits(r11, r2)
            int[] r3 = r10.gSubKeys
            r4 = 6
            r3 = r3[r4]
            r2 = r2 ^ r3
            int r12 = r12 + 12
            int r11 = r10.BytesTo32Bits(r11, r12)
            int[] r12 = r10.gSubKeys
            r3 = 7
            r12 = r12[r3]
            r11 = r11 ^ r12
            r12 = 0
            r3 = 39
            r4 = 0
        L32:
            r5 = 16
            if (r4 >= r5) goto L81
            int r5 = r10.Fe32_0(r0)
            int r6 = r10.Fe32_3(r1)
            int r7 = r6 * 2
            int r7 = r7 + r5
            int[] r8 = r10.gSubKeys
            int r9 = r3 + (-1)
            r3 = r8[r3]
            int r7 = r7 + r3
            r11 = r11 ^ r7
            int r3 = r2 << 1
            int r2 = r2 >>> 31
            r2 = r2 | r3
            int r5 = r5 + r6
            int r3 = r9 + (-1)
            r6 = r8[r9]
            int r5 = r5 + r6
            r2 = r2 ^ r5
            int r5 = r11 >>> 1
            int r11 = r11 << 31
            r11 = r11 | r5
            int r5 = r10.Fe32_0(r2)
            int r6 = r10.Fe32_3(r11)
            int r7 = r6 * 2
            int r7 = r7 + r5
            int[] r8 = r10.gSubKeys
            int r9 = r3 + (-1)
            r3 = r8[r3]
            int r7 = r7 + r3
            r1 = r1 ^ r7
            int r3 = r0 << 1
            int r0 = r0 >>> 31
            r0 = r0 | r3
            int r5 = r5 + r6
            int r3 = r9 + (-1)
            r6 = r8[r9]
            int r5 = r5 + r6
            r0 = r0 ^ r5
            int r5 = r1 >>> 1
            int r1 = r1 << 31
            r1 = r1 | r5
            int r4 = r4 + 2
            goto L32
        L81:
            int[] r3 = r10.gSubKeys
            r12 = r3[r12]
            r12 = r12 ^ r2
            r10.Bits32ToBytes(r12, r13, r14)
            int[] r12 = r10.gSubKeys
            r2 = 1
            r12 = r12[r2]
            r11 = r11 ^ r12
            int r12 = r14 + 4
            r10.Bits32ToBytes(r11, r13, r12)
            int[] r11 = r10.gSubKeys
            r12 = 2
            r11 = r11[r12]
            r11 = r11 ^ r0
            int r12 = r14 + 8
            r10.Bits32ToBytes(r11, r13, r12)
            int[] r11 = r10.gSubKeys
            r12 = 3
            r11 = r11[r12]
            r11 = r11 ^ r1
            int r14 = r14 + 12
            r10.Bits32ToBytes(r11, r13, r14)
            return
    }

    private void encryptBlock(byte[] r12, int r13, byte[] r14, int r15) {
            r11 = this;
            int r0 = r11.BytesTo32Bits(r12, r13)
            int[] r1 = r11.gSubKeys
            r2 = 0
            r1 = r1[r2]
            r0 = r0 ^ r1
            int r1 = r13 + 4
            int r1 = r11.BytesTo32Bits(r12, r1)
            int[] r3 = r11.gSubKeys
            r4 = 1
            r3 = r3[r4]
            r1 = r1 ^ r3
            int r3 = r13 + 8
            int r3 = r11.BytesTo32Bits(r12, r3)
            int[] r4 = r11.gSubKeys
            r5 = 2
            r4 = r4[r5]
            r3 = r3 ^ r4
            int r13 = r13 + 12
            int r12 = r11.BytesTo32Bits(r12, r13)
            int[] r13 = r11.gSubKeys
            r4 = 3
            r13 = r13[r4]
            r12 = r12 ^ r13
            r13 = 8
        L30:
            r4 = 16
            if (r2 >= r4) goto L86
            int r4 = r11.Fe32_0(r0)
            int r6 = r11.Fe32_3(r1)
            int r7 = r4 + r6
            int[] r8 = r11.gSubKeys
            int r9 = r13 + 1
            r13 = r8[r13]
            int r7 = r7 + r13
            r13 = r3 ^ r7
            int r3 = r13 >>> 1
            int r13 = r13 << 31
            r3 = r3 | r13
            int r13 = r12 << 1
            int r12 = r12 >>> 31
            r12 = r12 | r13
            int r6 = r6 * 2
            int r4 = r4 + r6
            int r13 = r9 + 1
            r6 = r8[r9]
            int r4 = r4 + r6
            r12 = r12 ^ r4
            int r4 = r11.Fe32_0(r3)
            int r6 = r11.Fe32_3(r12)
            int r7 = r4 + r6
            int[] r8 = r11.gSubKeys
            int r9 = r13 + 1
            r13 = r8[r13]
            int r7 = r7 + r13
            r13 = r0 ^ r7
            int r0 = r13 >>> 1
            int r13 = r13 << 31
            r0 = r0 | r13
            int r13 = r1 << 1
            int r1 = r1 >>> 31
            r13 = r13 | r1
            int r6 = r6 * 2
            int r4 = r4 + r6
            int r1 = r9 + 1
            r6 = r8[r9]
            int r4 = r4 + r6
            r13 = r13 ^ r4
            int r2 = r2 + 2
            r10 = r1
            r1 = r13
            r13 = r10
            goto L30
        L86:
            int[] r13 = r11.gSubKeys
            r2 = 4
            r13 = r13[r2]
            r13 = r13 ^ r3
            r11.Bits32ToBytes(r13, r14, r15)
            int[] r13 = r11.gSubKeys
            r2 = 5
            r13 = r13[r2]
            r12 = r12 ^ r13
            int r13 = r15 + 4
            r11.Bits32ToBytes(r12, r14, r13)
            int[] r12 = r11.gSubKeys
            r13 = 6
            r12 = r12[r13]
            r12 = r12 ^ r0
            int r13 = r15 + 8
            r11.Bits32ToBytes(r12, r14, r13)
            int[] r12 = r11.gSubKeys
            r13 = 7
            r12 = r12[r13]
            r12 = r12 ^ r1
            int r15 = r15 + 12
            r11.Bits32ToBytes(r12, r14, r15)
            return
    }

    private void setKey(byte[] r19) {
            r18 = this;
            r0 = r18
            r1 = r19
            r2 = 4
            int[] r3 = new int[r2]
            int[] r4 = new int[r2]
            int[] r5 = new int[r2]
            r6 = 40
            int[] r6 = new int[r6]
            r0.gSubKeys = r6
            int r6 = r0.k64Cnt
            r7 = 1
            if (r6 < r7) goto L1fa
            if (r6 > r2) goto L1f2
            r6 = 0
            r8 = 0
        L1a:
            int r9 = r0.k64Cnt
            if (r8 >= r9) goto L3e
            int r9 = r8 * 8
            int r10 = r0.BytesTo32Bits(r1, r9)
            r3[r8] = r10
            int r9 = r9 + r2
            int r9 = r0.BytesTo32Bits(r1, r9)
            r4[r8] = r9
            int r9 = r0.k64Cnt
            int r9 = r9 - r7
            int r9 = r9 - r8
            r10 = r3[r8]
            r11 = r4[r8]
            int r10 = r0.RS_MDS_Encode(r10, r11)
            r5[r9] = r10
            int r8 = r8 + 1
            goto L1a
        L3e:
            r1 = 0
        L3f:
            r2 = 20
            if (r1 >= r2) goto L6c
            r2 = 33686018(0x2020202, float:9.551468E-38)
            int r2 = r2 * r1
            int r8 = r0.F32(r2, r3)
            r9 = 16843009(0x1010101, float:2.3694278E-38)
            int r2 = r2 + r9
            int r2 = r0.F32(r2, r4)
            int r9 = r2 << 8
            int r2 = r2 >>> 24
            r2 = r2 | r9
            int r8 = r8 + r2
            int[] r9 = r0.gSubKeys
            int r10 = r1 * 2
            r9[r10] = r8
            int r8 = r8 + r2
            int r10 = r10 + r7
            int r2 = r8 << 9
            int r8 = r8 >>> 23
            r2 = r2 | r8
            r9[r10] = r2
            int r1 = r1 + 1
            goto L3f
        L6c:
            r1 = r5[r6]
            r2 = r5[r7]
            r3 = 2
            r4 = r5[r3]
            r8 = 3
            r5 = r5[r8]
            r9 = 1024(0x400, float:1.435E-42)
            int[] r9 = new int[r9]
            r0.gSBox = r9
            r9 = 0
        L7d:
            r10 = 256(0x100, float:3.59E-43)
            if (r9 >= r10) goto L1f1
            int r10 = r0.k64Cnt
            r10 = r10 & r8
            if (r10 == 0) goto Lf8
            if (r10 == r7) goto L9a
            if (r10 == r3) goto L94
            if (r10 == r8) goto L8e
            goto L1ec
        L8e:
            r10 = r9
            r11 = r10
            r12 = r11
            r13 = r12
            goto L12c
        L94:
            r10 = r9
            r11 = r10
            r12 = r11
            r13 = r12
            goto L160
        L9a:
            int[] r10 = r0.gSBox
            int r11 = r9 * 2
            int[] r12 = r0.gMDS0
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r6]
            r13 = r13[r9]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r14 = r0.b0(r1)
            r13 = r13 ^ r14
            r12 = r12[r13]
            r10[r11] = r12
            int[] r10 = r0.gSBox
            int r12 = r11 + 1
            int[] r13 = r0.gMDS1
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r14 = r14[r6]
            r14 = r14[r9]
            r14 = r14 & 255(0xff, float:3.57E-43)
            int r15 = r0.b1(r1)
            r14 = r14 ^ r15
            r13 = r13[r14]
            r10[r12] = r13
            int[] r10 = r0.gSBox
            int r12 = r11 + 512
            int[] r13 = r0.gMDS2
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r14 = r14[r7]
            r14 = r14[r9]
            r14 = r14 & 255(0xff, float:3.57E-43)
            int r15 = r0.b2(r1)
            r14 = r14 ^ r15
            r13 = r13[r14]
            r10[r12] = r13
            int[] r10 = r0.gSBox
            int r11 = r11 + 513
            int[] r12 = r0.gMDS3
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r7]
            r13 = r13[r9]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r14 = r0.b3(r1)
            r13 = r13 ^ r14
            r12 = r12[r13]
            r10[r11] = r12
            goto L1ec
        Lf8:
            byte[][] r10 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r10 = r10[r7]
            r10 = r10[r9]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r11 = r0.b0(r5)
            r10 = r10 ^ r11
            byte[][] r11 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r11 = r11[r6]
            r11 = r11[r9]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r12 = r0.b1(r5)
            r11 = r11 ^ r12
            byte[][] r12 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r12 = r12[r6]
            r12 = r12[r9]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r13 = r0.b2(r5)
            r12 = r12 ^ r13
            byte[][] r13 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r13 = r13[r7]
            r13 = r13[r9]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r14 = r0.b3(r5)
            r13 = r13 ^ r14
        L12c:
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r14 = r14[r7]
            r10 = r14[r10]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r14 = r0.b0(r4)
            r10 = r10 ^ r14
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r14 = r14[r7]
            r11 = r14[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r14 = r0.b1(r4)
            r11 = r11 ^ r14
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r14 = r14[r6]
            r12 = r14[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r14 = r0.b2(r4)
            r12 = r12 ^ r14
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r14 = r14[r6]
            r13 = r14[r13]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r14 = r0.b3(r4)
            r13 = r13 ^ r14
        L160:
            int[] r14 = r0.gSBox
            int r15 = r9 * 2
            int[] r3 = r0.gMDS0
            byte[][] r16 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r17 = r16[r6]
            r16 = r16[r6]
            r10 = r16[r10]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r16 = r0.b0(r2)
            r10 = r10 ^ r16
            r10 = r17[r10]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r16 = r0.b0(r1)
            r10 = r10 ^ r16
            r3 = r3[r10]
            r14[r15] = r3
            int[] r3 = r0.gSBox
            int r10 = r15 + 1
            int[] r14 = r0.gMDS1
            byte[][] r16 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r17 = r16[r6]
            r16 = r16[r7]
            r11 = r16[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r16 = r0.b1(r2)
            r11 = r11 ^ r16
            r11 = r17[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r16 = r0.b1(r1)
            r11 = r11 ^ r16
            r11 = r14[r11]
            r3[r10] = r11
            int[] r3 = r0.gSBox
            int r10 = r15 + 512
            int[] r11 = r0.gMDS2
            byte[][] r14 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r16 = r14[r7]
            r14 = r14[r6]
            r12 = r14[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r14 = r0.b2(r2)
            r12 = r12 ^ r14
            r12 = r16[r12]
            r12 = r12 & 255(0xff, float:3.57E-43)
            int r14 = r0.b2(r1)
            r12 = r12 ^ r14
            r11 = r11[r12]
            r3[r10] = r11
            int[] r3 = r0.gSBox
            int r15 = r15 + 513
            int[] r10 = r0.gMDS3
            byte[][] r11 = org.bouncycastle.crypto.engines.TwofishEngine.P
            r12 = r11[r7]
            r11 = r11[r7]
            r11 = r11[r13]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r13 = r0.b3(r2)
            r11 = r11 ^ r13
            r11 = r12[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r12 = r0.b3(r1)
            r11 = r11 ^ r12
            r10 = r10[r11]
            r3[r15] = r10
        L1ec:
            int r9 = r9 + 1
            r3 = 2
            goto L7d
        L1f1:
            return
        L1f2:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Key size larger than 256 bits"
            r1.<init>(r2)
            throw r1
        L1fa:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Key size less than 64 bits"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Twofish"
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
            if (r0 == 0) goto L17
            r2.encrypting = r3
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r3 = r4.getKey()
            r2.workingKey = r3
            int r4 = r3.length
            int r4 = r4 / 8
            r2.k64Cnt = r4
            r2.setKey(r3)
            return
        L17:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to Twofish init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public final int processBlock(byte[] r3, int r4, byte[] r5, int r6) {
            r2 = this;
            byte[] r0 = r2.workingKey
            if (r0 == 0) goto L2c
            int r0 = r4 + 16
            int r1 = r3.length
            if (r0 > r1) goto L24
            int r0 = r6 + 16
            int r1 = r5.length
            if (r0 > r1) goto L1c
            boolean r0 = r2.encrypting
            if (r0 == 0) goto L16
            r2.encryptBlock(r3, r4, r5, r6)
            goto L19
        L16:
            r2.decryptBlock(r3, r4, r5, r6)
        L19:
            r3 = 16
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
            java.lang.String r4 = "Twofish not initialised"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void reset() {
            r1 = this;
            byte[] r0 = r1.workingKey
            if (r0 == 0) goto L7
            r1.setKey(r0)
        L7:
            return
    }
}
