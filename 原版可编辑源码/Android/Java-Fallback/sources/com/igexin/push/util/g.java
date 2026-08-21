package com.igexin.push.util;

class g extends com.igexin.push.util.e {
    static final boolean g = false;
    private static final byte[] h = null;
    private static final byte[] i = null;
    int c;
    public final boolean d;
    public final boolean e;
    public final boolean f;
    private final byte[] j;
    private int k;
    private final byte[] l;

    static {
            java.lang.Class<com.igexin.push.util.d> r0 = com.igexin.push.util.d.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.igexin.push.util.g.g = r0
            r0 = 64
            byte[] r1 = new byte[r0]
            r1 = {x001c: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            com.igexin.push.util.g.h = r1
            byte[] r0 = new byte[r0]
            r0 = {x0040: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
            com.igexin.push.util.g.i = r0
            return
    }

    public g(int r3, byte[] r4) {
            r2 = this;
            r2.<init>()
            r2.a = r4
            r4 = r3 & 1
            r0 = 0
            r1 = 1
            if (r4 != 0) goto Ld
            r4 = r1
            goto Le
        Ld:
            r4 = r0
        Le:
            r2.d = r4
            r4 = r3 & 2
            if (r4 != 0) goto L16
            r4 = r1
            goto L17
        L16:
            r4 = r0
        L17:
            r2.e = r4
            r4 = r3 & 4
            if (r4 == 0) goto L1e
            goto L1f
        L1e:
            r1 = r0
        L1f:
            r2.f = r1
            r3 = r3 & 8
            if (r3 != 0) goto L28
            byte[] r3 = com.igexin.push.util.g.h
            goto L2a
        L28:
            byte[] r3 = com.igexin.push.util.g.i
        L2a:
            r2.l = r3
            r3 = 2
            byte[] r3 = new byte[r3]
            r2.j = r3
            r2.c = r0
            boolean r3 = r2.e
            if (r3 == 0) goto L3a
            r3 = 19
            goto L3b
        L3a:
            r3 = -1
        L3b:
            r2.k = r3
            return
    }

    public boolean a(byte[] r18, int r19, int r20, boolean r21) {
            r17 = this;
            r0 = r17
            byte[] r1 = r0.l
            byte[] r2 = r0.a
            int r3 = r0.k
            int r4 = r20 + r19
            int r5 = r0.c
            r6 = -1
            r7 = 0
            r8 = 2
            r9 = 1
            if (r5 == r9) goto L31
            if (r5 == r8) goto L15
            goto L50
        L15:
            int r5 = r19 + 1
            if (r5 > r4) goto L50
            byte[] r10 = r0.j
            r11 = r10[r7]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r11 = r11 << 16
            r10 = r10[r9]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r10 = r10 << 8
            r10 = r10 | r11
            r11 = r18[r19]
            r11 = r11 & 255(0xff, float:3.57E-43)
            r10 = r10 | r11
            r0.c = r7
            r11 = r5
            goto L53
        L31:
            int r5 = r19 + 2
            if (r5 > r4) goto L50
            byte[] r5 = r0.j
            r5 = r5[r7]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << 16
            int r10 = r19 + 1
            r11 = r18[r19]
            r11 = r11 & 255(0xff, float:3.57E-43)
            int r11 = r11 << 8
            r5 = r5 | r11
            int r11 = r10 + 1
            r10 = r18[r10]
            r10 = r10 & 255(0xff, float:3.57E-43)
            r10 = r10 | r5
            r0.c = r7
            goto L53
        L50:
            r11 = r19
            r10 = r6
        L53:
            r12 = 4
            r13 = 13
            r14 = 10
            if (r10 == r6) goto L8f
            int r6 = r10 >> 18
            r6 = r6 & 63
            r6 = r1[r6]
            r2[r7] = r6
            int r6 = r10 >> 12
            r6 = r6 & 63
            r6 = r1[r6]
            r2[r9] = r6
            int r6 = r10 >> 6
            r6 = r6 & 63
            r6 = r1[r6]
            r2[r8] = r6
            r6 = r10 & 63
            r6 = r1[r6]
            r10 = 3
            r2[r10] = r6
            int r3 = r3 + (-1)
            if (r3 != 0) goto L8d
            boolean r3 = r0.f
            if (r3 == 0) goto L85
            r3 = 5
            r2[r12] = r13
            goto L86
        L85:
            r3 = r12
        L86:
            int r6 = r3 + 1
            r2[r3] = r14
        L8a:
            r3 = 19
            goto L90
        L8d:
            r6 = r12
            goto L90
        L8f:
            r6 = r7
        L90:
            int r10 = r11 + 3
            if (r10 > r4) goto Le6
            r15 = r18[r11]
            r15 = r15 & 255(0xff, float:3.57E-43)
            int r15 = r15 << 16
            int r16 = r11 + 1
            r5 = r18[r16]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << 8
            r5 = r5 | r15
            int r11 = r11 + 2
            r11 = r18[r11]
            r11 = r11 & 255(0xff, float:3.57E-43)
            r5 = r5 | r11
            int r11 = r5 >> 18
            r11 = r11 & 63
            r11 = r1[r11]
            r2[r6] = r11
            int r11 = r6 + 1
            int r15 = r5 >> 12
            r15 = r15 & 63
            r15 = r1[r15]
            r2[r11] = r15
            int r11 = r6 + 2
            int r15 = r5 >> 6
            r15 = r15 & 63
            r15 = r1[r15]
            r2[r11] = r15
            int r11 = r6 + 3
            r5 = r5 & 63
            r5 = r1[r5]
            r2[r11] = r5
            int r6 = r6 + 4
            int r3 = r3 + (-1)
            if (r3 != 0) goto Le4
            boolean r3 = r0.f
            if (r3 == 0) goto Ldd
            int r3 = r6 + 1
            r2[r6] = r13
            r6 = r3
        Ldd:
            int r3 = r6 + 1
            r2[r6] = r14
            r6 = r3
            r11 = r10
            goto L8a
        Le4:
            r11 = r10
            goto L90
        Le6:
            if (r21 == 0) goto L1d8
            int r5 = r0.c
            int r10 = r11 - r5
            int r15 = r4 + (-1)
            r16 = 61
            if (r10 != r15) goto L139
            if (r5 <= 0) goto Lfa
            byte[] r5 = r0.j
            r5 = r5[r7]
            r7 = r9
            goto L100
        Lfa:
            int r5 = r11 + 1
            r8 = r18[r11]
            r11 = r5
            r5 = r8
        L100:
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << r12
            int r8 = r0.c
            int r8 = r8 - r7
            r0.c = r8
            int r7 = r6 + 1
            int r8 = r5 >> 6
            r8 = r8 & 63
            r8 = r1[r8]
            r2[r6] = r8
            int r6 = r7 + 1
            r5 = r5 & 63
            r1 = r1[r5]
            r2[r7] = r1
            boolean r1 = r0.d
            if (r1 == 0) goto L126
            int r1 = r6 + 1
            r2[r6] = r16
            int r6 = r1 + 1
            r2[r1] = r16
        L126:
            boolean r1 = r0.e
            if (r1 == 0) goto L1bc
            boolean r1 = r0.f
            if (r1 == 0) goto L133
            int r1 = r6 + 1
            r2[r6] = r13
            r6 = r1
        L133:
            int r1 = r6 + 1
            r2[r6] = r14
            goto L1bb
        L139:
            int r10 = r11 - r5
            int r12 = r4 + (-2)
            if (r10 != r12) goto L1a4
            if (r5 <= r9) goto L147
            byte[] r5 = r0.j
            r5 = r5[r7]
            r7 = r9
            goto L14d
        L147:
            int r5 = r11 + 1
            r10 = r18[r11]
            r11 = r5
            r5 = r10
        L14d:
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << r14
            int r10 = r0.c
            if (r10 <= 0) goto L15b
            byte[] r10 = r0.j
            int r12 = r7 + 1
            r7 = r10[r7]
            goto L162
        L15b:
            int r10 = r11 + 1
            r11 = r18[r11]
            r12 = r7
            r7 = r11
            r11 = r10
        L162:
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 << r8
            r5 = r5 | r7
            int r7 = r0.c
            int r7 = r7 - r12
            r0.c = r7
            int r7 = r6 + 1
            int r8 = r5 >> 12
            r8 = r8 & 63
            r8 = r1[r8]
            r2[r6] = r8
            int r6 = r7 + 1
            int r8 = r5 >> 6
            r8 = r8 & 63
            r8 = r1[r8]
            r2[r7] = r8
            int r7 = r6 + 1
            r5 = r5 & 63
            r1 = r1[r5]
            r2[r6] = r1
            boolean r1 = r0.d
            if (r1 == 0) goto L190
            int r1 = r7 + 1
            r2[r7] = r16
            r7 = r1
        L190:
            boolean r1 = r0.e
            if (r1 == 0) goto L1a2
            boolean r1 = r0.f
            if (r1 == 0) goto L19d
            int r1 = r7 + 1
            r2[r7] = r13
            r7 = r1
        L19d:
            int r1 = r7 + 1
            r2[r7] = r14
            r7 = r1
        L1a2:
            r6 = r7
            goto L1bc
        L1a4:
            boolean r1 = r0.e
            if (r1 == 0) goto L1bc
            if (r6 <= 0) goto L1bc
            r1 = 19
            if (r3 == r1) goto L1bc
            boolean r1 = r0.f
            if (r1 == 0) goto L1b7
            int r1 = r6 + 1
            r2[r6] = r13
            r6 = r1
        L1b7:
            int r1 = r6 + 1
            r2[r6] = r14
        L1bb:
            r6 = r1
        L1bc:
            boolean r1 = com.igexin.push.util.g.g
            if (r1 != 0) goto L1cb
            int r1 = r0.c
            if (r1 != 0) goto L1c5
            goto L1cb
        L1c5:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
        L1cb:
            boolean r1 = com.igexin.push.util.g.g
            if (r1 != 0) goto L201
            if (r11 != r4) goto L1d2
            goto L201
        L1d2:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
        L1d8:
            int r1 = r4 + (-1)
            if (r11 != r1) goto L1e9
            byte[] r1 = r0.j
            int r2 = r0.c
            int r4 = r2 + 1
            r0.c = r4
            r4 = r18[r11]
            r1[r2] = r4
            goto L201
        L1e9:
            int r4 = r4 - r8
            if (r11 != r4) goto L201
            byte[] r1 = r0.j
            int r2 = r0.c
            int r4 = r2 + 1
            r0.c = r4
            r5 = r18[r11]
            r1[r2] = r5
            int r2 = r4 + 1
            r0.c = r2
            int r11 = r11 + r9
            r2 = r18[r11]
            r1[r4] = r2
        L201:
            r0.b = r6
            r0.k = r3
            return r9
    }
}
