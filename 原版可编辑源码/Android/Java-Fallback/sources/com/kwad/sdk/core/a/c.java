package com.kwad.sdk.core.a;

public final class c {
    private static final java.nio.charset.Charset ISO_8859_1 = null;

    public static class a {
        static final com.kwad.sdk.core.a.c.a aog = null;
        static final com.kwad.sdk.core.a.c.a aoh = null;
        private static final int[] aoi = null;
        private static final int[] aoj = null;
        private final boolean aok;
        private final boolean aol;

        static {
                com.kwad.sdk.core.a.c$a r0 = new com.kwad.sdk.core.a.c$a
                r1 = 0
                r0.<init>(r1, r1)
                com.kwad.sdk.core.a.c.a.aog = r0
                com.kwad.sdk.core.a.c$a r0 = new com.kwad.sdk.core.a.c$a
                r2 = 1
                r0.<init>(r2, r1)
                com.kwad.sdk.core.a.c.a.aoh = r0
                r0 = 256(0x100, float:3.59E-43)
                int[] r2 = new int[r0]
                com.kwad.sdk.core.a.c.a.aoi = r2
                int[] r0 = new int[r0]
                com.kwad.sdk.core.a.c.a.aoj = r0
                r0 = -1
                java.util.Arrays.fill(r2, r0)
                r2 = r1
            L1f:
                char[] r3 = com.kwad.sdk.core.a.c.b.AO()
                int r3 = r3.length
                if (r2 >= r3) goto L33
                int[] r3 = com.kwad.sdk.core.a.c.a.aoi
                char[] r4 = com.kwad.sdk.core.a.c.b.AO()
                char r4 = r4[r2]
                r3[r4] = r2
                int r2 = r2 + 1
                goto L1f
            L33:
                int[] r2 = com.kwad.sdk.core.a.c.a.aoi
                r3 = -2
                r4 = 61
                r2[r4] = r3
                int[] r2 = com.kwad.sdk.core.a.c.a.aoj
                java.util.Arrays.fill(r2, r0)
            L3f:
                char[] r0 = com.kwad.sdk.core.a.c.b.AP()
                int r0 = r0.length
                if (r1 >= r0) goto L53
                int[] r0 = com.kwad.sdk.core.a.c.a.aoj
                char[] r2 = com.kwad.sdk.core.a.c.b.AP()
                char r2 = r2[r1]
                r0[r2] = r1
                int r1 = r1 + 1
                goto L3f
            L53:
                int[] r0 = com.kwad.sdk.core.a.c.a.aoj
                r0[r4] = r3
                return
        }

        private a(boolean r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.aok = r1
                r1 = 0
                r0.aol = r1
                return
        }

        private int a(byte[] r9, int r10, int r11) {
                r8 = this;
                boolean r0 = r8.aok
                if (r0 == 0) goto L7
                int[] r0 = com.kwad.sdk.core.a.c.a.aoj
                goto L9
            L7:
                int[] r0 = com.kwad.sdk.core.a.c.a.aoi
            L9:
                int r1 = r11 + 0
                r2 = 0
                if (r1 != 0) goto Lf
                return r2
            Lf:
                r3 = -1
                r4 = 2
                if (r1 >= r4) goto L24
                boolean r9 = r8.aol
                if (r9 == 0) goto L1c
                r9 = r0[r2]
                if (r9 != r3) goto L1c
                return r2
            L1c:
                java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
                java.lang.String r10 = "Input byte[] should at least have 2 bytes for base64 bytes"
                r9.<init>(r10)
                throw r9
            L24:
                boolean r5 = r8.aol
                r6 = 61
                r7 = 1
                if (r5 == 0) goto L44
                r4 = r2
            L2c:
                if (r10 >= r11) goto L42
                int r5 = r10 + 1
                r10 = r9[r10]
                r10 = r10 & 255(0xff, float:3.57E-43)
                if (r10 != r6) goto L3a
                int r11 = r11 - r5
                int r11 = r11 + r7
                int r1 = r1 - r11
                goto L42
            L3a:
                r10 = r0[r10]
                if (r10 != r3) goto L40
                int r4 = r4 + 1
            L40:
                r10 = r5
                goto L2c
            L42:
                int r1 = r1 - r4
                goto L52
            L44:
                int r10 = r11 + (-1)
                r10 = r9[r10]
                if (r10 != r6) goto L52
                int r11 = r11 - r4
                r9 = r9[r11]
                if (r9 != r6) goto L51
                r2 = r4
                goto L52
            L51:
                r2 = r7
            L52:
                if (r2 != 0) goto L5a
                r9 = r1 & 3
                if (r9 == 0) goto L5a
                int r2 = 4 - r9
            L5a:
                int r1 = r1 + 3
                int r1 = r1 / 4
                int r1 = r1 * 3
                int r1 = r1 - r2
                return r1
        }

