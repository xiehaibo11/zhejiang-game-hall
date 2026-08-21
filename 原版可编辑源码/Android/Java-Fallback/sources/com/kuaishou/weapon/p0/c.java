package com.kuaishou.weapon.p0;

public class c {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 4;
    public static final int e = 8;
    public static final int f = 16;
    static final boolean g = false;
    private static final java.util.regex.Pattern h = null;

    static abstract class a {
        public byte[] a;
        public int b;

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract int a(int r1);

        public abstract boolean a(byte[] r1, int r2, int r3, boolean r4);
    }

    static class b extends com.kuaishou.weapon.p0.c.a {
        private static final int[] c = null;
        private static final int[] d = null;
        private static final int e = -1;
        private static final int f = -2;
        private int g;
        private int h;
        private final int[] i;

        static {
                r0 = 256(0x100, float:3.59E-43)
                int[] r1 = new int[r0]
                r1 = {x0012: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -2, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
                com.kuaishou.weapon.p0.c.b.c = r1
                int[] r0 = new int[r0]
                r0 = {x0216: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -2, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, 63, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
                com.kuaishou.weapon.p0.c.b.d = r0
                return
        }

        public b(int r1, byte[] r2) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r1 = r1 & 8
                if (r1 != 0) goto Lc
                int[] r1 = com.kuaishou.weapon.p0.c.b.c
                goto Le
            Lc:
                int[] r1 = com.kuaishou.weapon.p0.c.b.d
            Le:
                r0.i = r1
                r1 = 0
                r0.g = r1
                r0.h = r1
                return
        }

        @Override
        public int a(int r1) {
                r0 = this;
                int r1 = r1 * 3
                int r1 = r1 / 4
                int r1 = r1 + 10
                return r1
        }

        @Override
        public boolean a(byte[] r18, int r19, int r20, boolean r21) {
                r17 = this;
                r0 = r17
                int r1 = r0.g
                r2 = 0
                r3 = 6
                if (r1 != r3) goto L9
                return r2
            L9:
                int r4 = r20 + r19
                int r5 = r0.h
                byte[] r6 = r0.a
                int[] r7 = r0.i
                r8 = 5
                r9 = 4
                r11 = r2
                r10 = r5
                r5 = r1
                r1 = r19
            L18:
                r12 = 3
                r13 = 2
                r14 = 1
                if (r1 >= r4) goto Lfa
                if (r5 != 0) goto L63
            L1f:
                int r15 = r1 + 4
                if (r15 > r4) goto L61
                r10 = r18[r1]
                r10 = r10 & 255(0xff, float:3.57E-43)
                r10 = r7[r10]
                int r10 = r10 << 18
                int r16 = r1 + 1
                r2 = r18[r16]
                r2 = r2 & 255(0xff, float:3.57E-43)
                r2 = r7[r2]
                int r2 = r2 << 12
                r2 = r2 | r10
                int r10 = r1 + 2
                r10 = r18[r10]
                r10 = r10 & 255(0xff, float:3.57E-43)
                r10 = r7[r10]
                int r10 = r10 << r3
                r2 = r2 | r10
                int r10 = r1 + 3
                r10 = r18[r10]
                r10 = r10 & 255(0xff, float:3.57E-43)
                r10 = r7[r10]
                r10 = r10 | r2
                if (r10 < 0) goto L61
                int r1 = r11 + 2
                byte r2 = (byte) r10
                r6[r1] = r2
                int r1 = r11 + 1
                int r2 = r10 >> 8
                byte r2 = (byte) r2
                r6[r1] = r2
                int r1 = r10 >> 16
                byte r1 = (byte) r1
                r6[r11] = r1
                int r11 = r11 + 3
                r1 = r15
                r2 = 0
                goto L1f
            L61:
                if (r1 >= r4) goto Lfa
            L63:
                int r2 = r1 + 1
                r1 = r18[r1]
                r1 = r1 & 255(0xff, float:3.57E-43)
                r1 = r7[r1]
                r15 = -1
                if (r5 == 0) goto Le7
                if (r5 == r14) goto Ld9
                r14 = -2
                if (r5 == r13) goto Lc1
                if (r5 == r12) goto L8a
                if (r5 == r9) goto L81
                if (r5 == r8) goto L7b
                goto Lf6
            L7b:
                if (r1 == r15) goto Lf6
            L7d:
                r0.g = r3
                r12 = 0
                return r12
            L81:
                r12 = 0
                if (r1 != r14) goto L85
                goto Ldf
            L85:
                if (r1 == r15) goto Lf6
                r0.g = r3
                return r12
            L8a:
                if (r1 < 0) goto La8
                int r5 = r10 << 6
                r10 = r5 | r1
                int r1 = r11 + 2
                byte r5 = (byte) r10
                r6[r1] = r5
                int r1 = r11 + 1
                int r5 = r10 >> 8
                byte r5 = (byte) r5
                r6[r1] = r5
                int r1 = r10 >> 16
                byte r1 = (byte) r1
                r6[r11] = r1
                int r11 = r11 + 3
                r1 = r2
                r2 = 0
                r5 = 0
                goto L18
            La8:
                if (r1 != r14) goto Lbb
                int r1 = r11 + 1
                int r5 = r10 >> 2
                byte r5 = (byte) r5
                r6[r1] = r5
                int r1 = r10 >> 10
                byte r1 = (byte) r1
                r6[r11] = r1
                int r11 = r11 + 2
                r1 = r2
                r5 = r8
                goto Lf7
            Lbb:
                if (r1 == r15) goto Lf6
            Lbd:
                r0.g = r3
                r1 = 0
                return r1
            Lc1:
                if (r1 < 0) goto Lc9
                int r10 = r10 << 6
                r10 = r10 | r1
                int r5 = r5 + 1
                goto Lf6
            Lc9:
                if (r1 != r14) goto Ld6
                int r1 = r11 + 1
                int r5 = r10 >> 4
                byte r5 = (byte) r5
                r6[r11] = r5
                r11 = r1
                r1 = r2
                r5 = r9
                goto Lf7
            Ld6:
                if (r1 == r15) goto Lf6
                goto L7d
            Ld9:
                r12 = 0
                if (r1 < 0) goto Le2
                int r10 = r10 << 6
                r10 = r10 | r1
            Ldf:
                int r5 = r5 + 1
                goto Led
            Le2:
                if (r1 == r15) goto Lf6
                r0.g = r3
                return r12
            Le7:
                r12 = 0
                if (r1 < 0) goto Lf1
                int r5 = r5 + 1
                r10 = r1
            Led:
                r1 = r2
                r2 = r12
                goto L18
            Lf1:
                if (r1 == r15) goto Lf6
                r0.g = r3
                return r12
            Lf6:
                r1 = r2
            Lf7:
                r2 = 0
                goto L18
            Lfa:
                if (r21 != 0) goto L103
                r0.g = r5
                r0.h = r10
            L100:
                r0.b = r11
                return r14
            L103:
                if (r5 == r14) goto Lbd
                if (r5 == r13) goto L11b
                if (r5 == r12) goto L10c
                if (r5 == r9) goto Lbd
                goto L123
            L10c:
                int r1 = r11 + 1
                int r2 = r10 >> 10
                byte r2 = (byte) r2
                r6[r11] = r2
                int r11 = r1 + 1
                int r2 = r10 >> 2
                byte r2 = (byte) r2
                r6[r1] = r2
                goto L123
            L11b:
                int r1 = r11 + 1
                int r2 = r10 >> 4
                byte r2 = (byte) r2
                r6[r11] = r2
                r11 = r1
            L123:
                r0.g = r5
                goto L100
        }
    }

