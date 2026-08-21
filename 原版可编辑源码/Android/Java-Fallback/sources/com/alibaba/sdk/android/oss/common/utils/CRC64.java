package com.alibaba.sdk.android.oss.common.utils;

public class CRC64 implements java.util.zip.Checksum {
    private static final int GF2_DIM = 64;
    private static final long POLY = -3932672073523589310L;
    private static final long[][] table = null;
    private long value;

    static {
            r0 = 2
            int[] r0 = new int[r0]
            r0 = {x005e: FILL_ARRAY_DATA , data: [8, 256} // fill-array
            java.lang.Class<long> r1 = long.class
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r1, r0)
            long[][] r0 = (long[][]) r0
            com.alibaba.sdk.android.oss.common.utils.CRC64.table = r0
            r0 = 0
            r1 = 0
        L12:
            r2 = 256(0x100, float:3.59E-43)
            r3 = 8
            r4 = 1
            if (r1 >= r2) goto L3a
            long r5 = (long) r1
            r2 = 0
        L1b:
            if (r2 >= r3) goto L31
            r7 = 1
            long r9 = r5 & r7
            int r11 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r11 != 0) goto L2d
            long r5 = r5 >>> r4
            r7 = -3932672073523589310(0xc96c5795d7870f42, double:-5.0564049839430436E45)
            long r5 = r5 ^ r7
            goto L2e
        L2d:
            long r5 = r5 >>> r4
        L2e:
            int r2 = r2 + 1
            goto L1b
        L31:
            long[][] r2 = com.alibaba.sdk.android.oss.common.utils.CRC64.table
            r2 = r2[r0]
            r2[r1] = r5
            int r1 = r1 + 1
            goto L12
        L3a:
            r1 = 0
        L3b:
            if (r1 >= r2) goto L5c
            long[][] r5 = com.alibaba.sdk.android.oss.common.utils.CRC64.table
            r5 = r5[r0]
            r6 = r5[r1]
            r5 = 1
        L44:
            if (r5 >= r3) goto L59
            long[][] r8 = com.alibaba.sdk.android.oss.common.utils.CRC64.table
            r9 = r8[r0]
            r10 = 255(0xff, double:1.26E-321)
            long r10 = r10 & r6
            int r11 = (int) r10
            r10 = r9[r11]
            long r6 = r6 >>> r3
            long r6 = r6 ^ r10
            r8 = r8[r5]
            r8[r1] = r6
            int r5 = r5 + 1
            goto L44
        L59:
            int r1 = r1 + 1
            goto L3b
        L5c:
            return
    }

    public CRC64() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.value = r0
            return
    }

    public static long combine(long r14, long r16, long r18) {
            r0 = 0
            int r2 = (r18 > r0 ? 1 : (r18 == r0 ? 0 : -1))
            if (r2 != 0) goto L7
            return r14
        L7:
            r2 = 64
            long[] r3 = new long[r2]
            long[] r4 = new long[r2]
            r5 = 0
            r6 = -3932672073523589310(0xc96c5795d7870f42, double:-5.0564049839430436E45)
            r4[r5] = r6
            r5 = 1
            r6 = 1
            r9 = r6
            r8 = 1
        L1a:
            if (r8 >= r2) goto L22
            r4[r8] = r9
            long r9 = r9 << r5
            int r8 = r8 + 1
            goto L1a
        L22:
            gf2MatrixSquare(r3, r4)
            gf2MatrixSquare(r4, r3)
            r8 = r14
            r10 = r18
        L2b:
            gf2MatrixSquare(r3, r4)
            long r12 = r10 & r6
            int r2 = (r12 > r6 ? 1 : (r12 == r6 ? 0 : -1))
            if (r2 != 0) goto L38
            long r8 = gf2MatrixTimes(r3, r8)
        L38:
            long r10 = r10 >>> r5
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto L3e
            goto L50
        L3e:
            gf2MatrixSquare(r4, r3)
            long r12 = r10 & r6
            int r2 = (r12 > r6 ? 1 : (r12 == r6 ? 0 : -1))
            if (r2 != 0) goto L4b
            long r8 = gf2MatrixTimes(r4, r8)
        L4b:
            long r10 = r10 >>> r5
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto L2b
        L50:
            long r0 = r8 ^ r16
            return r0
    }

    private static void gf2MatrixSquare(long[] r3, long[] r4) {
            r0 = 0
        L1:
            r1 = 64
            if (r0 >= r1) goto L10
            r1 = r4[r0]
            long r1 = gf2MatrixTimes(r4, r1)
            r3[r0] = r1
            int r0 = r0 + 1
            goto L1
        L10:
            return
    }

    private static long gf2MatrixTimes(long[] r10, long r11) {
            r0 = 0
            r2 = 0
            r3 = r0
        L4:
            int r5 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r5 == 0) goto L18
            r5 = 1
            long r7 = r11 & r5
            int r9 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r9 != 0) goto L13
            r5 = r10[r2]
            long r3 = r3 ^ r5
        L13:
            r5 = 1
            long r11 = r11 >>> r5
            int r2 = r2 + 1
            goto L4
        L18:
            return r3
    }

    @Override
    public long getValue() {
            r2 = this;
            long r0 = r2.value
            return r0
    }

    @Override
    public void reset() {
            r2 = this;
            r0 = 0
            r2.value = r0
            return
    }

    @Override
    public void update(int r4) {
            r3 = this;
            r0 = 1
            byte[] r1 = new byte[r0]
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r2 = 0
            r1[r2] = r4
            r3.update(r1, r0)
            return
    }

    public void update(byte[] r2, int r3) {
            r1 = this;
            r0 = 0
            r1.update(r2, r0, r3)
            return
    }

    @Override
    public void update(byte[] r17, int r18, int r19) {
            r16 = this;
            r0 = r16
            long r1 = r0.value
            r3 = -1
            long r1 = r1 ^ r3
            r0.value = r1
            r1 = r18
            r2 = r19
        Ld:
            r7 = 8
            r8 = 255(0xff, double:1.26E-321)
            if (r2 < r7) goto Lb8
            long[][] r10 = com.alibaba.sdk.android.oss.common.utils.CRC64.table
            r11 = 7
            r11 = r10[r11]
            long r12 = r0.value
            long r14 = r12 & r8
            r3 = r17[r1]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r3 = r3 ^ r14
            int r4 = (int) r3
            r3 = r11[r4]
            r11 = 6
            r11 = r10[r11]
            long r14 = r12 >>> r7
            long r14 = r14 & r8
            int r7 = r1 + 1
            r7 = r17[r7]
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r5 = (long) r7
            long r5 = r5 ^ r14
            int r6 = (int) r5
            r5 = r11[r6]
            long r3 = r3 ^ r5
            r5 = 5
            r5 = r10[r5]
            r6 = 16
            long r6 = r12 >>> r6
            long r6 = r6 & r8
            int r11 = r1 + 2
            r11 = r17[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            long r14 = (long) r11
            long r6 = r6 ^ r14
            int r7 = (int) r6
            r6 = r5[r7]
            long r3 = r3 ^ r6
            r5 = 4
            r5 = r10[r5]
            r6 = 24
            long r6 = r12 >>> r6
            long r6 = r6 & r8
            int r11 = r1 + 3
            r11 = r17[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            long r14 = (long) r11
            long r6 = r6 ^ r14
            int r7 = (int) r6
            r6 = r5[r7]
            long r3 = r3 ^ r6
            r5 = 3
            r5 = r10[r5]
            r6 = 32
            long r6 = r12 >>> r6
            long r6 = r6 & r8
            int r11 = r1 + 4
            r11 = r17[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            long r14 = (long) r11
            long r6 = r6 ^ r14
            int r7 = (int) r6
            r6 = r5[r7]
            long r3 = r3 ^ r6
            r5 = 2
            r5 = r10[r5]
            r6 = 40
            long r6 = r12 >>> r6
            long r6 = r6 & r8
            int r11 = r1 + 5
            r11 = r17[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            long r14 = (long) r11
            long r6 = r6 ^ r14
            int r7 = (int) r6
            r6 = r5[r7]
            long r3 = r3 ^ r6
            r5 = 1
            r5 = r10[r5]
            r6 = 48
            long r6 = r12 >>> r6
            long r6 = r6 & r8
            int r8 = r1 + 6
            r8 = r17[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r8 = (long) r8
            long r6 = r6 ^ r8
            int r7 = (int) r6
            r6 = r5[r7]
            long r3 = r3 ^ r6
            r5 = 0
            r5 = r10[r5]
            r6 = 56
            long r6 = r12 >>> r6
            int r8 = r1 + 7
            r8 = r17[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            long r8 = (long) r8
            long r6 = r6 ^ r8
            int r7 = (int) r6
            r6 = r5[r7]
            long r3 = r3 ^ r6
            r0.value = r3
            int r1 = r1 + 8
            int r2 = r2 + (-8)
            r3 = -1
            goto Ld
        Lb8:
            if (r2 <= 0) goto Ld2
            long[][] r3 = com.alibaba.sdk.android.oss.common.utils.CRC64.table
            r4 = 0
            r3 = r3[r4]
            long r5 = r0.value
            r10 = r17[r1]
            long r10 = (long) r10
            long r10 = r10 ^ r5
            long r10 = r10 & r8
            int r11 = (int) r10
            r10 = r3[r11]
            long r5 = r5 >>> r7
            long r5 = r5 ^ r10
            r0.value = r5
            r3 = 1
            int r1 = r1 + r3
            int r2 = r2 + (-1)
            goto Lb8
        Ld2:
            long r1 = r0.value
            r3 = -1
            long r1 = r1 ^ r3
            r0.value = r1
            return
    }
}
