package com.bytedance.pangle.f.a;

final class a {
    int a;
    com.bytedance.pangle.f.a.b b;
    int[] c;
    int d;
    int e;
    int f;
    int g;
    int h;
    private boolean i;
    private boolean j;
    private com.bytedance.pangle.f.a.f k;
    private final com.bytedance.pangle.f.a.c l;

    public a() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.j = r0
            com.bytedance.pangle.f.a.c r1 = new com.bytedance.pangle.f.a.c
            r1.<init>()
            r2.l = r1
            r2.d = r0
            r0 = 1
            r2.e = r0
            r0 = 2
            r2.f = r0
            r0 = 3
            r2.g = r0
            r0 = 4
            r2.h = r0
            r2.c()
            return
    }

    private void c() {
            r1 = this;
            r0 = 0
            r1.c = r0
            r0 = -1
            r1.a = r0
            return
    }

    private int e(int r4) {
            r3 = this;
            int r0 = r3.a
            r1 = 2
            if (r0 != r1) goto L26
            int r0 = r4 * 5
            int[] r1 = r3.c
            int r1 = r1.length
            if (r0 >= r1) goto Ld
            return r0
        Ld:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid attribute index ("
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = ")."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L26:
            java.lang.IndexOutOfBoundsException r4 = new java.lang.IndexOutOfBoundsException
            java.lang.String r0 = "Current event is not START_TAG."
            r4.<init>(r0)
            throw r4
    }

    public final java.lang.String a(int r2) {
            r1 = this;
            int r2 = r1.e(r2)
            int[] r0 = r1.c
            int r2 = r2 + 1
            r2 = r0[r2]
            r0 = -1
            if (r2 != r0) goto L10
            java.lang.String r2 = ""
            return r2
        L10:
            com.bytedance.pangle.f.a.f r0 = r1.k
            java.lang.String r2 = r0.a(r2)
            return r2
    }

    public final void a() {
            r4 = this;
            boolean r0 = r4.j
            if (r0 == 0) goto L23
            r0 = 0
            r4.j = r0
            com.bytedance.pangle.f.a.b r1 = r4.b
            java.io.InputStream r2 = r1.a
            r3 = 0
            if (r2 == 0) goto L16
            java.io.InputStream r2 = r1.a     // Catch: java.io.IOException -> L13
            r2.close()     // Catch: java.io.IOException -> L13
        L13:
            r1.a(r3)
        L16:
            r4.k = r3
            r4.b = r3
            com.bytedance.pangle.f.a.c r1 = r4.l
            r1.b = r0
            r1.c = r0
            r4.c()
        L23:
            return
    }

    public final int b() {
            r10 = this;
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            if (r0 == 0) goto L240
            com.bytedance.pangle.f.a.f r0 = r10.k     // Catch: java.io.IOException -> L248
            r1 = 1
            if (r0 != 0) goto L7a
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r2 = 524291(0x80003, float:7.34688E-40)
            r0.b(r2)     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.b()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r2 = 1835009(0x1c0001, float:2.571395E-39)
            r0.b(r2)     // Catch: java.io.IOException -> L248
            int r2 = r0.a()     // Catch: java.io.IOException -> L248
            int r3 = r0.a()     // Catch: java.io.IOException -> L248
            int r4 = r0.a()     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            int r5 = r0.a()     // Catch: java.io.IOException -> L248
            int r6 = r0.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.f r7 = new com.bytedance.pangle.f.a.f     // Catch: java.io.IOException -> L248
            r7.<init>()     // Catch: java.io.IOException -> L248
            int[] r3 = r0.a(r3)     // Catch: java.io.IOException -> L248
            r7.a = r3     // Catch: java.io.IOException -> L248
            if (r4 == 0) goto L45
            r0.a(r4)     // Catch: java.io.IOException -> L248
        L45:
            if (r6 != 0) goto L49
            r3 = r2
            goto L4a
        L49:
            r3 = r6
        L4a:
            int r3 = r3 - r5
            int r4 = r3 % 4
            if (r4 != 0) goto L74
            int r3 = r3 / 4
            int[] r3 = r0.a(r3)     // Catch: java.io.IOException -> L248
            r7.b = r3     // Catch: java.io.IOException -> L248
            if (r6 == 0) goto L6a
            int r2 = r2 - r6
            int r3 = r2 % 4
            if (r3 != 0) goto L64
            int r2 = r2 / 4
            r0.a(r2)     // Catch: java.io.IOException -> L248
            goto L6a
        L64:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L248
            r0.<init>()     // Catch: java.io.IOException -> L248
            throw r0     // Catch: java.io.IOException -> L248
        L6a:
            r10.k = r7     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.c r0 = r10.l     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            r10.j = r1     // Catch: java.io.IOException -> L248
            goto L7a
        L74:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L248
            r0.<init>()     // Catch: java.io.IOException -> L248
            throw r0     // Catch: java.io.IOException -> L248
        L7a:
            int r0 = r10.a     // Catch: java.io.IOException -> L248
            int r2 = r10.e     // Catch: java.io.IOException -> L248
            if (r0 == r2) goto L23d
            int r0 = r10.a     // Catch: java.io.IOException -> L248
            r10.c()     // Catch: java.io.IOException -> L248
        L85:
            boolean r2 = r10.i     // Catch: java.io.IOException -> L248
            r3 = 0
            if (r2 == 0) goto Lac
            r10.i = r3     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.c r2 = r10.l     // Catch: java.io.IOException -> L248
            int r4 = r2.b     // Catch: java.io.IOException -> L248
            if (r4 == 0) goto Lac
            int r4 = r2.b     // Catch: java.io.IOException -> L248
            int r4 = r4 - r1
            int[] r5 = r2.a     // Catch: java.io.IOException -> L248
            r5 = r5[r4]     // Catch: java.io.IOException -> L248
            int r4 = r4 + (-1)
            int r5 = r5 * 2
            int r4 = r4 - r5
            if (r4 == 0) goto Lac
            int r4 = r2.b     // Catch: java.io.IOException -> L248
            int r5 = r5 + 2
            int r4 = r4 - r5
            r2.b = r4     // Catch: java.io.IOException -> L248
            int r4 = r2.c     // Catch: java.io.IOException -> L248
            int r4 = r4 - r1
            r2.c = r4     // Catch: java.io.IOException -> L248
        Lac:
            int r2 = r10.g     // Catch: java.io.IOException -> L248
            if (r0 != r2) goto Lcc
            com.bytedance.pangle.f.a.c r2 = r10.l     // Catch: java.io.IOException -> L248
            int r2 = r2.c     // Catch: java.io.IOException -> L248
            if (r2 != r1) goto Lcc
            com.bytedance.pangle.f.a.c r2 = r10.l     // Catch: java.io.IOException -> L248
            int r4 = r2.b     // Catch: java.io.IOException -> L248
            if (r4 != 0) goto Lbd
            goto Lc4
        Lbd:
            int r3 = r2.b     // Catch: java.io.IOException -> L248
            int r3 = r3 - r1
            int[] r2 = r2.a     // Catch: java.io.IOException -> L248
            r3 = r2[r3]     // Catch: java.io.IOException -> L248
        Lc4:
            if (r3 != 0) goto Lcc
            int r0 = r10.e     // Catch: java.io.IOException -> L248
            r10.a = r0     // Catch: java.io.IOException -> L248
            goto L23d
        Lcc:
            int r2 = r10.d     // Catch: java.io.IOException -> L248
            r3 = 1048834(0x100102, float:1.46973E-39)
            if (r0 != r2) goto Ld5
            r2 = r3
            goto Ldb
        Ld5:
            com.bytedance.pangle.f.a.b r2 = r10.b     // Catch: java.io.IOException -> L248
            int r2 = r2.a()     // Catch: java.io.IOException -> L248
        Ldb:
            r4 = 524672(0x80180, float:7.35222E-40)
            java.lang.String r5 = ")."
            if (r2 != r4) goto L111
            com.bytedance.pangle.f.a.b r2 = r10.b     // Catch: java.io.IOException -> L248
            int r2 = r2.a()     // Catch: java.io.IOException -> L248
            r3 = 8
            if (r2 < r3) goto Lfa
            int r3 = r2 % 4
            if (r3 != 0) goto Lfa
            com.bytedance.pangle.f.a.b r3 = r10.b     // Catch: java.io.IOException -> L248
            int r2 = r2 / 4
            int r2 = r2 + (-2)
            r3.a(r2)     // Catch: java.io.IOException -> L248
            goto L85
        Lfa:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L248
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L248
            java.lang.String r3 = "Invalid resource ids size ("
            r1.<init>(r3)     // Catch: java.io.IOException -> L248
            r1.append(r2)     // Catch: java.io.IOException -> L248
            r1.append(r5)     // Catch: java.io.IOException -> L248
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L248
            r0.<init>(r1)     // Catch: java.io.IOException -> L248
            throw r0     // Catch: java.io.IOException -> L248
        L111:
            r4 = 1048832(0x100100, float:1.469727E-39)
            if (r2 < r4) goto L226
            r6 = 1048836(0x100104, float:1.469732E-39)
            if (r2 > r6) goto L226
            if (r2 != r3) goto L126
            r5 = -1
            if (r0 != r5) goto L126
            int r0 = r10.d     // Catch: java.io.IOException -> L248
            r10.a = r0     // Catch: java.io.IOException -> L248
            goto L23d
        L126:
            com.bytedance.pangle.f.a.b r5 = r10.b     // Catch: java.io.IOException -> L248
            r5.b()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r5 = r10.b     // Catch: java.io.IOException -> L248
            r5.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r5 = r10.b     // Catch: java.io.IOException -> L248
            r5.b()     // Catch: java.io.IOException -> L248
            if (r2 == r4) goto L1b2
            r5 = 1048833(0x100101, float:1.469728E-39)
            if (r2 != r5) goto L13e
            goto L1b2
        L13e:
            if (r2 != r3) goto L184
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.b()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            int r0 = r0.a()     // Catch: java.io.IOException -> L248
            r1 = 65535(0xffff, float:9.1834E-41)
            r0 = r0 & r1
            com.bytedance.pangle.f.a.b r1 = r10.b     // Catch: java.io.IOException -> L248
            r1.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r1 = r10.b     // Catch: java.io.IOException -> L248
            int r0 = r0 * 5
            int[] r0 = r1.a(r0)     // Catch: java.io.IOException -> L248
            r10.c = r0     // Catch: java.io.IOException -> L248
            r0 = 3
        L169:
            int[] r1 = r10.c     // Catch: java.io.IOException -> L248
            int r1 = r1.length     // Catch: java.io.IOException -> L248
            if (r0 >= r1) goto L179
            int[] r1 = r10.c     // Catch: java.io.IOException -> L248
            r2 = r1[r0]     // Catch: java.io.IOException -> L248
            int r2 = r2 >>> 24
            r1[r0] = r2     // Catch: java.io.IOException -> L248
            int r0 = r0 + 5
            goto L169
        L179:
            com.bytedance.pangle.f.a.c r0 = r10.l     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            int r0 = r10.f     // Catch: java.io.IOException -> L248
            r10.a = r0     // Catch: java.io.IOException -> L248
            goto L23d
        L184:
            r3 = 1048835(0x100103, float:1.469731E-39)
            if (r2 != r3) goto L19b
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            int r0 = r10.g     // Catch: java.io.IOException -> L248
            r10.a = r0     // Catch: java.io.IOException -> L248
            r10.i = r1     // Catch: java.io.IOException -> L248
            goto L23d
        L19b:
            if (r2 != r6) goto L85
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.b()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r0 = r10.b     // Catch: java.io.IOException -> L248
            r0.b()     // Catch: java.io.IOException -> L248
            int r0 = r10.h     // Catch: java.io.IOException -> L248
            r10.a = r0     // Catch: java.io.IOException -> L248
            goto L23d
        L1b2:
            if (r2 != r4) goto L1f5
            com.bytedance.pangle.f.a.b r2 = r10.b     // Catch: java.io.IOException -> L248
            int r2 = r2.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r3 = r10.b     // Catch: java.io.IOException -> L248
            int r3 = r3.a()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.c r4 = r10.l     // Catch: java.io.IOException -> L248
            int r5 = r4.c     // Catch: java.io.IOException -> L248
            if (r5 != 0) goto L1c9
            r4.a()     // Catch: java.io.IOException -> L248
        L1c9:
            r4.b()     // Catch: java.io.IOException -> L248
            int r5 = r4.b     // Catch: java.io.IOException -> L248
            int r5 = r5 - r1
            int[] r6 = r4.a     // Catch: java.io.IOException -> L248
            r6 = r6[r5]     // Catch: java.io.IOException -> L248
            int[] r7 = r4.a     // Catch: java.io.IOException -> L248
            int r8 = r5 + (-1)
            int r9 = r6 * 2
            int r8 = r8 - r9
            int r6 = r6 + r1
            r7[r8] = r6     // Catch: java.io.IOException -> L248
            int[] r7 = r4.a     // Catch: java.io.IOException -> L248
            r7[r5] = r2     // Catch: java.io.IOException -> L248
            int[] r2 = r4.a     // Catch: java.io.IOException -> L248
            int r7 = r5 + 1
            r2[r7] = r3     // Catch: java.io.IOException -> L248
            int[] r2 = r4.a     // Catch: java.io.IOException -> L248
            int r5 = r5 + 2
            r2[r5] = r6     // Catch: java.io.IOException -> L248
            int r2 = r4.b     // Catch: java.io.IOException -> L248
            int r2 = r2 + 2
            r4.b = r2     // Catch: java.io.IOException -> L248
            goto L85
        L1f5:
            com.bytedance.pangle.f.a.b r2 = r10.b     // Catch: java.io.IOException -> L248
            r2.b()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.b r2 = r10.b     // Catch: java.io.IOException -> L248
            r2.b()     // Catch: java.io.IOException -> L248
            com.bytedance.pangle.f.a.c r2 = r10.l     // Catch: java.io.IOException -> L248
            int r3 = r2.b     // Catch: java.io.IOException -> L248
            if (r3 == 0) goto L85
            int r3 = r2.b     // Catch: java.io.IOException -> L248
            int r3 = r3 - r1
            int[] r4 = r2.a     // Catch: java.io.IOException -> L248
            r4 = r4[r3]     // Catch: java.io.IOException -> L248
            if (r4 == 0) goto L85
            int r4 = r4 + (-1)
            int r3 = r3 + (-2)
            int[] r5 = r2.a     // Catch: java.io.IOException -> L248
            r5[r3] = r4     // Catch: java.io.IOException -> L248
            int r5 = r4 * 2
            int r5 = r5 + r1
            int r3 = r3 - r5
            int[] r5 = r2.a     // Catch: java.io.IOException -> L248
            r5[r3] = r4     // Catch: java.io.IOException -> L248
            int r3 = r2.b     // Catch: java.io.IOException -> L248
            int r3 = r3 + (-2)
            r2.b = r3     // Catch: java.io.IOException -> L248
            goto L85
        L226:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L248
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L248
            java.lang.String r3 = "Invalid chunk type ("
            r1.<init>(r3)     // Catch: java.io.IOException -> L248
            r1.append(r2)     // Catch: java.io.IOException -> L248
            r1.append(r5)     // Catch: java.io.IOException -> L248
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L248
            r0.<init>(r1)     // Catch: java.io.IOException -> L248
            throw r0     // Catch: java.io.IOException -> L248
        L23d:
            int r0 = r10.a     // Catch: java.io.IOException -> L248
            return r0
        L240:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L248
            java.lang.String r1 = "Parser is not opened."
            r0.<init>(r1)     // Catch: java.io.IOException -> L248
            throw r0     // Catch: java.io.IOException -> L248
        L248:
            r0 = move-exception
            r10.a()
            throw r0
    }

    public final int b(int r2) {
            r1 = this;
            int r2 = r1.e(r2)
            int[] r0 = r1.c
            int r2 = r2 + 3
            r2 = r0[r2]
            return r2
    }

    public final int c(int r2) {
            r1 = this;
            int r2 = r1.e(r2)
            int[] r0 = r1.c
            int r2 = r2 + 4
            r2 = r0[r2]
            return r2
    }

    public final java.lang.String d(int r4) {
            r3 = this;
            int r4 = r3.e(r4)
            int[] r0 = r3.c
            int r1 = r4 + 3
            r1 = r0[r1]
            r2 = 3
            if (r1 != r2) goto L18
            int r4 = r4 + 2
            r4 = r0[r4]
            com.bytedance.pangle.f.a.f r0 = r3.k
            java.lang.String r4 = r0.a(r4)
            return r4
        L18:
            java.lang.String r4 = ""
            return r4
    }
}
