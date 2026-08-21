package com.tkay.expressad.exoplayer.g.b;

public final class g implements com.tkay.expressad.exoplayer.g.b {
    public static final com.tkay.expressad.exoplayer.g.b.g.a a = null;
    public static final int b = 0;
    public static final int c = 10;
    private static final java.lang.String d = "Id3Decoder";
    private static final int e = 128;
    private static final int f = 64;
    private static final int g = 32;
    private static final int h = 8;
    private static final int i = 4;
    private static final int j = 64;
    private static final int k = 2;
    private static final int l = 1;
    private static final int m = 0;
    private static final int n = 1;
    private static final int o = 2;
    private static final int p = 3;
    private final com.tkay.expressad.exoplayer.g.b.g.a q;


    public interface a {
        boolean a(int r1, int r2, int r3, int r4, int r5);
    }

    private static final class b {
        private final int a;
        private final boolean b;
        private final int c;

        public b(int r1, boolean r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        static int a(com.tkay.expressad.exoplayer.g.b.g.b r0) {
                int r0 = r0.a
                return r0
        }

        static int b(com.tkay.expressad.exoplayer.g.b.g.b r0) {
                int r0 = r0.c
                return r0
        }

        static boolean c(com.tkay.expressad.exoplayer.g.b.g.b r0) {
                boolean r0 = r0.b
                return r0
        }
    }

    static {
            com.tkay.expressad.exoplayer.g.b.g$1 r0 = new com.tkay.expressad.exoplayer.g.b.g$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.g.a = r0
            java.lang.String r0 = "ID3"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.g.b.g.b = r0
            return
    }

    public g() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    private g(com.tkay.expressad.exoplayer.g.b.g.a r1) {
            r0 = this;
            r0.<init>()
            r0.q = r1
            return
    }

    private static int a(byte[] r1, int r2, int r3) {
            int r2 = b(r1, r2)
            if (r3 == 0) goto L23
            r0 = 3
            if (r3 != r0) goto La
            goto L23
        La:
            int r3 = r1.length
            int r3 = r3 + (-1)
            if (r2 >= r3) goto L21
            int r3 = r2 % 2
            if (r3 != 0) goto L1a
            int r3 = r2 + 1
            r3 = r1[r3]
            if (r3 != 0) goto L1a
            return r2
        L1a:
            int r2 = r2 + 1
            int r2 = b(r1, r2)
            goto La
        L21:
            int r1 = r1.length
            return r1
        L23:
            return r2
    }

    private com.tkay.expressad.exoplayer.g.a a(byte[] r13, int r14) {
            r12 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.exoplayer.k.s r1 = new com.tkay.expressad.exoplayer.k.s
            r1.<init>(r13, r14)
            int r13 = r1.a()
            r14 = 2
            r2 = 10
            java.lang.String r3 = "Id3Decoder"
            r4 = 4
            r5 = 0
            r6 = 0
            r7 = 1
            if (r13 >= r2) goto L21
            java.lang.String r13 = "Data too short to be an ID3 tag"
            android.util.Log.w(r3, r13)
        L1e:
            r10 = r5
            goto Lab
        L21:
            int r13 = r1.g()
            int r8 = com.tkay.expressad.exoplayer.g.b.g.b
            if (r13 == r8) goto L37
            java.lang.String r13 = java.lang.String.valueOf(r13)
            java.lang.String r8 = "Unexpected first three bytes of ID3 tag header: "
            java.lang.String r13 = r8.concat(r13)
            android.util.Log.w(r3, r13)
            goto L1e
        L37:
            int r13 = r1.d()
            r1.d(r7)
            int r8 = r1.d()
            int r9 = r1.l()
            if (r13 != r14) goto L57
            r10 = r8 & 64
            if (r10 == 0) goto L4e
            r10 = r7
            goto L4f
        L4e:
            r10 = r6
        L4f:
            if (r10 == 0) goto L8d
            java.lang.String r13 = "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"
            android.util.Log.w(r3, r13)
            goto L1e
        L57:
            r10 = 3
            if (r13 != r10) goto L6d
            r10 = r8 & 64
            if (r10 == 0) goto L60
            r10 = r7
            goto L61
        L60:
            r10 = r6
        L61:
            if (r10 == 0) goto L8d
            int r10 = r1.i()
            r1.d(r10)
            int r10 = r10 + r4
            int r9 = r9 - r10
            goto L8d
        L6d:
            if (r13 != r4) goto L9c
            r10 = r8 & 64
            if (r10 == 0) goto L75
            r10 = r7
            goto L76
        L75:
            r10 = r6
        L76:
            if (r10 == 0) goto L82
            int r10 = r1.l()
            int r11 = r10 + (-4)
            r1.d(r11)
            int r9 = r9 - r10
        L82:
            r10 = r8 & 16
            if (r10 == 0) goto L88
            r10 = r7
            goto L89
        L88:
            r10 = r6
        L89:
            if (r10 == 0) goto L8d
            int r9 = r9 + (-10)
        L8d:
            if (r13 >= r4) goto L95
            r8 = r8 & 128(0x80, float:1.8E-43)
            if (r8 == 0) goto L95
            r8 = r7
            goto L96
        L95:
            r8 = r6
        L96:
            com.tkay.expressad.exoplayer.g.b.g$b r10 = new com.tkay.expressad.exoplayer.g.b.g$b
            r10.<init>(r13, r8, r9)
            goto Lab
        L9c:
            java.lang.String r13 = java.lang.String.valueOf(r13)
            java.lang.String r8 = "Skipped ID3 tag with unsupported majorVersion="
            java.lang.String r13 = r8.concat(r13)
            android.util.Log.w(r3, r13)
            goto L1e
        Lab:
            if (r10 != 0) goto Lae
            return r5
        Lae:
            int r13 = r1.c()
            int r8 = com.tkay.expressad.exoplayer.g.b.g.b.a(r10)
            if (r8 != r14) goto Lb9
            r2 = 6
        Lb9:
            int r14 = com.tkay.expressad.exoplayer.g.b.g.b.b(r10)
            boolean r8 = com.tkay.expressad.exoplayer.g.b.g.b.c(r10)
            if (r8 == 0) goto Lcb
            int r14 = com.tkay.expressad.exoplayer.g.b.g.b.b(r10)
            int r14 = f(r1, r14)
        Lcb:
            int r13 = r13 + r14
            r1.b(r13)
            int r13 = com.tkay.expressad.exoplayer.g.b.g.b.a(r10)
            boolean r13 = a(r1, r13, r2, r6)
            if (r13 != 0) goto Lfd
            int r13 = com.tkay.expressad.exoplayer.g.b.g.b.a(r10)
            if (r13 != r4) goto Le7
            boolean r13 = a(r1, r4, r2, r7)
            if (r13 == 0) goto Le7
            r6 = r7
            goto Lfd
        Le7:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r14 = "Failed to validate ID3 tag with majorVersion="
            r13.<init>(r14)
            int r14 = com.tkay.expressad.exoplayer.g.b.g.b.a(r10)
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            android.util.Log.w(r3, r13)
            return r5
        Lfd:
            int r13 = r1.a()
            if (r13 < r2) goto L113
            int r13 = com.tkay.expressad.exoplayer.g.b.g.b.a(r10)
            com.tkay.expressad.exoplayer.g.b.g$a r14 = r12.q
            com.tkay.expressad.exoplayer.g.b.h r13 = a(r13, r1, r6, r2, r14)
            if (r13 == 0) goto Lfd
            r0.add(r13)
            goto Lfd
        L113:
            com.tkay.expressad.exoplayer.g.a r13 = new com.tkay.expressad.exoplayer.g.a
            r13.<init>(r0)
            return r13
    }

