package com.kwad.sdk.core.imageloader.utils;

public class BlurUtils {
    public BlurUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.Bitmap stackBlur(android.graphics.Bitmap r36, int r37, boolean r38) {
            r0 = r37
            r1 = 1
            if (r38 == 0) goto L8
            r2 = r36
            goto L12
        L8:
            android.graphics.Bitmap$Config r2 = r36.getConfig()
            r3 = r36
            android.graphics.Bitmap r2 = r3.copy(r2, r1)
        L12:
            if (r0 > 0) goto L16
            r0 = 0
            return r0
        L16:
            int r11 = r2.getWidth()
            int r12 = r2.getHeight()
            int r13 = r11 * r12
            int[] r14 = new int[r13]
            r5 = 0
            r7 = 0
            r8 = 0
            r3 = r2
            r4 = r14
            r6 = r11
            r9 = r11
            r10 = r12
            r3.getPixels(r4, r5, r6, r7, r8, r9, r10)
            int r3 = r11 + (-1)
            int r4 = r12 + (-1)
            int r5 = r0 + r0
            int r5 = r5 + r1
            int[] r6 = new int[r13]
            int[] r7 = new int[r13]
            int[] r8 = new int[r13]
            int r9 = java.lang.Math.max(r11, r12)
            int[] r9 = new int[r9]
            int r10 = r5 + 1
            int r10 = r10 >> r1
            int r10 = r10 * r10
            int r13 = r10 * 256
            int[] r15 = new int[r13]
            r1 = 0
        L49:
            if (r1 >= r13) goto L52
            int r17 = r1 / r10
            r15[r1] = r17
            int r1 = r1 + 1
            goto L49
        L52:
            r1 = 3
            r10 = 2
            int[] r13 = new int[r10]
            r16 = 1
            r13[r16] = r1
            r1 = 0
            r13[r1] = r5
            java.lang.Class<int> r1 = int.class
            java.lang.Object r1 = java.lang.reflect.Array.newInstance(r1, r13)
            int[][] r1 = (int[][]) r1
            int r13 = r0 + 1
            r10 = 0
            r17 = 0
            r18 = 0
        L6c:
            r19 = r2
            if (r10 >= r12) goto L199
            int r2 = -r0
            r28 = r12
            r20 = 0
            r21 = 0
            r22 = 0
            r23 = 0
            r24 = 0
            r25 = 0
            r26 = 0
            r27 = 0
            r12 = r2
            r2 = 0
        L85:
            r29 = 65280(0xff00, float:9.1477E-41)
            r30 = 16711680(0xff0000, float:2.3418052E-38)
            r31 = r4
            r32 = r9
            if (r12 > r0) goto Lef
            r4 = 0
            int r9 = java.lang.Math.max(r12, r4)
            int r9 = java.lang.Math.min(r3, r9)
            int r9 = r17 + r9
            r9 = r14[r9]
            int r33 = r12 + r0
            r33 = r1[r33]
            r30 = r9 & r30
            int r30 = r30 >> 16
            r33[r4] = r30
            r29 = r9 & r29
            int r29 = r29 >> 8
            r16 = 1
            r33[r16] = r29
            r9 = r9 & 255(0xff, float:3.57E-43)
            r29 = 2
            r33[r29] = r9
            int r9 = java.lang.Math.abs(r12)
            int r9 = r13 - r9
            r30 = r33[r4]
            int r30 = r30 * r9
            int r2 = r2 + r30
            r30 = r33[r16]
            int r30 = r30 * r9
            int r20 = r20 + r30
            r30 = r33[r29]
            int r30 = r30 * r9
            int r21 = r21 + r30
            if (r12 <= 0) goto Ldc
            r9 = r33[r4]
            int r25 = r25 + r9
            r9 = r33[r16]
            int r26 = r26 + r9
            r9 = r33[r29]
            int r27 = r27 + r9
            goto Le8
        Ldc:
            r9 = r33[r4]
            int r22 = r22 + r9
            r4 = r33[r16]
            int r23 = r23 + r4
            r4 = r33[r29]
            int r24 = r24 + r4
        Le8:
            int r12 = r12 + 1
            r4 = r31
            r9 = r32
            goto L85
        Lef:
            r9 = r0
            r4 = r2
            r2 = 0
        Lf2:
            if (r2 >= r11) goto L189
            r12 = r15[r4]
            r6[r17] = r12
            r12 = r15[r20]
            r7[r17] = r12
            r12 = r15[r21]
            r8[r17] = r12
            int r4 = r4 - r22
            int r20 = r20 - r23
            int r21 = r21 - r24
            int r12 = r9 - r0
            int r12 = r12 + r5
            int r12 = r12 % r5
            r12 = r1[r12]
            r33 = 0
            r34 = r12[r33]
            int r22 = r22 - r34
            r16 = 1
            r33 = r12[r16]
            int r23 = r23 - r33
            r33 = 2
            r34 = r12[r33]
            int r24 = r24 - r34
            if (r10 != 0) goto L12d
            int r33 = r2 + r0
            r34 = r15
            int r15 = r33 + 1
            int r15 = java.lang.Math.min(r15, r3)
            r32[r2] = r15
            goto L12f
        L12d:
            r34 = r15
        L12f:
            r15 = r32[r2]
            int r15 = r18 + r15
            r15 = r14[r15]
            r33 = r15 & r30
            int r33 = r33 >> 16
            r35 = 0
            r12[r35] = r33
            r33 = r15 & r29
            int r33 = r33 >> 8
            r16 = 1
            r12[r16] = r33
            r15 = r15 & 255(0xff, float:3.57E-43)
            r33 = 2
            r12[r33] = r15
            r15 = r12[r35]
            int r25 = r25 + r15
            r15 = r12[r16]
            int r26 = r26 + r15
            r12 = r12[r33]
            int r27 = r27 + r12
            int r4 = r4 + r25
            int r20 = r20 + r26
            int r21 = r21 + r27
            int r9 = r9 + 1
            int r9 = r9 % r5
            int r12 = r9 % r5
            r12 = r1[r12]
            r15 = 0
            r33 = r12[r15]
            int r22 = r22 + r33
            r16 = 1
            r33 = r12[r16]
            int r23 = r23 + r33
            r33 = 2
            r35 = r12[r33]
            int r24 = r24 + r35
            r35 = r12[r15]
            int r25 = r25 - r35
            r15 = r12[r16]
            int r26 = r26 - r15
            r12 = r12[r33]
            int r27 = r27 - r12
            int r17 = r17 + 1
            int r2 = r2 + 1
            r15 = r34
            goto Lf2
        L189:
            r34 = r15
            int r18 = r18 + r11
            int r10 = r10 + 1
            r2 = r19
            r12 = r28
            r4 = r31
            r9 = r32
            goto L6c
        L199:
            r31 = r4
            r32 = r9
            r28 = r12
            r34 = r15
            r2 = 0
        L1a2:
            if (r2 >= r11) goto L2d6
            int r3 = -r0
            int r4 = r3 * r11
            r21 = r5
            r22 = r14
            r9 = 0
            r10 = 0
            r12 = 0
            r15 = 0
            r17 = 0
            r18 = 0
            r20 = 0
            r5 = r3
            r14 = r4
            r3 = 0
            r4 = 0
        L1b9:
            r23 = r11
            if (r5 > r0) goto L21f
            r11 = 0
            int r24 = java.lang.Math.max(r11, r14)
            int r24 = r24 + r2
            int r25 = r5 + r0
            r25 = r1[r25]
            r26 = r6[r24]
            r25[r11] = r26
            r11 = r7[r24]
            r16 = 1
            r25[r16] = r11
            r11 = r8[r24]
            r26 = 2
            r25[r26] = r11
            int r11 = java.lang.Math.abs(r5)
            int r11 = r13 - r11
            r26 = r6[r24]
            int r26 = r26 * r11
            int r3 = r3 + r26
            r26 = r7[r24]
            int r26 = r26 * r11
            int r4 = r4 + r26
            r24 = r8[r24]
            int r24 = r24 * r11
            int r9 = r9 + r24
            r11 = 0
            if (r5 <= 0) goto L204
            r24 = r25[r11]
            int r17 = r17 + r24
            r16 = 1
            r24 = r25[r16]
            int r18 = r18 + r24
            r24 = 2
            r25 = r25[r24]
            int r20 = r20 + r25
            goto L212
        L204:
            r16 = 1
            r24 = 2
            r26 = r25[r11]
            int r10 = r10 + r26
            r11 = r25[r16]
            int r12 = r12 + r11
            r11 = r25[r24]
            int r15 = r15 + r11
        L212:
            r11 = r31
            if (r5 >= r11) goto L218
            int r14 = r14 + r23
        L218:
            int r5 = r5 + 1
            r31 = r11
            r11 = r23
            goto L1b9
        L21f:
            r11 = r31
            r25 = r0
            r24 = r2
            r5 = r4
            r14 = r28
            r4 = r3
            r3 = 0
        L22a:
            if (r3 >= r14) goto L2c0
            r26 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r27 = r22[r24]
            r26 = r27 & r26
            r27 = r34[r4]
            int r27 = r27 << 16
            r26 = r26 | r27
            r27 = r34[r5]
            int r27 = r27 << 8
            r26 = r26 | r27
            r27 = r34[r9]
            r26 = r26 | r27
            r22[r24] = r26
            int r4 = r4 - r10
            int r5 = r5 - r12
            int r9 = r9 - r15
            int r26 = r25 - r0
            int r26 = r26 + r21
            int r26 = r26 % r21
            r26 = r1[r26]
            r27 = 0
            r28 = r26[r27]
            int r10 = r10 - r28
            r16 = 1
            r27 = r26[r16]
            int r12 = r12 - r27
            r27 = 2
            r28 = r26[r27]
            int r15 = r15 - r28
            if (r2 != 0) goto L26d
            int r0 = r3 + r13
            int r0 = java.lang.Math.min(r0, r11)
            int r0 = r0 * r23
            r32[r3] = r0
        L26d:
            r0 = r32[r3]
            int r0 = r0 + r2
            r27 = r6[r0]
            r28 = 0
            r26[r28] = r27
            r27 = r7[r0]
            r16 = 1
            r26[r16] = r27
            r0 = r8[r0]
            r27 = 2
            r26[r27] = r0
            r0 = r26[r28]
            int r17 = r17 + r0
            r0 = r26[r16]
            int r18 = r18 + r0
            r0 = r26[r27]
            int r20 = r20 + r0
            int r4 = r4 + r17
            int r5 = r5 + r18
            int r9 = r9 + r20
            int r25 = r25 + 1
            int r25 = r25 % r21
            r0 = r1[r25]
            r26 = 0
            r27 = r0[r26]
            int r10 = r10 + r27
            r16 = 1
            r27 = r0[r16]
            int r12 = r12 + r27
            r27 = 2
            r28 = r0[r27]
            int r15 = r15 + r28
            r28 = r0[r26]
            int r17 = r17 - r28
            r28 = r0[r16]
            int r18 = r18 - r28
            r0 = r0[r27]
            int r20 = r20 - r0
            int r24 = r24 + r23
            int r3 = r3 + 1
            r0 = r37
            goto L22a
        L2c0:
            r16 = 1
            r26 = 0
            r27 = 2
            int r2 = r2 + 1
            r0 = r37
            r31 = r11
            r28 = r14
            r5 = r21
            r14 = r22
            r11 = r23
            goto L1a2
        L2d6:
            r23 = r11
            r22 = r14
            r14 = r28
            r5 = 0
            r7 = 0
            r8 = 0
            r3 = r19
            r4 = r22
            r6 = r23
            r9 = r23
            r10 = r14
            r3.setPixels(r4, r5, r6, r7, r8, r9, r10)
            return r19
    }
}
