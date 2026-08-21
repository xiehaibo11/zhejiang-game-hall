package com.loc;

public class gb {
    static final java.nio.charset.Charset c = null;
    static final boolean p = false;
    java.nio.ByteBuffer a;
    int b;
    int d;
    int[] e;
    int f;
    boolean g;
    boolean h;
    int i;
    int[] j;
    int k;
    int l;
    boolean m;
    java.nio.charset.CharsetEncoder n;
    java.nio.ByteBuffer o;

    static {
            java.lang.Class<com.loc.gb> r0 = com.loc.gb.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.loc.gb.p = r0
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.loc.gb.c = r0
            return
    }

    private gb() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.d = r0
            r0 = 0
            r2.e = r0
            r0 = 0
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r1 = 16
            int[] r1 = new int[r1]
            r2.j = r1
            r2.k = r0
            r2.l = r0
            r2.m = r0
            java.nio.charset.Charset r0 = com.loc.gb.c
            java.nio.charset.CharsetEncoder r0 = r0.newEncoder()
            r2.n = r0
            r0 = 1024(0x400, float:1.435E-42)
            r2.b = r0
            java.nio.ByteBuffer r0 = d(r0)
            r2.a = r0
            return
    }

    public gb(java.nio.ByteBuffer r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.d = r0
            r0 = 0
            r2.e = r0
            r0 = 0
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r1 = 16
            int[] r1 = new int[r1]
            r2.j = r1
            r2.k = r0
            r2.l = r0
            r2.m = r0
            java.nio.charset.Charset r0 = com.loc.gb.c
            java.nio.charset.CharsetEncoder r0 = r0.newEncoder()
            r2.n = r0
            r2.a(r3)
            return
    }

    private void a(long r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r1 = r2.b
            int r1 = r1 + (-8)
            r2.b = r1
            r0.putLong(r1, r3)
            return
    }

    private void a(short r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r1 = r2.b
            int r1 = r1 + (-2)
            r2.b = r1
            r0.putShort(r1, r3)
            return
    }

    private static java.nio.ByteBuffer b(java.nio.ByteBuffer r3) {
            int r0 = r3.capacity()
            r1 = -1073741824(0xffffffffc0000000, float:-2.0)
            r1 = r1 & r0
            if (r1 != 0) goto L1b
            int r1 = r0 << 1
            r2 = 0
            r3.position(r2)
            java.nio.ByteBuffer r2 = d(r1)
            int r1 = r1 - r0
            r2.position(r1)
            r2.put(r3)
            return r2
        L1b:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            java.lang.String r0 = "FlatBuffers: cannot grow buffer beyond 2 gigabytes."
            r3.<init>(r0)
            throw r3
    }

    private void b(byte r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r1 = r2.b
            int r1 = r1 + (-1)
            r2.b = r1
            r0.put(r1, r3)
            return
    }

    private void b(long r3) {
            r2 = this;
            r0 = 8
            r1 = 0
            r2.c(r0, r1)
            r2.a(r3)
            return
    }

    private void b(short r3) {
            r2 = this;
            r0 = 2
            r1 = 0
            r2.c(r0, r1)
            r2.a(r3)
            return
    }

    private void b(boolean r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r1 = r2.b
            int r1 = r1 + (-1)
            r2.b = r1
            byte r3 = (byte) r3
            r0.put(r1, r3)
            return
    }

    private int c(java.nio.ByteBuffer r4) {
            r3 = this;
            int r0 = r4.remaining()
            r1 = 0
            r3.a(r1)
            r1 = 1
            r3.a(r1, r0, r1)
            java.nio.ByteBuffer r1 = r3.a
            int r2 = r3.b
            int r2 = r2 - r0
            r3.b = r2
            r1.position(r2)
            java.nio.ByteBuffer r0 = r3.a
            r0.put(r4)
            int r4 = r3.a()
            return r4
    }

    private void c(int r5, int r6) {
            r4 = this;
            int r0 = r4.d
            if (r5 <= r0) goto L6
            r4.d = r5
        L6:
            java.nio.ByteBuffer r0 = r4.a
            int r0 = r0.capacity()
            int r1 = r4.b
            int r0 = r0 - r1
            int r0 = r0 + r6
            int r0 = ~r0
            int r0 = r0 + 1
            int r1 = r5 + (-1)
            r0 = r0 & r1
        L16:
            int r1 = r4.b
            int r2 = r0 + r5
            int r2 = r2 + r6
            if (r1 >= r2) goto L36
            java.nio.ByteBuffer r1 = r4.a
            int r1 = r1.capacity()
            java.nio.ByteBuffer r2 = r4.a
            java.nio.ByteBuffer r2 = b(r2)
            r4.a = r2
            int r3 = r4.b
            int r2 = r2.capacity()
            int r2 = r2 - r1
            int r3 = r3 + r2
            r4.b = r3
            goto L16
        L36:
            r4.e(r0)
            return
    }

    private void c(boolean r3) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.c(r0, r1)
            r2.b(r3)
            return
    }

    private int d() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r0 = r0.capacity()
            int r1 = r2.b
            int r0 = r0 - r1
            return r0
    }

    private static java.nio.ByteBuffer d(int r1) {
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            r1.order(r0)
            return r1
    }

    private byte[] d(int r2, int r3) {
            r1 = this;
            r1.e()
            byte[] r3 = new byte[r3]
            java.nio.ByteBuffer r0 = r1.a
            r0.position(r2)
            java.nio.ByteBuffer r2 = r1.a
            r2.get(r3)
            return r3
    }

    private void e() {
            r2 = this;
            boolean r0 = r2.h
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "FlatBuffers: you can only access the serialized buffer after it has been finished by FlatBufferBuilder.finish()."
            r0.<init>(r1)
            throw r0
    }

    private void e(int r5) {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            if (r1 >= r5) goto L12
            java.nio.ByteBuffer r2 = r4.a
            int r3 = r4.b
            int r3 = r3 + (-1)
            r4.b = r3
            r2.put(r3, r0)
            int r1 = r1 + 1
            goto L2
        L12:
            return
    }

    private void f() {
            r2 = this;
            boolean r0 = r2.g
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "FlatBuffers: object serialization must not be nested."
            r0.<init>(r1)
            throw r0
    }

    private void f(int r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.a
            int r1 = r2.b
            int r1 = r1 + (-4)
            r2.b = r1
            r0.putInt(r1, r3)
            return
    }

    private void g(int r3) {
            r2 = this;
            r0 = 4
            r1 = 0
            r2.c(r0, r1)
            r2.f(r3)
            return
    }

    private void h(int r3) {
            r2 = this;
            int[] r0 = r2.e
            int r1 = r2.d()
            r0[r3] = r1
            return
    }

    public final int a() {
            r2 = this;
            boolean r0 = r2.g
            if (r0 == 0) goto L11
            r0 = 0
            r2.g = r0
            int r0 = r2.l
            r2.f(r0)
            int r0 = r2.d()
            return r0
        L11:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "FlatBuffers: endVector called without startVector"
            r0.<init>(r1)
            throw r0
    }

    public int a(java.lang.CharSequence r4) {
            r3 = this;
            int r0 = r4.length()
            float r0 = (float) r0
            java.nio.charset.CharsetEncoder r1 = r3.n
            float r1 = r1.maxBytesPerChar()
            float r0 = r0 * r1
            int r0 = (int) r0
            java.nio.ByteBuffer r1 = r3.o
            if (r1 == 0) goto L18
            int r1 = r1.capacity()
            if (r1 >= r0) goto L24
        L18:
            r1 = 128(0x80, float:1.8E-43)
            int r0 = java.lang.Math.max(r1, r0)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r3.o = r0
        L24:
            java.nio.ByteBuffer r0 = r3.o
            r0.clear()
            boolean r0 = r4 instanceof java.nio.CharBuffer
            if (r0 == 0) goto L30
            java.nio.CharBuffer r4 = (java.nio.CharBuffer) r4
            goto L34
        L30:
            java.nio.CharBuffer r4 = java.nio.CharBuffer.wrap(r4)
        L34:
            java.nio.charset.CharsetEncoder r0 = r3.n
            java.nio.ByteBuffer r1 = r3.o
            r2 = 1
            java.nio.charset.CoderResult r4 = r0.encode(r4, r1, r2)
            boolean r0 = r4.isError()
            if (r0 == 0) goto L4e
            r4.throwException()     // Catch: java.nio.charset.CharacterCodingException -> L47
            goto L4e
        L47:
            r4 = move-exception
            java.lang.Error r0 = new java.lang.Error
            r0.<init>(r4)
            throw r0
        L4e:
            java.nio.ByteBuffer r4 = r3.o
            r4.flip()
            java.nio.ByteBuffer r4 = r3.o
            int r4 = r3.c(r4)
            return r4
    }

    public final com.loc.gb a(java.nio.ByteBuffer r2) {
            r1 = this;
            r1.a = r2
            r2.clear()
            java.nio.ByteBuffer r2 = r1.a
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            r2.order(r0)
            r2 = 1
            r1.d = r2
            java.nio.ByteBuffer r2 = r1.a
            int r2 = r2.capacity()
            r1.b = r2
            r2 = 0
            r1.f = r2
            r1.g = r2
            r1.h = r2
            r1.i = r2
            r1.k = r2
            r1.l = r2
            return r1
    }

    public final void a(byte r3) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.c(r0, r1)
            r2.b(r3)
            return
    }

    public final void a(int r3) {
            r2 = this;
            r0 = 4
            r1 = 0
            r2.c(r0, r1)
            boolean r1 = com.loc.gb.p
            if (r1 != 0) goto L16
            int r1 = r2.d()
            if (r3 > r1) goto L10
            goto L16
        L10:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            r3.<init>()
            throw r3
        L16:
            int r1 = r2.d()
            int r1 = r1 - r3
            int r1 = r1 + r0
            r2.f(r1)
            return
    }

    public final void a(int r2, byte r3) {
            r1 = this;
            boolean r0 = r1.m
            if (r0 != 0) goto L6
            if (r3 == 0) goto Lc
        L6:
            r1.a(r3)
            r1.h(r2)
        Lc:
            return
    }

    public final void a(int r2, int r3) {
            r1 = this;
            boolean r0 = r1.m
            if (r0 != 0) goto L6
            if (r3 == 0) goto Lc
        L6:
            r1.g(r3)
            r1.h(r2)
        Lc:
            return
    }

    public final void a(int r1, int r2, int r3) {
            r0 = this;
            r0.f()
            r0.l = r2
            int r1 = r1 * r2
            r2 = 4
            r0.c(r2, r1)
            r0.c(r3, r1)
            r1 = 1
            r0.g = r1
            return
    }

    public final void a(int r4, long r5) {
            r3 = this;
            boolean r0 = r3.m
            if (r0 != 0) goto La
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 == 0) goto L10
        La:
            r3.b(r5)
            r3.h(r4)
        L10:
            return
    }

    public final void a(int r2, short r3) {
            r1 = this;
            boolean r0 = r1.m
            if (r0 != 0) goto L6
            if (r3 == 0) goto Lc
        L6:
            r1.b(r3)
            r1.h(r2)
        Lc:
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            boolean r0 = r1.m
            if (r0 != 0) goto L6
            if (r2 == 0) goto Ld
        L6:
            r1.c(r2)
            r2 = 0
            r1.h(r2)
        Ld:
            return
    }

    public final int b() {
            r11 = this;
            int[] r0 = r11.e
            if (r0 == 0) goto Lbd
            boolean r0 = r11.g
            if (r0 == 0) goto Lbd
            r0 = 0
            r11.g(r0)
            int r1 = r11.d()
            int r2 = r11.f
            int r2 = r2 + (-1)
        L14:
            if (r2 < 0) goto L29
            int[] r3 = r11.e
            r4 = r3[r2]
            if (r4 == 0) goto L21
            r3 = r3[r2]
            int r3 = r1 - r3
            goto L22
        L21:
            r3 = 0
        L22:
            short r3 = (short) r3
            r11.b(r3)
            int r2 = r2 + (-1)
            goto L14
        L29:
            int r2 = r11.i
            int r2 = r1 - r2
            short r2 = (short) r2
            r11.b(r2)
            int r2 = r11.f
            r3 = 2
            int r2 = r2 + r3
            int r2 = r2 * 2
            short r2 = (short) r2
            r11.b(r2)
            r2 = 0
        L3c:
            int r4 = r11.k
            if (r2 >= r4) goto L7b
            java.nio.ByteBuffer r4 = r11.a
            int r4 = r4.capacity()
            int[] r5 = r11.j
            r5 = r5[r2]
            int r4 = r4 - r5
            int r5 = r11.b
            java.nio.ByteBuffer r6 = r11.a
            short r6 = r6.getShort(r4)
            java.nio.ByteBuffer r7 = r11.a
            short r7 = r7.getShort(r5)
            if (r6 != r7) goto L78
            r7 = 2
        L5c:
            if (r7 >= r6) goto L73
            java.nio.ByteBuffer r8 = r11.a
            int r9 = r4 + r7
            short r8 = r8.getShort(r9)
            java.nio.ByteBuffer r9 = r11.a
            int r10 = r5 + r7
            short r9 = r9.getShort(r10)
            if (r8 != r9) goto L78
            int r7 = r7 + 2
            goto L5c
        L73:
            int[] r4 = r11.j
            r2 = r4[r2]
            goto L7c
        L78:
            int r2 = r2 + 1
            goto L3c
        L7b:
            r2 = 0
        L7c:
            if (r2 == 0) goto L8e
            java.nio.ByteBuffer r3 = r11.a
            int r3 = r3.capacity()
            int r3 = r3 - r1
            r11.b = r3
            java.nio.ByteBuffer r4 = r11.a
            int r2 = r2 - r1
            r4.putInt(r3, r2)
            goto Lba
        L8e:
            int r2 = r11.k
            int[] r4 = r11.j
            int r5 = r4.length
            if (r2 != r5) goto L9d
            int r2 = r2 * 2
            int[] r2 = java.util.Arrays.copyOf(r4, r2)
            r11.j = r2
        L9d:
            int[] r2 = r11.j
            int r3 = r11.k
            int r4 = r3 + 1
            r11.k = r4
            int r4 = r11.d()
            r2[r3] = r4
            java.nio.ByteBuffer r2 = r11.a
            int r3 = r2.capacity()
            int r3 = r3 - r1
            int r4 = r11.d()
            int r4 = r4 - r1
            r2.putInt(r3, r4)
        Lba:
            r11.g = r0
            return r1
        Lbd:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "FlatBuffers: endObject called without startObject"
            r0.<init>(r1)
            throw r0
    }

    public final void b(int r3) {
            r2 = this;
            r2.f()
            int[] r0 = r2.e
            if (r0 == 0) goto La
            int r0 = r0.length
            if (r0 >= r3) goto Le
        La:
            int[] r0 = new int[r3]
            r2.e = r0
        Le:
            r2.f = r3
            int[] r0 = r2.e
            r1 = 0
            java.util.Arrays.fill(r0, r1, r3, r1)
            r3 = 1
            r2.g = r3
            int r3 = r2.d()
            r2.i = r3
            return
    }

    public final void b(int r2, int r3) {
            r1 = this;
            boolean r0 = r1.m
            if (r0 != 0) goto L6
            if (r3 == 0) goto Lc
        L6:
            r1.a(r3)
            r1.h(r2)
        Lc:
            return
    }

    public final void c(int r3) {
            r2 = this;
            int r0 = r2.d
            r1 = 4
            r2.c(r0, r1)
            r2.a(r3)
            java.nio.ByteBuffer r3 = r2.a
            int r0 = r2.b
            r3.position(r0)
            r3 = 1
            r2.h = r3
            return
    }

    public final byte[] c() {
            r3 = this;
            int r0 = r3.b
            java.nio.ByteBuffer r1 = r3.a
            int r1 = r1.capacity()
            int r2 = r3.b
            int r1 = r1 - r2
            byte[] r0 = r3.d(r0, r1)
            return r0
    }
}
