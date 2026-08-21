package org.bouncycastle.crypto.engines;

public class SkipjackEngine implements org.bouncycastle.crypto.BlockCipher {
    static final int BLOCK_SIZE = 8;
    static short[] ftable;
    private boolean encrypting;
    private int[] key0;
    private int[] key1;
    private int[] key2;
    private int[] key3;

    static {
            r0 = 256(0x100, float:3.59E-43)
            short[] r0 = new short[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [163, 215, 9, 131, 248, 72, 246, 244, 179, 33, 21, 120, 153, 177, 175, 249, 231, 45, 77, 138, 206, 76, 202, 46, 82, 149, 217, 30, 78, 56, 68, 40, 10, 223, 2, 160, 23, 241, 96, 104, 18, 183, 122, 195, 233, 250, 61, 83, 150, 132, 107, 186, 242, 99, 154, 25, 124, 174, 229, 245, 247, 22, 106, 162, 57, 182, 123, 15, 193, 147, 129, 27, 238, 180, 26, 234, 208, 145, 47, 184, 85, 185, 218, 133, 63, 65, 191, 224, 90, 88, 128, 95, 102, 11, 216, 144, 53, 213, 192, 167, 51, 6, 101, 105, 69, 0, 148, 86, 109, 152, 155, 118, 151, 252, 178, 194, 176, 254, 219, 32, 225, 235, 214, 228, 221, 71, 74, 29, 66, 237, 158, 110, 73, 60, 205, 67, 39, 210, 7, 212, 222, 199, 103, 24, 137, 203, 48, 31, 141, 198, 143, 170, 200, 116, 220, 201, 93, 92, 49, 164, 112, 136, 97, 44, 159, 13, 43, 135, 80, 130, 84, 100, 38, 125, 3, 64, 52, 75, 28, 115, 209, 196, 253, 59, 204, 251, 127, 171, 230, 62, 91, 165, 173, 4, 35, 156, 20, 81, 34, 240, 41, 121, 113, 126, 255, 140, 14, 226, 12, 239, 188, 114, 117, 111, 55, 161, 236, 211, 142, 98, 139, 134, 16, 232, 8, 119, 17, 190, 146, 79, 36, 197, 50, 54, 157, 207, 243, 166, 187, 172, 94, 108, 169, 19, 87, 37, 181, 227, 189, 168, 58, 1, 5, 89, 42, 70} // fill-array
            org.bouncycastle.crypto.engines.SkipjackEngine.ftable = r0
            return
    }

    public SkipjackEngine() {
            r0 = this;
            r0.<init>()
            return
    }

    private int g(int r4, int r5) {
            r3 = this;
            int r0 = r5 >> 8
            r0 = r0 & 255(0xff, float:3.57E-43)
            r5 = r5 & 255(0xff, float:3.57E-43)
            short[] r1 = org.bouncycastle.crypto.engines.SkipjackEngine.ftable
            int[] r2 = r3.key0
            r2 = r2[r4]
            r2 = r2 ^ r5
            short r2 = r1[r2]
            r0 = r0 ^ r2
            int[] r2 = r3.key1
            r2 = r2[r4]
            r2 = r2 ^ r0
            short r2 = r1[r2]
            r5 = r5 ^ r2
            int[] r2 = r3.key2
            r2 = r2[r4]
            r2 = r2 ^ r5
            short r2 = r1[r2]
            r0 = r0 ^ r2
            int[] r2 = r3.key3
            r4 = r2[r4]
            r4 = r4 ^ r0
            short r4 = r1[r4]
            r4 = r4 ^ r5
            int r5 = r0 << 8
            int r5 = r5 + r4
            return r5
    }

    private int h(int r4, int r5) {
            r3 = this;
            r0 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 >> 8
            r5 = r5 & 255(0xff, float:3.57E-43)
            short[] r1 = org.bouncycastle.crypto.engines.SkipjackEngine.ftable
            int[] r2 = r3.key3
            r2 = r2[r4]
            r2 = r2 ^ r5
            short r2 = r1[r2]
            r0 = r0 ^ r2
            int[] r2 = r3.key2
            r2 = r2[r4]
            r2 = r2 ^ r0
            short r2 = r1[r2]
            r5 = r5 ^ r2
            int[] r2 = r3.key1
            r2 = r2[r4]
            r2 = r2 ^ r5
            short r2 = r1[r2]
            r0 = r0 ^ r2
            int[] r2 = r3.key0
            r4 = r2[r4]
            r4 = r4 ^ r0
            short r4 = r1[r4]
            r4 = r4 ^ r5
            int r4 = r4 << 8
            int r4 = r4 + r0
            return r4
    }

    public int decryptBlock(byte[] r10, int r11, byte[] r12, int r13) {
            r9 = this;
            int r0 = r11 + 0
            r0 = r10[r0]
            r1 = 8
            int r0 = r0 << r1
            int r2 = r11 + 1
            r2 = r10[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r2
            int r2 = r11 + 2
            r2 = r10[r2]
            int r2 = r2 << r1
            int r3 = r11 + 3
            r3 = r10[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r3
            int r3 = r11 + 4
            r3 = r10[r3]
            int r3 = r3 << r1
            int r4 = r11 + 5
            r4 = r10[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r3 = r3 + r4
            int r4 = r11 + 6
            r4 = r10[r4]
            int r4 = r4 << r1
            int r11 = r11 + 7
            r10 = r10[r11]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r4 = r4 + r10
            r10 = 0
            r11 = 31
            r5 = 0
        L36:
            r6 = 2
            if (r5 >= r6) goto L66
            r6 = 0
        L3a:
            if (r6 >= r1) goto L4e
            int r2 = r9.h(r11, r2)
            r3 = r3 ^ r2
            int r7 = r11 + 1
            r3 = r3 ^ r7
            int r11 = r11 + (-1)
            int r6 = r6 + 1
            r8 = r4
            r4 = r0
            r0 = r2
            r2 = r3
            r3 = r8
            goto L3a
        L4e:
            r6 = 0
        L4f:
            if (r6 >= r1) goto L63
            r0 = r0 ^ r2
            int r7 = r11 + 1
            r0 = r0 ^ r7
            int r2 = r9.h(r11, r2)
            int r11 = r11 + (-1)
            int r6 = r6 + 1
            r8 = r4
            r4 = r0
            r0 = r2
            r2 = r3
            r3 = r8
            goto L4f
        L63:
            int r5 = r5 + 1
            goto L36
        L66:
            int r10 = r13 + 0
            int r11 = r0 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 1
            byte r11 = (byte) r0
            r12[r10] = r11
            int r10 = r13 + 2
            int r11 = r2 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 3
            byte r11 = (byte) r2
            r12[r10] = r11
            int r10 = r13 + 4
            int r11 = r3 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 5
            byte r11 = (byte) r3
            r12[r10] = r11
            int r10 = r13 + 6
            int r11 = r4 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r13 = r13 + 7
            byte r10 = (byte) r4
            r12[r13] = r10
            return r1
    }

    public int encryptBlock(byte[] r10, int r11, byte[] r12, int r13) {
            r9 = this;
            int r0 = r11 + 0
            r0 = r10[r0]
            r1 = 8
            int r0 = r0 << r1
            int r2 = r11 + 1
            r2 = r10[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r2
            int r2 = r11 + 2
            r2 = r10[r2]
            int r2 = r2 << r1
            int r3 = r11 + 3
            r3 = r10[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r3
            int r3 = r11 + 4
            r3 = r10[r3]
            int r3 = r3 << r1
            int r4 = r11 + 5
            r4 = r10[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r3 = r3 + r4
            int r4 = r11 + 6
            r4 = r10[r4]
            int r4 = r4 << r1
            int r11 = r11 + 7
            r10 = r10[r11]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r4 = r4 + r10
            r10 = 0
            r11 = 0
            r5 = 0
        L35:
            r6 = 2
            if (r11 >= r6) goto L62
            r6 = 0
        L39:
            if (r6 >= r1) goto L4b
            int r0 = r9.g(r5, r0)
            r4 = r4 ^ r0
            int r5 = r5 + 1
            r4 = r4 ^ r5
            int r6 = r6 + 1
            r8 = r2
            r2 = r0
            r0 = r4
            r4 = r3
            r3 = r8
            goto L39
        L4b:
            r6 = 0
        L4c:
            if (r6 >= r1) goto L5f
            r2 = r2 ^ r0
            int r7 = r5 + 1
            r2 = r2 ^ r7
            int r0 = r9.g(r5, r0)
            int r6 = r6 + 1
            r5 = r7
            r8 = r2
            r2 = r0
            r0 = r4
            r4 = r3
            r3 = r8
            goto L4c
        L5f:
            int r11 = r11 + 1
            goto L35
        L62:
            int r10 = r13 + 0
            int r11 = r0 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 1
            byte r11 = (byte) r0
            r12[r10] = r11
            int r10 = r13 + 2
            int r11 = r2 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 3
            byte r11 = (byte) r2
            r12[r10] = r11
            int r10 = r13 + 4
            int r11 = r3 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r10 = r13 + 5
            byte r11 = (byte) r3
            r12[r10] = r11
            int r10 = r13 + 6
            int r11 = r4 >> 8
            byte r11 = (byte) r11
            r12[r10] = r11
            int r13 = r13 + 7
            byte r10 = (byte) r4
            r12[r13] = r10
            return r1
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "SKIPJACK"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    public void init(boolean r5, org.bouncycastle.crypto.CipherParameters r6) {
            r4 = this;
            boolean r0 = r6 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L55
            org.bouncycastle.crypto.params.KeyParameter r6 = (org.bouncycastle.crypto.params.KeyParameter) r6
            byte[] r6 = r6.getKey()
            r4.encrypting = r5
            r5 = 32
            int[] r0 = new int[r5]
            r4.key0 = r0
            int[] r0 = new int[r5]
            r4.key1 = r0
            int[] r0 = new int[r5]
            r4.key2 = r0
            int[] r0 = new int[r5]
            r4.key3 = r0
            r0 = 0
        L1f:
            if (r0 >= r5) goto L54
            int[] r1 = r4.key0
            int r2 = r0 * 4
            int r3 = r2 % 10
            r3 = r6[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r1[r0] = r3
            int[] r1 = r4.key1
            int r3 = r2 + 1
            int r3 = r3 % 10
            r3 = r6[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r1[r0] = r3
            int[] r1 = r4.key2
            int r3 = r2 + 2
            int r3 = r3 % 10
            r3 = r6[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r1[r0] = r3
            int[] r1 = r4.key3
            int r2 = r2 + 3
            int r2 = r2 % 10
            r2 = r6[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1f
        L54:
            return
        L55:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to SKIPJACK init - "
            r0.append(r1)
            java.lang.Class r6 = r6.getClass()
            java.lang.String r6 = r6.getName()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
    }

    @Override
    public int processBlock(byte[] r3, int r4, byte[] r5, int r6) {
            r2 = this;
            int[] r0 = r2.key1
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
            java.lang.String r4 = "SKIPJACK engine not initialised"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
