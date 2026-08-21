package com.xiaomi.push;

public final class b {
    private int a;
    private final java.io.InputStream a;
    private final byte[] a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;

    private b(java.io.InputStream r2) {
            r1 = this;
            r1.<init>()
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.f = r0
            r0 = 64
            r1.h = r0
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r1.i = r0
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            r1.a = r0
            r0 = 0
            r1.a = r0
            r1.c = r0
            r1.a = r2
            return
    }

    private b(byte[] r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.f = r0
            r0 = 64
            r1.h = r0
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r1.i = r0
            r1.a = r2
            int r4 = r4 + r3
            r1.a = r4
            r1.c = r3
            r2 = 0
            r1.a = r2
            return
    }

    public static com.xiaomi.push.b a(java.io.InputStream r1) {
            com.xiaomi.push.b r0 = new com.xiaomi.push.b
            r0.<init>(r1)
            return r0
    }

    public static com.xiaomi.push.b a(byte[] r1, int r2, int r3) {
            com.xiaomi.push.b r0 = new com.xiaomi.push.b
            r0.<init>(r1, r2, r3)
            return r0
    }

    private boolean a(boolean r6) {
            r5 = this;
            int r0 = r5.c
            int r1 = r5.a
            if (r0 < r1) goto L71
            int r0 = r5.e
            int r2 = r0 + r1
            int r3 = r5.f
            r4 = 0
            if (r2 != r3) goto L17
            if (r6 != 0) goto L12
            return r4
        L12:
            com.xiaomi.push.d r6 = com.xiaomi.push.d.a()
            throw r6
        L17:
            int r0 = r0 + r1
            r5.e = r0
            r5.c = r4
            java.io.InputStream r0 = r5.a
            r1 = -1
            if (r0 != 0) goto L23
            r0 = r1
            goto L29
        L23:
            byte[] r2 = r5.a
            int r0 = r0.read(r2)
        L29:
            r5.a = r0
            if (r0 == 0) goto L53
            if (r0 < r1) goto L53
            if (r0 != r1) goto L3b
            r5.a = r4
            if (r6 != 0) goto L36
            return r4
        L36:
            com.xiaomi.push.d r6 = com.xiaomi.push.d.a()
            throw r6
        L3b:
            r5.b()
            int r6 = r5.e
            int r0 = r5.a
            int r6 = r6 + r0
            int r0 = r5.b
            int r6 = r6 + r0
            int r0 = r5.i
            if (r6 > r0) goto L4e
            if (r6 < 0) goto L4e
            r6 = 1
            return r6
        L4e:
            com.xiaomi.push.d r6 = com.xiaomi.push.d.h()
            throw r6
        L53:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "InputStream#read(byte[]) returned invalid result: "
            r0.append(r1)
            int r1 = r5.a
            r0.append(r1)
            java.lang.String r1 = "\nThe InputStream implementation is buggy."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L71:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "refillBuffer() called when buffer wasn't empty."
            r6.<init>(r0)
            throw r6
    }

    private void b() {
            r3 = this;
            int r0 = r3.a
            int r1 = r3.b
            int r0 = r0 + r1
            r3.a = r0
            int r1 = r3.e
            int r1 = r1 + r0
            int r2 = r3.f
            if (r1 <= r2) goto L15
            int r1 = r1 - r2
            r3.b = r1
            int r0 = r0 - r1
            r3.a = r0
            goto L18
        L15:
            r0 = 0
            r3.b = r0
        L18:
            return
    }

    public byte a() {
            r3 = this;
            int r0 = r3.c
            int r1 = r3.a
            if (r0 != r1) goto La
            r0 = 1
            r3.a(r0)
        La:
            byte[] r0 = r3.a
            int r1 = r3.c
            int r2 = r1 + 1
            r3.c = r2
            r0 = r0[r1]
            return r0
    }

    public int a() {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto La
            r0 = 0
            r1.d = r0
            return r0
        La:
            int r0 = r1.d()
            r1.d = r0
            if (r0 == 0) goto L13
            return r0
        L13:
            com.xiaomi.push.d r0 = com.xiaomi.push.d.d()
            throw r0
    }

    public int a(int r3) {
            r2 = this;
            if (r3 < 0) goto L17
            int r0 = r2.e
            int r1 = r2.c
            int r0 = r0 + r1
            int r3 = r3 + r0
            int r0 = r2.f
            if (r3 > r0) goto L12
            r2.f = r3
            r2.b()
            return r0
        L12:
            com.xiaomi.push.d r3 = com.xiaomi.push.d.a()
            throw r3
        L17:
            com.xiaomi.push.d r3 = com.xiaomi.push.d.b()
            throw r3
    }