        private int a(byte[] r11, int r12, int r13, byte[] r14) {
                r10 = this;
                boolean r0 = r10.aok
                if (r0 == 0) goto L7
                int[] r0 = com.kwad.sdk.core.a.c.a.aoj
                goto L9
            L7:
                int[] r0 = com.kwad.sdk.core.a.c.a.aoi
            L9:
                r1 = 18
                r2 = 0
                r4 = r1
                r3 = r2
                r5 = r3
            Lf:
                r6 = 6
                r7 = 16
                if (r12 >= r13) goto L7a
                int r8 = r12 + 1
                r12 = r11[r12]
                r12 = r12 & 255(0xff, float:3.57E-43)
                r12 = r0[r12]
                if (r12 >= 0) goto L5b
                r9 = -2
                if (r12 != r9) goto L3a
                if (r4 != r6) goto L2e
                if (r8 == r13) goto L32
                int r12 = r8 + 1
                r2 = r11[r8]
                r8 = 61
                if (r2 != r8) goto L32
                goto L2f
            L2e:
                r12 = r8
            L2f:
                if (r4 == r1) goto L32
                goto L7a
            L32:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.String r12 = "Input byte array has wrong 4-byte ending unit"
                r11.<init>(r12)
                throw r11
            L3a:
                boolean r12 = r10.aol
                if (r12 == 0) goto L3f
                goto L78
            L3f:
                java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                java.lang.String r14 = "Illegal base64 character "
                r13.<init>(r14)
                int r8 = r8 + (-1)
                r11 = r11[r8]
                java.lang.String r11 = java.lang.Integer.toString(r11, r7)
                r13.append(r11)
                java.lang.String r11 = r13.toString()
                r12.<init>(r11)
                throw r12
            L5b:
                int r12 = r12 << r4
                r12 = r12 | r3
                int r4 = r4 + (-6)
                if (r4 >= 0) goto L77
                int r3 = r5 + 1
                int r4 = r12 >> 16
                byte r4 = (byte) r4
                r14[r5] = r4
                int r4 = r3 + 1
                int r5 = r12 >> 8
                byte r5 = (byte) r5
                r14[r3] = r5
                int r5 = r4 + 1
                byte r12 = (byte) r12
                r14[r4] = r12
                r4 = r1
                r3 = r2
                goto L78
            L77:
                r3 = r12
            L78:
                r12 = r8
                goto Lf
            L7a:
                if (r4 != r6) goto L85
                int r1 = r5 + 1
                int r2 = r3 >> 16
                byte r2 = (byte) r2
                r14[r5] = r2
                r5 = r1
                goto L9a
            L85:
                if (r4 != 0) goto L96
                int r1 = r5 + 1
                int r2 = r3 >> 16
                byte r2 = (byte) r2
                r14[r5] = r2
                int r5 = r1 + 1
                int r2 = r3 >> 8
                byte r2 = (byte) r2
                r14[r1] = r2
                goto L9a
            L96:
                r14 = 12
                if (r4 == r14) goto Lc0
            L9a:
                if (r12 >= r13) goto Lbf
                boolean r14 = r10.aol
                if (r14 == 0) goto Lab
                int r14 = r12 + 1
                r12 = r11[r12]
                r12 = r0[r12]
                if (r12 >= 0) goto Laa
                r12 = r14
                goto L9a
            Laa:
                r12 = r14
            Lab:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                java.lang.String r14 = "Input byte array has incorrect ending byte at "
                r13.<init>(r14)
                r13.append(r12)
                java.lang.String r12 = r13.toString()
                r11.<init>(r12)
                throw r11
            Lbf:
                return r5
            Lc0:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.String r12 = "Last unit does not have enough valid bits"
                r11.<init>(r12)
                throw r11
        }

        public final byte[] decode(java.lang.String r2) {
                r1 = this;
                java.nio.charset.Charset r0 = com.kwad.sdk.core.a.c.AN()
                byte[] r2 = r2.getBytes(r0)
                byte[] r2 = r1.decode(r2)
                return r2
        }

        public final byte[] decode(byte[] r5) {
                r4 = this;
                int r0 = r5.length
                r1 = 0
                int r0 = r4.a(r5, r1, r0)
                byte[] r2 = new byte[r0]
                int r3 = r5.length
                int r5 = r4.a(r5, r1, r3, r2)
                if (r5 == r0) goto L13
                byte[] r2 = java.util.Arrays.copyOf(r2, r5)
            L13:
                return r2
        }
    }

    public static class b {
        static final com.kwad.sdk.core.a.c.b aom = null;
        static final com.kwad.sdk.core.a.c.b aon = null;
        private static final char[] aoo = null;
        private static final char[] aop = null;
        private final boolean aok;
        private final byte[] aoq;
        private final int aor;
        private final boolean aos;

