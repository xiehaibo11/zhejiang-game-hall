package org.bouncycastle.crypto.digests;

public final class WhirlpoolDigest implements org.bouncycastle.crypto.ExtendedDigest {
    private static final int BITCOUNT_ARRAY_SIZE = 32;
    private static final int BYTE_LENGTH = 64;
    private static final long[] C0 = null;
    private static final long[] C1 = null;
    private static final long[] C2 = null;
    private static final long[] C3 = null;
    private static final long[] C4 = null;
    private static final long[] C5 = null;
    private static final long[] C6 = null;
    private static final long[] C7 = null;
    private static final int DIGEST_LENGTH_BYTES = 64;
    private static final short[] EIGHT = null;
    private static final int REDUCTION_POLYNOMIAL = 285;
    private static final int ROUNDS = 10;
    private static final int[] SBOX = null;
    private long[] _K;
    private long[] _L;
    private short[] _bitCount;
    private long[] _block;
    private byte[] _buffer;
    private int _bufferPos;
    private long[] _hash;
    private final long[] _rc;
    private long[] _state;

    static {
            r0 = 256(0x100, float:3.59E-43)
            int[] r1 = new int[r0]
            r1 = {x0036: FILL_ARRAY_DATA , data: [24, 35, 198, 232, 135, 184, 1, 79, 54, 166, 210, 245, 121, 111, 145, 82, 96, 188, 155, 142, 163, 12, 123, 53, 29, 224, 215, 194, 46, 75, 254, 87, 21, 119, 55, 229, 159, 240, 74, 218, 88, 201, 41, 10, 177, 160, 107, 133, 189, 93, 16, 244, 203, 62, 5, 103, 228, 39, 65, 139, 167, 125, 149, 216, 251, 238, 124, 102, 221, 23, 71, 158, 202, 45, 191, 7, 173, 90, 131, 51, 99, 2, 170, 113, 200, 25, 73, 217, 242, 227, 91, 136, 154, 38, 50, 176, 233, 15, 213, 128, 190, 205, 52, 72, 255, 122, 144, 95, 32, 104, 26, 174, 180, 84, 147, 34, 100, 241, 115, 18, 64, 8, 195, 236, 219, 161, 141, 61, 151, 0, 207, 43, 118, 130, 214, 27, 181, 175, 106, 80, 69, 243, 48, 239, 63, 85, 162, 234, 101, 186, 47, 192, 222, 28, 253, 77, 146, 117, 6, 138, 178, 230, 14, 31, 98, 212, 168, 150, 249, 197, 37, 89, 132, 114, 57, 76, 94, 120, 56, 140, 209, 165, 226, 97, 179, 33, 156, 30, 67, 199, 252, 4, 81, 153, 109, 13, 250, 223, 126, 36, 59, 171, 206, 17, 143, 78, 183, 235, 60, 129, 148, 247, 185, 19, 44, 211, 231, 110, 196, 3, 86, 68, 127, 169, 42, 187, 193, 83, 220, 11, 157, 108, 49, 116, 246, 70, 172, 137, 20, 225, 22, 58, 105, 9, 112, 182, 208, 237, 204, 66, 152, 164, 40, 92, 248, 134} // fill-array
            org.bouncycastle.crypto.digests.WhirlpoolDigest.SBOX = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C0 = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C1 = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C2 = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C3 = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C4 = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C5 = r1
            long[] r1 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C6 = r1
            long[] r0 = new long[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.C7 = r0
            r0 = 32
            short[] r0 = new short[r0]
            org.bouncycastle.crypto.digests.WhirlpoolDigest.EIGHT = r0
            r1 = 31
            r2 = 8
            r0[r1] = r2
            return
    }

    public WhirlpoolDigest() {
            r20 = this;
            r9 = r20
            r20.<init>()
            r0 = 11
            long[] r0 = new long[r0]
            r9._rc = r0
            r0 = 64
            byte[] r0 = new byte[r0]
            r9._buffer = r0
            r10 = 0
            r9._bufferPos = r10
            r0 = 32
            short[] r0 = new short[r0]
            r9._bitCount = r0
            r11 = 8
            long[] r0 = new long[r11]
            r9._hash = r0
            long[] r0 = new long[r11]
            r9._K = r0
            long[] r0 = new long[r11]
            r9._L = r0
            long[] r0 = new long[r11]
            r9._block = r0
            long[] r0 = new long[r11]
            r9._state = r0
            r12 = 0
        L31:
            r0 = 256(0x100, float:3.59E-43)
            if (r12 >= r0) goto Lf4
            int[] r0 = org.bouncycastle.crypto.digests.WhirlpoolDigest.SBOX
            r13 = r0[r12]
            int r0 = r13 << 1
            int r14 = r9.maskWithReductionPolynomial(r0)
            int r0 = r14 << 1
            int r15 = r9.maskWithReductionPolynomial(r0)
            r16 = r15 ^ r13
            int r0 = r15 << 1
            int r17 = r9.maskWithReductionPolynomial(r0)
            r18 = r17 ^ r13
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C0
            r0 = r20
            r1 = r13
            r2 = r13
            r3 = r15
            r4 = r13
            r5 = r17
            r6 = r16
            r7 = r14
            r8 = r18
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C1
            r0 = r20
            r1 = r18
            r3 = r13
            r4 = r15
            r5 = r13
            r6 = r17
            r7 = r16
            r8 = r14
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C2
            r0 = r20
            r1 = r14
            r2 = r18
            r4 = r13
            r5 = r15
            r6 = r13
            r7 = r17
            r8 = r16
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C3
            r0 = r20
            r1 = r16
            r2 = r14
            r3 = r18
            r5 = r13
            r6 = r15
            r7 = r13
            r8 = r17
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C4
            r0 = r20
            r1 = r17
            r2 = r16
            r3 = r14
            r4 = r18
            r6 = r13
            r7 = r15
            r8 = r13
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C5
            r0 = r20
            r1 = r13
            r2 = r17
            r3 = r16
            r4 = r14
            r5 = r18
            r7 = r13
            r8 = r15
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C6
            r0 = r20
            r1 = r15
            r2 = r13
            r3 = r17
            r4 = r16
            r5 = r14
            r6 = r18
            r8 = r13
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            long[] r19 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C7
            r0 = r20
            r1 = r13
            r2 = r15
            r3 = r13
            r4 = r17
            r5 = r16
            r6 = r14
            r7 = r18
            long r0 = r0.packIntoLong(r1, r2, r3, r4, r5, r6, r7, r8)
            r19[r12] = r0
            int r12 = r12 + 1
            goto L31
        Lf4:
            long[] r0 = r9._rc
            r1 = 0
            r0[r10] = r1
            r0 = 1
        Lfb:
            r1 = 10
            if (r0 > r1) goto L16a
            int r1 = r0 + (-1)
            int r1 = r1 * 8
            long[] r2 = r9._rc
            long[] r3 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C0
            r4 = r3[r1]
            r6 = -72057594037927936(0xff00000000000000, double:-5.486124068793689E303)
            long r3 = r4 & r6
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C1
            int r6 = r1 + 1
            r6 = r5[r6]
            r12 = 71776119061217280(0xff000000000000, double:7.06327445644526E-304)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C2
            int r6 = r1 + 2
            r6 = r5[r6]
            r12 = 280375465082880(0xff0000000000, double:1.38523885234213E-309)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C3
            int r6 = r1 + 3
            r6 = r5[r6]
            r12 = 1095216660480(0xff00000000, double:5.41108926696E-312)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C4
            int r6 = r1 + 4
            r6 = r5[r6]
            r12 = 4278190080(0xff000000, double:2.113706745E-314)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C5
            int r6 = r1 + 5
            r6 = r5[r6]
            r12 = 16711680(0xff0000, double:8.256667E-317)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C6
            int r6 = r1 + 6
            r6 = r5[r6]
            r12 = 65280(0xff00, double:3.22526E-319)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C7
            int r1 = r1 + 7
            r6 = r5[r1]
            r12 = 255(0xff, double:1.26E-321)
            long r5 = r6 & r12
            long r3 = r3 ^ r5
            r2[r0] = r3
            int r0 = r0 + 1
            goto Lfb
        L16a:
            return
    }

    public WhirlpoolDigest(org.bouncycastle.crypto.digests.WhirlpoolDigest r5) {
            r4 = this;
            r4.<init>()
            r0 = 11
            long[] r0 = new long[r0]
            r4._rc = r0
            r1 = 64
            byte[] r1 = new byte[r1]
            r4._buffer = r1
            r1 = 0
            r4._bufferPos = r1
            r2 = 32
            short[] r2 = new short[r2]
            r4._bitCount = r2
            r2 = 8
            long[] r3 = new long[r2]
            r4._hash = r3
            long[] r3 = new long[r2]
            r4._K = r3
            long[] r3 = new long[r2]
            r4._L = r3
            long[] r3 = new long[r2]
            r4._block = r3
            long[] r2 = new long[r2]
            r4._state = r2
            long[] r2 = r5._rc
            int r3 = r0.length
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            byte[] r0 = r5._buffer
            byte[] r2 = r4._buffer
            int r3 = r2.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            int r0 = r5._bufferPos
            r4._bufferPos = r0
            short[] r0 = r5._bitCount
            short[] r2 = r4._bitCount
            int r3 = r2.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            long[] r0 = r5._hash
            long[] r2 = r4._hash
            int r3 = r2.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            long[] r0 = r5._K
            long[] r2 = r4._K
            int r3 = r2.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            long[] r0 = r5._L
            long[] r2 = r4._L
            int r3 = r2.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            long[] r0 = r5._block
            long[] r2 = r4._block
            int r3 = r2.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            long[] r5 = r5._state
            long[] r0 = r4._state
            int r2 = r0.length
            java.lang.System.arraycopy(r5, r1, r0, r1, r2)
            return
    }

    private long bytesToLongFromBuffer(byte[] r8, int r9) {
            r7 = this;
            int r0 = r9 + 0
            r0 = r8[r0]
            long r0 = (long) r0
            r2 = 255(0xff, double:1.26E-321)
            long r0 = r0 & r2
            r4 = 56
            long r0 = r0 << r4
            int r4 = r9 + 1
            r4 = r8[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 48
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r9 + 2
            r4 = r8[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 40
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r9 + 3
            r4 = r8[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 32
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r9 + 4
            r4 = r8[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 24
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r9 + 5
            r4 = r8[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 16
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r9 + 6
            r4 = r8[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 8
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r9 = r9 + 7
            r8 = r8[r9]
            long r8 = (long) r8
            long r8 = r8 & r2
            long r8 = r8 | r0
            return r8
    }

    private void convertLongToByteArray(long r7, byte[] r9, int r10) {
            r6 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto L17
            int r1 = r10 + r0
            int r2 = r0 * 8
            int r2 = 56 - r2
            long r2 = r7 >> r2
            r4 = 255(0xff, double:1.26E-321)
            long r2 = r2 & r4
            int r3 = (int) r2
            byte r2 = (byte) r3
            r9[r1] = r2
            int r0 = r0 + 1
            goto L1
        L17:
            return
    }

    private byte[] copyBitLength() {
            r4 = this;
            r0 = 32
            byte[] r1 = new byte[r0]
            r2 = 0
        L5:
            if (r2 >= r0) goto L13
            short[] r3 = r4._bitCount
            short r3 = r3[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L5
        L13:
            return r1
    }

    private void finish() {
            r5 = this;
            byte[] r0 = r5.copyBitLength()
            byte[] r1 = r5._buffer
            int r2 = r5._bufferPos
            int r3 = r2 + 1
            r5._bufferPos = r3
            r4 = r1[r2]
            r4 = r4 | 128(0x80, float:1.8E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r1.length
            r4 = 0
            if (r3 != r2) goto L1a
            r5.processFilledBuffer(r1, r4)
        L1a:
            int r1 = r5._bufferPos
            r2 = 32
            if (r1 <= r2) goto L28
        L20:
            int r1 = r5._bufferPos
            if (r1 == 0) goto L28
            r5.update(r4)
            goto L20
        L28:
            int r1 = r5._bufferPos
            if (r1 > r2) goto L30
            r5.update(r4)
            goto L28
        L30:
            byte[] r1 = r5._buffer
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r4, r1, r2, r3)
            byte[] r0 = r5._buffer
            r5.processFilledBuffer(r0, r4)
            return
    }

    private void increment() {
            r5 = this;
            short[] r0 = r5._bitCount
            int r0 = r0.length
            int r0 = r0 + (-1)
            r1 = 0
        L6:
            if (r0 < 0) goto L1e
            short[] r2 = r5._bitCount
            short r3 = r2[r0]
            r3 = r3 & 255(0xff, float:3.57E-43)
            short[] r4 = org.bouncycastle.crypto.digests.WhirlpoolDigest.EIGHT
            short r4 = r4[r0]
            int r3 = r3 + r4
            int r3 = r3 + r1
            int r1 = r3 >>> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            short r3 = (short) r3
            r2[r0] = r3
            int r0 = r0 + (-1)
            goto L6
        L1e:
            return
    }

    private int maskWithReductionPolynomial(int r6) {
            r5 = this;
            long r0 = (long) r6
            r2 = 256(0x100, double:1.265E-321)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L9
            r6 = r6 ^ 285(0x11d, float:4.0E-43)
        L9:
            return r6
    }

    private long packIntoLong(int r4, int r5, int r6, int r7, int r8, int r9, int r10, int r11) {
            r3 = this;
            long r0 = (long) r4
            r4 = 56
            long r0 = r0 << r4
            long r4 = (long) r5
            r2 = 48
            long r4 = r4 << r2
            long r4 = r4 ^ r0
            long r0 = (long) r6
            r6 = 40
            long r0 = r0 << r6
            long r4 = r4 ^ r0
            long r6 = (long) r7
            r0 = 32
            long r6 = r6 << r0
            long r4 = r4 ^ r6
            long r6 = (long) r8
            r8 = 24
            long r6 = r6 << r8
            long r4 = r4 ^ r6
            long r6 = (long) r9
            r8 = 16
            long r6 = r6 << r8
            long r4 = r4 ^ r6
            long r6 = (long) r10
            r8 = 8
            long r6 = r6 << r8
            long r4 = r4 ^ r6
            long r6 = (long) r11
            long r4 = r4 ^ r6
            return r4
    }

    private void processFilledBuffer(byte[] r4, int r5) {
            r3 = this;
            r4 = 0
            r5 = 0
        L2:
            long[] r0 = r3._state
            int r0 = r0.length
            if (r5 >= r0) goto L16
            long[] r0 = r3._block
            byte[] r1 = r3._buffer
            int r2 = r5 * 8
            long r1 = r3.bytesToLongFromBuffer(r1, r2)
            r0[r5] = r1
            int r5 = r5 + 1
            goto L2
        L16:
            r3.processBlock()
            r3._bufferPos = r4
            byte[] r5 = r3._buffer
            org.bouncycastle.util.Arrays.fill(r5, r4)
            return
    }

    @Override
    public int doFinal(byte[] r5, int r6) {
            r4 = this;
            r4.finish()
            r0 = 0
        L4:
            r1 = 8
            if (r0 >= r1) goto L15
            long[] r1 = r4._hash
            r2 = r1[r0]
            int r1 = r0 * 8
            int r1 = r1 + r6
            r4.convertLongToByteArray(r2, r5, r1)
            int r0 = r0 + 1
            goto L4
        L15:
            r4.reset()
            int r5 = r4.getDigestSize()
            return r5
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Whirlpool"
            return r0
    }

    @Override
    public int getByteLength() {
            r1 = this;
            r0 = 64
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 64
            return r0
    }

    protected void processBlock() {
            r19 = this;
            r0 = r19
            r2 = 0
        L3:
            r3 = 8
            if (r2 >= r3) goto L1c
            long[] r3 = r0._state
            long[] r4 = r0._block
            r5 = r4[r2]
            long[] r4 = r0._K
            long[] r7 = r0._hash
            r8 = r7[r2]
            r4[r2] = r8
            long r4 = r5 ^ r8
            r3[r2] = r4
            int r2 = r2 + 1
            goto L3
        L1c:
            r2 = 1
        L1d:
            r4 = 10
            if (r2 > r4) goto L1a1
            r4 = 0
        L22:
            r5 = 16
            r6 = 24
            r7 = 32
            r8 = 40
            r9 = 48
            r10 = 56
            if (r4 >= r3) goto Ld8
            long[] r11 = r0._L
            r12 = 0
            r11[r4] = r12
            r12 = r11[r4]
            long[] r14 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C0
            long[] r15 = r0._K
            int r16 = r4 + 0
            r16 = r16 & 7
            r16 = r15[r16]
            r18 = r2
            long r1 = r16 >>> r10
            int r2 = (int) r1
            r1 = r2 & 255(0xff, float:3.57E-43)
            r1 = r14[r1]
            long r1 = r1 ^ r12
            r11[r4] = r1
            r1 = r11[r4]
            long[] r10 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C1
            int r12 = r4 + (-1)
            r12 = r12 & 7
            r12 = r15[r12]
            long r12 = r12 >>> r9
            int r9 = (int) r12
            r9 = r9 & 255(0xff, float:3.57E-43)
            r9 = r10[r9]
            long r1 = r1 ^ r9
            r11[r4] = r1
            r1 = r11[r4]
            long[] r9 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C2
            int r10 = r4 + (-2)
            r10 = r10 & 7
            r12 = r15[r10]
            long r12 = r12 >>> r8
            int r8 = (int) r12
            r8 = r8 & 255(0xff, float:3.57E-43)
            r8 = r9[r8]
            long r1 = r1 ^ r8
            r11[r4] = r1
            r1 = r11[r4]
            long[] r8 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C3
            int r9 = r4 + (-3)
            r9 = r9 & 7
            r9 = r15[r9]
            long r9 = r9 >>> r7
            int r7 = (int) r9
            r7 = r7 & 255(0xff, float:3.57E-43)
            r7 = r8[r7]
            long r1 = r1 ^ r7
            r11[r4] = r1
            r1 = r11[r4]
            long[] r7 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C4
            int r8 = r4 + (-4)
            r8 = r8 & 7
            r8 = r15[r8]
            long r8 = r8 >>> r6
            int r6 = (int) r8
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r7[r6]
            long r1 = r1 ^ r6
            r11[r4] = r1
            r1 = r11[r4]
            long[] r6 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C5
            int r7 = r4 + (-5)
            r7 = r7 & 7
            r7 = r15[r7]
            long r7 = r7 >>> r5
            int r5 = (int) r7
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r6[r5]
            long r1 = r1 ^ r5
            r11[r4] = r1
            r1 = r11[r4]
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C6
            int r6 = r4 + (-6)
            r6 = r6 & 7
            r6 = r15[r6]
            long r6 = r6 >>> r3
            int r7 = (int) r6
            r6 = r7 & 255(0xff, float:3.57E-43)
            r6 = r5[r6]
            long r1 = r1 ^ r6
            r11[r4] = r1
            r1 = r11[r4]
            long[] r5 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C7
            int r6 = r4 + (-7)
            r6 = r6 & 7
            r6 = r15[r6]
            int r7 = (int) r6
            r6 = r7 & 255(0xff, float:3.57E-43)
            r6 = r5[r6]
            long r1 = r1 ^ r6
            r11[r4] = r1
            int r4 = r4 + 1
            r2 = r18
            goto L22
        Ld8:
            r18 = r2
            long[] r1 = r0._L
            long[] r2 = r0._K
            int r4 = r2.length
            r11 = 0
            java.lang.System.arraycopy(r1, r11, r2, r11, r4)
            long[] r1 = r0._K
            r12 = r1[r11]
            long[] r2 = r0._rc
            r14 = r2[r18]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r11 = 0
        Lef:
            long[] r1 = r0._L
            if (r11 >= r3) goto L196
            long[] r2 = r0._K
            r12 = r2[r11]
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C0
            long[] r4 = r0._state
            int r14 = r11 + 0
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r10
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C1
            int r14 = r11 + (-1)
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r9
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C2
            int r14 = r11 + (-2)
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r8
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C3
            int r14 = r11 + (-3)
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r7
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C4
            int r14 = r11 + (-4)
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r6
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C5
            int r14 = r11 + (-5)
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r5
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C6
            int r14 = r11 + (-6)
            r14 = r14 & 7
            r14 = r4[r14]
            long r14 = r14 >>> r3
            int r15 = (int) r14
            r14 = r15 & 255(0xff, float:3.57E-43)
            r14 = r2[r14]
            long r12 = r12 ^ r14
            r1[r11] = r12
            r12 = r1[r11]
            long[] r2 = org.bouncycastle.crypto.digests.WhirlpoolDigest.C7
            int r14 = r11 + (-7)
            r14 = r14 & 7
            r14 = r4[r14]
            int r4 = (int) r14
            r4 = r4 & 255(0xff, float:3.57E-43)
            r14 = r2[r4]
            long r12 = r12 ^ r14
            r1[r11] = r12
            int r11 = r11 + 1
            goto Lef
        L196:
            long[] r2 = r0._state
            int r4 = r2.length
            r5 = 0
            java.lang.System.arraycopy(r1, r5, r2, r5, r4)
            int r2 = r18 + 1
            goto L1d
        L1a1:
            r5 = 0
            r1 = 0
        L1a3:
            if (r1 >= r3) goto L1b9
            long[] r2 = r0._hash
            r4 = r2[r1]
            long[] r6 = r0._state
            r7 = r6[r1]
            long[] r6 = r0._block
            r9 = r6[r1]
            long r6 = r7 ^ r9
            long r4 = r4 ^ r6
            r2[r1] = r4
            int r1 = r1 + 1
            goto L1a3
        L1b9:
            return
    }

    @Override
    public void reset() {
            r3 = this;
            r0 = 0
            r3._bufferPos = r0
            short[] r1 = r3._bitCount
            org.bouncycastle.util.Arrays.fill(r1, r0)
            byte[] r1 = r3._buffer
            org.bouncycastle.util.Arrays.fill(r1, r0)
            long[] r0 = r3._hash
            r1 = 0
            org.bouncycastle.util.Arrays.fill(r0, r1)
            long[] r0 = r3._K
            org.bouncycastle.util.Arrays.fill(r0, r1)
            long[] r0 = r3._L
            org.bouncycastle.util.Arrays.fill(r0, r1)
            long[] r0 = r3._block
            org.bouncycastle.util.Arrays.fill(r0, r1)
            long[] r0 = r3._state
            org.bouncycastle.util.Arrays.fill(r0, r1)
            return
    }

    @Override
    public void update(byte r3) {
            r2 = this;
            byte[] r0 = r2._buffer
            int r1 = r2._bufferPos
            r0[r1] = r3
            int r1 = r1 + 1
            r2._bufferPos = r1
            int r3 = r0.length
            if (r1 != r3) goto L11
            r3 = 0
            r2.processFilledBuffer(r0, r3)
        L11:
            r2.increment()
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) {
            r1 = this;
        L0:
            if (r4 <= 0) goto Lc
            r0 = r2[r3]
            r1.update(r0)
            int r3 = r3 + 1
            int r4 = r4 + (-1)
            goto L0
        Lc:
            return
    }
}
