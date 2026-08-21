package com.tkay.expressad.exoplayer.b;

public final class a {
    public static final int a = 16;
    public static final int b = 10;
    private static final int c = 256;
    private static final int d = 1536;
    private static final int[] e = null;
    private static final int[] f = null;
    private static final int[] g = null;
    private static final int[] h = null;
    private static final int[] i = null;
    private static final int[] j = null;

    static class 1 {
    }

    public static final class a {
        public static final int a = -1;
        public static final int b = 0;
        public static final int c = 1;
        public static final int d = 2;
        public final java.lang.String e;
        public final int f;
        public final int g;
        public final int h;
        public final int i;
        public final int j;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface a {
        }

        private a(java.lang.String r1, int r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                r0.<init>()
                r0.e = r1
                r0.f = r2
                r0.h = r3
                r0.g = r4
                r0.i = r5
                r0.j = r6
                return
        }

        a(java.lang.String r1, int r2, int r3, int r4, int r5, int r6, byte r7) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return
        }
    }

    static {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x0032: FILL_ARRAY_DATA , data: [1, 2, 3, 6} // fill-array
            com.tkay.expressad.exoplayer.b.a.e = r0
            r0 = 3
            int[] r1 = new int[r0]
            r1 = {x003e: FILL_ARRAY_DATA , data: [48000, 44100, 32000} // fill-array
            com.tkay.expressad.exoplayer.b.a.f = r1
            int[] r0 = new int[r0]
            r0 = {x0048: FILL_ARRAY_DATA , data: [24000, 22050, 16000} // fill-array
            com.tkay.expressad.exoplayer.b.a.g = r0
            r0 = 8
            int[] r0 = new int[r0]
            r0 = {x0052: FILL_ARRAY_DATA , data: [2, 1, 2, 3, 3, 4, 4, 5} // fill-array
            com.tkay.expressad.exoplayer.b.a.h = r0
            r0 = 19
            int[] r1 = new int[r0]
            r1 = {x0066: FILL_ARRAY_DATA , data: [32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384, 448, 512, 576, 640} // fill-array
            com.tkay.expressad.exoplayer.b.a.i = r1
            int[] r0 = new int[r0]
            r0 = {x0090: FILL_ARRAY_DATA , data: [69, 87, 104, 121, 139, 174, 208, 243, 278, 348, 417, 487, 557, 696, 835, 975, 1114, 1253, 1393} // fill-array
            com.tkay.expressad.exoplayer.b.a.j = r0
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a() {
            r0 = 1536(0x600, float:2.152E-42)
            return r0
    }

    private static int a(int r4, int r5) {
            int r0 = r5 / 2
            if (r4 < 0) goto L2e
            int[] r1 = com.tkay.expressad.exoplayer.b.a.f
            int r2 = r1.length
            if (r4 >= r2) goto L2e
            if (r5 < 0) goto L2e
            int[] r2 = com.tkay.expressad.exoplayer.b.a.j
            int r3 = r2.length
            if (r0 < r3) goto L11
            goto L2e
        L11:
            r4 = r1[r4]
            r1 = 44100(0xac44, float:6.1797E-41)
            if (r4 != r1) goto L20
            r4 = r2[r0]
            int r5 = r5 % 2
            int r4 = r4 + r5
            int r4 = r4 * 2
            return r4
        L20:
            int[] r5 = com.tkay.expressad.exoplayer.b.a.i
            r5 = r5[r0]
            r0 = 32000(0x7d00, float:4.4842E-41)
            if (r4 != r0) goto L2b
            int r5 = r5 * 6
            return r5
        L2b:
            int r5 = r5 * 4
            return r5
        L2e:
            r4 = -1
            return r4
    }

    public static int a(java.nio.ByteBuffer r3) {
            int r0 = r3.position()
            int r0 = r0 + 4
            byte r0 = r3.get(r0)
            r0 = r0 & 192(0xc0, float:2.69E-43)
            r1 = 6
            int r0 = r0 >> r1
            r2 = 3
            if (r0 != r2) goto L12
            goto L24
        L12:
            int[] r0 = com.tkay.expressad.exoplayer.b.a.e
            int r1 = r3.position()
            int r1 = r1 + 4
            byte r3 = r3.get(r1)
            r3 = r3 & 48
            int r3 = r3 >> 4
            r1 = r0[r3]
        L24:
            int r1 = r1 * 256
            return r1
    }

    public static int a(java.nio.ByteBuffer r3, int r4) {
            int r0 = r3.position()
            int r0 = r0 + r4
            int r0 = r0 + 7
            byte r0 = r3.get(r0)
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = 187(0xbb, float:2.62E-43)
            if (r0 != r1) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 0
        L14:
            r1 = 40
            int r2 = r3.position()
            int r2 = r2 + r4
            if (r0 == 0) goto L20
            r4 = 9
            goto L22
        L20:
            r4 = 8
        L22:
            int r2 = r2 + r4
            byte r3 = r3.get(r2)
            int r3 = r3 >> 4
            r3 = r3 & 7
            int r3 = r1 << r3
            return r3
    }

    private static int a(byte[] r2) {
            int r0 = r2.length
            r1 = 5
            if (r0 >= r1) goto L6
            r2 = -1
            return r2
        L6:
            r0 = 4
            r1 = r2[r0]
            r1 = r1 & 192(0xc0, float:2.69E-43)
            int r1 = r1 >> 6
            r2 = r2[r0]
            r2 = r2 & 63
            int r2 = a(r1, r2)
            return r2
    }

    private static com.tkay.expressad.exoplayer.b.a.a a(com.tkay.expressad.exoplayer.k.r r18) {
            r0 = r18
            int r1 = r18.b()
            r2 = 40
            r0.b(r2)
            r2 = 5
            int r3 = r0.c(r2)
            r5 = 16
            r6 = 1
            if (r3 != r5) goto L17
            r3 = r6
            goto L18
        L17:
            r3 = 0
        L18:
            r0.a(r1)
            r1 = -1
            r7 = 8
            r8 = 3
            r9 = 6
            r10 = 2
            if (r3 == 0) goto L20a
            r0.b(r5)
            int r3 = r0.c(r10)
            if (r3 == 0) goto L35
            if (r3 == r6) goto L33
            if (r3 == r10) goto L31
            goto L36
        L31:
            r1 = r10
            goto L36
        L33:
            r1 = r6
            goto L36
        L35:
            r1 = 0
        L36:
            r0.b(r8)
            r3 = 11
            int r3 = r0.c(r3)
            int r3 = r3 + r6
            int r3 = r3 * r10
            int r11 = r0.c(r10)
            if (r11 != r8) goto L53
            int[] r12 = com.tkay.expressad.exoplayer.b.a.g
            int r13 = r0.c(r10)
            r12 = r12[r13]
            r13 = r9
            r14 = r12
            r12 = r8
            goto L5f
        L53:
            int r12 = r0.c(r10)
            int[] r13 = com.tkay.expressad.exoplayer.b.a.e
            r13 = r13[r12]
            int[] r14 = com.tkay.expressad.exoplayer.b.a.f
            r14 = r14[r11]
        L5f:
            int r15 = r13 * 256
            int r4 = r0.c(r8)
            boolean r16 = r18.d()
            int[] r17 = com.tkay.expressad.exoplayer.b.a.h
            r17 = r17[r4]
            int r17 = r17 + r16
            r8 = 10
            r0.b(r8)
            boolean r8 = r18.d()
            if (r8 == 0) goto L7d
            r0.b(r7)
        L7d:
            if (r4 != 0) goto L8b
            r0.b(r2)
            boolean r8 = r18.d()
            if (r8 == 0) goto L8b
            r0.b(r7)
        L8b:
            if (r1 != r6) goto L96
            boolean r8 = r18.d()
            if (r8 == 0) goto L96
            r0.b(r5)
        L96:
            boolean r5 = r18.d()
            r8 = 4
            if (r5 == 0) goto L1ae
            if (r4 <= r10) goto La2
            r0.b(r10)
        La2:
            r5 = r4 & 1
            if (r5 == 0) goto Lab
            if (r4 <= r10) goto Lab
            r0.b(r9)
        Lab:
            r5 = r4 & 4
            if (r5 == 0) goto Lb2
            r0.b(r9)
        Lb2:
            if (r16 == 0) goto Lbd
            boolean r5 = r18.d()
            if (r5 == 0) goto Lbd
            r0.b(r2)
        Lbd:
            if (r1 != 0) goto L1ae
            boolean r5 = r18.d()
            if (r5 == 0) goto Lc8
            r0.b(r9)
        Lc8:
            if (r4 != 0) goto Ld3
            boolean r5 = r18.d()
            if (r5 == 0) goto Ld3
            r0.b(r9)
        Ld3:
            boolean r5 = r18.d()
            if (r5 == 0) goto Ldc
            r0.b(r9)
        Ldc:
            int r5 = r0.c(r10)
            if (r5 != r6) goto Le7
            r0.b(r2)
            goto L17b
        Le7:
            if (r5 != r10) goto Lf0
            r5 = 12
            r0.b(r5)
            goto L17b
        Lf0:
            r6 = 3
            if (r5 != r6) goto L17b
            int r5 = r0.c(r2)
            boolean r6 = r18.d()
            if (r6 == 0) goto L157
            r0.b(r2)
            boolean r6 = r18.d()
            if (r6 == 0) goto L109
            r0.b(r8)
        L109:
            boolean r6 = r18.d()
            if (r6 == 0) goto L112
            r0.b(r8)
        L112:
            boolean r6 = r18.d()
            if (r6 == 0) goto L11b
            r0.b(r8)
        L11b:
            boolean r6 = r18.d()
            if (r6 == 0) goto L124
            r0.b(r8)
        L124:
            boolean r6 = r18.d()
            if (r6 == 0) goto L12d
            r0.b(r8)
        L12d:
            boolean r6 = r18.d()
            if (r6 == 0) goto L136
            r0.b(r8)
        L136:
            boolean r6 = r18.d()
            if (r6 == 0) goto L13f
            r0.b(r8)
        L13f:
            boolean r6 = r18.d()
            if (r6 == 0) goto L157
            boolean r6 = r18.d()
            if (r6 == 0) goto L14e
            r0.b(r8)
        L14e:
            boolean r6 = r18.d()
            if (r6 == 0) goto L157
            r0.b(r8)
        L157:
            boolean r6 = r18.d()
            if (r6 == 0) goto L173
            r0.b(r2)
            boolean r6 = r18.d()
            if (r6 == 0) goto L173
            r6 = 7
            r0.b(r6)
            boolean r6 = r18.d()
            if (r6 == 0) goto L173
            r0.b(r7)
        L173:
            int r5 = r5 + r10
            int r5 = r5 * r7
            r0.b(r5)
            r18.e()
        L17b:
            if (r4 >= r10) goto L193
            boolean r5 = r18.d()
            r6 = 14
            if (r5 == 0) goto L188
            r0.b(r6)
        L188:
            if (r4 != 0) goto L193
            boolean r5 = r18.d()
            if (r5 == 0) goto L193
            r0.b(r6)
        L193:
            boolean r5 = r18.d()
            if (r5 == 0) goto L1ae
            if (r12 != 0) goto L19f
            r0.b(r2)
            goto L1ae
        L19f:
            r5 = 0
        L1a0:
            if (r5 >= r13) goto L1ae
            boolean r6 = r18.d()
            if (r6 == 0) goto L1ab
            r0.b(r2)
        L1ab:
            int r5 = r5 + 1
            goto L1a0
        L1ae:
            boolean r5 = r18.d()
            if (r5 == 0) goto L1dc
            r0.b(r2)
            if (r4 != r10) goto L1bc
            r0.b(r8)
        L1bc:
            if (r4 < r9) goto L1c1
            r0.b(r10)
        L1c1:
            boolean r2 = r18.d()
            if (r2 == 0) goto L1ca
            r0.b(r7)
        L1ca:
            if (r4 != 0) goto L1d5
            boolean r2 = r18.d()
            if (r2 == 0) goto L1d5
            r0.b(r7)
        L1d5:
            r2 = 3
            if (r11 >= r2) goto L1dd
            r18.c()
            goto L1dd
        L1dc:
            r2 = 3
        L1dd:
            if (r1 != 0) goto L1e4
            if (r12 == r2) goto L1e4
            r18.c()
        L1e4:
            if (r1 != r10) goto L1f1
            if (r12 == r2) goto L1ee
            boolean r2 = r18.d()
            if (r2 == 0) goto L1f1
        L1ee:
            r0.b(r9)
        L1f1:
            boolean r2 = r18.d()
            if (r2 == 0) goto L207
            int r2 = r0.c(r9)
            r4 = 1
            if (r2 != r4) goto L207
            int r0 = r0.c(r7)
            if (r0 != r4) goto L207
            java.lang.String r0 = "audio/eac3-joc"
            goto L24b
        L207:
            java.lang.String r0 = "audio/eac3"
            goto L24b
        L20a:
            r2 = 32
            r0.b(r2)
            int r2 = r0.c(r10)
            int r3 = r0.c(r9)
            int r3 = a(r2, r3)
            r0.b(r7)
            r4 = 3
            int r4 = r0.c(r4)
            r5 = r4 & 1
            if (r5 == 0) goto L22d
            r5 = 1
            if (r4 == r5) goto L22d
            r0.b(r10)
        L22d:
            r5 = r4 & 4
            if (r5 == 0) goto L234
            r0.b(r10)
        L234:
            if (r4 != r10) goto L239
            r0.b(r10)
        L239:
            int[] r5 = com.tkay.expressad.exoplayer.b.a.f
            r14 = r5[r2]
            r15 = 1536(0x600, float:2.152E-42)
            boolean r0 = r18.d()
            int[] r2 = com.tkay.expressad.exoplayer.b.a.h
            r2 = r2[r4]
            int r17 = r2 + r0
            java.lang.String r0 = "audio/ac3"
        L24b:
            r5 = r0
            r6 = r1
            r9 = r3
            r8 = r14
            r10 = r15
            r7 = r17
            com.tkay.expressad.exoplayer.b.a$a r0 = new com.tkay.expressad.exoplayer.b.a$a
            r11 = 0
            r4 = r0
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            return r0
    }

    public static com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.k.s r11, java.lang.String r12, java.lang.String r13, com.tkay.expressad.exoplayer.d.e r14) {
            int r0 = r11.d()
            r0 = r0 & 192(0xc0, float:2.69E-43)
            int r0 = r0 >> 6
            int[] r1 = com.tkay.expressad.exoplayer.b.a.f
            r7 = r1[r0]
            int r11 = r11.d()
            int[] r0 = com.tkay.expressad.exoplayer.b.a.h
            r1 = r11 & 56
            int r1 = r1 >> 3
            r0 = r0[r1]
            r11 = r11 & 4
            if (r11 == 0) goto L1e
            int r0 = r0 + 1
        L1e:
            r6 = r0
            r4 = 0
            r5 = -1
            r8 = 0
            java.lang.String r3 = "audio/ac3"
            r2 = r12
            r9 = r14
            r10 = r13
            com.tkay.expressad.exoplayer.m r11 = com.tkay.expressad.exoplayer.m.a(r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r11
    }

    public static int b(java.nio.ByteBuffer r5) {
            int r0 = r5.position()
            int r1 = r5.limit()
            int r1 = r1 + (-10)
            r2 = r0
        Lb:
            if (r2 > r1) goto L21
            int r3 = r2 + 4
            int r3 = r5.getInt(r3)
            r4 = -16777217(0xfffffffffeffffff, float:-1.7014117E38)
            r3 = r3 & r4
            r4 = -1167101192(0xffffffffba6f72f8, float:-9.134258E-4)
            if (r3 != r4) goto L1e
            int r2 = r2 - r0
            return r2
        L1e:
            int r2 = r2 + 1
            goto Lb
        L21:
            r5 = -1
            return r5
    }

    private static int b(byte[] r5) {
            r0 = 4
            r1 = r5[r0]
            r2 = 0
            r3 = -8
            if (r1 != r3) goto L38
            r1 = 5
            r1 = r5[r1]
            r3 = 114(0x72, float:1.6E-43)
            if (r1 != r3) goto L38
            r1 = 6
            r1 = r5[r1]
            r3 = 111(0x6f, float:1.56E-43)
            if (r1 != r3) goto L38
            r1 = 7
            r3 = r5[r1]
            r3 = r3 & 254(0xfe, float:3.56E-43)
            r4 = 186(0xba, float:2.6E-43)
            if (r3 == r4) goto L1f
            goto L38
        L1f:
            r3 = r5[r1]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 187(0xbb, float:2.62E-43)
            if (r3 != r4) goto L28
            r2 = 1
        L28:
            r3 = 40
            if (r2 == 0) goto L2f
            r2 = 9
            goto L31
        L2f:
            r2 = 8
        L31:
            r5 = r5[r2]
            int r5 = r5 >> r0
            r5 = r5 & r1
            int r5 = r3 << r5
            return r5
        L38:
            return r2
    }

    public static com.tkay.expressad.exoplayer.m b(com.tkay.expressad.exoplayer.k.s r12, java.lang.String r13, java.lang.String r14, com.tkay.expressad.exoplayer.d.e r15) {
            r0 = 2
            r12.d(r0)
            int r1 = r12.d()
            r1 = r1 & 192(0xc0, float:2.69E-43)
            int r1 = r1 >> 6
            int[] r2 = com.tkay.expressad.exoplayer.b.a.f
            r8 = r2[r1]
            int r1 = r12.d()
            int[] r2 = com.tkay.expressad.exoplayer.b.a.h
            r3 = r1 & 14
            int r3 = r3 >> 1
            r2 = r2[r3]
            r1 = r1 & 1
            if (r1 == 0) goto L22
            int r2 = r2 + 1
        L22:
            int r1 = r12.d()
            r1 = r1 & 30
            int r1 = r1 >> 1
            if (r1 <= 0) goto L35
            int r1 = r12.d()
            r0 = r0 & r1
            if (r0 == 0) goto L35
            int r2 = r2 + 2
        L35:
            r7 = r2
            int r0 = r12.a()
            if (r0 <= 0) goto L47
            int r12 = r12.d()
            r12 = r12 & 1
            if (r12 == 0) goto L47
            java.lang.String r12 = "audio/eac3-joc"
            goto L49
        L47:
            java.lang.String r12 = "audio/eac3"
        L49:
            r4 = r12
            r5 = 0
            r6 = -1
            r9 = 0
            r3 = r13
            r10 = r15
            r11 = r14
            com.tkay.expressad.exoplayer.m r12 = com.tkay.expressad.exoplayer.m.a(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return r12
    }
}