    private static com.tkay.expressad.exoplayer.g.b.a a(com.tkay.expressad.exoplayer.k.s r7, int r8, int r9) {
            int r0 = r7.d()
            java.lang.String r1 = a(r0)
            int r8 = r8 + (-1)
            byte[] r2 = new byte[r8]
            r3 = 0
            r7.a(r2, r3, r8)
            java.lang.String r7 = "image/"
            java.lang.String r4 = "ISO-8859-1"
            r5 = 2
            if (r9 != r5) goto L39
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>(r7)
            java.lang.String r7 = new java.lang.String
            r6 = 3
            r7.<init>(r2, r3, r6, r4)
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d(r7)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            java.lang.String r9 = "image/jpg"
            boolean r9 = r9.equals(r7)
            if (r9 == 0) goto L37
            java.lang.String r7 = "image/jpeg"
        L37:
            r9 = r5
            goto L59
        L39:
            int r9 = b(r2, r3)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r2, r3, r9, r4)
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d(r6)
            r4 = 47
            int r4 = r3.indexOf(r4)
            r6 = -1
            if (r4 != r6) goto L58
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r7 = r7.concat(r3)
            goto L59
        L58:
            r7 = r3
        L59:
            int r3 = r9 + 1
            r3 = r2[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r9 = r9 + r5
            int r4 = a(r2, r9, r0)
            java.lang.String r5 = new java.lang.String
            int r6 = r4 - r9
            r5.<init>(r2, r9, r6, r1)
            int r9 = b(r0)
            int r4 = r4 + r9
            byte[] r8 = b(r2, r4, r8)
            com.tkay.expressad.exoplayer.g.b.a r9 = new com.tkay.expressad.exoplayer.g.b.a
            r9.<init>(r7, r5, r3, r8)
            return r9
    }

    private static com.tkay.expressad.exoplayer.g.b.c a(com.tkay.expressad.exoplayer.k.s r15, int r16, int r17, boolean r18, int r19, com.tkay.expressad.exoplayer.g.b.g.a r20) {
            r0 = r15
            int r1 = r15.c()
            byte[] r2 = r0.a
            int r2 = b(r2, r1)
            java.lang.String r4 = new java.lang.String
            byte[] r3 = r0.a
            int r5 = r2 - r1
            java.lang.String r6 = "ISO-8859-1"
            r4.<init>(r3, r1, r5, r6)
            int r2 = r2 + 1
            r15.c(r2)
            int r5 = r15.i()
            int r6 = r15.i()
            long r2 = r15.h()
            r7 = 4294967295(0xffffffff, double:2.1219957905E-314)
            int r9 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            r10 = -1
            if (r9 != 0) goto L34
            r12 = r10
            goto L35
        L34:
            r12 = r2
        L35:
            long r2 = r15.h()
            int r7 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r7 != 0) goto L3f
            r9 = r10
            goto L40
        L3f:
            r9 = r2
        L40:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            int r1 = r1 + r16
        L47:
            int r3 = r15.c()
            if (r3 >= r1) goto L5f
            r3 = r17
            r7 = r18
            r8 = r19
            r11 = r20
            com.tkay.expressad.exoplayer.g.b.h r14 = a(r3, r15, r7, r8, r11)
            if (r14 == 0) goto L47
            r2.add(r14)
            goto L47
        L5f:
            int r0 = r2.size()
            com.tkay.expressad.exoplayer.g.b.h[] r11 = new com.tkay.expressad.exoplayer.g.b.h[r0]
            r2.toArray(r11)
            com.tkay.expressad.exoplayer.g.b.c r0 = new com.tkay.expressad.exoplayer.g.b.c
            r3 = r0
            r7 = r12
            r3.<init>(r4, r5, r6, r7, r9, r11)
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.b.g.b a(com.tkay.expressad.exoplayer.k.s r9) {
            int r0 = r9.a()
            r1 = 0
            java.lang.String r2 = "Id3Decoder"
            r3 = 10
            if (r0 >= r3) goto L11
            java.lang.String r9 = "Data too short to be an ID3 tag"
            android.util.Log.w(r2, r9)
            return r1
        L11:
            int r0 = r9.g()
            int r3 = com.tkay.expressad.exoplayer.g.b.g.b
            if (r0 == r3) goto L27
            java.lang.String r9 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "Unexpected first three bytes of ID3 tag header: "
            java.lang.String r9 = r0.concat(r9)
            android.util.Log.w(r2, r9)
            return r1
        L27:
            int r0 = r9.d()
            r3 = 1
            r9.d(r3)
            int r4 = r9.d()
            int r5 = r9.l()
            r6 = 2
            r7 = 4
            r8 = 0
            if (r0 != r6) goto L4b
            r9 = r4 & 64
            if (r9 == 0) goto L42
            r9 = r3
            goto L43
        L42:
            r9 = r8
        L43:
            if (r9 == 0) goto L81
            java.lang.String r9 = "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"
            android.util.Log.w(r2, r9)
            return r1
        L4b:
            r6 = 3
            if (r0 != r6) goto L61
            r1 = r4 & 64
            if (r1 == 0) goto L54
            r1 = r3
            goto L55
        L54:
            r1 = r8
        L55:
            if (r1 == 0) goto L81
            int r1 = r9.i()
            r9.d(r1)
            int r1 = r1 + r7
            int r5 = r5 - r1
            goto L81
        L61:
            if (r0 != r7) goto L8f
            r1 = r4 & 64
            if (r1 == 0) goto L69
            r1 = r3
            goto L6a
        L69:
            r1 = r8
        L6a:
            if (r1 == 0) goto L76
            int r1 = r9.l()
            int r2 = r1 + (-4)
            r9.d(r2)
            int r5 = r5 - r1
        L76:
            r9 = r4 & 16
            if (r9 == 0) goto L7c
            r9 = r3
            goto L7d
        L7c:
            r9 = r8
        L7d:
            if (r9 == 0) goto L81
            int r5 = r5 + (-10)
        L81:
            if (r0 >= r7) goto L88
            r9 = r4 & 128(0x80, float:1.8E-43)
            if (r9 == 0) goto L88
            goto L89
        L88:
            r3 = r8
        L89:
            com.tkay.expressad.exoplayer.g.b.g$b r9 = new com.tkay.expressad.exoplayer.g.b.g$b
            r9.<init>(r0, r3, r5)
            return r9
        L8f:
            java.lang.String r9 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "Skipped ID3 tag with unsupported majorVersion="
            java.lang.String r9 = r0.concat(r9)
            android.util.Log.w(r2, r9)
            return r1
    }