    static class c extends com.kuaishou.weapon.p0.c.a {
        public static final int c = 19;
        static final boolean h = false;
        private static final byte[] i = null;
        private static final byte[] j = null;
        int d;
        public final boolean e;
        public final boolean f;
        public final boolean g;
        private final byte[] k;
        private int l;
        private final byte[] m;

        static {
                java.lang.Class<com.kuaishou.weapon.p0.c> r0 = com.kuaishou.weapon.p0.c.class
                boolean r0 = r0.desiredAssertionStatus()
                r0 = r0 ^ 1
                com.kuaishou.weapon.p0.c.c.h = r0
                r0 = 64
                byte[] r1 = new byte[r0]
                r1 = {x001c: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
                com.kuaishou.weapon.p0.c.c.i = r1
                byte[] r0 = new byte[r0]
                r0 = {x0040: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
                com.kuaishou.weapon.p0.c.c.j = r0
                return
        }

        public c(int r3, byte[] r4) {
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
                r2.e = r4
                r4 = r3 & 2
                if (r4 != 0) goto L16
                r4 = r1
                goto L17
            L16:
                r4 = r0
            L17:
                r2.f = r4
                r4 = r3 & 4
                if (r4 == 0) goto L1e
                goto L1f
            L1e:
                r1 = r0
            L1f:
                r2.g = r1
                r3 = r3 & 8
                if (r3 != 0) goto L28
                byte[] r3 = com.kuaishou.weapon.p0.c.c.i
                goto L2a
            L28:
                byte[] r3 = com.kuaishou.weapon.p0.c.c.j
            L2a:
                r2.m = r3
                r3 = 2
                byte[] r3 = new byte[r3]
                r2.k = r3
                r2.d = r0
                boolean r3 = r2.f
                if (r3 == 0) goto L3a
                r3 = 19
                goto L3b
            L3a:
                r3 = -1
            L3b:
                r2.l = r3
                return
        }

        @Override
        public int a(int r1) {
                r0 = this;
                int r1 = r1 * 8
                int r1 = r1 / 5
                int r1 = r1 + 10
                return r1
        }

        @Override
        public boolean a(byte[] r18, int r19, int r20, boolean r21) {
                r17 = this;
                r0 = r17
                byte[] r1 = r0.m
                byte[] r2 = r0.a
                int r3 = r0.l
                int r4 = r20 + r19
                int r5 = r0.d
                r6 = -1
                r7 = 2
                r8 = 0
                r9 = 1
                if (r5 == r9) goto L31
                if (r5 == r7) goto L15
                goto L50
            L15:
                int r5 = r19 + 1
                if (r5 > r4) goto L50
                byte[] r10 = r0.k
                r11 = r10[r8]
                r11 = r11 & 255(0xff, float:3.57E-43)
                int r11 = r11 << 16
                r10 = r10[r9]
                r10 = r10 & 255(0xff, float:3.57E-43)
                int r10 = r10 << 8
                r10 = r10 | r11
                r11 = r18[r19]
                r11 = r11 & 255(0xff, float:3.57E-43)
                r10 = r10 | r11
                r0.d = r8
                r11 = r5
                goto L53
            L31:
                int r5 = r19 + 2
                if (r5 > r4) goto L50
                byte[] r5 = r0.k
                r5 = r5[r8]
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
                r0.d = r8
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
                r2[r8] = r6
                int r6 = r10 >> 12
                r6 = r6 & 63
                r6 = r1[r6]
                r2[r9] = r6
                int r6 = r10 >> 6
                r6 = r6 & 63
                r6 = r1[r6]
                r2[r7] = r6
                r6 = r10 & 63
                r6 = r1[r6]
                r10 = 3
                r2[r10] = r6
                int r3 = r3 + (-1)
                if (r3 != 0) goto L8d
                boolean r3 = r0.g
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
                r6 = r8
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
                boolean r3 = r0.g
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
                if (r21 == 0) goto L1d9
                int r5 = r0.d
                int r10 = r11 - r5
                int r15 = r4 + (-1)
                r16 = 61
                if (r10 != r15) goto L139
                if (r5 <= 0) goto Lfa
                byte[] r5 = r0.k
                r5 = r5[r8]
                r8 = r9
                goto L100
            Lfa:
                int r5 = r11 + 1
                r7 = r18[r11]
                r11 = r5
                r5 = r7
            L100:
                r5 = r5 & 255(0xff, float:3.57E-43)
                int r5 = r5 << r12
                int r7 = r0.d
                int r7 = r7 - r8
                r0.d = r7
                int r7 = r6 + 1
                int r8 = r5 >> 6
                r8 = r8 & 63
                r8 = r1[r8]
                r2[r6] = r8
                int r6 = r7 + 1
                r5 = r5 & 63
                r1 = r1[r5]
                r2[r7] = r1
                boolean r1 = r0.e
                if (r1 == 0) goto L126
                int r1 = r6 + 1
                r2[r6] = r16
                int r6 = r1 + 1
                r2[r1] = r16
            L126:
                boolean r1 = r0.f
                if (r1 == 0) goto L1bd
                boolean r1 = r0.g
                if (r1 == 0) goto L133
                int r1 = r6 + 1
                r2[r6] = r13
                r6 = r1
            L133:
                int r1 = r6 + 1
                r2[r6] = r14
                goto L1bc
            L139:
                int r10 = r11 - r5
                int r12 = r4 + (-2)
                if (r10 != r12) goto L1a5
                if (r5 <= r9) goto L147
                byte[] r5 = r0.k
                r5 = r5[r8]
                r8 = r9
                goto L14d
            L147:
                int r5 = r11 + 1
                r10 = r18[r11]
                r11 = r5
                r5 = r10
            L14d:
                r5 = r5 & 255(0xff, float:3.57E-43)
                int r5 = r5 << r14
                int r10 = r0.d
                if (r10 <= 0) goto L15b
                byte[] r10 = r0.k
                int r12 = r8 + 1
                r8 = r10[r8]
                goto L162
            L15b:
                int r10 = r11 + 1
                r11 = r18[r11]
                r12 = r8
                r8 = r11
                r11 = r10
            L162:
                r8 = r8 & 255(0xff, float:3.57E-43)
                int r7 = r8 << 2
                r5 = r5 | r7
                int r7 = r0.d
                int r7 = r7 - r12
                r0.d = r7
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
                boolean r1 = r0.e
                if (r1 == 0) goto L191
                int r1 = r7 + 1
                r2[r7] = r16
                r7 = r1
            L191:
                boolean r1 = r0.f
                if (r1 == 0) goto L1a3
                boolean r1 = r0.g
                if (r1 == 0) goto L19e
                int r1 = r7 + 1
                r2[r7] = r13
                r7 = r1
            L19e:
                int r1 = r7 + 1
                r2[r7] = r14
                r7 = r1
            L1a3:
                r6 = r7
                goto L1bd
            L1a5:
                boolean r1 = r0.f
                if (r1 == 0) goto L1bd
                if (r6 <= 0) goto L1bd
                r1 = 19
                if (r3 == r1) goto L1bd
                boolean r1 = r0.g
                if (r1 == 0) goto L1b8
                int r1 = r6 + 1
                r2[r6] = r13
                r6 = r1
            L1b8:
                int r1 = r6 + 1
                r2[r6] = r14
            L1bc:
                r6 = r1
            L1bd:
                boolean r1 = com.kuaishou.weapon.p0.c.c.h
                if (r1 != 0) goto L1cc
                int r1 = r0.d
                if (r1 != 0) goto L1c6
                goto L1cc
            L1c6:
                java.lang.AssertionError r1 = new java.lang.AssertionError
                r1.<init>()
                throw r1
            L1cc:
                boolean r1 = com.kuaishou.weapon.p0.c.c.h
                if (r1 != 0) goto L202
                if (r11 != r4) goto L1d3
                goto L202
            L1d3:
                java.lang.AssertionError r1 = new java.lang.AssertionError
                r1.<init>()
                throw r1
            L1d9:
                int r1 = r4 + (-1)
                if (r11 != r1) goto L1ea
                byte[] r1 = r0.k
                int r2 = r0.d
                int r4 = r2 + 1
                r0.d = r4
                r4 = r18[r11]
                r1[r2] = r4
                goto L202
            L1ea:
                int r4 = r4 - r7
                if (r11 != r4) goto L202
                byte[] r1 = r0.k
                int r2 = r0.d
                int r4 = r2 + 1
                r0.d = r4
                r5 = r18[r11]
                r1[r2] = r5
                int r2 = r4 + 1
                r0.d = r2
                int r11 = r11 + r9
                r2 = r18[r11]
                r1[r4] = r2
            L202:
                r0.b = r6
                r0.l = r3
                return r9
        }
    }

    static {
            java.lang.Class<com.kuaishou.weapon.p0.c> r0 = com.kuaishou.weapon.p0.c.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.kuaishou.weapon.p0.c.g = r0
            java.lang.String r0 = "^([A-Za-z0-9+/]{4})*([A-Za-z0-9+/]{4}|[A-Za-z0-9+/]{3}=|[A-Za-z0-9+/]{2}==)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kuaishou.weapon.p0.c.h = r0
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(byte[] r2, java.lang.String r3) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lb
            r1 = 0
            byte[] r2 = c(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> Lb
            r0.<init>(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> Lb
            return r0
        Lb:
            r2 = move-exception
            java.lang.AssertionError r3 = new java.lang.AssertionError
            r3.<init>(r2)
            throw r3
    }

    public static boolean a(java.lang.String r2) {
            r0 = 0
            if (r2 == 0) goto L17
            java.lang.String r1 = ""
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto Lc
            goto L17
        Lc:
            java.util.regex.Pattern r1 = com.kuaishou.weapon.p0.c.h     // Catch: java.lang.Throwable -> L17
            java.util.regex.Matcher r2 = r1.matcher(r2)     // Catch: java.lang.Throwable -> L17
            boolean r2 = r2.matches()     // Catch: java.lang.Throwable -> L17
            return r2
        L17:
            return r0
    }

    public static byte[] a(java.lang.String r0, int r1) {
            byte[] r0 = r0.getBytes()
            byte[] r0 = a(r0, r1)
            return r0
    }

    public static byte[] a(byte[] r2) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = a(r2, r1, r0, r1)
            return r2
    }

    public static byte[] a(byte[] r2, int r3) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = a(r2, r1, r0, r3)
            return r2
    }

    public static byte[] a(byte[] r2, int r3, int r4, int r5) {
            com.kuaishou.weapon.p0.c$b r0 = new com.kuaishou.weapon.p0.c$b
            int r1 = r4 * 3
            int r1 = r1 / 4
            byte[] r1 = new byte[r1]
            r0.<init>(r5, r1)
            r5 = 1
            boolean r2 = r0.a(r2, r3, r4, r5)
            if (r2 == 0) goto L29
            int r2 = r0.b
            byte[] r3 = r0.a
            int r3 = r3.length
            if (r2 != r3) goto L1c
            byte[] r2 = r0.a
            return r2
        L1c:
            int r2 = r0.b
            byte[] r2 = new byte[r2]
            byte[] r3 = r0.a
            int r4 = r0.b
            r5 = 0
            java.lang.System.arraycopy(r3, r5, r2, r5, r4)
            return r2
        L29:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "bad base-64"
            r2.<init>(r3)
            throw r2
    }

    public static java.lang.String b(java.lang.String r1, int r2) {
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> Le
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> Le
            byte[] r1 = a(r1, r2)     // Catch: java.lang.Throwable -> Le
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String b(byte[] r1, int r2) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lc
            byte[] r1 = c(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.lang.String r2 = "US-ASCII"
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            return r0
        Lc:
            r1 = move-exception
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
    }

    public static java.lang.String b(byte[] r1, int r2, int r3, int r4) {
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> Lc
            byte[] r1 = c(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r2 = "US-ASCII"
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r1 = move-exception
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
    }

    public static byte[] c(byte[] r2, int r3) {
            r0 = 0
            int r1 = r2.length     // Catch: java.lang.Throwable -> L7
            byte[] r2 = c(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L7
            return r2
        L7:
            r2 = 0
            return r2
    }

    public static byte[] c(byte[] r5, int r6, int r7, int r8) {
            com.kuaishou.weapon.p0.c$c r0 = new com.kuaishou.weapon.p0.c$c
            r1 = 0
            r0.<init>(r8, r1)
            int r8 = r7 / 3
            int r8 = r8 * 4
            boolean r1 = r0.e
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L17
            int r1 = r7 % 3
            if (r1 <= 0) goto L23
            int r8 = r8 + 4
            goto L23
        L17:
            int r1 = r7 % 3
            if (r1 == r3) goto L21
            if (r1 == r2) goto L1e
            goto L23
        L1e:
            int r8 = r8 + 3
            goto L23
        L21:
            int r8 = r8 + 2
        L23:
            boolean r1 = r0.f
            if (r1 == 0) goto L36
            if (r7 <= 0) goto L36
            int r1 = r7 + (-1)
            int r1 = r1 / 57
            int r1 = r1 + r3
            boolean r4 = r0.g
            if (r4 == 0) goto L33
            goto L34
        L33:
            r2 = r3
        L34:
            int r1 = r1 * r2
            int r8 = r8 + r1
        L36:
            byte[] r1 = new byte[r8]
            r0.a = r1
            r0.a(r5, r6, r7, r3)
            boolean r5 = com.kuaishou.weapon.p0.c.g
            if (r5 != 0) goto L4c
            int r5 = r0.b
            if (r5 != r8) goto L46
            goto L4c
        L46:
            java.lang.AssertionError r5 = new java.lang.AssertionError
            r5.<init>()
            throw r5
        L4c:
            byte[] r5 = r0.a
            return r5
    }
}