    public long a() {
            r2 = this;
            long r0 = r2.c()
            return r0
    }

    public com.xiaomi.push.a a() {
            r3 = this;
            int r0 = r3.d()
            int r1 = r3.a
            int r2 = r3.c
            int r1 = r1 - r2
            if (r0 > r1) goto L19
            if (r0 <= 0) goto L19
            byte[] r1 = r3.a
            com.xiaomi.push.a r1 = com.xiaomi.push.a.a(r1, r2, r0)
            int r2 = r3.c
            int r2 = r2 + r0
            r3.c = r2
            return r1
        L19:
            byte[] r0 = r3.a(r0)
            com.xiaomi.push.a r0 = com.xiaomi.push.a.a(r0)
            return r0
    }

    public java.lang.String a() {
            r5 = this;
            int r0 = r5.d()
            int r1 = r5.a
            int r2 = r5.c
            int r1 = r1 - r2
            java.lang.String r2 = "UTF-8"
            if (r0 > r1) goto L1e
            if (r0 <= 0) goto L1e
            java.lang.String r1 = new java.lang.String
            byte[] r3 = r5.a
            int r4 = r5.c
            r1.<init>(r3, r4, r0, r2)
            int r2 = r5.c
            int r2 = r2 + r0
            r5.c = r2
            return r1
        L1e:
            java.lang.String r1 = new java.lang.String
            byte[] r0 = r5.a(r0)
            r1.<init>(r0, r2)
            return r1
    }

    public void a() {
            r1 = this;
        L0:
            int r0 = r1.a()
            if (r0 == 0) goto Lc
            boolean r0 = r1.a(r0)
            if (r0 != 0) goto L0
        Lc:
            return
    }

    public void a(int r2) {
            r1 = this;
            int r0 = r1.d
            if (r0 != r2) goto L5
            return
        L5:
            com.xiaomi.push.d r2 = com.xiaomi.push.d.e()
            throw r2
    }

    public void a(com.xiaomi.push.e r4) {
            r3 = this;
            int r0 = r3.d()
            int r1 = r3.g
            int r2 = r3.h
            if (r1 >= r2) goto L25
            int r0 = r3.a(r0)
            int r1 = r3.g
            int r1 = r1 + 1
            r3.g = r1
            r4.a(r3)
            r4 = 0
            r3.a(r4)
            int r4 = r3.g
            int r4 = r4 + (-1)
            r3.g = r4
            r3.b(r0)
            return
        L25:
            com.xiaomi.push.d r4 = com.xiaomi.push.d.g()
            throw r4
    }

