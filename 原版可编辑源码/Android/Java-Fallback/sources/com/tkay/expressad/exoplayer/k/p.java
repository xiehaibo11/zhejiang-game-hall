package com.tkay.expressad.exoplayer.k;

public final class p {
    public static final byte[] a = null;
    public static final int b = 255;
    public static final float[] c = null;
    private static final java.lang.String d = "NalUnitUtil";
    private static final int e = 6;
    private static final int f = 7;
    private static final int g = 39;
    private static final java.lang.Object h = null;
    private static int[] i;

    public static final class a {
        public final int a;
        public final int b;
        public final boolean c;

        public a(int r1, int r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    public static final class b {
        public final int a;
        public final int b;
        public final int c;
        public final float d;
        public final boolean e;
        public final boolean f;
        public final int g;
        public final int h;
        public final int i;
        public final boolean j;

        public b(int r1, int r2, int r3, float r4, boolean r5, boolean r6, int r7, int r8, int r9, boolean r10) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                r0.i = r9
                r0.j = r10
                return
        }
    }

    static {
            r0 = 4
            byte[] r0 = new byte[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [0, 0, 0, 1} // fill-array
            com.tkay.expressad.exoplayer.k.p.a = r0
            r0 = 17
            float[] r0 = new float[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [1065353216, 1065353216, 1066115817, 1063828015, 1069166220, 1067132618, 1074504425, 1072216623, 1077554828, 1075521226, 1070691421, 1068403619, 1073233424, 1070521954, 1068149419, 1069547520, 1073741824} // fill-array
            com.tkay.expressad.exoplayer.k.p.c = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.tkay.expressad.exoplayer.k.p.h = r0
            r0 = 10
            int[] r0 = new int[r0]
            com.tkay.expressad.exoplayer.k.p.i = r0
            return
    }

    private p() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(byte[] r8, int r9) {
            java.lang.Object r0 = com.tkay.expressad.exoplayer.k.p.h
            monitor-enter(r0)
            r1 = 0
            r2 = r1
            r3 = r2
        L6:
            if (r2 >= r9) goto L3e
        L8:
            int r4 = r9 + (-2)
            if (r2 >= r4) goto L21
            r4 = r8[r2]     // Catch: java.lang.Throwable -> L62
            if (r4 != 0) goto L1e
            int r4 = r2 + 1
            r4 = r8[r4]     // Catch: java.lang.Throwable -> L62
            if (r4 != 0) goto L1e
            int r4 = r2 + 2
            r4 = r8[r4]     // Catch: java.lang.Throwable -> L62
            r5 = 3
            if (r4 != r5) goto L1e
            goto L22
        L1e:
            int r2 = r2 + 1
            goto L8
        L21:
            r2 = r9
        L22:
            if (r2 >= r9) goto L6
            int[] r4 = com.tkay.expressad.exoplayer.k.p.i     // Catch: java.lang.Throwable -> L62
            int r4 = r4.length     // Catch: java.lang.Throwable -> L62
            if (r4 > r3) goto L34
            int[] r4 = com.tkay.expressad.exoplayer.k.p.i     // Catch: java.lang.Throwable -> L62
            int r5 = r4.length     // Catch: java.lang.Throwable -> L62
            int r5 = r5 * 2
            int[] r4 = java.util.Arrays.copyOf(r4, r5)     // Catch: java.lang.Throwable -> L62
            com.tkay.expressad.exoplayer.k.p.i = r4     // Catch: java.lang.Throwable -> L62
        L34:
            int[] r4 = com.tkay.expressad.exoplayer.k.p.i     // Catch: java.lang.Throwable -> L62
            int r5 = r3 + 1
            r4[r3] = r2     // Catch: java.lang.Throwable -> L62
            int r2 = r2 + 3
            r3 = r5
            goto L6
        L3e:
            int r9 = r9 - r3
            r2 = r1
            r4 = r2
            r5 = r4
        L42:
            if (r2 >= r3) goto L5b
            int[] r6 = com.tkay.expressad.exoplayer.k.p.i     // Catch: java.lang.Throwable -> L62
            r6 = r6[r2]     // Catch: java.lang.Throwable -> L62
            int r6 = r6 - r5
            java.lang.System.arraycopy(r8, r5, r8, r4, r6)     // Catch: java.lang.Throwable -> L62
            int r4 = r4 + r6
            int r7 = r4 + 1
            r8[r4] = r1     // Catch: java.lang.Throwable -> L62
            int r4 = r7 + 1
            r8[r7] = r1     // Catch: java.lang.Throwable -> L62
            int r6 = r6 + 3
            int r5 = r5 + r6
            int r2 = r2 + 1
            goto L42
        L5b:
            int r1 = r9 - r4
            java.lang.System.arraycopy(r8, r5, r8, r4, r1)     // Catch: java.lang.Throwable -> L62
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L62
            return r9
        L62:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    private static int a(byte[] r7, int r8, int r9, boolean[] r10) {
            int r0 = r9 - r8
            r1 = 0
            r2 = 1
            if (r0 < 0) goto L8
            r3 = r2
            goto L9
        L8:
            r3 = r1
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r3)
            if (r0 != 0) goto Lf
            return r9
        Lf:
            r3 = 2
            if (r10 == 0) goto L40
            boolean r4 = r10[r1]
            if (r4 == 0) goto L1c
            a(r10)
            int r8 = r8 + (-3)
            return r8
        L1c:
            if (r0 <= r2) goto L2b
            boolean r4 = r10[r2]
            if (r4 == 0) goto L2b
            r4 = r7[r8]
            if (r4 != r2) goto L2b
            a(r10)
            int r8 = r8 - r3
            return r8
        L2b:
            if (r0 <= r3) goto L40
            boolean r4 = r10[r3]
            if (r4 == 0) goto L40
            r4 = r7[r8]
            if (r4 != 0) goto L40
            int r4 = r8 + 1
            r4 = r7[r4]
            if (r4 != r2) goto L40
            a(r10)
            int r8 = r8 - r2
            return r8
        L40:
            int r4 = r9 + (-1)
            int r8 = r8 + r3
        L43:
            if (r8 >= r4) goto L66
            r5 = r7[r8]
            r5 = r5 & 254(0xfe, float:3.56E-43)
            if (r5 != 0) goto L63
            int r5 = r8 + (-2)
            r6 = r7[r5]
            if (r6 != 0) goto L61
            int r6 = r8 + (-1)
            r6 = r7[r6]
            if (r6 != 0) goto L61
            r6 = r7[r8]
            if (r6 != r2) goto L61
            if (r10 == 0) goto L60
            a(r10)
        L60:
            return r5
        L61:
            int r8 = r8 + (-2)
        L63:
            int r8 = r8 + 3
            goto L43
        L66:
            if (r10 == 0) goto Lba
            if (r0 <= r3) goto L7d
            int r8 = r9 + (-3)
            r8 = r7[r8]
            if (r8 != 0) goto L7b
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto L7b
            r8 = r7[r4]
            if (r8 != r2) goto L7b
            goto L96
        L7b:
            r8 = r1
            goto L97
        L7d:
            if (r0 != r3) goto L8e
            boolean r8 = r10[r3]
            if (r8 == 0) goto L7b
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto L7b
            r8 = r7[r4]
            if (r8 != r2) goto L7b
            goto L96
        L8e:
            boolean r8 = r10[r2]
            if (r8 == 0) goto L7b
            r8 = r7[r4]
            if (r8 != r2) goto L7b
        L96:
            r8 = r2
        L97:
            r10[r1] = r8
            if (r0 <= r2) goto La6
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto Lb0
            r8 = r7[r4]
            if (r8 != 0) goto Lb0
            goto Lae
        La6:
            boolean r8 = r10[r3]
            if (r8 == 0) goto Lb0
            r8 = r7[r4]
            if (r8 != 0) goto Lb0
        Lae:
            r8 = r2
            goto Lb1
        Lb0:
            r8 = r1
        Lb1:
            r10[r2] = r8
            r7 = r7[r4]
            if (r7 != 0) goto Lb8
            r1 = r2
        Lb8:
            r10[r3] = r1
        Lba:
            return r9
    }

    public static com.tkay.expressad.exoplayer.k.p.b a(byte[] r18, int r19, int r20) {
            com.tkay.expressad.exoplayer.k.t r0 = new com.tkay.expressad.exoplayer.k.t
            r1 = r18
            r2 = r19
            r3 = r20
            r0.<init>(r1, r2, r3)
            r1 = 8
            r0.a(r1)
            int r2 = r0.b(r1)
            r3 = 16
            r0.a(r3)
            int r5 = r0.c()
            r4 = 3
            r6 = 0
            r7 = 1
            r8 = 100
            if (r2 == r8) goto L4c
            r8 = 110(0x6e, float:1.54E-43)
            if (r2 == r8) goto L4c
            r8 = 122(0x7a, float:1.71E-43)
            if (r2 == r8) goto L4c
            r8 = 244(0xf4, float:3.42E-43)
            if (r2 == r8) goto L4c
            r8 = 44
            if (r2 == r8) goto L4c
            r8 = 83
            if (r2 == r8) goto L4c
            r8 = 86
            if (r2 == r8) goto L4c
            r8 = 118(0x76, float:1.65E-43)
            if (r2 == r8) goto L4c
            r8 = 128(0x80, float:1.8E-43)
            if (r2 == r8) goto L4c
            r8 = 138(0x8a, float:1.93E-43)
            if (r2 != r8) goto L49
            goto L4c
        L49:
            r9 = r6
            r2 = r7
            goto L98
        L4c:
            int r2 = r0.c()
            if (r2 != r4) goto L57
            boolean r8 = r0.b()
            goto L58
        L57:
            r8 = r6
        L58:
            r0.c()
            r0.c()
            r0.a()
            boolean r9 = r0.b()
            if (r9 == 0) goto L97
            if (r2 == r4) goto L6b
            r9 = r1
            goto L6d
        L6b:
            r9 = 12
        L6d:
            r10 = r6
        L6e:
            if (r10 >= r9) goto L97
            boolean r11 = r0.b()
            if (r11 == 0) goto L94
            r11 = 6
            if (r10 >= r11) goto L7b
            r11 = r3
            goto L7d
        L7b:
            r11 = 64
        L7d:
            r13 = r1
            r14 = r13
            r12 = r6
        L80:
            if (r12 >= r11) goto L94
            if (r13 == 0) goto L8d
            int r13 = r0.d()
            int r13 = r13 + r14
            int r13 = r13 + 256
            int r13 = r13 % 256
        L8d:
            if (r13 != 0) goto L90
            goto L91
        L90:
            r14 = r13
        L91:
            int r12 = r12 + 1
            goto L80
        L94:
            int r10 = r10 + 1
            goto L6e
        L97:
            r9 = r8
        L98:
            int r8 = r0.c()
            int r11 = r8 + 4
            int r12 = r0.c()
            if (r12 != 0) goto Laf
            int r8 = r0.c()
            int r8 = r8 + 4
            r18 = r5
            r14 = r6
            r13 = r8
            goto Ld5
        Laf:
            if (r12 != r7) goto Ld1
            boolean r8 = r0.b()
            r0.d()
            r0.d()
            int r10 = r0.c()
            long r13 = (long) r10
            r18 = r5
            r10 = r6
        Lc3:
            long r4 = (long) r10
            int r4 = (r4 > r13 ? 1 : (r4 == r13 ? 0 : -1))
            if (r4 >= 0) goto Lce
            r0.c()
            int r10 = r10 + 1
            goto Lc3
        Lce:
            r13 = r6
            r14 = r8
            goto Ld5
        Ld1:
            r18 = r5
            r13 = r6
            r14 = r13
        Ld5:
            r0.c()
            r0.a()
            int r4 = r0.c()
            int r4 = r4 + r7
            int r5 = r0.c()
            int r5 = r5 + r7
            boolean r10 = r0.b()
            r6 = 2
            int r8 = 2 - r10
            int r8 = r8 * r5
            if (r10 != 0) goto Lf2
            r0.a()
        Lf2:
            r0.a()
            int r4 = r4 * r3
            int r8 = r8 * r3
            boolean r5 = r0.b()
            if (r5 == 0) goto L126
            int r5 = r0.c()
            int r15 = r0.c()
            int r16 = r0.c()
            int r17 = r0.c()
            if (r2 != 0) goto L111
            int r6 = r6 - r10
            goto L11d
        L111:
            r3 = 3
            if (r2 != r3) goto L116
            r3 = r7
            goto L117
        L116:
            r3 = r6
        L117:
            if (r2 != r7) goto L11a
            r7 = r6
        L11a:
            int r6 = r6 - r10
            int r6 = r6 * r7
            r7 = r3
        L11d:
            int r5 = r5 + r15
            int r5 = r5 * r7
            int r4 = r4 - r5
            int r16 = r16 + r17
            int r16 = r16 * r6
            int r8 = r8 - r16
        L126:
            r6 = r4
            r7 = r8
            r2 = 1065353216(0x3f800000, float:1.0)
            boolean r3 = r0.b()
            if (r3 == 0) goto L169
            boolean r3 = r0.b()
            if (r3 == 0) goto L169
            int r1 = r0.b(r1)
            r3 = 255(0xff, float:3.57E-43)
            if (r1 != r3) goto L151
            r3 = 16
            int r1 = r0.b(r3)
            int r0 = r0.b(r3)
            if (r1 == 0) goto L169
            if (r0 == 0) goto L169
            float r1 = (float) r1
            float r0 = (float) r0
            float r2 = r1 / r0
            goto L169
        L151:
            float[] r0 = com.tkay.expressad.exoplayer.k.p.c
            int r3 = r0.length
            if (r1 >= r3) goto L15a
            r0 = r0[r1]
            r8 = r0
            goto L16a
        L15a:
            java.lang.String r0 = java.lang.String.valueOf(r1)
            java.lang.String r1 = "Unexpected aspect_ratio_idc value: "
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "NalUnitUtil"
            android.util.Log.w(r1, r0)
        L169:
            r8 = r2
        L16a:
            com.tkay.expressad.exoplayer.k.p$b r0 = new com.tkay.expressad.exoplayer.k.p$b
            r4 = r0
            r5 = r18
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    private static void a(com.tkay.expressad.exoplayer.k.t r3, int r4) {
            r0 = 8
            r1 = 0
            r2 = r1
            r1 = r0
        L5:
            if (r2 >= r4) goto L19
            if (r0 == 0) goto L12
            int r0 = r3.d()
            int r0 = r0 + r1
            int r0 = r0 + 256
            int r0 = r0 % 256
        L12:
            if (r0 != 0) goto L15
            goto L16
        L15:
            r1 = r0
        L16:
            int r2 = r2 + 1
            goto L5
        L19:
            return
    }

    public static void a(java.nio.ByteBuffer r9) {
            int r0 = r9.position()
            r1 = 0
            r2 = r1
            r3 = r2
        L7:
            int r4 = r2 + 1
            if (r4 >= r0) goto L3b
            byte r5 = r9.get(r2)
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = 3
            if (r3 != r6) goto L32
            r7 = 1
            if (r5 != r7) goto L36
            byte r7 = r9.get(r4)
            r7 = r7 & 31
            r8 = 7
            if (r7 != r8) goto L36
            java.nio.ByteBuffer r3 = r9.duplicate()
            int r2 = r2 - r6
            r3.position(r2)
            r3.limit(r0)
            r9.position(r1)
            r9.put(r3)
            return
        L32:
            if (r5 != 0) goto L36
            int r3 = r3 + 1
        L36:
            if (r5 == 0) goto L39
            r3 = r1
        L39:
            r2 = r4
            goto L7
        L3b:
            r9.clear()
            return
    }

    private static void a(boolean[] r2) {
            r0 = 0
            r2[r0] = r0
            r1 = 1
            r2[r1] = r0
            r1 = 2
            r2[r1] = r0
            return
    }

    public static boolean a(java.lang.String r3, byte r4) {
            java.lang.String r0 = "video/avc"
            boolean r0 = r0.equals(r3)
            r1 = 1
            if (r0 == 0) goto Le
            r0 = r4 & 31
            r2 = 6
            if (r0 == r2) goto L1d
        Le:
            java.lang.String r0 = "video/hevc"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L1e
            r3 = r4 & 126(0x7e, float:1.77E-43)
            int r3 = r3 >> r1
            r4 = 39
            if (r3 != r4) goto L1e
        L1d:
            return r1
        L1e:
            r3 = 0
            return r3
    }

    private static int b(byte[] r0, int r1) {
            int r1 = r1 + 3
            r0 = r0[r1]
            r0 = r0 & 31
            return r0
    }

    private static com.tkay.expressad.exoplayer.k.p.a b(byte[] r1, int r2, int r3) {
            com.tkay.expressad.exoplayer.k.t r0 = new com.tkay.expressad.exoplayer.k.t
            r0.<init>(r1, r2, r3)
            r1 = 8
            r0.a(r1)
            int r1 = r0.c()
            int r2 = r0.c()
            r0.a()
            boolean r3 = r0.b()
            com.tkay.expressad.exoplayer.k.p$a r0 = new com.tkay.expressad.exoplayer.k.p$a
            r0.<init>(r1, r2, r3)
            return r0
    }

    private static int c(byte[] r0, int r1) {
            int r1 = r1 + 3
            r0 = r0[r1]
            r0 = r0 & 126(0x7e, float:1.77E-43)
            int r0 = r0 >> 1
            return r0
    }

    private static int c(byte[] r2, int r3, int r4) {
        L0:
            int r0 = r4 + (-2)
            if (r3 >= r0) goto L19
            r0 = r2[r3]
            if (r0 != 0) goto L16
            int r0 = r3 + 1
            r0 = r2[r0]
            if (r0 != 0) goto L16
            int r0 = r3 + 2
            r0 = r2[r0]
            r1 = 3
            if (r0 != r1) goto L16
            return r3
        L16:
            int r3 = r3 + 1
            goto L0
        L19:
            return r4
    }
}
