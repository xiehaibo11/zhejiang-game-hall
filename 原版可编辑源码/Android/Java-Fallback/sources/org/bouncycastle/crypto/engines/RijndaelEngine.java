package org.bouncycastle.crypto.engines;

public class RijndaelEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int MAXKC = 64;
    private static final int MAXROUNDS = 14;
    private static final byte[] S = null;
    private static final byte[] Si = null;
    private static final byte[] aLogtable = null;
    private static final byte[] logtable = null;
    private static final int[] rcon = null;
    static byte[][] shifts0;
    static byte[][] shifts1;
    private long A0;
    private long A1;
    private long A2;
    private long A3;
    private int BC;
    private long BC_MASK;
    private int ROUNDS;
    private int blockBits;
    private boolean forEncryption;
    private byte[] shifts0SC;
    private byte[] shifts1SC;
    private long[][] workingKey;

    static {
            r0 = 256(0x100, float:3.59E-43)
            byte[] r1 = new byte[r0]
            r1 = {x007e: FILL_ARRAY_DATA , data: [0, 0, 25, 1, 50, 2, 26, -58, 75, -57, 27, 104, 51, -18, -33, 3, 100, 4, -32, 14, 52, -115, -127, -17, 76, 113, 8, -56, -8, 105, 28, -63, 125, -62, 29, -75, -7, -71, 39, 106, 77, -28, -90, 114, -102, -55, 9, 120, 101, 47, -118, 5, 33, 15, -31, 36, 18, -16, -126, 69, 53, -109, -38, -114, -106, -113, -37, -67, 54, -48, -50, -108, 19, 92, -46, -15, 64, 70, -125, 56, 102, -35, -3, 48, -65, 6, -117, 98, -77, 37, -30, -104, 34, -120, -111, 16, 126, 110, 72, -61, -93, -74, 30, 66, 58, 107, 40, 84, -6, -123, 61, -70, 43, 121, 10, 21, -101, -97, 94, -54, 78, -44, -84, -27, -13, 115, -89, 87, -81, 88, -88, 80, -12, -22, -42, 116, 79, -82, -23, -43, -25, -26, -83, -24, 44, -41, 117, 122, -21, 22, 11, -11, 89, -53, 95, -80, -100, -87, 81, -96, 127, 12, -10, 111, 23, -60, 73, -20, -40, 67, 31, 45, -92, 118, 123, -73, -52, -69, 62, 90, -5, 96, -79, -122, 59, 82, -95, 108, -86, 85, 41, -99, -105, -78, -121, -112, 97, -66, -36, -4, -68, -107, -49, -51, 55, 63, 91, -47, 83, 57, -124, 60, 65, -94, 109, 71, 20, 42, -98, 93, 86, -14, -45, -85, 68, 17, -110, -39, 35, 32, 46, -119, -76, 124, -72, 38, 119, -103, -29, -91, 103, 74, -19, -34, -59, 49, -2, 24, 13, 99, -116, -128, -64, -9, 112, 7} // fill-array
            org.bouncycastle.crypto.engines.RijndaelEngine.logtable = r1
            r1 = 511(0x1ff, float:7.16E-43)
            byte[] r1 = new byte[r1]
            r1 = {x0102: FILL_ARRAY_DATA , data: [0, 3, 5, 15, 17, 51, 85, -1, 26, 46, 114, -106, -95, -8, 19, 53, 95, -31, 56, 72, -40, 115, -107, -92, -9, 2, 6, 10, 30, 34, 102, -86, -27, 52, 92, -28, 55, 89, -21, 38, 106, -66, -39, 112, -112, -85, -26, 49, 83, -11, 4, 12, 20, 60, 68, -52, 79, -47, 104, -72, -45, 110, -78, -51, 76, -44, 103, -87, -32, 59, 77, -41, 98, -90, -15, 8, 24, 40, 120, -120, -125, -98, -71, -48, 107, -67, -36, 127, -127, -104, -77, -50, 73, -37, 118, -102, -75, -60, 87, -7, 16, 48, 80, -16, 11, 29, 39, 105, -69, -42, 97, -93, -2, 25, 43, 125, -121, -110, -83, -20, 47, 113, -109, -82, -23, 32, 96, -96, -5, 22, 58, 78, -46, 109, -73, -62, 93, -25, 50, 86, -6, 21, 63, 65, -61, 94, -30, 61, 71, -55, 64, -64, 91, -19, 44, 116, -100, -65, -38, 117, -97, -70, -43, 100, -84, -17, 42, 126, -126, -99, -68, -33, 122, -114, -119, -128, -101, -74, -63, 88, -24, 35, 101, -81, -22, 37, 111, -79, -56, 67, -59, 84, -4, 31, 33, 99, -91, -12, 7, 9, 27, 45, 119, -103, -80, -53, 70, -54, 69, -49, 74, -34, 121, -117, -122, -111, -88, -29, 62, 66, -58, 81, -13, 14, 18, 54, 90, -18, 41, 123, -115, -116, -113, -118, -123, -108, -89, -14, 13, 23, 57, 75, -35, 124, -124, -105, -94, -3, 28, 36, 108, -76, -57, 82, -10, 1, 3, 5, 15, 17, 51, 85, -1, 26, 46, 114, -106, -95, -8, 19, 53, 95, -31, 56, 72, -40, 115, -107, -92, -9, 2, 6, 10, 30, 34, 102, -86, -27, 52, 92, -28, 55, 89, -21, 38, 106, -66, -39, 112, -112, -85, -26, 49, 83, -11, 4, 12, 20, 60, 68, -52, 79, -47, 104, -72, -45, 110, -78, -51, 76, -44, 103, -87, -32, 59, 77, -41, 98, -90, -15, 8, 24, 40, 120, -120, -125, -98, -71, -48, 107, -67, -36, 127, -127, -104, -77, -50, 73, -37, 118, -102, -75, -60, 87, -7, 16, 48, 80, -16, 11, 29, 39, 105, -69, -42, 97, -93, -2, 25, 43, 125, -121, -110, -83, -20, 47, 113, -109, -82, -23, 32, 96, -96, -5, 22, 58, 78, -46, 109, -73, -62, 93, -25, 50, 86, -6, 21, 63, 65, -61, 94, -30, 61, 71, -55, 64, -64, 91, -19, 44, 116, -100, -65, -38, 117, -97, -70, -43, 100, -84, -17, 42, 126, -126, -99, -68, -33, 122, -114, -119, -128, -101, -74, -63, 88, -24, 35, 101, -81, -22, 37, 111, -79, -56, 67, -59, 84, -4, 31, 33, 99, -91, -12, 7, 9, 27, 45, 119, -103, -80, -53, 70, -54, 69, -49, 74, -34, 121, -117, -122, -111, -88, -29, 62, 66, -58, 81, -13, 14, 18, 54, 90, -18, 41, 123, -115, -116, -113, -118, -123, -108, -89, -14, 13, 23, 57, 75, -35, 124, -124, -105, -94, -3, 28, 36, 108, -76, -57, 82, -10, 1} // fill-array
            org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable = r1
            byte[] r1 = new byte[r0]
            r1 = {x0206: FILL_ARRAY_DATA , data: [99, 124, 119, 123, -14, 107, 111, -59, 48, 1, 103, 43, -2, -41, -85, 118, -54, -126, -55, 125, -6, 89, 71, -16, -83, -44, -94, -81, -100, -92, 114, -64, -73, -3, -109, 38, 54, 63, -9, -52, 52, -91, -27, -15, 113, -40, 49, 21, 4, -57, 35, -61, 24, -106, 5, -102, 7, 18, -128, -30, -21, 39, -78, 117, 9, -125, 44, 26, 27, 110, 90, -96, 82, 59, -42, -77, 41, -29, 47, -124, 83, -47, 0, -19, 32, -4, -79, 91, 106, -53, -66, 57, 74, 76, 88, -49, -48, -17, -86, -5, 67, 77, 51, -123, 69, -7, 2, 127, 80, 60, -97, -88, 81, -93, 64, -113, -110, -99, 56, -11, -68, -74, -38, 33, 16, -1, -13, -46, -51, 12, 19, -20, 95, -105, 68, 23, -60, -89, 126, 61, 100, 93, 25, 115, 96, -127, 79, -36, 34, 42, -112, -120, 70, -18, -72, 20, -34, 94, 11, -37, -32, 50, 58, 10, 73, 6, 36, 92, -62, -45, -84, 98, -111, -107, -28, 121, -25, -56, 55, 109, -115, -43, 78, -87, 108, 86, -12, -22, 101, 122, -82, 8, -70, 120, 37, 46, 28, -90, -76, -58, -24, -35, 116, 31, 75, -67, -117, -118, 112, 62, -75, 102, 72, 3, -10, 14, 97, 53, 87, -71, -122, -63, 29, -98, -31, -8, -104, 17, 105, -39, -114, -108, -101, 30, -121, -23, -50, 85, 40, -33, -116, -95, -119, 13, -65, -26, 66, 104, 65, -103, 45, 15, -80, 84, -69, 22} // fill-array
            org.bouncycastle.crypto.engines.RijndaelEngine.S = r1
            byte[] r0 = new byte[r0]
            r0 = {x028a: FILL_ARRAY_DATA , data: [82, 9, 106, -43, 48, 54, -91, 56, -65, 64, -93, -98, -127, -13, -41, -5, 124, -29, 57, -126, -101, 47, -1, -121, 52, -114, 67, 68, -60, -34, -23, -53, 84, 123, -108, 50, -90, -62, 35, 61, -18, 76, -107, 11, 66, -6, -61, 78, 8, 46, -95, 102, 40, -39, 36, -78, 118, 91, -94, 73, 109, -117, -47, 37, 114, -8, -10, 100, -122, 104, -104, 22, -44, -92, 92, -52, 93, 101, -74, -110, 108, 112, 72, 80, -3, -19, -71, -38, 94, 21, 70, 87, -89, -115, -99, -124, -112, -40, -85, 0, -116, -68, -45, 10, -9, -28, 88, 5, -72, -77, 69, 6, -48, 44, 30, -113, -54, 63, 15, 2, -63, -81, -67, 3, 1, 19, -118, 107, 58, -111, 17, 65, 79, 103, -36, -22, -105, -14, -49, -50, -16, -76, -26, 115, -106, -84, 116, 34, -25, -83, 53, -123, -30, -7, 55, -24, 28, 117, -33, 110, 71, -15, 26, 113, 29, 41, -59, -119, 111, -73, 98, 14, -86, 24, -66, 27, -4, 86, 62, 75, -58, -46, 121, 32, -102, -37, -64, -2, 120, -51, 90, -12, 31, -35, -88, 51, -120, 7, -57, 49, -79, 18, 16, 89, 39, -128, -20, 95, 96, 81, 127, -87, 25, -75, 74, 13, 45, -27, 122, -97, -109, -55, -100, -17, -96, -32, 59, 77, -82, 42, -11, -80, -56, -21, -69, 60, -125, 83, -103, 97, 23, 43, 4, 126, -70, 119, -42, 38, -31, 105, 20, 99, 85, 33, 12, 125} // fill-array
            org.bouncycastle.crypto.engines.RijndaelEngine.Si = r0
            r0 = 30
            int[] r0 = new int[r0]
            r0 = {x030e: FILL_ARRAY_DATA , data: [1, 2, 4, 8, 16, 32, 64, 128, 27, 54, 108, 216, 171, 77, 154, 47, 94, 188, 99, 198, 151, 53, 106, 212, 179, 125, 250, 239, 197, 145} // fill-array
            org.bouncycastle.crypto.engines.RijndaelEngine.rcon = r0
            r0 = 5
            byte[][] r1 = new byte[r0][]
            r2 = 4
            byte[] r3 = new byte[r2]
            r3 = {x034e: FILL_ARRAY_DATA , data: [0, 8, 16, 24} // fill-array
            r4 = 0
            r1[r4] = r3
            byte[] r3 = new byte[r2]
            r3 = {x0354: FILL_ARRAY_DATA , data: [0, 8, 16, 24} // fill-array
            r5 = 1
            r1[r5] = r3
            byte[] r3 = new byte[r2]
            r3 = {x035a: FILL_ARRAY_DATA , data: [0, 8, 16, 24} // fill-array
            r6 = 2
            r1[r6] = r3
            byte[] r3 = new byte[r2]
            r3 = {x0360: FILL_ARRAY_DATA , data: [0, 8, 16, 32} // fill-array
            r7 = 3
            r1[r7] = r3
            byte[] r3 = new byte[r2]
            r3 = {x0366: FILL_ARRAY_DATA , data: [0, 8, 24, 32} // fill-array
            r1[r2] = r3
            org.bouncycastle.crypto.engines.RijndaelEngine.shifts0 = r1
            byte[][] r0 = new byte[r0][]
            byte[] r1 = new byte[r2]
            r1 = {x036c: FILL_ARRAY_DATA , data: [0, 24, 16, 8} // fill-array
            r0[r4] = r1
            byte[] r1 = new byte[r2]
            r1 = {x0372: FILL_ARRAY_DATA , data: [0, 32, 24, 16} // fill-array
            r0[r5] = r1
            byte[] r1 = new byte[r2]
            r1 = {x0378: FILL_ARRAY_DATA , data: [0, 40, 32, 24} // fill-array
            r0[r6] = r1
            byte[] r1 = new byte[r2]
            r1 = {x037e: FILL_ARRAY_DATA , data: [0, 48, 40, 24} // fill-array
            r0[r7] = r1
            byte[] r1 = new byte[r2]
            r1 = {x0384: FILL_ARRAY_DATA , data: [0, 56, 40, 32} // fill-array
            r0[r2] = r1
            org.bouncycastle.crypto.engines.RijndaelEngine.shifts1 = r0
            return
    }

    public RijndaelEngine() {
            r1 = this;
            r0 = 128(0x80, float:1.8E-43)
            r1.<init>(r0)
            return
    }

    public RijndaelEngine(int r3) {
            r2 = this;
            r2.<init>()
            r0 = 128(0x80, float:1.8E-43)
            if (r3 == r0) goto L80
            r0 = 160(0xa0, float:2.24E-43)
            if (r3 == r0) goto L67
            r0 = 192(0xc0, float:2.69E-43)
            if (r3 == r0) goto L4e
            r0 = 224(0xe0, float:3.14E-43)
            if (r3 == r0) goto L35
            r0 = 256(0x100, float:3.59E-43)
            if (r3 != r0) goto L2d
            r0 = 64
            r2.BC = r0
            r0 = -1
            r2.BC_MASK = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts0
            r1 = 4
            r0 = r0[r1]
            r2.shifts0SC = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts1
            r0 = r0[r1]
            r2.shifts1SC = r0
            goto L98
        L2d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown blocksize to Rijndael"
            r3.<init>(r0)
            throw r3
        L35:
            r0 = 56
            r2.BC = r0
            r0 = 72057594037927935(0xffffffffffffff, double:7.291122019556397E-304)
            r2.BC_MASK = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts0
            r1 = 3
            r0 = r0[r1]
            r2.shifts0SC = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts1
            r0 = r0[r1]
            r2.shifts1SC = r0
            goto L98
        L4e:
            r0 = 48
            r2.BC = r0
            r0 = 281474976710655(0xffffffffffff, double:1.390671161566996E-309)
            r2.BC_MASK = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts0
            r1 = 2
            r0 = r0[r1]
            r2.shifts0SC = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts1
            r0 = r0[r1]
            r2.shifts1SC = r0
            goto L98
        L67:
            r0 = 40
            r2.BC = r0
            r0 = 1099511627775(0xffffffffff, double:5.432309224866E-312)
            r2.BC_MASK = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts0
            r1 = 1
            r0 = r0[r1]
            r2.shifts0SC = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts1
            r0 = r0[r1]
            r2.shifts1SC = r0
            goto L98
        L80:
            r0 = 32
            r2.BC = r0
            r0 = 4294967295(0xffffffff, double:2.1219957905E-314)
            r2.BC_MASK = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts0
            r1 = 0
            r0 = r0[r1]
            r2.shifts0SC = r0
            byte[][] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.shifts1
            r0 = r0[r1]
            r2.shifts1SC = r0
        L98:
            r2.blockBits = r3
            return
    }

    private void InvMixColumn() {
            r18 = this;
            r0 = r18
            r1 = 0
            r3 = 0
            r3 = r1
            r5 = r3
            r7 = r5
            r9 = 0
        L9:
            int r10 = r0.BC
            if (r9 >= r10) goto Lb9
            long r10 = r0.A0
            long r10 = r10 >> r9
            r12 = 255(0xff, double:1.26E-321)
            long r10 = r10 & r12
            int r11 = (int) r10
            long r14 = r0.A1
            long r14 = r14 >> r9
            long r14 = r14 & r12
            int r10 = (int) r14
            long r14 = r0.A2
            long r14 = r14 >> r9
            long r14 = r14 & r12
            int r15 = (int) r14
            r16 = r7
            long r7 = r0.A3
            long r7 = r7 >> r9
            long r7 = r7 & r12
            int r8 = (int) r7
            r7 = -1
            if (r11 == 0) goto L31
            byte[] r12 = org.bouncycastle.crypto.engines.RijndaelEngine.logtable
            r11 = r11 & 255(0xff, float:3.57E-43)
            r11 = r12[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            goto L32
        L31:
            r11 = -1
        L32:
            if (r10 == 0) goto L3d
            byte[] r12 = org.bouncycastle.crypto.engines.RijndaelEngine.logtable
            r10 = r10 & 255(0xff, float:3.57E-43)
            r10 = r12[r10]
            r10 = r10 & 255(0xff, float:3.57E-43)
            goto L3e
        L3d:
            r10 = -1
        L3e:
            if (r15 == 0) goto L49
            byte[] r12 = org.bouncycastle.crypto.engines.RijndaelEngine.logtable
            r13 = r15 & 255(0xff, float:3.57E-43)
            r12 = r12[r13]
            r12 = r12 & 255(0xff, float:3.57E-43)
            goto L4a
        L49:
            r12 = -1
        L4a:
            if (r8 == 0) goto L54
            byte[] r7 = org.bouncycastle.crypto.engines.RijndaelEngine.logtable
            r8 = r8 & 255(0xff, float:3.57E-43)
            r7 = r7[r8]
            r7 = r7 & 255(0xff, float:3.57E-43)
        L54:
            byte r8 = r0.mul0xe(r11)
            byte r13 = r0.mul0xb(r10)
            r8 = r8 ^ r13
            byte r13 = r0.mul0xd(r12)
            r8 = r8 ^ r13
            byte r13 = r0.mul0x9(r7)
            r8 = r8 ^ r13
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r13 = (long) r8
            long r13 = r13 << r9
            long r1 = r1 | r13
            byte r8 = r0.mul0xe(r10)
            byte r13 = r0.mul0xb(r12)
            r8 = r8 ^ r13
            byte r13 = r0.mul0xd(r7)
            r8 = r8 ^ r13
            byte r13 = r0.mul0x9(r11)
            r8 = r8 ^ r13
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r13 = (long) r8
            long r13 = r13 << r9
            long r3 = r3 | r13
            byte r8 = r0.mul0xe(r12)
            byte r13 = r0.mul0xb(r7)
            r8 = r8 ^ r13
            byte r13 = r0.mul0xd(r11)
            r8 = r8 ^ r13
            byte r13 = r0.mul0x9(r10)
            r8 = r8 ^ r13
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r13 = (long) r8
            long r13 = r13 << r9
            long r5 = r5 | r13
            byte r7 = r0.mul0xe(r7)
            byte r8 = r0.mul0xb(r11)
            r7 = r7 ^ r8
            byte r8 = r0.mul0xd(r10)
            r7 = r7 ^ r8
            byte r8 = r0.mul0x9(r12)
            r7 = r7 ^ r8
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r7 = (long) r7
            long r7 = r7 << r9
            long r7 = r16 | r7
            int r9 = r9 + 8
            goto L9
        Lb9:
            r16 = r7
            r0.A0 = r1
            r0.A1 = r3
            r0.A2 = r5
            r1 = r16
            r0.A3 = r1
            return
    }

    private void KeyAddition(long[] r5) {
            r4 = this;
            long r0 = r4.A0
            r2 = 0
            r2 = r5[r2]
            long r0 = r0 ^ r2
            r4.A0 = r0
            long r0 = r4.A1
            r2 = 1
            r2 = r5[r2]
            long r0 = r0 ^ r2
            r4.A1 = r0
            long r0 = r4.A2
            r2 = 2
            r2 = r5[r2]
            long r0 = r0 ^ r2
            r4.A2 = r0
            long r0 = r4.A3
            r2 = 3
            r2 = r5[r2]
            long r0 = r0 ^ r2
            r4.A3 = r0
            return
    }

    private void MixColumn() {
            r18 = this;
            r0 = r18
            r1 = 0
            r3 = 0
            r3 = r1
            r5 = r3
            r7 = r5
            r9 = 0
        L9:
            int r10 = r0.BC
            if (r9 >= r10) goto L69
            long r10 = r0.A0
            long r10 = r10 >> r9
            r12 = 255(0xff, double:1.26E-321)
            long r10 = r10 & r12
            int r11 = (int) r10
            long r14 = r0.A1
            long r14 = r14 >> r9
            long r14 = r14 & r12
            int r10 = (int) r14
            long r14 = r0.A2
            long r14 = r14 >> r9
            long r14 = r14 & r12
            int r15 = (int) r14
            r16 = r7
            long r7 = r0.A3
            long r7 = r7 >> r9
            long r7 = r7 & r12
            int r8 = (int) r7
            byte r7 = r0.mul0x2(r11)
            byte r12 = r0.mul0x3(r10)
            r7 = r7 ^ r12
            r7 = r7 ^ r15
            r7 = r7 ^ r8
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r12 = (long) r7
            long r12 = r12 << r9
            long r1 = r1 | r12
            byte r7 = r0.mul0x2(r10)
            byte r12 = r0.mul0x3(r15)
            r7 = r7 ^ r12
            r7 = r7 ^ r8
            r7 = r7 ^ r11
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r12 = (long) r7
            long r12 = r12 << r9
            long r3 = r3 | r12
            byte r7 = r0.mul0x2(r15)
            byte r12 = r0.mul0x3(r8)
            r7 = r7 ^ r12
            r7 = r7 ^ r11
            r7 = r7 ^ r10
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r12 = (long) r7
            long r12 = r12 << r9
            long r5 = r5 | r12
            byte r7 = r0.mul0x2(r8)
            byte r8 = r0.mul0x3(r11)
            r7 = r7 ^ r8
            r7 = r7 ^ r10
            r7 = r7 ^ r15
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r7 = (long) r7
            long r7 = r7 << r9
            long r7 = r16 | r7
            int r9 = r9 + 8
            goto L9
        L69:
            r16 = r7
            r0.A0 = r1
            r0.A1 = r3
            r0.A2 = r5
            r1 = r16
            r0.A3 = r1
            return
    }

    private void ShiftRow(byte[] r4) {
            r3 = this;
            long r0 = r3.A1
            r2 = 1
            r2 = r4[r2]
            long r0 = r3.shift(r0, r2)
            r3.A1 = r0
            long r0 = r3.A2
            r2 = 2
            r2 = r4[r2]
            long r0 = r3.shift(r0, r2)
            r3.A2 = r0
            long r0 = r3.A3
            r2 = 3
            r4 = r4[r2]
            long r0 = r3.shift(r0, r4)
            r3.A3 = r0
            return
    }

    private void Substitution(byte[] r3) {
            r2 = this;
            long r0 = r2.A0
            long r0 = r2.applyS(r0, r3)
            r2.A0 = r0
            long r0 = r2.A1
            long r0 = r2.applyS(r0, r3)
            r2.A1 = r0
            long r0 = r2.A2
            long r0 = r2.applyS(r0, r3)
            r2.A2 = r0
            long r0 = r2.A3
            long r0 = r2.applyS(r0, r3)
            r2.A3 = r0
            return
    }

    private long applyS(long r8, byte[] r10) {
            r7 = this;
            r0 = 0
            r2 = 0
        L3:
            int r3 = r7.BC
            if (r2 >= r3) goto L17
            long r3 = r8 >> r2
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r4 = (int) r3
            r3 = r10[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r3 = r3 << r2
            long r0 = r0 | r3
            int r2 = r2 + 8
            goto L3
        L17:
            return r0
    }

    private final void decryptBlock(long[][] r3) {
            r2 = this;
            int r0 = r2.ROUNDS
            r0 = r3[r0]
            r2.KeyAddition(r0)
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.Si
            r2.Substitution(r0)
            byte[] r0 = r2.shifts1SC
            r2.ShiftRow(r0)
            int r0 = r2.ROUNDS
            int r0 = r0 + (-1)
        L15:
            if (r0 <= 0) goto L2c
            r1 = r3[r0]
            r2.KeyAddition(r1)
            r2.InvMixColumn()
            byte[] r1 = org.bouncycastle.crypto.engines.RijndaelEngine.Si
            r2.Substitution(r1)
            byte[] r1 = r2.shifts1SC
            r2.ShiftRow(r1)
            int r0 = r0 + (-1)
            goto L15
        L2c:
            r0 = 0
            r3 = r3[r0]
            r2.KeyAddition(r3)
            return
    }

    private final void encryptBlock(long[][] r3) {
            r2 = this;
            r0 = 0
            r0 = r3[r0]
            r2.KeyAddition(r0)
            r0 = 1
        L7:
            int r1 = r2.ROUNDS
            if (r0 >= r1) goto L20
            byte[] r1 = org.bouncycastle.crypto.engines.RijndaelEngine.S
            r2.Substitution(r1)
            byte[] r1 = r2.shifts0SC
            r2.ShiftRow(r1)
            r2.MixColumn()
            r1 = r3[r0]
            r2.KeyAddition(r1)
            int r0 = r0 + 1
            goto L7
        L20:
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.S
            r2.Substitution(r0)
            byte[] r0 = r2.shifts0SC
            r2.ShiftRow(r0)
            int r0 = r2.ROUNDS
            r3 = r3[r0]
            r2.KeyAddition(r3)
            return
    }

    private long[][] generateWorkingKey(byte[] r19) {
            r18 = this;
            r0 = r18
            r1 = r19
            int r2 = r1.length
            r3 = 8
            int r2 = r2 * 8
            r4 = 2
            int[] r5 = new int[r4]
            r5 = {x018e: FILL_ARRAY_DATA , data: [4, 64} // fill-array
            java.lang.Class<byte> r6 = byte.class
            java.lang.Object r5 = java.lang.reflect.Array.newInstance(r6, r5)
            byte[][] r5 = (byte[][]) r5
            int[] r4 = new int[r4]
            r4 = {x0196: FILL_ARRAY_DATA , data: [15, 4} // fill-array
            java.lang.Class<long> r6 = long.class
            java.lang.Object r4 = java.lang.reflect.Array.newInstance(r6, r4)
            long[][] r4 = (long[][]) r4
            r6 = 128(0x80, float:1.8E-43)
            r8 = 6
            r9 = 4
            if (r2 == r6) goto L4b
            r6 = 160(0xa0, float:2.24E-43)
            if (r2 == r6) goto L49
            r6 = 192(0xc0, float:2.69E-43)
            if (r2 == r6) goto L47
            r6 = 224(0xe0, float:3.14E-43)
            if (r2 == r6) goto L45
            r6 = 256(0x100, float:3.59E-43)
            if (r2 != r6) goto L3d
            r6 = 8
            goto L4c
        L3d:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Key length not 128/160/192/224/256 bits."
            r1.<init>(r2)
            throw r1
        L45:
            r6 = 7
            goto L4c
        L47:
            r6 = 6
            goto L4c
        L49:
            r6 = 5
            goto L4c
        L4b:
            r6 = 4
        L4c:
            int r10 = r0.blockBits
            if (r2 < r10) goto L53
            int r2 = r6 + 6
            goto L57
        L53:
            int r2 = r0.BC
            int r2 = r2 / r3
            int r2 = r2 + r8
        L57:
            r0.ROUNDS = r2
            r2 = 0
            r10 = 0
            r11 = 0
        L5c:
            int r12 = r1.length
            if (r10 >= r12) goto L6f
            int r12 = r10 % 4
            r12 = r5[r12]
            int r13 = r10 / 4
            int r14 = r11 + 1
            r11 = r1[r11]
            r12[r13] = r11
            int r10 = r10 + 1
            r11 = r14
            goto L5c
        L6f:
            r1 = 0
            r10 = 0
        L71:
            r11 = 1
            if (r1 >= r6) goto La6
            int r12 = r0.ROUNDS
            int r12 = r12 + r11
            int r13 = r0.BC
            int r13 = r13 / r3
            int r12 = r12 * r13
            if (r10 >= r12) goto La6
            r11 = 0
        L7f:
            if (r11 >= r9) goto L9f
            int r12 = r0.BC
            int r13 = r12 / 8
            int r13 = r10 / r13
            r13 = r4[r13]
            r14 = r13[r11]
            r16 = r5[r11]
            r7 = r16[r1]
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r8 = (long) r7
            int r7 = r10 * 8
            int r7 = r7 % r12
            long r7 = r8 << r7
            long r7 = r7 | r14
            r13[r11] = r7
            int r11 = r11 + 1
            r8 = 6
            r9 = 4
            goto L7f
        L9f:
            int r1 = r1 + 1
            int r10 = r10 + 1
            r8 = 6
            r9 = 4
            goto L71
        La6:
            r1 = 0
        La7:
            int r7 = r0.ROUNDS
            int r7 = r7 + r11
            int r8 = r0.BC
            int r8 = r8 / r3
            int r7 = r7 * r8
            if (r10 >= r7) goto L18c
            r7 = 0
        Lb2:
            r8 = 4
            if (r7 >= r8) goto Lce
            r8 = r5[r7]
            r9 = r8[r2]
            byte[] r12 = org.bouncycastle.crypto.engines.RijndaelEngine.S
            int r7 = r7 + 1
            int r13 = r7 % 4
            r13 = r5[r13]
            int r14 = r6 + (-1)
            r13 = r13[r14]
            r13 = r13 & 255(0xff, float:3.57E-43)
            r12 = r12[r13]
            r9 = r9 ^ r12
            byte r9 = (byte) r9
            r8[r2] = r9
            goto Lb2
        Lce:
            r7 = r5[r2]
            r8 = r7[r2]
            int[] r9 = org.bouncycastle.crypto.engines.RijndaelEngine.rcon
            int r12 = r1 + 1
            r1 = r9[r1]
            r1 = r1 ^ r8
            byte r1 = (byte) r1
            r7[r2] = r1
            r1 = 6
            r7 = 1
            if (r6 > r1) goto Lfa
        Le0:
            if (r7 >= r6) goto L14b
            r8 = 0
        Le3:
            r9 = 4
            if (r8 >= r9) goto Lf7
            r9 = r5[r8]
            r13 = r9[r7]
            r14 = r5[r8]
            int r15 = r7 + (-1)
            r14 = r14[r15]
            r13 = r13 ^ r14
            byte r13 = (byte) r13
            r9[r7] = r13
            int r8 = r8 + 1
            goto Le3
        Lf7:
            int r7 = r7 + 1
            goto Le0
        Lfa:
            r8 = 4
            if (r7 >= r8) goto L115
            r9 = 0
        Lfe:
            if (r9 >= r8) goto L112
            r8 = r5[r9]
            r13 = r8[r7]
            r14 = r5[r9]
            int r15 = r7 + (-1)
            r14 = r14[r15]
            r13 = r13 ^ r14
            byte r13 = (byte) r13
            r8[r7] = r13
            int r9 = r9 + 1
            r8 = 4
            goto Lfe
        L112:
            int r7 = r7 + 1
            goto Lfa
        L115:
            r7 = 0
        L116:
            if (r7 >= r8) goto L12f
            r9 = r5[r7]
            r13 = r9[r8]
            byte[] r14 = org.bouncycastle.crypto.engines.RijndaelEngine.S
            r15 = r5[r7]
            r16 = 3
            r15 = r15[r16]
            r15 = r15 & 255(0xff, float:3.57E-43)
            r14 = r14[r15]
            r13 = r13 ^ r14
            byte r13 = (byte) r13
            r9[r8] = r13
            int r7 = r7 + 1
            goto L116
        L12f:
            r7 = 5
        L130:
            if (r7 >= r6) goto L14b
            r9 = 0
        L133:
            if (r9 >= r8) goto L147
            r8 = r5[r9]
            r13 = r8[r7]
            r14 = r5[r9]
            int r15 = r7 + (-1)
            r14 = r14[r15]
            r13 = r13 ^ r14
            byte r13 = (byte) r13
            r8[r7] = r13
            int r9 = r9 + 1
            r8 = 4
            goto L133
        L147:
            int r7 = r7 + 1
            r8 = 4
            goto L130
        L14b:
            r7 = 0
        L14c:
            if (r7 >= r6) goto L185
            int r8 = r0.ROUNDS
            int r8 = r8 + r11
            int r9 = r0.BC
            int r9 = r9 / r3
            int r8 = r8 * r9
            if (r10 >= r8) goto L185
            r8 = 0
            r9 = 4
        L15a:
            if (r8 >= r9) goto L17c
            int r13 = r0.BC
            int r14 = r13 / 8
            int r14 = r10 / r14
            r14 = r4[r14]
            r15 = r14[r8]
            r17 = r5[r8]
            r1 = r17[r7]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r2 = (long) r1
            int r1 = r10 * 8
            int r1 = r1 % r13
            long r1 = r2 << r1
            long r1 = r1 | r15
            r14[r8] = r1
            int r8 = r8 + 1
            r1 = 6
            r2 = 0
            r3 = 8
            goto L15a
        L17c:
            int r7 = r7 + 1
            int r10 = r10 + 1
            r1 = 6
            r2 = 0
            r3 = 8
            goto L14c
        L185:
            r9 = 4
            r1 = r12
            r2 = 0
            r3 = 8
            goto La7
        L18c:
            return r4
    }

    private byte mul0x2(int r3) {
            r2 = this;
            if (r3 == 0) goto Lf
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable
            byte[] r1 = org.bouncycastle.crypto.engines.RijndaelEngine.logtable
            r3 = r1[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 25
            r3 = r0[r3]
            return r3
        Lf:
            r3 = 0
            return r3
    }

    private byte mul0x3(int r3) {
            r2 = this;
            if (r3 == 0) goto Lf
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable
            byte[] r1 = org.bouncycastle.crypto.engines.RijndaelEngine.logtable
            r3 = r1[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 1
            r3 = r0[r3]
            return r3
        Lf:
            r3 = 0
            return r3
    }

    private byte mul0x9(int r2) {
            r1 = this;
            if (r2 < 0) goto L9
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable
            int r2 = r2 + 199
            r2 = r0[r2]
            return r2
        L9:
            r2 = 0
            return r2
    }

    private byte mul0xb(int r2) {
            r1 = this;
            if (r2 < 0) goto L9
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable
            int r2 = r2 + 104
            r2 = r0[r2]
            return r2
        L9:
            r2 = 0
            return r2
    }

    private byte mul0xd(int r2) {
            r1 = this;
            if (r2 < 0) goto L9
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable
            int r2 = r2 + 238
            r2 = r0[r2]
            return r2
        L9:
            r2 = 0
            return r2
    }

    private byte mul0xe(int r2) {
            r1 = this;
            if (r2 < 0) goto L9
            byte[] r0 = org.bouncycastle.crypto.engines.RijndaelEngine.aLogtable
            int r2 = r2 + 223
            r2 = r0[r2]
            return r2
        L9:
            r2 = 0
            return r2
    }

    private final void packBlock(byte[] r5, int r6) {
            r4 = this;
            r0 = 0
        L1:
            int r1 = r4.BC
            if (r0 == r1) goto L2c
            int r1 = r6 + 1
            long r2 = r4.A0
            long r2 = r2 >> r0
            int r3 = (int) r2
            byte r2 = (byte) r3
            r5[r6] = r2
            int r6 = r1 + 1
            long r2 = r4.A1
            long r2 = r2 >> r0
            int r3 = (int) r2
            byte r2 = (byte) r3
            r5[r1] = r2
            int r1 = r6 + 1
            long r2 = r4.A2
            long r2 = r2 >> r0
            int r3 = (int) r2
            byte r2 = (byte) r3
            r5[r6] = r2
            int r6 = r1 + 1
            long r2 = r4.A3
            long r2 = r2 >> r0
            int r3 = (int) r2
            byte r2 = (byte) r3
            r5[r1] = r2
            int r0 = r0 + 8
            goto L1
        L2c:
            return
    }

    private long shift(long r4, int r6) {
            r3 = this;
            long r0 = r4 >>> r6
            int r2 = r3.BC
            int r2 = r2 - r6
            long r4 = r4 << r2
            long r4 = r4 | r0
            long r0 = r3.BC_MASK
            long r4 = r4 & r0
            return r4
    }

    private final void unpackBlock(byte[] r7, int r8) {
            r6 = this;
            int r0 = r8 + 1
            r8 = r7[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r1 = (long) r8
            r6.A0 = r1
            int r8 = r0 + 1
            r0 = r7[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            long r0 = (long) r0
            r6.A1 = r0
            int r0 = r8 + 1
            r8 = r7[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r1 = (long) r8
            r6.A2 = r1
            int r8 = r0 + 1
            r0 = r7[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            long r0 = (long) r0
            r6.A3 = r0
            r0 = 8
        L26:
            int r1 = r6.BC
            if (r0 == r1) goto L61
            long r1 = r6.A0
            int r3 = r8 + 1
            r8 = r7[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r4 = (long) r8
            long r4 = r4 << r0
            long r1 = r1 | r4
            r6.A0 = r1
            long r1 = r6.A1
            int r8 = r3 + 1
            r3 = r7[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r3 = r3 << r0
            long r1 = r1 | r3
            r6.A1 = r1
            long r1 = r6.A2
            int r3 = r8 + 1
            r8 = r7[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r4 = (long) r8
            long r4 = r4 << r0
            long r1 = r1 | r4
            r6.A2 = r1
            long r1 = r6.A3
            int r8 = r3 + 1
            r3 = r7[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r3 = r3 << r0
            long r1 = r1 | r3
            r6.A3 = r1
            int r0 = r0 + 8
            goto L26
        L61:
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Rijndael"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            int r0 = r1.BC
            int r0 = r0 / 2
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L13
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r4 = r4.getKey()
            long[][] r4 = r2.generateWorkingKey(r4)
            r2.workingKey = r4
            r2.forEncryption = r3
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to Rijndael init - "
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
            long[][] r0 = r3.workingKey
            if (r0 == 0) goto L3a
            int r0 = r3.BC
            int r1 = r0 / 2
            int r1 = r1 + r5
            int r2 = r4.length
            if (r1 > r2) goto L32
            int r0 = r0 / 2
            int r0 = r0 + r7
            int r1 = r6.length
            if (r0 > r1) goto L2a
            boolean r0 = r3.forEncryption
            r3.unpackBlock(r4, r5)
            long[][] r4 = r3.workingKey
            if (r0 == 0) goto L1f
            r3.encryptBlock(r4)
            goto L22
        L1f:
            r3.decryptBlock(r4)
        L22:
            r3.packBlock(r6, r7)
            int r4 = r3.BC
            int r4 = r4 / 2
            return r4
        L2a:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "output buffer too short"
            r4.<init>(r5)
            throw r4
        L32:
            org.bouncycastle.crypto.DataLengthException r4 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r5 = "input buffer too short"
            r4.<init>(r5)
            throw r4
        L3a:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "Rijndael engine not initialised"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
