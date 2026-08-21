package org.bouncycastle.crypto.engines;

public class RC2Engine implements org.bouncycastle.crypto.BlockCipher {
    private static final int BLOCK_SIZE = 8;
    private static byte[] piTable;
    private boolean encrypting;
    private int[] workingKey;

    static {
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [-39, 120, -7, -60, 25, -35, -75, -19, 40, -23, -3, 121, 74, -96, -40, -99, -58, 126, 55, -125, 43, 118, 83, -114, 98, 76, 100, -120, 68, -117, -5, -94, 23, -102, 89, -11, -121, -77, 79, 19, 97, 69, 109, -115, 9, -127, 125, 50, -67, -113, 64, -21, -122, -73, 123, 11, -16, -107, 33, 34, 92, 107, 78, -126, 84, -42, 101, -109, -50, 96, -78, 28, 115, 86, -64, 20, -89, -116, -15, -36, 18, 117, -54, 31, 59, -66, -28, -47, 66, 61, -44, 48, -93, 60, -74, 38, 111, -65, 14, -38, 70, 105, 7, 87, 39, -14, 29, -101, -68, -108, 67, 3, -8, 17, -57, -10, -112, -17, 62, -25, 6, -61, -43, 47, -56, 102, 30, -41, 8, -24, -22, -34, -128, 82, -18, -9, -124, -86, 114, -84, 53, 77, 106, 42, -106, 26, -46, 113, 90, 21, 73, 116, 75, -97, -48, 94, 4, 24, -92, -20, -62, -32, 65, 110, 15, 81, -53, -52, 36, -111, -81, 80, -95, -12, 112, 57, -103, 124, 58, -123, 35, -72, -76, 122, -4, 2, 54, 91, 37, 85, -105, 49, 45, 93, -6, -104, -29, -118, -110, -82, 5, -33, 41, 16, 103, 108, -70, -55, -45, 0, -26, -49, -31, -98, -88, 44, 99, 22, 1, 63, 88, -30, -119, -87, 13, 56, 52, 27, -85, 51, -1, -80, -69, 72, 12, 95, -71, -79, -51, 46, -59, -13, -37, 71, -27, -91, -100, 119, 10, -90, 32, 104, -2, 127, -63, -83} // fill-array
            org.bouncycastle.crypto.engines.RC2Engine.piTable = r0
            return
    }

    public RC2Engine() {
            r0 = this;
            r0.<init>()
            return
    }