    public boolean a() {
            r1 = this;
            int r0 = r1.d()
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean a(int r5) {
            r4 = this;
            int r0 = com.xiaomi.push.f.a(r5)
            r1 = 1
            if (r0 == 0) goto L3b
            if (r0 == r1) goto L37
            r2 = 2
            if (r0 == r2) goto L2f
            r2 = 3
            r3 = 4
            if (r0 == r2) goto L20
            if (r0 == r3) goto L1e
            r5 = 5
            if (r0 != r5) goto L19
            r4.e()
            return r1
        L19:
            com.xiaomi.push.d r5 = com.xiaomi.push.d.f()
            throw r5
        L1e:
            r5 = 0
            return r5
        L20:
            r4.a()
            int r5 = com.xiaomi.push.f.b(r5)
            int r5 = com.xiaomi.push.f.a(r5, r3)
            r4.a(r5)
            return r1
        L2f:
            int r5 = r4.d()
            r4.c(r5)
            return r1
        L37:
            r4.d()
            return r1
        L3b:
            r4.b()
            return r1
    }

    public byte[] a(int r13) {
            r12 = this;
            if (r13 < 0) goto Lb2
            int r0 = r12.e
            int r1 = r12.c
            int r2 = r0 + r1
            int r2 = r2 + r13
            int r3 = r12.f
            if (r2 > r3) goto La8
            int r2 = r12.a
            int r3 = r2 - r1
            r4 = 0
            if (r13 > r3) goto L21
            byte[] r0 = new byte[r13]
            byte[] r2 = r12.a
            java.lang.System.arraycopy(r2, r1, r0, r4, r13)
            int r1 = r12.c
            int r1 = r1 + r13
            r12.c = r1
            return r0
        L21:
            r3 = 4096(0x1000, float:5.74E-42)
            if (r13 >= r3) goto L4e
            byte[] r0 = new byte[r13]
            int r2 = r2 - r1
            byte[] r3 = r12.a
            java.lang.System.arraycopy(r3, r1, r0, r4, r2)
            int r1 = r12.a
            r12.c = r1
            r1 = 1
        L32:
            r12.a(r1)
            int r3 = r13 - r2
            int r5 = r12.a
            if (r3 <= r5) goto L46
            byte[] r3 = r12.a
            java.lang.System.arraycopy(r3, r4, r0, r2, r5)
            int r3 = r12.a
            int r2 = r2 + r3
            r12.c = r3
            goto L32
        L46:
            byte[] r13 = r12.a
            java.lang.System.arraycopy(r13, r4, r0, r2, r3)
            r12.c = r3
            return r0
        L4e:
            int r0 = r0 + r2
            r12.e = r0
            r12.c = r4
            r12.a = r4
            int r2 = r2 - r1
            int r0 = r13 - r2
            java.util.Vector r5 = new java.util.Vector
            r5.<init>()
        L5d:
            if (r0 <= 0) goto L88
            int r6 = java.lang.Math.min(r0, r3)
            byte[] r7 = new byte[r6]
            r8 = r4
        L66:
            if (r8 >= r6) goto L83
            java.io.InputStream r9 = r12.a
            r10 = -1
            if (r9 != 0) goto L6f
            r9 = r10
            goto L75
        L6f:
            int r11 = r6 - r8
            int r9 = r9.read(r7, r8, r11)
        L75:
            if (r9 == r10) goto L7e
            int r10 = r12.e
            int r10 = r10 + r9
            r12.e = r10
            int r8 = r8 + r9
            goto L66
        L7e:
            com.xiaomi.push.d r13 = com.xiaomi.push.d.a()
            throw r13
        L83:
            int r0 = r0 - r6
            r5.addElement(r7)
            goto L5d
        L88:
            byte[] r13 = new byte[r13]
            byte[] r0 = r12.a
            java.lang.System.arraycopy(r0, r1, r13, r4, r2)
            r0 = r4
        L90:
            int r1 = r5.size()
            if (r0 >= r1) goto La7
            java.lang.Object r1 = r5.elementAt(r0)
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            int r3 = r1.length
            java.lang.System.arraycopy(r1, r4, r13, r2, r3)
            int r1 = r1.length
            int r2 = r2 + r1
            int r0 = r0 + 1
            goto L90
        La7:
            return r13
        La8:
            int r3 = r3 - r0
            int r3 = r3 - r1
            r12.c(r3)
            com.xiaomi.push.d r13 = com.xiaomi.push.d.a()
            throw r13
        Lb2:
            com.xiaomi.push.d r13 = com.xiaomi.push.d.b()
            throw r13
    }

    public int b() {
            r1 = this;
            int r0 = r1.d()
            return r0
    }

    public long b() {
            r2 = this;
            long r0 = r2.c()
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.f = r1
            r0.b()
            return
    }

    public boolean b() {
            r3 = this;
            int r0 = r3.c
            int r1 = r3.a
            r2 = 0
            if (r0 != r1) goto Le
            boolean r0 = r3.a(r2)
            if (r0 != 0) goto Le
            r2 = 1
        Le:
            return r2
    }

    public int c() {
            r1 = this;
            int r0 = r1.d()
            return r0
    }

    public long c() {
            r6 = this;
            r0 = 0
            r1 = 0
        L3:
            r3 = 64
            if (r0 >= r3) goto L18
            byte r3 = r6.a()
            r4 = r3 & 127(0x7f, float:1.78E-43)
            long r4 = (long) r4
            long r4 = r4 << r0
            long r1 = r1 | r4
            r3 = r3 & 128(0x80, float:1.8E-43)
            if (r3 != 0) goto L15
            return r1
        L15:
            int r0 = r0 + 7
            goto L3
        L18:
            com.xiaomi.push.d r0 = com.xiaomi.push.d.c()
            throw r0
    }

    public void c(int r5) {
            r4 = this;
            if (r5 < 0) goto L4a
            int r0 = r4.e
            int r1 = r4.c
            int r2 = r0 + r1
            int r2 = r2 + r5
            int r3 = r4.f
            if (r2 > r3) goto L40
            int r2 = r4.a
            int r3 = r2 - r1
            if (r5 > r3) goto L17
            int r1 = r1 + r5
            r4.c = r1
            goto L3f
        L17:
            int r1 = r2 - r1
            int r0 = r0 + r2
            r4.e = r0
            r0 = 0
            r4.c = r0
            r4.a = r0
        L21:
            if (r1 >= r5) goto L3f
            java.io.InputStream r0 = r4.a
            if (r0 != 0) goto L29
            r0 = -1
            goto L31
        L29:
            int r2 = r5 - r1
            long r2 = (long) r2
            long r2 = r0.skip(r2)
            int r0 = (int) r2
        L31:
            if (r0 <= 0) goto L3a
            int r1 = r1 + r0
            int r2 = r4.e
            int r2 = r2 + r0
            r4.e = r2
            goto L21
        L3a:
            com.xiaomi.push.d r5 = com.xiaomi.push.d.a()
            throw r5
        L3f:
            return
        L40:
            int r3 = r3 - r0
            int r3 = r3 - r1
            r4.c(r3)
            com.xiaomi.push.d r5 = com.xiaomi.push.d.a()
            throw r5
        L4a:
            com.xiaomi.push.d r5 = com.xiaomi.push.d.b()
            throw r5
    }

    public int d() {
            r3 = this;
            byte r0 = r3.a()
            if (r0 < 0) goto L7
            return r0
        L7:
            r0 = r0 & 127(0x7f, float:1.78E-43)
            byte r1 = r3.a()
            if (r1 < 0) goto L13
            int r1 = r1 << 7
        L11:
            r0 = r0 | r1
            goto L50
        L13:
            r1 = r1 & 127(0x7f, float:1.78E-43)
            int r1 = r1 << 7
            r0 = r0 | r1
            byte r1 = r3.a()
            if (r1 < 0) goto L21
            int r1 = r1 << 14
            goto L11
        L21:
            r1 = r1 & 127(0x7f, float:1.78E-43)
            int r1 = r1 << 14
            r0 = r0 | r1
            byte r1 = r3.a()
            if (r1 < 0) goto L2f
            int r1 = r1 << 21
            goto L11
        L2f:
            r1 = r1 & 127(0x7f, float:1.78E-43)
            int r1 = r1 << 21
            r0 = r0 | r1
            byte r1 = r3.a()
            int r2 = r1 << 28
            r0 = r0 | r2
            if (r1 >= 0) goto L50
            r1 = 0
        L3e:
            r2 = 5
            if (r1 >= r2) goto L4b
            byte r2 = r3.a()
            if (r2 < 0) goto L48
            return r0
        L48:
            int r1 = r1 + 1
            goto L3e
        L4b:
            com.xiaomi.push.d r0 = com.xiaomi.push.d.c()
            throw r0
        L50:
            return r0
    }

    public long d() {
            r13 = this;
            byte r0 = r13.a()
            byte r1 = r13.a()
            byte r2 = r13.a()
            byte r3 = r13.a()
            byte r4 = r13.a()
            byte r5 = r13.a()
            byte r6 = r13.a()
            byte r7 = r13.a()
            long r8 = (long) r0
            r10 = 255(0xff, double:1.26E-321)
            long r8 = r8 & r10
            long r0 = (long) r1
            long r0 = r0 & r10
            r12 = 8
            long r0 = r0 << r12
            long r0 = r0 | r8
            long r8 = (long) r2
            long r8 = r8 & r10
            r2 = 16
            long r8 = r8 << r2
            long r0 = r0 | r8
            long r2 = (long) r3
            long r2 = r2 & r10
            r8 = 24
            long r2 = r2 << r8
            long r0 = r0 | r2
            long r2 = (long) r4
            long r2 = r2 & r10
            r4 = 32
            long r2 = r2 << r4
            long r0 = r0 | r2
            long r2 = (long) r5
            long r2 = r2 & r10
            r4 = 40
            long r2 = r2 << r4
            long r0 = r0 | r2
            long r2 = (long) r6
            long r2 = r2 & r10
            r4 = 48
            long r2 = r2 << r4
            long r0 = r0 | r2
            long r2 = (long) r7
            long r2 = r2 & r10
            r4 = 56
            long r2 = r2 << r4
            long r0 = r0 | r2
            return r0
    }

    public int e() {
            r4 = this;
            byte r0 = r4.a()
            byte r1 = r4.a()
            byte r2 = r4.a()
            byte r3 = r4.a()
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            r1 = r2 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            r1 = r3 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            r0 = r0 | r1
            return r0
    }
}