        static {
                com.kwad.sdk.core.a.c$b r0 = new com.kwad.sdk.core.a.c$b
                r1 = 1
                r2 = -1
                r3 = 0
                r4 = 0
                r0.<init>(r4, r3, r2, r1)
                com.kwad.sdk.core.a.c.b.aom = r0
                com.kwad.sdk.core.a.c$b r0 = new com.kwad.sdk.core.a.c$b
                r0.<init>(r1, r3, r2, r4)
                com.kwad.sdk.core.a.c.b.aon = r0
                r0 = 64
                char[] r1 = new char[r0]
                r1 = {x0024: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
                com.kwad.sdk.core.a.c.b.aoo = r1
                char[] r0 = new char[r0]
                r0 = {x0068: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
                com.kwad.sdk.core.a.c.b.aop = r0
                return
        }

        private b(boolean r1, byte[] r2, int r3, boolean r4) {
                r0 = this;
                r0.<init>()
                r0.aok = r1
                r1 = 0
                r0.aoq = r1
                r1 = -1
                r0.aor = r1
                r0.aos = r4
                return
        }

        static char[] AO() {
                char[] r0 = com.kwad.sdk.core.a.c.b.aoo
                return r0
        }

        static char[] AP() {
                char[] r0 = com.kwad.sdk.core.a.c.b.aop
                return r0
        }

        private int b(byte[] r12, int r13, int r14, byte[] r15) {
                r11 = this;
                boolean r13 = r11.aok
                if (r13 == 0) goto L7
                char[] r13 = com.kwad.sdk.core.a.c.b.aop
                goto L9
            L7:
                char[] r13 = com.kwad.sdk.core.a.c.b.aoo
            L9:
                int r0 = r14 + 0
                int r0 = r0 / 3
                int r0 = r0 * 3
                int r1 = r0 + 0
                int r2 = r11.aor
                if (r2 <= 0) goto L1f
                int r3 = r2 / 4
                int r3 = r3 * 3
                if (r0 <= r3) goto L1f
                int r2 = r2 / 4
                int r0 = r2 * 3
            L1f:
                r2 = 0
                r3 = r2
                r4 = r3
            L22:
                if (r3 >= r1) goto L91
                int r5 = r3 + r0
                int r5 = java.lang.Math.min(r5, r1)
                r6 = r3
                r7 = r4
            L2c:
                if (r6 >= r5) goto L72
                int r8 = r6 + 1
                r6 = r12[r6]
                r6 = r6 & 255(0xff, float:3.57E-43)
                int r6 = r6 << 16
                int r9 = r8 + 1
                r8 = r12[r8]
                r8 = r8 & 255(0xff, float:3.57E-43)
                int r8 = r8 << 8
                r6 = r6 | r8
                int r8 = r9 + 1
                r9 = r12[r9]
                r9 = r9 & 255(0xff, float:3.57E-43)
                r6 = r6 | r9
                int r9 = r7 + 1
                int r10 = r6 >>> 18
                r10 = r10 & 63
                char r10 = r13[r10]
                byte r10 = (byte) r10
                r15[r7] = r10
                int r7 = r9 + 1
                int r10 = r6 >>> 12
                r10 = r10 & 63
                char r10 = r13[r10]
                byte r10 = (byte) r10
                r15[r9] = r10
                int r9 = r7 + 1
                int r10 = r6 >>> 6
                r10 = r10 & 63
                char r10 = r13[r10]
                byte r10 = (byte) r10
                r15[r7] = r10
                int r7 = r9 + 1
                r6 = r6 & 63
                char r6 = r13[r6]
                byte r6 = (byte) r6
                r15[r9] = r6
                r6 = r8
                goto L2c
            L72:
                int r3 = r5 - r3
                int r3 = r3 / 3
                int r3 = r3 * 4
                int r4 = r4 + r3
                int r6 = r11.aor
                if (r3 != r6) goto L8f
                if (r5 >= r14) goto L8f
                byte[] r3 = r11.aoq
                int r6 = r3.length
                r7 = r2
            L83:
                if (r7 >= r6) goto L8f
                r8 = r3[r7]
                int r9 = r4 + 1
                r15[r4] = r8
                int r7 = r7 + 1
                r4 = r9
                goto L83
            L8f:
                r3 = r5
                goto L22
            L91:
                if (r3 >= r14) goto Le4
                int r0 = r3 + 1
                r1 = r12[r3]
                r1 = r1 & 255(0xff, float:3.57E-43)
                int r2 = r4 + 1
                int r3 = r1 >> 2
                char r3 = r13[r3]
                byte r3 = (byte) r3
                r15[r4] = r3
                r3 = 61
                if (r0 != r14) goto Lbe
                int r4 = r2 + 1
                int r12 = r1 << 4
                r12 = r12 & 63
                char r12 = r13[r12]
                byte r12 = (byte) r12
                r15[r2] = r12
                boolean r12 = r11.aos
                if (r12 == 0) goto Le4
                int r12 = r4 + 1
                r15[r4] = r3
                int r4 = r12 + 1
                r15[r12] = r3
                goto Le4
            Lbe:
                r12 = r12[r0]
                r12 = r12 & 255(0xff, float:3.57E-43)
                int r14 = r2 + 1
                int r0 = r1 << 4
                r0 = r0 & 63
                int r1 = r12 >> 4
                r0 = r0 | r1
                char r0 = r13[r0]
                byte r0 = (byte) r0
                r15[r2] = r0
                int r4 = r14 + 1
                int r12 = r12 << 2
                r12 = r12 & 63
                char r12 = r13[r12]
                byte r12 = (byte) r12
                r15[r14] = r12
                boolean r12 = r11.aos
                if (r12 == 0) goto Le4
                int r12 = r4 + 1
                r15[r4] = r3
                r4 = r12
            Le4:
                return r4
        }

        private final int bX(int r3) {
                r2 = this;
                boolean r0 = r2.aos
                if (r0 == 0) goto Lb
                int r3 = r3 + 2
                int r3 = r3 / 3
                int r3 = r3 * 4
                goto L18
            Lb:
                int r0 = r3 % 3
                int r3 = r3 / 3
                int r3 = r3 * 4
                if (r0 != 0) goto L15
                r0 = 0
                goto L17
            L15:
                int r0 = r0 + 1
            L17:
                int r3 = r3 + r0
            L18:
                int r0 = r2.aor
                if (r0 <= 0) goto L24
                int r1 = r3 + (-1)
                int r1 = r1 / r0
                byte[] r0 = r2.aoq
                int r0 = r0.length
                int r1 = r1 * r0
                int r3 = r3 + r1
            L24:
                return r3
        }

        public final byte[] encode(byte[] r5) {
                r4 = this;
                int r0 = r5.length
                int r0 = r4.bX(r0)
                byte[] r1 = new byte[r0]
                int r2 = r5.length
                r3 = 0
                int r5 = r4.b(r5, r3, r2, r1)
                if (r5 == r0) goto L14
                byte[] r5 = java.util.Arrays.copyOf(r1, r5)
                return r5
            L14:
                return r1
        }

        public final java.lang.String encodeToString(byte[] r4) {
                r3 = this;
                byte[] r4 = r3.encode(r4)
                java.lang.String r0 = new java.lang.String
                int r1 = r4.length
                r2 = 0
                r0.<init>(r4, r2, r2, r1)
                return r0
        }
    }

    static {
            java.lang.String r0 = "ISO-8859-1"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.core.a.c.ISO_8859_1 = r0
            return
    }

    public static com.kwad.sdk.core.a.c.b AJ() {
            com.kwad.sdk.core.a.c$b r0 = com.kwad.sdk.core.a.c.b.aom
            return r0
    }

    public static com.kwad.sdk.core.a.c.b AK() {
            com.kwad.sdk.core.a.c$b r0 = com.kwad.sdk.core.a.c.b.aon
            return r0
    }

    public static com.kwad.sdk.core.a.c.a AL() {
            com.kwad.sdk.core.a.c$a r0 = com.kwad.sdk.core.a.c.a.aog
            return r0
    }

    public static com.kwad.sdk.core.a.c.a AM() {
            com.kwad.sdk.core.a.c$a r0 = com.kwad.sdk.core.a.c.a.aoh
            return r0
    }

    static java.nio.charset.Charset AN() {
            java.nio.charset.Charset r0 = com.kwad.sdk.core.a.c.ISO_8859_1
            return r0
    }

    public static java.lang.String cR(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "sDAkk/dS"
            r0.<init>(r1)
            java.lang.String r1 = new java.lang.String
            com.kwad.sdk.core.a.c$b r2 = AJ()
            byte[] r3 = r3.getBytes()
            byte[] r3 = r2.encode(r3)
            java.nio.charset.Charset r2 = com.kwad.sdk.crash.utils.a.UTF_8
            r1.<init>(r3, r2)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String cS(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r0 = "sDAkk/dS"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L27
            java.lang.String r0 = new java.lang.String
            com.kwad.sdk.core.a.c$a r1 = AL()
            r2 = 8
            java.lang.String r3 = r3.substring(r2)
            byte[] r3 = r1.decode(r3)
            java.nio.charset.Charset r1 = com.kwad.sdk.crash.utils.a.UTF_8
            r0.<init>(r3, r1)
            return r0
        L27:
            return r3
    }

    public static boolean cT(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r0 = "sDAkk/dS"
            boolean r1 = r1.startsWith(r0)
            return r1
    }
}
