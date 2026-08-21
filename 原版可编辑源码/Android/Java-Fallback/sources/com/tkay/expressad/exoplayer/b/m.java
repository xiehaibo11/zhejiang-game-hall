package com.tkay.expressad.exoplayer.b;

public final class m {
    private static final int a = 2147385345;
    private static final int b = 536864768;
    private static final int c = -25230976;
    private static final int d = -14745368;
    private static final byte e = 127;
    private static final byte f = 31;
    private static final byte g = -2;
    private static final byte h = -1;
    private static final int[] i = null;
    private static final int[] j = null;
    private static final int[] k = null;

    static {
            r0 = 16
            int[] r1 = new int[r0]
            r1 = {x001a: FILL_ARRAY_DATA , data: [1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 6, 7, 8, 8} // fill-array
            com.tkay.expressad.exoplayer.b.m.i = r1
            int[] r0 = new int[r0]
            r0 = {x003e: FILL_ARRAY_DATA , data: [-1, 8000, 16000, 32000, -1, -1, 11025, 22050, 44100, -1, -1, 12000, 24000, 48000, -1, -1} // fill-array
            com.tkay.expressad.exoplayer.b.m.j = r0
            r0 = 29
            int[] r0 = new int[r0]
            r0 = {x0062: FILL_ARRAY_DATA , data: [64, 112, 128, 192, 224, 256, 384, 448, 512, 640, 768, 896, 1024, 1152, 1280, 1536, 1920, 2048, 2304, 2560, 2688, 2816, 2823, 2944, 3072, 3840, 4096, 6144, 7680} // fill-array
            com.tkay.expressad.exoplayer.b.m.k = r0
            return
    }

    private m() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.nio.ByteBuffer r3) {
            int r0 = r3.position()
            byte r1 = r3.get(r0)
            r2 = -2
            if (r1 == r2) goto L47
            r2 = -1
            if (r1 == r2) goto L34
            r2 = 31
            if (r1 == r2) goto L23
            int r1 = r0 + 4
            byte r1 = r3.get(r1)
            r1 = r1 & 1
            int r1 = r1 << 6
            int r0 = r0 + 5
            byte r3 = r3.get(r0)
            goto L57
        L23:
            int r1 = r0 + 5
            byte r1 = r3.get(r1)
            r1 = r1 & 7
            int r1 = r1 << 4
            int r0 = r0 + 6
            byte r3 = r3.get(r0)
            goto L44
        L34:
            int r1 = r0 + 4
            byte r1 = r3.get(r1)
            r1 = r1 & 7
            int r1 = r1 << 4
            int r0 = r0 + 7
            byte r3 = r3.get(r0)
        L44:
            r3 = r3 & 60
            goto L59
        L47:
            int r1 = r0 + 5
            byte r1 = r3.get(r1)
            r1 = r1 & 1
            int r1 = r1 << 6
            int r0 = r0 + 4
            byte r3 = r3.get(r0)
        L57:
            r3 = r3 & 252(0xfc, float:3.53E-43)
        L59:
            int r3 = r3 >> 2
            r3 = r3 | r1
            int r3 = r3 + 1
            int r3 = r3 * 32
            return r3
    }

    private static int a(byte[] r6) {
            r0 = 0
            r0 = r6[r0]
            r1 = -2
            r2 = 6
            r3 = 5
            r4 = 4
            if (r0 == r1) goto L29
            r1 = -1
            r5 = 7
            if (r0 == r1) goto L20
            r1 = 31
            if (r0 == r1) goto L19
            r0 = r6[r4]
            r0 = r0 & 1
            int r0 = r0 << r2
            r6 = r6[r3]
            goto L30
        L19:
            r0 = r6[r3]
            r0 = r0 & r5
            int r0 = r0 << r4
            r6 = r6[r2]
            goto L26
        L20:
            r0 = r6[r4]
            r0 = r0 & r5
            int r0 = r0 << r4
            r6 = r6[r5]
        L26:
            r6 = r6 & 60
            goto L32
        L29:
            r0 = r6[r3]
            r0 = r0 & 1
            int r0 = r0 << r2
            r6 = r6[r4]
        L30:
            r6 = r6 & 252(0xfc, float:3.53E-43)
        L32:
            int r6 = r6 >> 2
            r6 = r6 | r0
            int r6 = r6 + 1
            int r6 = r6 * 32
            return r6
    }

    private static com.tkay.expressad.exoplayer.m a(byte[] r17, java.lang.String r18, java.lang.String r19, com.tkay.expressad.exoplayer.d.e r20) {
            r0 = r17
            r1 = 0
            r2 = r0[r1]
            r3 = -1
            r4 = 2
            r5 = 1
            r6 = 127(0x7f, float:1.78E-43)
            if (r2 != r6) goto L12
            com.tkay.expressad.exoplayer.k.r r2 = new com.tkay.expressad.exoplayer.k.r
            r2.<init>(r0)
            goto L61
        L12:
            int r2 = r0.length
            byte[] r0 = java.util.Arrays.copyOf(r0, r2)
            r2 = r0[r1]
            r6 = -2
            if (r2 == r6) goto L23
            r2 = r0[r1]
            if (r2 != r3) goto L21
            goto L23
        L21:
            r2 = r1
            goto L24
        L23:
            r2 = r5
        L24:
            if (r2 == 0) goto L38
            r2 = r1
        L27:
            int r6 = r0.length
            int r6 = r6 - r5
            if (r2 >= r6) goto L38
            r6 = r0[r2]
            int r7 = r2 + 1
            r8 = r0[r7]
            r0[r2] = r8
            r0[r7] = r6
            int r2 = r2 + 2
            goto L27
        L38:
            com.tkay.expressad.exoplayer.k.r r2 = new com.tkay.expressad.exoplayer.k.r
            r2.<init>(r0)
            r6 = r0[r1]
            r7 = 31
            if (r6 != r7) goto L5d
            com.tkay.expressad.exoplayer.k.r r6 = new com.tkay.expressad.exoplayer.k.r
            r6.<init>(r0)
        L48:
            int r7 = r6.a()
            r8 = 16
            if (r7 < r8) goto L5d
            r6.b(r4)
            r7 = 14
            int r7 = r6.c(r7)
            r2.d(r7)
            goto L48
        L5d:
            int r6 = r0.length
            r2.a(r0, r6)
        L61:
            r0 = 60
            r2.b(r0)
            r0 = 6
            int r0 = r2.c(r0)
            int[] r6 = com.tkay.expressad.exoplayer.b.m.i
            r0 = r6[r0]
            r6 = 4
            int r6 = r2.c(r6)
            int[] r7 = com.tkay.expressad.exoplayer.b.m.j
            r13 = r7[r6]
            r6 = 5
            int r6 = r2.c(r6)
            int[] r7 = com.tkay.expressad.exoplayer.b.m.k
            int r8 = r7.length
            if (r6 < r8) goto L83
            goto L88
        L83:
            r3 = r7[r6]
            int r3 = r3 * 1000
            int r3 = r3 / r4
        L88:
            r11 = r3
            r3 = 10
            r2.b(r3)
            int r2 = r2.c(r4)
            if (r2 <= 0) goto L95
            r1 = r5
        L95:
            int r12 = r0 + r1
            r10 = 0
            r14 = 0
            java.lang.String r9 = "audio/vnd.dts"
            r8 = r18
            r15 = r20
            r16 = r19
            com.tkay.expressad.exoplayer.m r0 = com.tkay.expressad.exoplayer.m.a(r8, r9, r10, r11, r12, r13, r14, r15, r16)
            return r0
    }

    private static boolean a(int r1) {
            r0 = 2147385345(0x7ffe8001, float:NaN)
            if (r1 == r0) goto L17
            r0 = -25230976(0xfffffffffe7f0180, float:-8.474023E37)
            if (r1 == r0) goto L17
            r0 = 536864768(0x1fffe800, float:1.0838051E-19)
            if (r1 == r0) goto L17
            r0 = -14745368(0xffffffffff1f00e8, float:-2.1135196E38)
            if (r1 != r0) goto L15
            goto L17
        L15:
            r1 = 0
            return r1
        L17:
            r1 = 1
            return r1
    }

    private static int b(byte[] r7) {
            r0 = 0
            r1 = r7[r0]
            r2 = -2
            r3 = 6
            r4 = 7
            r5 = 1
            r6 = 4
            if (r1 == r2) goto L4a
            r2 = -1
            if (r1 == r2) goto L32
            r2 = 31
            if (r1 == r2) goto L21
            r1 = 5
            r1 = r7[r1]
            r1 = r1 & 3
            int r1 = r1 << 12
            r2 = r7[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << r6
            r1 = r1 | r2
            r7 = r7[r4]
            goto L58
        L21:
            r0 = r7[r3]
            r0 = r0 & 3
            int r0 = r0 << 12
            r1 = r7[r4]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << r6
            r0 = r0 | r1
            r1 = 8
            r7 = r7[r1]
            goto L42
        L32:
            r0 = r7[r4]
            r0 = r0 & 3
            int r0 = r0 << 12
            r1 = r7[r3]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << r6
            r0 = r0 | r1
            r1 = 9
            r7 = r7[r1]
        L42:
            r7 = r7 & 60
            int r7 = r7 >> 2
            r7 = r7 | r0
            int r7 = r7 + r5
            r0 = r5
            goto L5d
        L4a:
            r1 = r7[r6]
            r1 = r1 & 3
            int r1 = r1 << 12
            r2 = r7[r4]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << r6
            r1 = r1 | r2
            r7 = r7[r3]
        L58:
            r7 = r7 & 240(0xf0, float:3.36E-43)
            int r7 = r7 >> r6
            r7 = r7 | r1
            int r7 = r7 + r5
        L5d:
            if (r0 == 0) goto L63
            int r7 = r7 * 16
            int r7 = r7 / 14
        L63:
            return r7
    }

    private static com.tkay.expressad.exoplayer.k.r c(byte[] r6) {
            r0 = 0
            r1 = r6[r0]
            r2 = 127(0x7f, float:1.78E-43)
            if (r1 != r2) goto Ld
            com.tkay.expressad.exoplayer.k.r r0 = new com.tkay.expressad.exoplayer.k.r
            r0.<init>(r6)
            return r0
        Ld:
            int r1 = r6.length
            byte[] r6 = java.util.Arrays.copyOf(r6, r1)
            r1 = r6[r0]
            r2 = -2
            r3 = 1
            if (r1 == r2) goto L20
            r1 = r6[r0]
            r2 = -1
            if (r1 != r2) goto L1e
            goto L20
        L1e:
            r1 = r0
            goto L21
        L20:
            r1 = r3
        L21:
            if (r1 == 0) goto L35
            r1 = r0
        L24:
            int r2 = r6.length
            int r2 = r2 - r3
            if (r1 >= r2) goto L35
            r2 = r6[r1]
            int r4 = r1 + 1
            r5 = r6[r4]
            r6[r1] = r5
            r6[r4] = r2
            int r1 = r1 + 2
            goto L24
        L35:
            com.tkay.expressad.exoplayer.k.r r1 = new com.tkay.expressad.exoplayer.k.r
            r1.<init>(r6)
            r0 = r6[r0]
            r2 = 31
            if (r0 != r2) goto L5b
            com.tkay.expressad.exoplayer.k.r r0 = new com.tkay.expressad.exoplayer.k.r
            r0.<init>(r6)
        L45:
            int r2 = r0.a()
            r3 = 16
            if (r2 < r3) goto L5b
            r2 = 2
            r0.b(r2)
            r2 = 14
            int r2 = r0.c(r2)
            r1.d(r2)
            goto L45
        L5b:
            int r0 = r6.length
            r1.a(r6, r0)
            return r1
    }

    private static boolean d(byte[] r3) {
            r0 = 0
            r1 = r3[r0]
            r2 = -2
            if (r1 == r2) goto Ld
            r3 = r3[r0]
            r1 = -1
            if (r3 != r1) goto Lc
            goto Ld
        Lc:
            return r0
        Ld:
            r3 = 1
            return r3
    }
}