    private void decryptBlock(byte[] r11, int r12, byte[] r13, int r14) {
            r10 = this;
            int r0 = r12 + 7
            r0 = r11[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r1 = r12 + 6
            r1 = r11[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r1
            int r1 = r12 + 5
            r1 = r11[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r2 = r12 + 4
            r2 = r11[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r1 = r1 + r2
            int r2 = r12 + 3
            r2 = r11[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            int r3 = r12 + 2
            r3 = r11[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r3
            int r3 = r12 + 1
            r3 = r11[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            int r12 = r12 + 0
            r11 = r11[r12]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r3 = r3 + r11
            r11 = 60
        L3e:
            r12 = 44
            r4 = 15
            r5 = 14
            r6 = 13
            r7 = 11
            if (r11 < r12) goto L93
            int r12 = r10.rotateWordLeft(r0, r7)
            int r0 = ~r1
            r0 = r0 & r3
            r7 = r2 & r1
            int r0 = r0 + r7
            int[] r7 = r10.workingKey
            int r8 = r11 + 3
            r7 = r7[r8]
            int r0 = r0 + r7
            int r0 = r12 - r0
            int r12 = r10.rotateWordLeft(r1, r6)
            int r1 = ~r2
            r1 = r1 & r0
            r6 = r3 & r2
            int r1 = r1 + r6
            int[] r6 = r10.workingKey
            int r7 = r11 + 2
            r6 = r6[r7]
            int r1 = r1 + r6
            int r1 = r12 - r1
            int r12 = r10.rotateWordLeft(r2, r5)
            int r2 = ~r3
            r2 = r2 & r1
            r5 = r0 & r3
            int r2 = r2 + r5
            int[] r5 = r10.workingKey
            int r6 = r11 + 1
            r5 = r5[r6]
            int r2 = r2 + r5
            int r2 = r12 - r2
            int r12 = r10.rotateWordLeft(r3, r4)
            int r3 = ~r0
            r3 = r3 & r2
            r4 = r1 & r0
            int r3 = r3 + r4
            int[] r4 = r10.workingKey
            r4 = r4[r11]
            int r3 = r3 + r4
            int r3 = r12 - r3
            int r11 = r11 + (-4)
            goto L3e
        L93:
            int[] r11 = r10.workingKey
            r12 = r1 & 63
            r12 = r11[r12]
            int r0 = r0 - r12
            r12 = r2 & 63
            r12 = r11[r12]
            int r1 = r1 - r12
            r12 = r3 & 63
            r12 = r11[r12]
            int r2 = r2 - r12
            r12 = r0 & 63
            r11 = r11[r12]
            int r3 = r3 - r11
            r11 = 40
        Lab:
            r12 = 20
            if (r11 < r12) goto Lf8
            int r12 = r10.rotateWordLeft(r0, r7)
            int r0 = ~r1
            r0 = r0 & r3
            r8 = r2 & r1
            int r0 = r0 + r8
            int[] r8 = r10.workingKey
            int r9 = r11 + 3
            r8 = r8[r9]
            int r0 = r0 + r8
            int r0 = r12 - r0
            int r12 = r10.rotateWordLeft(r1, r6)
            int r1 = ~r2
            r1 = r1 & r0
            r8 = r3 & r2
            int r1 = r1 + r8
            int[] r8 = r10.workingKey
            int r9 = r11 + 2
            r8 = r8[r9]
            int r1 = r1 + r8
            int r1 = r12 - r1
            int r12 = r10.rotateWordLeft(r2, r5)
            int r2 = ~r3
            r2 = r2 & r1
            r8 = r0 & r3
            int r2 = r2 + r8
            int[] r8 = r10.workingKey
            int r9 = r11 + 1
            r8 = r8[r9]
            int r2 = r2 + r8
            int r2 = r12 - r2
            int r12 = r10.rotateWordLeft(r3, r4)
            int r3 = ~r0
            r3 = r3 & r2
            r8 = r1 & r0
            int r3 = r3 + r8
            int[] r8 = r10.workingKey
            r8 = r8[r11]
            int r3 = r3 + r8
            int r3 = r12 - r3
            int r11 = r11 + (-4)
            goto Lab
        Lf8:
            int[] r11 = r10.workingKey
            r12 = r1 & 63
            r12 = r11[r12]
            int r0 = r0 - r12
            r12 = r2 & 63
            r12 = r11[r12]
            int r1 = r1 - r12
            r12 = r3 & 63
            r12 = r11[r12]
            int r2 = r2 - r12
            r12 = r0 & 63
            r11 = r11[r12]
            int r3 = r3 - r11
            r11 = 16
        L110:
            if (r11 < 0) goto L15b
            int r12 = r10.rotateWordLeft(r0, r7)
            int r0 = ~r1
            r0 = r0 & r3
            r8 = r2 & r1
            int r0 = r0 + r8
            int[] r8 = r10.workingKey
            int r9 = r11 + 3
            r8 = r8[r9]
            int r0 = r0 + r8
            int r0 = r12 - r0
            int r12 = r10.rotateWordLeft(r1, r6)
            int r1 = ~r2
            r1 = r1 & r0
            r8 = r3 & r2
            int r1 = r1 + r8
            int[] r8 = r10.workingKey
            int r9 = r11 + 2
            r8 = r8[r9]
            int r1 = r1 + r8
            int r1 = r12 - r1
            int r12 = r10.rotateWordLeft(r2, r5)
            int r2 = ~r3
            r2 = r2 & r1
            r8 = r0 & r3
            int r2 = r2 + r8
            int[] r8 = r10.workingKey
            int r9 = r11 + 1
            r8 = r8[r9]
            int r2 = r2 + r8
            int r2 = r12 - r2
            int r12 = r10.rotateWordLeft(r3, r4)
            int r3 = ~r0
            r3 = r3 & r2
            r8 = r1 & r0
            int r3 = r3 + r8
            int[] r8 = r10.workingKey
            r8 = r8[r11]
            int r3 = r3 + r8
            int r3 = r12 - r3
            int r11 = r11 + (-4)
            goto L110
        L15b:
            int r11 = r14 + 0
            byte r12 = (byte) r3
            r13[r11] = r12
            int r11 = r14 + 1
            int r12 = r3 >> 8
            byte r12 = (byte) r12
            r13[r11] = r12
            int r11 = r14 + 2
            byte r12 = (byte) r2
            r13[r11] = r12
            int r11 = r14 + 3
            int r12 = r2 >> 8
            byte r12 = (byte) r12
            r13[r11] = r12
            int r11 = r14 + 4
            byte r12 = (byte) r1
            r13[r11] = r12
            int r11 = r14 + 5
            int r12 = r1 >> 8
            byte r12 = (byte) r12
            r13[r11] = r12
            int r11 = r14 + 6
            byte r12 = (byte) r0
            r13[r11] = r12
            int r14 = r14 + 7
            int r11 = r0 >> 8
            byte r11 = (byte) r11
            r13[r14] = r11
            return
    }

    private void encryptBlock(byte[] r10, int r11, byte[] r12, int r13) {
            r9 = this;
            int r0 = r11 + 7
            r0 = r10[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r1 = r11 + 6
            r1 = r10[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r1
            int r1 = r11 + 5
            r1 = r10[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r2 = r11 + 4
            r2 = r10[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r1 = r1 + r2
            int r2 = r11 + 3
            r2 = r10[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            int r3 = r11 + 2
            r3 = r10[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r3
            int r3 = r11 + 1
            r3 = r10[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            r4 = 0
            int r11 = r11 + r4
            r10 = r10[r11]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r3 = r3 + r10
        L3c:
            r10 = 16
            r11 = 5
            r5 = 1
            r6 = 2
            r7 = 3
            if (r4 > r10) goto L89
            int r10 = ~r0
            r10 = r10 & r2
            int r3 = r3 + r10
            r10 = r1 & r0
            int r3 = r3 + r10
            int[] r10 = r9.workingKey
            r10 = r10[r4]
            int r3 = r3 + r10
            int r3 = r9.rotateWordLeft(r3, r5)
            int r10 = ~r3
            r10 = r10 & r1
            int r2 = r2 + r10
            r10 = r0 & r3
            int r2 = r2 + r10
            int[] r10 = r9.workingKey
            int r5 = r4 + 1
            r10 = r10[r5]
            int r2 = r2 + r10
            int r2 = r9.rotateWordLeft(r2, r6)
            int r10 = ~r2
            r10 = r10 & r0
            int r1 = r1 + r10
            r10 = r3 & r2
            int r1 = r1 + r10
            int[] r10 = r9.workingKey
            int r5 = r4 + 2
            r10 = r10[r5]
            int r1 = r1 + r10
            int r1 = r9.rotateWordLeft(r1, r7)
            int r10 = ~r1
            r10 = r10 & r3
            int r0 = r0 + r10
            r10 = r2 & r1
            int r0 = r0 + r10
            int[] r10 = r9.workingKey
            int r5 = r4 + 3
            r10 = r10[r5]
            int r0 = r0 + r10
            int r0 = r9.rotateWordLeft(r0, r11)
            int r4 = r4 + 4
            goto L3c
        L89:
            int[] r10 = r9.workingKey
            r4 = r0 & 63
            r4 = r10[r4]
            int r3 = r3 + r4
            r4 = r3 & 63
            r4 = r10[r4]
            int r2 = r2 + r4
            r4 = r2 & 63
            r4 = r10[r4]
            int r1 = r1 + r4
            r4 = r1 & 63
            r10 = r10[r4]
            int r0 = r0 + r10
            r10 = 20
        La1:
            r4 = 40
            if (r10 > r4) goto Lea
            int r4 = ~r0
            r4 = r4 & r2
            int r3 = r3 + r4
            r4 = r1 & r0
            int r3 = r3 + r4
            int[] r4 = r9.workingKey
            r4 = r4[r10]
            int r3 = r3 + r4
            int r3 = r9.rotateWordLeft(r3, r5)
            int r4 = ~r3
            r4 = r4 & r1
            int r2 = r2 + r4
            r4 = r0 & r3
            int r2 = r2 + r4
            int[] r4 = r9.workingKey
            int r8 = r10 + 1
            r4 = r4[r8]
            int r2 = r2 + r4
            int r2 = r9.rotateWordLeft(r2, r6)
            int r4 = ~r2
            r4 = r4 & r0
            int r1 = r1 + r4
            r4 = r3 & r2
            int r1 = r1 + r4
            int[] r4 = r9.workingKey
            int r8 = r10 + 2
            r4 = r4[r8]
            int r1 = r1 + r4
            int r1 = r9.rotateWordLeft(r1, r7)
            int r4 = ~r1
            r4 = r4 & r3
            int r0 = r0 + r4
            r4 = r2 & r1
            int r0 = r0 + r4
            int[] r4 = r9.workingKey
            int r8 = r10 + 3
            r4 = r4[r8]
            int r0 = r0 + r4
            int r0 = r9.rotateWordLeft(r0, r11)
            int r10 = r10 + 4
            goto La1
        Lea:
            int[] r10 = r9.workingKey
            r4 = r0 & 63
            r4 = r10[r4]
            int r3 = r3 + r4
            r4 = r3 & 63
            r4 = r10[r4]
            int r2 = r2 + r4
            r4 = r2 & 63
            r4 = r10[r4]
            int r1 = r1 + r4
            r4 = r1 & 63
            r10 = r10[r4]
            int r0 = r0 + r10
            r10 = 44
        L102:
            r4 = 64
            if (r10 >= r4) goto L14b
            int r4 = ~r0
            r4 = r4 & r2
            int r3 = r3 + r4
            r4 = r1 & r0
            int r3 = r3 + r4
            int[] r4 = r9.workingKey
            r4 = r4[r10]
            int r3 = r3 + r4
            int r3 = r9.rotateWordLeft(r3, r5)
            int r4 = ~r3
            r4 = r4 & r1
            int r2 = r2 + r4
            r4 = r0 & r3
            int r2 = r2 + r4
            int[] r4 = r9.workingKey
            int r8 = r10 + 1
            r4 = r4[r8]
            int r2 = r2 + r4
            int r2 = r9.rotateWordLeft(r2, r6)
            int r4 = ~r2
            r4 = r4 & r0
            int r1 = r1 + r4
            r4 = r3 & r2
            int r1 = r1 + r4
            int[] r4 = r9.workingKey
            int r8 = r10 + 2
            r4 = r4[r8]
            int r1 = r1 + r4
            int r1 = r9.rotateWordLeft(r1, r7)
            int r4 = ~r1
            r4 = r4 & r3
            int r0 = r0 + r4
            r4 = r2 & r1
            int r0 = r0 + r4
            int[] r4 = r9.workingKey
            int r8 = r10 + 3
            r4 = r4[r8]
            int r0 = r0 + r4
            int r0 = r9.rotateWordLeft(r0, r11)
            int r10 = r10 + 4
            goto L102
        L14b:
            int r10 = r13 + 0
            byte r11 = (byte) r3
            r12[r10] = r11
            int r10 = r13 + 1
            int r11 = r3 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 2
            byte r11 = (byte) r2
            r12[r10] = r11
            int r10 = r13 + 3
            int r11 = r2 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 4
            byte r11 = (byte) r1
            r12[r10] = r11
            int r10 = r13 + 5
            int r11 = r1 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 6
            byte r11 = (byte) r0
            r12[r10] = r11
            int r13 = r13 + 7
            int r10 = r0 >> 8
            byte r10 = (byte) r10
            r12[r13] = r10
            return
    }

    private int[] generateWorkingKey(byte[] r9, int r10) {
            r8 = this;
            r0 = 128(0x80, float:1.8E-43)
            int[] r1 = new int[r0]
            r2 = 0
            r3 = 0
        L6:
            int r4 = r9.length
            r5 = 255(0xff, float:3.57E-43)
            if (r3 == r4) goto L13
            r4 = r9[r3]
            r4 = r4 & r5
            r1[r3] = r4
            int r3 = r3 + 1
            goto L6
        L13:
            int r9 = r9.length
            if (r9 >= r0) goto L30
            int r3 = r9 + (-1)
            r3 = r1[r3]
            r4 = 0
        L1b:
            byte[] r6 = org.bouncycastle.crypto.engines.RC2Engine.piTable
            int r7 = r4 + 1
            r4 = r1[r4]
            int r3 = r3 + r4
            r3 = r3 & r5
            r3 = r6[r3]
            r3 = r3 & r5
            int r4 = r9 + 1
            r1[r9] = r3
            if (r4 < r0) goto L2d
            goto L30
        L2d:
            r9 = r4
            r4 = r7
            goto L1b
        L30:
            int r9 = r10 + 7
            int r9 = r9 >> 3
            byte[] r3 = org.bouncycastle.crypto.engines.RC2Engine.piTable
            int r0 = r0 - r9
            r4 = r1[r0]
            int r10 = -r10
            r10 = r10 & 7
            int r10 = r5 >> r10
            r10 = r10 & r4
            r10 = r3[r10]
            r10 = r10 & r5
            r1[r0] = r10
            int r0 = r0 + (-1)
        L46:
            if (r0 < 0) goto L57
            byte[] r3 = org.bouncycastle.crypto.engines.RC2Engine.piTable
            int r4 = r0 + r9
            r4 = r1[r4]
            r10 = r10 ^ r4
            r10 = r3[r10]
            r10 = r10 & r5
            r1[r0] = r10
            int r0 = r0 + (-1)
            goto L46
        L57:
            r9 = 64
            int[] r10 = new int[r9]
        L5b:
            if (r2 == r9) goto L6d
            int r0 = r2 * 2
            r3 = r1[r0]
            int r0 = r0 + 1
            r0 = r1[r0]
            int r0 = r0 << 8
            int r3 = r3 + r0
            r10[r2] = r3
            int r2 = r2 + 1
            goto L5b
        L6d:
            return r10
    }

    private int rotateWordLeft(int r2, int r3) {
            r1 = this;
            r0 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r0
            int r0 = r2 << r3
            int r3 = 16 - r3
            int r2 = r2 >> r3
            r2 = r2 | r0
            return r2
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "RC2"
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
            r2.encrypting = r3
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.RC2Parameters
            if (r3 == 0) goto L17
            org.bouncycastle.crypto.params.RC2Parameters r4 = (org.bouncycastle.crypto.params.RC2Parameters) r4
            byte[] r3 = r4.getKey()
            int r4 = r4.getEffectiveKeyBits()
            int[] r3 = r2.generateWorkingKey(r3, r4)
            r2.workingKey = r3
            goto L2a
        L17:
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r3 == 0) goto L2b
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r3 = r4.getKey()
            int r4 = r3.length
            int r4 = r4 * 8
            int[] r3 = r2.generateWorkingKey(r3, r4)
            r2.workingKey = r3
        L2a:
            return
        L2b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to RC2 init - "
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
            int[] r0 = r2.workingKey
            if (r0 == 0) goto L2c
            int r0 = r4 + 8
            int r1 = r3.length
            if (r0 > r1) goto L24
            int r0 = r6 + 8
            int r1 = r5.length
            if (r0 > r1) goto L1c
            boolean r0 = r2.encrypting
            if (r0 == 0) goto L16
            r2.encryptBlock(r3, r4, r5, r6)
            goto L19
        L16:
            r2.decryptBlock(r3, r4, r5, r6)
        L19:
            r3 = 8
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
            java.lang.String r4 = "RC2 engine not initialised"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