    private static com.tkay.expressad.exoplayer.g.b.h a(int r19, com.tkay.expressad.exoplayer.k.s r20, boolean r21, int r22, com.tkay.expressad.exoplayer.g.b.g.a r23) {
            r0 = r19
            r7 = r20
            int r8 = r20.d()
            int r9 = r20.d()
            int r10 = r20.d()
            r11 = 3
            if (r0 < r11) goto L19
            int r1 = r20.d()
            r13 = r1
            goto L1a
        L19:
            r13 = 0
        L1a:
            r14 = 4
            if (r0 != r14) goto L3c
            int r1 = r20.m()
            if (r21 != 0) goto L3a
            r2 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r1 >> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 7
            r2 = r2 | r3
            int r3 = r1 >> 16
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 14
            r2 = r2 | r3
            int r1 = r1 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 21
            r1 = r1 | r2
        L3a:
            r15 = r1
            goto L48
        L3c:
            if (r0 != r11) goto L43
            int r1 = r20.m()
            goto L3a
        L43:
            int r1 = r20.g()
            goto L3a
        L48:
            if (r0 < r11) goto L50
            int r1 = r20.e()
            r6 = r1
            goto L51
        L50:
            r6 = 0
        L51:
            r5 = 0
            if (r8 != 0) goto L66
            if (r9 != 0) goto L66
            if (r10 != 0) goto L66
            if (r13 != 0) goto L66
            if (r15 != 0) goto L66
            if (r6 != 0) goto L66
            int r0 = r20.b()
            r7.c(r0)
            return r5
        L66:
            int r1 = r20.c()
            int r4 = r1 + r15
            int r1 = r20.b()
            java.lang.String r3 = "Id3Decoder"
            if (r4 <= r1) goto L81
            java.lang.String r0 = "Frame size exceeds remaining tag data"
            android.util.Log.w(r3, r0)
            int r0 = r20.b()
            r7.c(r0)
            return r5
        L81:
            if (r23 == 0) goto L9b
            r1 = r23
            r2 = r19
            r16 = r3
            r3 = r8
            r12 = r4
            r4 = r9
            r14 = r5
            r5 = r10
            r17 = r6
            r6 = r13
            boolean r1 = r1.a(r2, r3, r4, r5, r6)
            if (r1 != 0) goto La1
            r7.c(r12)
            return r14
        L9b:
            r16 = r3
            r12 = r4
            r14 = r5
            r17 = r6
        La1:
            r1 = 1
            if (r0 != r11) goto Lbf
            r2 = r17
            r3 = r2 & 128(0x80, float:1.8E-43)
            if (r3 == 0) goto Lac
            r3 = r1
            goto Lad
        Lac:
            r3 = 0
        Lad:
            r4 = r2 & 64
            if (r4 == 0) goto Lb3
            r4 = r1
            goto Lb4
        Lb3:
            r4 = 0
        Lb4:
            r2 = r2 & 32
            if (r2 == 0) goto Lba
            r2 = r1
            goto Lbb
        Lba:
            r2 = 0
        Lbb:
            r5 = r4
            r6 = 0
            r4 = r3
            goto Lee
        Lbf:
            r2 = r17
            r3 = 4
            if (r0 != r3) goto Le9
            r3 = r2 & 64
            if (r3 == 0) goto Lca
            r3 = r1
            goto Lcb
        Lca:
            r3 = 0
        Lcb:
            r4 = r2 & 8
            if (r4 == 0) goto Ld1
            r4 = r1
            goto Ld2
        Ld1:
            r4 = 0
        Ld2:
            r5 = r2 & 4
            if (r5 == 0) goto Ld8
            r5 = r1
            goto Ld9
        Ld8:
            r5 = 0
        Ld9:
            r6 = r2 & 2
            if (r6 == 0) goto Ldf
            r6 = r1
            goto Le0
        Ldf:
            r6 = 0
        Le0:
            r2 = r2 & r1
            if (r2 == 0) goto Le6
            r2 = r3
            r3 = r1
            goto Lee
        Le6:
            r2 = r3
            r3 = 0
            goto Lee
        Le9:
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
        Lee:
            if (r4 != 0) goto L3cf
            if (r5 == 0) goto Lf4
            goto L3cf
        Lf4:
            if (r2 == 0) goto Lfb
            int r15 = r15 + (-1)
            r7.d(r1)
        Lfb:
            if (r3 == 0) goto L103
            int r15 = r15 + (-4)
            r2 = 4
            r7.d(r2)
        L103:
            if (r6 == 0) goto L109
            int r15 = f(r7, r15)
        L109:
            r2 = 84
            r3 = 88
            r4 = 2
            if (r8 != r2) goto L14a
            if (r9 != r3) goto L14a
            if (r10 != r3) goto L14a
            if (r0 == r4) goto L118
            if (r13 != r3) goto L14a
        L118:
            if (r15 > 0) goto L11c
        L11a:
            r5 = r14
            goto L171
        L11c:
            int r1 = r20.d()     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r2 = a(r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r3 = r15 + (-1)
            byte[] r4 = new byte[r3]     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r5 = 0
            r7.a(r4, r5, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r3 = a(r4, r5, r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r6.<init>(r4, r5, r3, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r5 = b(r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r3 = r3 + r5
            int r1 = a(r4, r3, r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r1 = a(r4, r3, r1, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            com.tkay.expressad.exoplayer.g.b.k r5 = new com.tkay.expressad.exoplayer.g.b.k     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r2 = "TXXX"
            r5.<init>(r2, r6, r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            goto L171
        L14a:
            if (r8 != r2) goto L17e
            java.lang.String r1 = a(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            if (r15 > 0) goto L153
            goto L11a
        L153:
            int r2 = r20.d()     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r3 = a(r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r4 = r15 + (-1)
            byte[] r5 = new byte[r4]     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r6 = 0
            r7.a(r5, r6, r4)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r2 = a(r5, r6, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r4.<init>(r5, r6, r2, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            com.tkay.expressad.exoplayer.g.b.k r5 = new com.tkay.expressad.exoplayer.g.b.k     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r5.<init>(r1, r14, r4)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
        L171:
            r18 = r12
            goto L38f
        L175:
            r0 = move-exception
        L176:
            r2 = r12
            goto L3cb
        L179:
            r2 = r12
            r1 = r16
            goto L3c0
        L17e:
            r5 = 87
            java.lang.String r6 = "ISO-8859-1"
            if (r8 != r5) goto L1bd
            if (r9 != r3) goto L1bd
            if (r10 != r3) goto L1bd
            if (r0 == r4) goto L18c
            if (r13 != r3) goto L1bd
        L18c:
            if (r15 > 0) goto L18f
            goto L11a
        L18f:
            int r1 = r20.d()     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r2 = a(r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r3 = r15 + (-1)
            byte[] r4 = new byte[r3]     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r5 = 0
            r7.a(r4, r5, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r3 = a(r4, r5, r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r11.<init>(r4, r5, r3, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r1 = b(r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r3 = r3 + r1
            int r1 = b(r4, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r1 = a(r4, r3, r1, r6)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            com.tkay.expressad.exoplayer.g.b.l r5 = new com.tkay.expressad.exoplayer.g.b.l     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r2 = "WXXX"
            r5.<init>(r2, r11, r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            goto L171
        L1bd:
            if (r8 != r5) goto L1d9
            java.lang.String r1 = a(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            byte[] r2 = new byte[r15]     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r3 = 0
            r7.a(r2, r3, r15)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r4 = b(r2, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r5.<init>(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            com.tkay.expressad.exoplayer.g.b.l r2 = new com.tkay.expressad.exoplayer.g.b.l     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r2.<init>(r1, r14, r5)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
        L1d7:
            r5 = r2
            goto L171
        L1d9:
            r3 = 73
            r5 = 80
            if (r8 != r5) goto L203
            r14 = 82
            if (r9 != r14) goto L203
            if (r10 != r3) goto L203
            r14 = 86
            if (r13 != r14) goto L203
            byte[] r2 = new byte[r15]     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r3 = 0
            r7.a(r2, r3, r15)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r4 = b(r2, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r5.<init>(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r4 = r4 + r1
            byte[] r1 = b(r2, r4, r15)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            com.tkay.expressad.exoplayer.g.b.j r2 = new com.tkay.expressad.exoplayer.g.b.j     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r2.<init>(r5, r1)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            goto L1d7
        L203:
            r14 = 71
            r2 = 79
            if (r8 != r14) goto L255
            r14 = 69
            if (r9 != r14) goto L255
            if (r10 != r2) goto L255
            r14 = 66
            if (r13 == r14) goto L215
            if (r0 != r4) goto L255
        L215:
            int r2 = r20.d()     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r3 = a(r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r4 = r15 + (-1)
            byte[] r5 = new byte[r4]     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r11 = 0
            r7.a(r5, r11, r4)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r14 = b(r5, r11)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r1.<init>(r5, r11, r14, r6)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r6 = 1
            int r14 = r14 + r6
            int r6 = a(r5, r14, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r11 = a(r5, r14, r6, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r14 = b(r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r6 = r6 + r14
            int r14 = a(r5, r6, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r3 = a(r5, r6, r14, r3)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r2 = b(r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            int r14 = r14 + r2
            byte[] r2 = b(r5, r14, r4)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            com.tkay.expressad.exoplayer.g.b.f r5 = new com.tkay.expressad.exoplayer.g.b.f     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r5.<init>(r1, r11, r3, r2)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            goto L171
        L255:
            r1 = 65
            r14 = 67
            if (r0 != r4) goto L262
            if (r8 != r5) goto L2f1
            if (r9 != r3) goto L2f1
            if (r10 != r14) goto L2f1
            goto L26a
        L262:
            if (r8 != r1) goto L2f1
            if (r9 != r5) goto L2f1
            if (r10 != r3) goto L2f1
            if (r13 != r14) goto L2f1
        L26a:
            int r1 = r20.d()     // Catch: java.lang.Throwable -> L2e8 java.io.UnsupportedEncodingException -> L2ed
            java.lang.String r2 = a(r1)     // Catch: java.lang.Throwable -> L2e8 java.io.UnsupportedEncodingException -> L2ed
            int r3 = r15 + (-1)
            byte[] r5 = new byte[r3]     // Catch: java.lang.Throwable -> L2e8 java.io.UnsupportedEncodingException -> L2ed
            r14 = 0
            r7.a(r5, r14, r3)     // Catch: java.lang.Throwable -> L2e8 java.io.UnsupportedEncodingException -> L2ed
            java.lang.String r14 = "image/"
            if (r0 != r4) goto L2a2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r4.<init>(r14)     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            java.lang.String r14 = new java.lang.String     // Catch: java.lang.Throwable -> L175 java.io.UnsupportedEncodingException -> L179
            r18 = r12
            r12 = 0
            r14.<init>(r5, r12, r11, r6)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r6 = com.tkay.expressad.exoplayer.k.af.d(r14)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r4.append(r6)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r6 = "image/jpg"
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            if (r6 == 0) goto L2a0
            java.lang.String r4 = "image/jpeg"
        L2a0:
            r11 = 2
            goto L2c3
        L2a2:
            r18 = r12
            r4 = 0
            int r11 = b(r5, r4)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            java.lang.String r12 = new java.lang.String     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r12.<init>(r5, r4, r11, r6)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            java.lang.String r4 = com.tkay.expressad.exoplayer.k.af.d(r12)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r6 = 47
            int r6 = r4.indexOf(r6)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r12 = -1
            if (r6 != r12) goto L2c3
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r4 = r14.concat(r4)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
        L2c3:
            int r6 = r11 + 1
            r6 = r5[r6]     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r6 = r6 & 255(0xff, float:3.57E-43)
            r12 = 2
            int r11 = r11 + r12
            int r12 = a(r5, r11, r1)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            java.lang.String r14 = new java.lang.String     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            int r7 = r12 - r11
            r14.<init>(r5, r11, r7, r2)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            int r1 = b(r1)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            int r12 = r12 + r1
            byte[] r1 = b(r5, r12, r3)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            com.tkay.expressad.exoplayer.g.b.a r5 = new com.tkay.expressad.exoplayer.g.b.a     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r5.<init>(r4, r14, r6, r1)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r7 = r20
            goto L38f
        L2e8:
            r0 = move-exception
            r7 = r20
            goto L176
        L2ed:
            r7 = r20
            goto L179
        L2f1:
            r18 = r12
            if (r8 != r14) goto L34a
            if (r9 != r2) goto L34a
            r3 = 77
            if (r10 != r3) goto L34a
            if (r13 == r3) goto L300
            r3 = 2
            if (r0 != r3) goto L34a
        L300:
            r1 = 4
            if (r15 >= r1) goto L308
            r7 = r20
            r5 = 0
            goto L38f
        L308:
            int r1 = r20.d()     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            java.lang.String r2 = a(r1)     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            byte[] r3 = new byte[r11]     // Catch: java.lang.Throwable -> L341 java.io.UnsupportedEncodingException -> L346
            r7 = r20
            r4 = 0
            r7.a(r3, r4, r11)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r5.<init>(r3, r4, r11)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            int r3 = r15 + (-4)
            byte[] r6 = new byte[r3]     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r7.a(r6, r4, r3)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            int r3 = a(r6, r4, r1)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r11.<init>(r6, r4, r3, r2)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            int r4 = b(r1)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            int r3 = r3 + r4
            int r1 = a(r6, r3, r1)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r1 = a(r6, r3, r1, r2)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            com.tkay.expressad.exoplayer.g.b.e r2 = new com.tkay.expressad.exoplayer.g.b.e     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r2.<init>(r5, r11, r1)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r5 = r2
            goto L38f
        L341:
            r0 = move-exception
            r7 = r20
            goto L3b2
        L346:
            r7 = r20
            goto L3b5
        L34a:
            r7 = r20
            if (r8 != r14) goto L366
            r3 = 72
            if (r9 != r3) goto L366
            if (r10 != r1) goto L366
            if (r13 != r5) goto L366
            r1 = r20
            r2 = r15
            r3 = r19
            r4 = r21
            r5 = r22
            r6 = r23
            com.tkay.expressad.exoplayer.g.b.c r5 = a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            goto L38f
        L366:
            if (r8 != r14) goto L380
            r1 = 84
            if (r9 != r1) goto L380
            if (r10 != r2) goto L380
            if (r13 != r14) goto L380
            r1 = r20
            r2 = r15
            r3 = r19
            r4 = r21
            r5 = r22
            r6 = r23
            com.tkay.expressad.exoplayer.g.b.d r5 = b(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            goto L38f
        L380:
            java.lang.String r1 = a(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            byte[] r2 = new byte[r15]     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r3 = 0
            r7.a(r2, r3, r15)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            com.tkay.expressad.exoplayer.g.b.b r5 = new com.tkay.expressad.exoplayer.g.b.b     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r5.<init>(r1, r2)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
        L38f:
            if (r5 != 0) goto L3ba
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r2 = "Failed to decode frame: id="
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r0 = a(r0, r8, r9, r10, r13)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r1.append(r0)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r0 = ", frameSize="
            r1.append(r0)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r1.append(r15)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b5
            r1 = r16
            android.util.Log.w(r1, r0)     // Catch: java.lang.Throwable -> L3b1 java.io.UnsupportedEncodingException -> L3b7
            goto L3ba
        L3b1:
            r0 = move-exception
        L3b2:
            r2 = r18
            goto L3cb
        L3b5:
            r1 = r16
        L3b7:
            r2 = r18
            goto L3c0
        L3ba:
            r2 = r18
            r7.c(r2)
            return r5
        L3c0:
            java.lang.String r0 = "Unsupported character encoding"
            android.util.Log.w(r1, r0)     // Catch: java.lang.Throwable -> L3ca
            r7.c(r2)
            r0 = 0
            return r0
        L3ca:
            r0 = move-exception
        L3cb:
            r7.c(r2)
            throw r0
        L3cf:
            r2 = r12
            r0 = r14
            r1 = r16
            java.lang.String r3 = "Skipping unsupported compressed or encrypted frame"
            android.util.Log.w(r1, r3)
            r7.c(r2)
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.b.k a(com.tkay.expressad.exoplayer.k.s r4, int r5) {
            if (r5 > 0) goto L4
            r4 = 0
            return r4
        L4:
            int r0 = r4.d()
            java.lang.String r1 = a(r0)
            int r5 = r5 + (-1)
            byte[] r2 = new byte[r5]
            r3 = 0
            r4.a(r2, r3, r5)
            int r4 = a(r2, r3, r0)
            java.lang.String r5 = new java.lang.String
            r5.<init>(r2, r3, r4, r1)
            int r3 = b(r0)
            int r4 = r4 + r3
            int r0 = a(r2, r4, r0)
            java.lang.String r4 = a(r2, r4, r0, r1)
            com.tkay.expressad.exoplayer.g.b.k r0 = new com.tkay.expressad.exoplayer.g.b.k
            java.lang.String r1 = "TXXX"
            r0.<init>(r1, r5, r4)
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.b.k a(com.tkay.expressad.exoplayer.k.s r5, int r6, java.lang.String r7) {
            r0 = 0
            if (r6 > 0) goto L4
            return r0
        L4:
            int r1 = r5.d()
            java.lang.String r2 = a(r1)
            int r6 = r6 + (-1)
            byte[] r3 = new byte[r6]
            r4 = 0
            r5.a(r3, r4, r6)
            int r5 = a(r3, r4, r1)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r3, r4, r5, r2)
            com.tkay.expressad.exoplayer.g.b.k r5 = new com.tkay.expressad.exoplayer.g.b.k
            r5.<init>(r7, r0, r6)
            return r5
    }

    private static java.lang.String a(int r1) {
            r0 = 1
            if (r1 == r0) goto L12
            r0 = 2
            if (r1 == r0) goto Lf
            r0 = 3
            if (r1 == r0) goto Lc
            java.lang.String r1 = "ISO-8859-1"
            return r1
        Lc:
            java.lang.String r1 = "UTF-8"
            return r1
        Lf:
            java.lang.String r1 = "UTF-16BE"
            return r1
        L12:
            java.lang.String r1 = "UTF-16"
            return r1
    }

    private static java.lang.String a(int r5, int r6, int r7, int r8, int r9) {
            r0 = 3
            r1 = 1
            r2 = 0
            r3 = 2
            if (r5 != r3) goto L23
            java.util.Locale r5 = java.util.Locale.US
            java.lang.Object[] r9 = new java.lang.Object[r0]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r9[r2] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            r9[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)
            r9[r3] = r6
            java.lang.String r6 = "%c%c%c"
            java.lang.String r5 = java.lang.String.format(r5, r6, r9)
            return r5
        L23:
            java.util.Locale r5 = java.util.Locale.US
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r4[r2] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            r4[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)
            r4[r3] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r9)
            r4[r0] = r6
            java.lang.String r6 = "%c%c%c%c"
            java.lang.String r5 = java.lang.String.format(r5, r6, r4)
            return r5
    }

    private static java.lang.String a(byte[] r1, int r2, int r3, java.lang.String r4) {
            if (r3 <= r2) goto Ld
            int r0 = r1.length
            if (r3 <= r0) goto L6
            goto Ld
        L6:
            java.lang.String r0 = new java.lang.String
            int r3 = r3 - r2
            r0.<init>(r1, r2, r3, r4)
            return r0
        Ld:
            java.lang.String r1 = ""
            return r1
    }

    private static boolean a(com.tkay.expressad.exoplayer.k.s r18, int r19, int r20, boolean r21) {
            r1 = r18
            r0 = r19
            int r2 = r18.c()
        L8:
            int r3 = r18.a()     // Catch: java.lang.Throwable -> Lb4
            r4 = 1
            r5 = r20
            if (r3 < r5) goto Lb0
            r3 = 3
            r6 = 0
            if (r0 < r3) goto L22
            int r7 = r18.i()     // Catch: java.lang.Throwable -> Lb4
            long r8 = r18.h()     // Catch: java.lang.Throwable -> Lb4
            int r10 = r18.e()     // Catch: java.lang.Throwable -> Lb4
            goto L2c
        L22:
            int r7 = r18.g()     // Catch: java.lang.Throwable -> Lb4
            int r8 = r18.g()     // Catch: java.lang.Throwable -> Lb4
            long r8 = (long) r8
            r10 = r6
        L2c:
            r11 = 0
            if (r7 != 0) goto L3a
            int r7 = (r8 > r11 ? 1 : (r8 == r11 ? 0 : -1))
            if (r7 != 0) goto L3a
            if (r10 != 0) goto L3a
            r1.c(r2)
            return r4
        L3a:
            r7 = 4
            if (r0 != r7) goto L6b
            if (r21 != 0) goto L6b
            r13 = 8421504(0x808080, double:4.160776E-317)
            long r13 = r13 & r8
            int r11 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r11 == 0) goto L4b
            r1.c(r2)
            return r6
        L4b:
            r11 = 255(0xff, double:1.26E-321)
            long r13 = r8 & r11
            r15 = 8
            long r15 = r8 >> r15
            long r15 = r15 & r11
            r17 = 7
            long r15 = r15 << r17
            long r13 = r13 | r15
            r15 = 16
            long r15 = r8 >> r15
            long r15 = r15 & r11
            r17 = 14
            long r15 = r15 << r17
            long r13 = r13 | r15
            r15 = 24
            long r8 = r8 >> r15
            long r8 = r8 & r11
            r11 = 21
            long r8 = r8 << r11
            long r8 = r8 | r13
        L6b:
            if (r0 != r7) goto L7c
            r3 = r10 & 64
            if (r3 == 0) goto L73
            r3 = r4
            goto L74
        L73:
            r3 = r6
        L74:
            r7 = r10 & 1
            if (r7 == 0) goto L7a
        L78:
            r7 = r4
            goto L8c
        L7a:
            r7 = r6
            goto L8c
        L7c:
            if (r0 != r3) goto L8a
            r3 = r10 & 32
            if (r3 == 0) goto L84
            r3 = r4
            goto L85
        L84:
            r3 = r6
        L85:
            r7 = r10 & 128(0x80, float:1.8E-43)
            if (r7 == 0) goto L7a
            goto L78
        L8a:
            r3 = r6
            r7 = r3
        L8c:
            if (r3 == 0) goto L8f
            goto L90
        L8f:
            r4 = r6
        L90:
            if (r7 == 0) goto L94
            int r4 = r4 + 4
        L94:
            long r3 = (long) r4
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 >= 0) goto L9d
            r1.c(r2)
            return r6
        L9d:
            int r3 = r18.a()     // Catch: java.lang.Throwable -> Lb4
            long r3 = (long) r3
            int r3 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r3 >= 0) goto Laa
            r1.c(r2)
            return r6
        Laa:
            int r3 = (int) r8
            r1.d(r3)     // Catch: java.lang.Throwable -> Lb4
            goto L8
        Lb0:
            r1.c(r2)
            return r4
        Lb4:
            r0 = move-exception
            r1.c(r2)
            throw r0
    }

    private static int b(int r1) {
            if (r1 == 0) goto L8
            r0 = 3
            if (r1 != r0) goto L6
            goto L8
        L6:
            r1 = 2
            return r1
        L8:
            r1 = 1
            return r1
    }

    private static int b(byte[] r1, int r2) {
        L0:
            int r0 = r1.length
            if (r2 >= r0) goto Lb
            r0 = r1[r2]
            if (r0 != 0) goto L8
            return r2
        L8:
            int r2 = r2 + 1
            goto L0
        Lb:
            int r1 = r1.length
            return r1
    }

    private static com.tkay.expressad.exoplayer.g.b.d b(com.tkay.expressad.exoplayer.k.s r15, int r16, int r17, boolean r18, int r19, com.tkay.expressad.exoplayer.g.b.g.a r20) {
            r0 = r15
            int r1 = r15.c()
            byte[] r2 = r0.a
            int r2 = b(r2, r1)
            java.lang.String r3 = new java.lang.String
            byte[] r4 = r0.a
            int r5 = r2 - r1
            java.lang.String r6 = "ISO-8859-1"
            r3.<init>(r4, r1, r5, r6)
            r4 = 1
            int r2 = r2 + r4
            r15.c(r2)
            int r2 = r15.d()
            r5 = r2 & 2
            r7 = 0
            if (r5 == 0) goto L26
            r5 = r4
            goto L27
        L26:
            r5 = r7
        L27:
            r2 = r2 & r4
            if (r2 == 0) goto L2c
            r2 = r4
            goto L2d
        L2c:
            r2 = r7
        L2d:
            int r8 = r15.d()
            java.lang.String[] r9 = new java.lang.String[r8]
        L33:
            if (r7 >= r8) goto L51
            int r10 = r15.c()
            byte[] r11 = r0.a
            int r11 = b(r11, r10)
            java.lang.String r12 = new java.lang.String
            byte[] r13 = r0.a
            int r14 = r11 - r10
            r12.<init>(r13, r10, r14, r6)
            r9[r7] = r12
            int r11 = r11 + r4
            r15.c(r11)
            int r7 = r7 + 1
            goto L33
        L51:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            int r1 = r1 + r16
        L58:
            int r6 = r15.c()
            if (r6 >= r1) goto L70
            r6 = r17
            r7 = r18
            r8 = r19
            r10 = r20
            com.tkay.expressad.exoplayer.g.b.h r11 = a(r6, r15, r7, r8, r10)
            if (r11 == 0) goto L58
            r4.add(r11)
            goto L58
        L70:
            int r0 = r4.size()
            com.tkay.expressad.exoplayer.g.b.h[] r0 = new com.tkay.expressad.exoplayer.g.b.h[r0]
            r4.toArray(r0)
            com.tkay.expressad.exoplayer.g.b.d r1 = new com.tkay.expressad.exoplayer.g.b.d
            r15 = r1
            r16 = r3
            r17 = r5
            r18 = r2
            r19 = r9
            r20 = r0
            r15.<init>(r16, r17, r18, r19, r20)
            return r1
    }

    private static com.tkay.expressad.exoplayer.g.b.l b(com.tkay.expressad.exoplayer.k.s r4, int r5) {
            if (r5 > 0) goto L4
            r4 = 0
            return r4
        L4:
            int r0 = r4.d()
            java.lang.String r1 = a(r0)
            int r5 = r5 + (-1)
            byte[] r2 = new byte[r5]
            r3 = 0
            r4.a(r2, r3, r5)
            int r4 = a(r2, r3, r0)
            java.lang.String r5 = new java.lang.String
            r5.<init>(r2, r3, r4, r1)
            int r0 = b(r0)
            int r4 = r4 + r0
            int r0 = b(r2, r4)
            java.lang.String r1 = "ISO-8859-1"
            java.lang.String r4 = a(r2, r4, r0, r1)
            com.tkay.expressad.exoplayer.g.b.l r0 = new com.tkay.expressad.exoplayer.g.b.l
            java.lang.String r1 = "WXXX"
            r0.<init>(r1, r5, r4)
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.b.l b(com.tkay.expressad.exoplayer.k.s r3, int r4, java.lang.String r5) {
            byte[] r0 = new byte[r4]
            r1 = 0
            r3.a(r0, r1, r4)
            int r3 = b(r0, r1)
            java.lang.String r4 = new java.lang.String
            java.lang.String r2 = "ISO-8859-1"
            r4.<init>(r0, r1, r3, r2)
            com.tkay.expressad.exoplayer.g.b.l r3 = new com.tkay.expressad.exoplayer.g.b.l
            r0 = 0
            r3.<init>(r5, r0, r4)
            return r3
    }

    private static byte[] b(byte[] r0, int r1, int r2) {
            if (r2 > r1) goto L6
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
        L6:
            byte[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.b.b c(com.tkay.expressad.exoplayer.k.s r2, int r3, java.lang.String r4) {
            byte[] r0 = new byte[r3]
            r1 = 0
            r2.a(r0, r1, r3)
            com.tkay.expressad.exoplayer.g.b.b r2 = new com.tkay.expressad.exoplayer.g.b.b
            r2.<init>(r4, r0)
            return r2
    }

    private static com.tkay.expressad.exoplayer.g.b.j c(com.tkay.expressad.exoplayer.k.s r4, int r5) {
            byte[] r0 = new byte[r5]
            r1 = 0
            r4.a(r0, r1, r5)
            int r4 = b(r0, r1)
            java.lang.String r2 = new java.lang.String
            java.lang.String r3 = "ISO-8859-1"
            r2.<init>(r0, r1, r4, r3)
            int r4 = r4 + 1
            byte[] r4 = b(r0, r4, r5)
            com.tkay.expressad.exoplayer.g.b.j r5 = new com.tkay.expressad.exoplayer.g.b.j
            r5.<init>(r2, r4)
            return r5
    }

    private static com.tkay.expressad.exoplayer.g.b.f d(com.tkay.expressad.exoplayer.k.s r6, int r7) {
            int r0 = r6.d()
            java.lang.String r1 = a(r0)
            int r7 = r7 + (-1)
            byte[] r2 = new byte[r7]
            r3 = 0
            r6.a(r2, r3, r7)
            int r6 = b(r2, r3)
            java.lang.String r4 = new java.lang.String
            java.lang.String r5 = "ISO-8859-1"
            r4.<init>(r2, r3, r6, r5)
            int r6 = r6 + 1
            int r3 = a(r2, r6, r0)
            java.lang.String r6 = a(r2, r6, r3, r1)
            int r5 = b(r0)
            int r3 = r3 + r5
            int r5 = a(r2, r3, r0)
            java.lang.String r1 = a(r2, r3, r5, r1)
            int r0 = b(r0)
            int r5 = r5 + r0
            byte[] r7 = b(r2, r5, r7)
            com.tkay.expressad.exoplayer.g.b.f r0 = new com.tkay.expressad.exoplayer.g.b.f
            r0.<init>(r4, r6, r1, r7)
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.b.e e(com.tkay.expressad.exoplayer.k.s r7, int r8) {
            r0 = 4
            if (r8 >= r0) goto L5
            r7 = 0
            return r7
        L5:
            int r1 = r7.d()
            java.lang.String r2 = a(r1)
            r3 = 3
            byte[] r4 = new byte[r3]
            r5 = 0
            r7.a(r4, r5, r3)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r4, r5, r3)
            int r8 = r8 - r0
            byte[] r0 = new byte[r8]
            r7.a(r0, r5, r8)
            int r7 = a(r0, r5, r1)
            java.lang.String r8 = new java.lang.String
            r8.<init>(r0, r5, r7, r2)
            int r3 = b(r1)
            int r7 = r7 + r3
            int r1 = a(r0, r7, r1)
            java.lang.String r7 = a(r0, r7, r1, r2)
            com.tkay.expressad.exoplayer.g.b.e r0 = new com.tkay.expressad.exoplayer.g.b.e
            r0.<init>(r6, r8, r7)
            return r0
    }

    private static int f(com.tkay.expressad.exoplayer.k.s r4, int r5) {
            byte[] r0 = r4.a
            int r4 = r4.c()
        L6:
            int r1 = r4 + 1
            if (r1 >= r5) goto L22
            r2 = r0[r4]
            r3 = 255(0xff, float:3.57E-43)
            r2 = r2 & r3
            if (r2 != r3) goto L20
            r2 = r0[r1]
            if (r2 != 0) goto L20
            int r2 = r4 + 2
            int r4 = r5 - r4
            int r4 = r4 + (-2)
            java.lang.System.arraycopy(r0, r2, r0, r1, r4)
            int r5 = r5 + (-1)
        L20:
            r4 = r1
            goto L6
        L22:
            return r5
    }

    @Override
    public final com.tkay.expressad.exoplayer.g.a a(com.tkay.expressad.exoplayer.g.e r14) {
            r13 = this;
            java.nio.ByteBuffer r14 = r14.e
            byte[] r0 = r14.array()
            int r14 = r14.limit()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r2.<init>(r0, r14)
            int r14 = r2.a()
            r0 = 2
            r3 = 10
            java.lang.String r4 = "Id3Decoder"
            r5 = 4
            r6 = 0
            r7 = 0
            r8 = 1
            if (r14 >= r3) goto L2b
            java.lang.String r14 = "Data too short to be an ID3 tag"
            android.util.Log.w(r4, r14)
        L28:
            r11 = r6
            goto Lb5
        L2b:
            int r14 = r2.g()
            int r9 = com.tkay.expressad.exoplayer.g.b.g.b
            if (r14 == r9) goto L41
            java.lang.String r14 = java.lang.String.valueOf(r14)
            java.lang.String r9 = "Unexpected first three bytes of ID3 tag header: "
            java.lang.String r14 = r9.concat(r14)
            android.util.Log.w(r4, r14)
            goto L28
        L41:
            int r14 = r2.d()
            r2.d(r8)
            int r9 = r2.d()
            int r10 = r2.l()
            if (r14 != r0) goto L61
            r11 = r9 & 64
            if (r11 == 0) goto L58
            r11 = r8
            goto L59
        L58:
            r11 = r7
        L59:
            if (r11 == 0) goto L97
            java.lang.String r14 = "Skipped ID3 tag with majorVersion=2 and undefined compression scheme"
            android.util.Log.w(r4, r14)
            goto L28
        L61:
            r11 = 3
            if (r14 != r11) goto L77
            r11 = r9 & 64
            if (r11 == 0) goto L6a
            r11 = r8
            goto L6b
        L6a:
            r11 = r7
        L6b:
            if (r11 == 0) goto L97
            int r11 = r2.i()
            r2.d(r11)
            int r11 = r11 + r5
            int r10 = r10 - r11
            goto L97
        L77:
            if (r14 != r5) goto La6
            r11 = r9 & 64
            if (r11 == 0) goto L7f
            r11 = r8
            goto L80
        L7f:
            r11 = r7
        L80:
            if (r11 == 0) goto L8c
            int r11 = r2.l()
            int r12 = r11 + (-4)
            r2.d(r12)
            int r10 = r10 - r11
        L8c:
            r11 = r9 & 16
            if (r11 == 0) goto L92
            r11 = r8
            goto L93
        L92:
            r11 = r7
        L93:
            if (r11 == 0) goto L97
            int r10 = r10 + (-10)
        L97:
            if (r14 >= r5) goto L9f
            r9 = r9 & 128(0x80, float:1.8E-43)
            if (r9 == 0) goto L9f
            r9 = r8
            goto La0
        L9f:
            r9 = r7
        La0:
            com.tkay.expressad.exoplayer.g.b.g$b r11 = new com.tkay.expressad.exoplayer.g.b.g$b
            r11.<init>(r14, r9, r10)
            goto Lb5
        La6:
            java.lang.String r14 = java.lang.String.valueOf(r14)
            java.lang.String r9 = "Skipped ID3 tag with unsupported majorVersion="
            java.lang.String r14 = r9.concat(r14)
            android.util.Log.w(r4, r14)
            goto L28
        Lb5:
            if (r11 != 0) goto Lb8
            return r6
        Lb8:
            int r14 = r2.c()
            int r9 = com.tkay.expressad.exoplayer.g.b.g.b.a(r11)
            if (r9 != r0) goto Lc3
            r3 = 6
        Lc3:
            int r0 = com.tkay.expressad.exoplayer.g.b.g.b.b(r11)
            boolean r9 = com.tkay.expressad.exoplayer.g.b.g.b.c(r11)
            if (r9 == 0) goto Ld5
            int r0 = com.tkay.expressad.exoplayer.g.b.g.b.b(r11)
            int r0 = f(r2, r0)
        Ld5:
            int r14 = r14 + r0
            r2.b(r14)
            int r14 = com.tkay.expressad.exoplayer.g.b.g.b.a(r11)
            boolean r14 = a(r2, r14, r3, r7)
            if (r14 != 0) goto L107
            int r14 = com.tkay.expressad.exoplayer.g.b.g.b.a(r11)
            if (r14 != r5) goto Lf1
            boolean r14 = a(r2, r5, r3, r8)
            if (r14 == 0) goto Lf1
            r7 = r8
            goto L107
        Lf1:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            java.lang.String r0 = "Failed to validate ID3 tag with majorVersion="
            r14.<init>(r0)
            int r0 = com.tkay.expressad.exoplayer.g.b.g.b.a(r11)
            r14.append(r0)
            java.lang.String r14 = r14.toString()
            android.util.Log.w(r4, r14)
            return r6
        L107:
            int r14 = r2.a()
            if (r14 < r3) goto L11d
            int r14 = com.tkay.expressad.exoplayer.g.b.g.b.a(r11)
            com.tkay.expressad.exoplayer.g.b.g$a r0 = r13.q
            com.tkay.expressad.exoplayer.g.b.h r14 = a(r14, r2, r7, r3, r0)
            if (r14 == 0) goto L107
            r1.add(r14)
            goto L107
        L11d:
            com.tkay.expressad.exoplayer.g.a r14 = new com.tkay.expressad.exoplayer.g.a
            r14.<init>(r1)
            return r14
    }
}
