package com.bytedance.pangle.res.a;

public final class b {
    java.util.HashMap<java.lang.Integer, java.lang.Integer> a;
    boolean b;
    com.bytedance.pangle.res.a.g c;
    int d;
    int e;
    int f;
    int g;
    int h;
    private final com.bytedance.pangle.res.a.h i;
    private final byte[] j;
    private boolean k;
    private int[] l;
    private final com.bytedance.pangle.res.a.b.a m;
    private boolean n;
    private int o;
    private int[] p;
    private int q;

    static final class a {
        int[] a;
        int b;
        int c;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 32
                int[] r0 = new int[r0]
                r1.a = r0
                return
        }

        public final void a() {
                r4 = this;
                r4.b()
                int r0 = r4.b
                int[] r1 = r4.a
                r2 = 0
                r1[r0] = r2
                int r3 = r0 + 1
                r1[r3] = r2
                int r0 = r0 + 2
                r4.b = r0
                int r0 = r4.c
                int r0 = r0 + 1
                r4.c = r0
                return
        }

        final void b() {
                r5 = this;
                int[] r0 = r5.a
                int r1 = r0.length
                int r2 = r5.b
                int r1 = r1 - r2
                r3 = 2
                if (r1 <= r3) goto La
                return
            La:
                int r4 = r0.length
                int r4 = r4 + r1
                int r4 = r4 * r3
                int[] r1 = new int[r4]
                r3 = 0
                java.lang.System.arraycopy(r0, r3, r1, r3, r2)
                r5.a = r1
                return
        }
    }

    public b(byte[] r3, com.bytedance.pangle.res.a.h r4) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            r0 = 0
            r2.b = r0
            r2.k = r0
            com.bytedance.pangle.res.a.b$a r1 = new com.bytedance.pangle.res.a.b$a
            r1.<init>()
            r2.m = r1
            r2.d = r0
            r0 = 1
            r2.e = r0
            r0 = 2
            r2.f = r0
            r0 = 3
            r2.g = r0
            r0 = 4
            r2.h = r0
            r2.i = r4
            r2.j = r3
            r2.c()
            return
    }

    private void c() {
            r2 = this;
            r0 = -1
            r2.o = r0
            r1 = 0
            r2.p = r1
            r2.q = r0
            return
    }

    private void d() {
            r14 = this;
            boolean r0 = r14.k
            r1 = 3
            r2 = 0
            r3 = 2
            r4 = 4
            r5 = 1
            if (r0 != 0) goto L4b
            com.bytedance.pangle.res.a.g r0 = r14.c
            int r0 = r0.readInt()
            r6 = 524291(0x80003, float:7.34688E-40)
            if (r0 == r6) goto L3a
            r7 = 524289(0x80001, float:7.34685E-40)
            if (r0 != r7) goto L1a
            goto L3a
        L1a:
            java.io.IOException r4 = new java.io.IOException
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r1[r2] = r6
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)
            r1[r5] = r2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r3] = r0
            java.lang.String r0 = "Expected: 0x%08x or 0x%08x, got: 0x%08x"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            r4.<init>(r0)
            throw r4
        L3a:
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.skipBytes(r4)
            com.bytedance.pangle.res.a.g r0 = r14.c
            com.bytedance.pangle.res.a.l.a(r0)
            com.bytedance.pangle.res.a.b$a r0 = r14.m
            r0.a()
            r14.k = r5
        L4b:
            int r0 = r14.o
            int r6 = r14.e
            if (r0 != r6) goto L52
            return
        L52:
            r14.c()
        L55:
            boolean r6 = r14.n
            if (r6 == 0) goto L79
            r14.n = r2
            com.bytedance.pangle.res.a.b$a r6 = r14.m
            int r7 = r6.b
            if (r7 == 0) goto L79
            int r7 = r6.b
            int r7 = r7 - r5
            int[] r8 = r6.a
            r8 = r8[r7]
            int r7 = r7 - r5
            int r8 = r8 * r3
            int r7 = r7 - r8
            if (r7 == 0) goto L79
            int r7 = r6.b
            int r8 = r8 + 2
            int r7 = r7 - r8
            r6.b = r7
            int r7 = r6.c
            int r7 = r7 - r5
            r6.c = r7
        L79:
            int r6 = r14.g
            if (r0 != r6) goto L99
            com.bytedance.pangle.res.a.b$a r6 = r14.m
            int r6 = r6.c
            if (r6 != r5) goto L99
            com.bytedance.pangle.res.a.b$a r6 = r14.m
            int r7 = r6.b
            if (r7 != 0) goto L8b
            r6 = r2
            goto L92
        L8b:
            int r7 = r6.b
            int r7 = r7 - r5
            int[] r6 = r6.a
            r6 = r6[r7]
        L92:
            if (r6 != 0) goto L99
            int r0 = r14.e
            r14.o = r0
            return
        L99:
            int r6 = r14.d
            r7 = 1048834(0x100102, float:1.46973E-39)
            if (r0 != r6) goto La2
            r6 = r7
            goto La8
        La2:
            com.bytedance.pangle.res.a.g r6 = r14.c
            int r6 = r6.readInt()
        La8:
            r8 = 524672(0x80180, float:7.35222E-40)
            java.lang.String r9 = ")."
            if (r6 != r8) goto L12f
            java.util.HashMap<java.lang.Integer, java.lang.Integer> r6 = r14.a
            r6.clear()
            com.bytedance.pangle.res.a.g r6 = r14.c
            int r6 = r6.readInt()
            r7 = 8
            if (r6 < r7) goto L118
            int r7 = r6 % 4
            if (r7 != 0) goto L118
            com.bytedance.pangle.res.a.g r7 = r14.c
            int r7 = com.bytedance.pangle.res.a.k.a(r7)
            com.bytedance.pangle.res.a.g r8 = r14.c
            int r6 = r6 / 4
            int r6 = r6 - r3
            int[] r6 = r8.a(r6)
            r14.l = r6
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r8 = r2
        Ld9:
            int[] r9 = r14.l
            int r10 = r9.length
            if (r8 >= r10) goto L106
            byte[] r10 = r14.j
            r9 = r9[r8]
            int r11 = r8 * 4
            int r11 = r11 + r7
            com.bytedance.pangle.res.a.h r12 = r14.i
            int r9 = com.bytedance.pangle.res.a.k.a(r10, r9, r11, r12)
            r10 = 2130706432(0x7f000000, float:1.7014118E38)
            if (r9 < r10) goto L103
            java.util.HashMap<java.lang.Integer, java.lang.Integer> r10 = r14.a
            java.lang.Integer r11 = java.lang.Integer.valueOf(r8)
            java.lang.Integer r12 = java.lang.Integer.valueOf(r9)
            r10.put(r11, r12)
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            r6.add(r9)
        L103:
            int r8 = r8 + 1
            goto Ld9
        L106:
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>(r6)
            java.util.Collections.sort(r7)
            boolean r6 = r6.equals(r7)
            if (r6 != 0) goto L55
            r14.b = r5
            goto L55
        L118:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid resource ids size ("
            r1.<init>(r2)
            r1.append(r6)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L12f:
            r8 = 1048832(0x100100, float:1.469727E-39)
            if (r6 < r8) goto L293
            r10 = 1048836(0x100104, float:1.469732E-39)
            if (r6 > r10) goto L293
            if (r6 != r7) goto L143
            r9 = -1
            if (r0 != r9) goto L143
            int r0 = r14.d
            r14.o = r0
            return
        L143:
            com.bytedance.pangle.res.a.g r9 = r14.c
            r9.skipBytes(r4)
            com.bytedance.pangle.res.a.g r9 = r14.c
            r9.readInt()
            com.bytedance.pangle.res.a.g r9 = r14.c
            r9.skipBytes(r4)
            if (r6 == r8) goto L222
            r9 = 1048833(0x100101, float:1.469728E-39)
            if (r6 != r9) goto L15b
            goto L222
        L15b:
            if (r6 != r7) goto L1f6
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.readInt()
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.readInt()
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.skipBytes(r4)
            com.bytedance.pangle.res.a.g r0 = r14.c
            int r0 = r0.readInt()
            r6 = 65535(0xffff, float:9.1834E-41)
            r0 = r0 & r6
            com.bytedance.pangle.res.a.g r7 = r14.c
            int r7 = r7.readInt()
            r14.q = r7
            r6 = r6 & r7
            int r6 = r6 - r5
            r14.q = r6
            com.bytedance.pangle.res.a.g r6 = r14.c
            int r6 = com.bytedance.pangle.res.a.k.a(r6)
            com.bytedance.pangle.res.a.g r7 = r14.c
            int r8 = r0 * 5
            int[] r7 = r7.a(r8)
            r14.p = r7
        L192:
            int[] r7 = r14.p
            int r9 = r7.length
            if (r1 >= r9) goto L1a0
            r9 = r7[r1]
            int r9 = r9 >>> 24
            r7[r1] = r9
            int r1 = r1 + 5
            goto L192
        L1a0:
            int r1 = r7.length
            if (r1 != r8) goto L1f0
            r1 = r2
        L1a4:
            if (r2 >= r0) goto L1d7
            int[] r7 = r14.p
            int r8 = r2 * 5
            int r9 = r8 + 1
            r7 = r7[r9]
            java.util.HashMap<java.lang.Integer, java.lang.Integer> r9 = r14.a
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            boolean r7 = r9.containsKey(r7)
            if (r7 == 0) goto L1bb
            r1 = r5
        L1bb:
            int[] r7 = r14.p
            int r9 = r8 + 3
            r7 = r7[r9]
            if (r7 == r5) goto L1c5
            if (r7 != r3) goto L1d4
        L1c5:
            int[] r7 = r14.p
            int r8 = r8 + 4
            r7 = r7[r8]
            byte[] r9 = r14.j
            int r8 = r8 * r4
            int r8 = r8 + r6
            com.bytedance.pangle.res.a.h r10 = r14.i
            com.bytedance.pangle.res.a.k.a(r9, r7, r8, r10)
        L1d4:
            int r2 = r2 + 1
            goto L1a4
        L1d7:
            if (r1 == 0) goto L1e6
            boolean r1 = r14.b
            if (r1 == 0) goto L1e6
            byte[] r1 = r14.j
            int[] r2 = r14.p
            java.util.HashMap<java.lang.Integer, java.lang.Integer> r3 = r14.a
            com.bytedance.pangle.res.a.k.a(r6, r1, r2, r0, r3)
        L1e6:
            com.bytedance.pangle.res.a.b$a r0 = r14.m
            r0.a()
            int r0 = r14.f
            r14.o = r0
            return
        L1f0:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>()
            throw r0
        L1f6:
            r7 = 1048835(0x100103, float:1.469731E-39)
            if (r6 != r7) goto L20c
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.readInt()
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.readInt()
            int r0 = r14.g
            r14.o = r0
            r14.n = r5
            return
        L20c:
            if (r6 != r10) goto L55
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.readInt()
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.skipBytes(r4)
            com.bytedance.pangle.res.a.g r0 = r14.c
            r0.skipBytes(r4)
            int r0 = r14.h
            r14.o = r0
            return
        L222:
            if (r6 != r8) goto L263
            com.bytedance.pangle.res.a.g r6 = r14.c
            int r6 = r6.readInt()
            com.bytedance.pangle.res.a.g r7 = r14.c
            int r7 = r7.readInt()
            com.bytedance.pangle.res.a.b$a r8 = r14.m
            int r9 = r8.c
            if (r9 != 0) goto L239
            r8.a()
        L239:
            r8.b()
            int r9 = r8.b
            int r9 = r9 - r5
            int[] r10 = r8.a
            r10 = r10[r9]
            int[] r11 = r8.a
            int r12 = r9 + (-1)
            int r13 = r10 * 2
            int r12 = r12 - r13
            int r10 = r10 + r5
            r11[r12] = r10
            int[] r11 = r8.a
            r11[r9] = r6
            int[] r6 = r8.a
            int r11 = r9 + 1
            r6[r11] = r7
            int[] r6 = r8.a
            int r9 = r9 + r3
            r6[r9] = r10
            int r6 = r8.b
            int r6 = r6 + r3
            r8.b = r6
            goto L55
        L263:
            com.bytedance.pangle.res.a.g r6 = r14.c
            r6.skipBytes(r4)
            com.bytedance.pangle.res.a.g r6 = r14.c
            r6.skipBytes(r4)
            com.bytedance.pangle.res.a.b$a r6 = r14.m
            int r7 = r6.b
            if (r7 == 0) goto L55
            int r7 = r6.b
            int r7 = r7 - r5
            int[] r8 = r6.a
            r8 = r8[r7]
            if (r8 == 0) goto L55
            int r8 = r8 + (-1)
            int r7 = r7 + (-2)
            int[] r9 = r6.a
            r9[r7] = r8
            int r9 = r8 * 2
            int r9 = r9 + r5
            int r7 = r7 - r9
            int[] r9 = r6.a
            r9[r7] = r8
            int r7 = r6.b
            int r7 = r7 - r3
            r6.b = r7
            goto L55
        L293:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid chunk type ("
            r1.<init>(r2)
            r1.append(r6)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final void a() {
            r2 = this;
            boolean r0 = r2.k
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r2.k = r0
            r1 = 0
            r2.c = r1
            r2.l = r1
            com.bytedance.pangle.res.a.b$a r1 = r2.m
            r1.b = r0
            r1.c = r0
            r2.c()
            return
    }

    public final int b() {
            r2 = this;
            com.bytedance.pangle.res.a.g r0 = r2.c
            if (r0 == 0) goto Lf
            r2.d()     // Catch: java.io.IOException -> La
            int r0 = r2.o     // Catch: java.io.IOException -> La
            return r0
        La:
            r0 = move-exception
            r2.a()
            throw r0
        Lf:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Parser is not opened."
            r0.<init>(r1)
            throw r0
    }
}
