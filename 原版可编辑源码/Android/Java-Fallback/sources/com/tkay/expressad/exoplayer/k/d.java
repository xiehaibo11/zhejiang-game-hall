package com.tkay.expressad.exoplayer.k;

public final class d {
    private static final byte[] a = null;
    private static final int b = 15;
    private static final int[] c = null;
    private static final int d = -1;
    private static final int[] e = null;
    private static final int f = 2;
    private static final int g = 5;
    private static final int h = 22;
    private static final int i = 29;
    private static final int j = 31;

    static {
            r0 = 4
            byte[] r0 = new byte[r0]
            r0 = {x001c: FILL_ARRAY_DATA , data: [0, 0, 0, 1} // fill-array
            com.tkay.expressad.exoplayer.k.d.a = r0
            r0 = 13
            int[] r0 = new int[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050, 16000, 12000, 11025, 8000, 7350} // fill-array
            com.tkay.expressad.exoplayer.k.d.c = r0
            r0 = 16
            int[] r0 = new int[r0]
            r0 = {x0040: FILL_ARRAY_DATA , data: [0, 1, 2, 3, 4, 5, 6, 8, -1, -1, -1, 7, 8, -1, 8, -1} // fill-array
            com.tkay.expressad.exoplayer.k.d.e = r0
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(byte[] r2, int r3) {
            int r0 = r2.length
            byte[] r1 = com.tkay.expressad.exoplayer.k.d.a
            int r1 = r1.length
            int r0 = r0 - r1
        L5:
            if (r3 > r0) goto L11
            boolean r1 = b(r2, r3)
            if (r1 == 0) goto Le
            return r3
        Le:
            int r3 = r3 + 1
            goto L5
        L11:
            r2 = -1
            return r2
    }

    private static android.util.Pair<java.lang.Integer, java.lang.Integer> a(com.tkay.expressad.exoplayer.k.r r5) {
            int r0 = b(r5)
            int r1 = c(r5)
            r2 = 4
            int r3 = r5.c(r2)
            r4 = 5
            if (r0 == r4) goto L14
            r4 = 29
            if (r0 != r4) goto L24
        L14:
            int r1 = c(r5)
            int r0 = b(r5)
            r4 = 22
            if (r0 != r4) goto L24
            int r3 = r5.c(r2)
        L24:
            int[] r5 = com.tkay.expressad.exoplayer.k.d.e
            r5 = r5[r3]
            r0 = -1
            if (r5 == r0) goto L2d
            r0 = 1
            goto L2e
        L2d:
            r0 = 0
        L2e:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            android.util.Pair r5 = android.util.Pair.create(r0, r5)
            return r5
    }

    public static android.util.Pair<java.lang.Integer, java.lang.Integer> a(byte[] r5) {
            com.tkay.expressad.exoplayer.k.r r0 = new com.tkay.expressad.exoplayer.k.r
            r0.<init>(r5)
            int r5 = b(r0)
            int r1 = c(r0)
            r2 = 4
            int r3 = r0.c(r2)
            r4 = 5
            if (r5 == r4) goto L19
            r4 = 29
            if (r5 != r4) goto L29
        L19:
            int r1 = c(r0)
            int r5 = b(r0)
            r4 = 22
            if (r5 != r4) goto L29
            int r3 = r0.c(r2)
        L29:
            int[] r5 = com.tkay.expressad.exoplayer.k.d.e
            r5 = r5[r3]
            r0 = -1
            if (r5 == r0) goto L32
            r0 = 1
            goto L33
        L32:
            r0 = 0
        L33:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            android.util.Pair r5 = android.util.Pair.create(r0, r5)
            return r5
    }

    private static void a(com.tkay.expressad.exoplayer.k.r r4, int r5, int r6) {
            r0 = 1
            r4.b(r0)
            boolean r1 = r4.d()
            if (r1 == 0) goto Lf
            r1 = 14
            r4.b(r1)
        Lf:
            boolean r1 = r4.d()
            if (r6 == 0) goto L40
            r6 = 6
            r2 = 20
            r3 = 3
            if (r5 == r6) goto L1d
            if (r5 != r2) goto L20
        L1d:
            r4.b(r3)
        L20:
            if (r1 == 0) goto L3f
            r6 = 22
            if (r5 != r6) goto L2b
            r6 = 16
            r4.b(r6)
        L2b:
            r6 = 17
            if (r5 == r6) goto L39
            r6 = 19
            if (r5 == r6) goto L39
            if (r5 == r2) goto L39
            r6 = 23
            if (r5 != r6) goto L3c
        L39:
            r4.b(r3)
        L3c:
            r4.b(r0)
        L3f:
            return
        L40:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
    }

    private static byte[] a(int r7, int r8) {
            r0 = 0
            r1 = -1
            r2 = r0
            r3 = r1
        L4:
            int[] r4 = com.tkay.expressad.exoplayer.k.d.c
            int r5 = r4.length
            if (r2 >= r5) goto L11
            r4 = r4[r2]
            if (r7 != r4) goto Le
            r3 = r2
        Le:
            int r2 = r2 + 1
            goto L4
        L11:
            r2 = r0
            r4 = r1
        L13:
            int[] r5 = com.tkay.expressad.exoplayer.k.d.e
            int r6 = r5.length
            if (r2 >= r6) goto L20
            r5 = r5[r2]
            if (r8 != r5) goto L1d
            r4 = r2
        L1d:
            int r2 = r2 + 1
            goto L13
        L20:
            if (r7 == r1) goto L3e
            if (r4 == r1) goto L3e
            r7 = 2
            byte[] r7 = new byte[r7]
            int r8 = r3 >> 1
            r8 = r8 & 7
            r8 = r8 | 16
            byte r8 = (byte) r8
            r7[r0] = r8
            int r8 = r3 << 7
            r8 = r8 & 128(0x80, float:1.8E-43)
            int r0 = r4 << 3
            r0 = r0 & 120(0x78, float:1.68E-43)
            r8 = r8 | r0
            byte r8 = (byte) r8
            r0 = 1
            r7[r0] = r8
            return r7
        L3e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid sample rate or number of channels: "
            r1.<init>(r2)
            r1.append(r7)
            java.lang.String r7 = ", "
            r1.append(r7)
            r1.append(r8)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
    }

    public static byte[] a(byte[] r4, int r5, int r6) {
            byte[] r0 = com.tkay.expressad.exoplayer.k.d.a
            int r1 = r0.length
            int r1 = r1 + r6
            byte[] r1 = new byte[r1]
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            byte[] r0 = com.tkay.expressad.exoplayer.k.d.a
            int r0 = r0.length
            java.lang.System.arraycopy(r4, r5, r1, r0, r6)
            return r1
    }

    private static int b(com.tkay.expressad.exoplayer.k.r r2) {
            r0 = 5
            int r0 = r2.c(r0)
            r1 = 31
            if (r0 != r1) goto L10
            r0 = 6
            int r2 = r2.c(r0)
            int r0 = r2 + 32
        L10:
            return r0
    }

    private static boolean b(byte[] r4, int r5) {
            int r0 = r4.length
            int r0 = r0 - r5
            byte[] r1 = com.tkay.expressad.exoplayer.k.d.a
            int r1 = r1.length
            r2 = 0
            if (r0 > r1) goto L9
            return r2
        L9:
            r0 = r2
        La:
            byte[] r1 = com.tkay.expressad.exoplayer.k.d.a
            int r3 = r1.length
            if (r0 >= r3) goto L1b
            int r3 = r5 + r0
            r3 = r4[r3]
            r1 = r1[r0]
            if (r3 == r1) goto L18
            return r2
        L18:
            int r0 = r0 + 1
            goto La
        L1b:
            r4 = 1
            return r4
    }

    private static byte[] b(int r3, int r4) {
            r0 = 2
            byte[] r0 = new byte[r0]
            int r1 = r3 >> 1
            r1 = r1 & 7
            r1 = r1 | 16
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r3 = r3 << 7
            r3 = r3 & 128(0x80, float:1.8E-43)
            int r4 = r4 << 3
            r4 = r4 & 120(0x78, float:1.68E-43)
            r3 = r3 | r4
            byte r3 = (byte) r3
            r4 = 1
            r0[r4] = r3
            return r0
    }

    private static byte[][] b(byte[] r7) {
            r0 = 0
            boolean r1 = b(r7, r0)
            if (r1 != 0) goto L9
            r7 = 0
            return r7
        L9:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = r0
        Lf:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r1.add(r3)
            byte[] r3 = com.tkay.expressad.exoplayer.k.d.a
            int r3 = r3.length
            int r2 = r2 + r3
            int r2 = a(r7, r2)
            r3 = -1
            if (r2 != r3) goto Lf
            int r2 = r1.size()
            byte[][] r2 = new byte[r2][]
            r3 = r0
        L28:
            int r4 = r1.size()
            if (r3 >= r4) goto L59
            java.lang.Object r4 = r1.get(r3)
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            int r5 = r1.size()
            int r5 = r5 + (-1)
            if (r3 >= r5) goto L4d
            int r5 = r3 + 1
            java.lang.Object r5 = r1.get(r5)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            goto L4e
        L4d:
            int r5 = r7.length
        L4e:
            int r5 = r5 - r4
            byte[] r6 = new byte[r5]
            java.lang.System.arraycopy(r7, r4, r6, r0, r5)
            r2[r3] = r6
            int r3 = r3 + 1
            goto L28
        L59:
            return r2
    }

    private static int c(com.tkay.expressad.exoplayer.k.r r2) {
            r0 = 4
            int r0 = r2.c(r0)
            r1 = 15
            if (r0 != r1) goto L10
            r0 = 24
            int r2 = r2.c(r0)
            goto L1e
        L10:
            r2 = 13
            if (r0 >= r2) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            int[] r2 = com.tkay.expressad.exoplayer.k.d.c
            r2 = r2[r0]
        L1e:
            return r2
    }
}
