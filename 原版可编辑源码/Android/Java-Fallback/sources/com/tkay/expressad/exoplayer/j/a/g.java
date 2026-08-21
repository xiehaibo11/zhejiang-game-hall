package com.tkay.expressad.exoplayer.j.a;

final class g {
    private static final int c = 2;
    private static final int d = Integer.MAX_VALUE;
    public final int a;
    public final java.lang.String b;
    private final java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> e;
    private com.tkay.expressad.exoplayer.j.a.l f;
    private boolean g;

    public g(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            com.tkay.expressad.exoplayer.j.a.l r1 = com.tkay.expressad.exoplayer.j.a.l.b
            r0.f = r1
            java.util.TreeSet r1 = new java.util.TreeSet
            r1.<init>()
            r0.e = r1
            return
    }

    public static com.tkay.expressad.exoplayer.j.a.g a(int r3, java.io.DataInputStream r4) {
            int r0 = r4.readInt()
            java.lang.String r1 = r4.readUTF()
            com.tkay.expressad.exoplayer.j.a.g r2 = new com.tkay.expressad.exoplayer.j.a.g
            r2.<init>(r0, r1)
            r0 = 2
            if (r3 >= r0) goto L20
            long r3 = r4.readLong()
            com.tkay.expressad.exoplayer.j.a.k r0 = new com.tkay.expressad.exoplayer.j.a.k
            r0.<init>()
            com.tkay.expressad.exoplayer.j.a.j.a(r0, r3)
            r2.a(r0)
            goto L26
        L20:
            com.tkay.expressad.exoplayer.j.a.l r3 = com.tkay.expressad.exoplayer.j.a.l.a(r4)
            r2.f = r3
        L26:
            return r2
    }

    public final int a(int r6) {
            r5 = this;
            int r0 = r5.a
            int r0 = r0 * 31
            java.lang.String r1 = r5.b
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r1 = 2
            if (r6 >= r1) goto L1d
            com.tkay.expressad.exoplayer.j.a.l r6 = r5.f
            long r1 = com.tkay.expressad.exoplayer.j.a.j.a(r6)
            int r0 = r0 * 31
            r6 = 32
            long r3 = r1 >>> r6
            long r1 = r1 ^ r3
            int r6 = (int) r1
            goto L25
        L1d:
            int r0 = r0 * 31
            com.tkay.expressad.exoplayer.j.a.l r6 = r5.f
            int r6 = r6.hashCode()
        L25:
            int r0 = r0 + r6
            return r0
    }

    public final long a(long r11, long r13) {
            r10 = this;
            com.tkay.expressad.exoplayer.j.a.n r0 = r10.a(r11)
            boolean r1 = r0.b()
            if (r1 == 0) goto L1e
            boolean r11 = r0.a()
            if (r11 == 0) goto L16
            r11 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L18
        L16:
            long r11 = r0.c
        L18:
            long r11 = java.lang.Math.min(r11, r13)
            long r11 = -r11
            return r11
        L1e:
            long r1 = r11 + r13
            long r3 = r0.b
            long r5 = r0.c
            long r3 = r3 + r5
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 >= 0) goto L53
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r5 = r10.e
            r6 = 0
            java.util.NavigableSet r0 = r5.tailSet(r0, r6)
            java.util.Iterator r0 = r0.iterator()
        L34:
            boolean r5 = r0.hasNext()
            if (r5 == 0) goto L53
            java.lang.Object r5 = r0.next()
            com.tkay.expressad.exoplayer.j.a.n r5 = (com.tkay.expressad.exoplayer.j.a.n) r5
            long r6 = r5.b
            int r6 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r6 > 0) goto L53
            long r6 = r5.b
            long r8 = r5.c
            long r6 = r6 + r8
            long r3 = java.lang.Math.max(r3, r6)
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 < 0) goto L34
        L53:
            long r3 = r3 - r11
            long r11 = java.lang.Math.min(r3, r13)
            return r11
    }

    public final com.tkay.expressad.exoplayer.j.a.i a() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.a.l r0 = r1.f
            return r0
    }

    public final com.tkay.expressad.exoplayer.j.a.n a(long r7) {
            r6 = this;
            java.lang.String r0 = r6.b
            com.tkay.expressad.exoplayer.j.a.n r0 = com.tkay.expressad.exoplayer.j.a.n.a(r0, r7)
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r1 = r6.e
            java.lang.Object r1 = r1.floor(r0)
            com.tkay.expressad.exoplayer.j.a.n r1 = (com.tkay.expressad.exoplayer.j.a.n) r1
            if (r1 == 0) goto L1a
            long r2 = r1.b
            long r4 = r1.c
            long r2 = r2 + r4
            int r2 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r2 <= 0) goto L1a
            return r1
        L1a:
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r1 = r6.e
            java.lang.Object r0 = r1.ceiling(r0)
            com.tkay.expressad.exoplayer.j.a.n r0 = (com.tkay.expressad.exoplayer.j.a.n) r0
            if (r0 != 0) goto L2b
            java.lang.String r0 = r6.b
            com.tkay.expressad.exoplayer.j.a.n r7 = com.tkay.expressad.exoplayer.j.a.n.b(r0, r7)
            return r7
        L2b:
            java.lang.String r1 = r6.b
            long r2 = r0.b
            long r2 = r2 - r7
            com.tkay.expressad.exoplayer.j.a.n r7 = com.tkay.expressad.exoplayer.j.a.n.a(r1, r7, r2)
            return r7
    }

    public final void a(com.tkay.expressad.exoplayer.j.a.n r2) {
            r1 = this;
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r0 = r1.e
            r0.add(r2)
            return
    }

    public final void a(java.io.DataOutputStream r2) {
            r1 = this;
            int r0 = r1.a
            r2.writeInt(r0)
            java.lang.String r0 = r1.b
            r2.writeUTF(r0)
            com.tkay.expressad.exoplayer.j.a.l r0 = r1.f
            r0.a(r2)
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final boolean a(com.tkay.expressad.exoplayer.j.a.e r2) {
            r1 = this;
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r0 = r1.e
            boolean r0 = r0.remove(r2)
            if (r0 == 0) goto Lf
            java.io.File r2 = r2.e
            r2.delete()
            r2 = 1
            return r2
        Lf:
            r2 = 0
            return r2
    }

    public final boolean a(com.tkay.expressad.exoplayer.j.a.k r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.j.a.l r0 = r1.f
            com.tkay.expressad.exoplayer.j.a.l r2 = r0.a(r2)
            r1.f = r2
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    public final com.tkay.expressad.exoplayer.j.a.n b(com.tkay.expressad.exoplayer.j.a.n r5) {
            r4 = this;
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r0 = r4.e
            boolean r0 = r0.remove(r5)
            com.tkay.expressad.exoplayer.k.a.b(r0)
            int r0 = r4.a
            com.tkay.expressad.exoplayer.j.a.n r0 = r5.a(r0)
            java.io.File r1 = r5.e
            java.io.File r2 = r0.e
            boolean r1 = r1.renameTo(r2)
            if (r1 == 0) goto L1f
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r5 = r4.e
            r5.add(r0)
            return r0
        L1f:
            com.tkay.expressad.exoplayer.j.a.a$a r1 = new com.tkay.expressad.exoplayer.j.a.a$a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Renaming of "
            r2.<init>(r3)
            java.io.File r5 = r5.e
            r2.append(r5)
            java.lang.String r5 = " to "
            r2.append(r5)
            java.io.File r5 = r0.e
            r2.append(r5)
            java.lang.String r5 = " failed."
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            throw r1
    }

    public final boolean b() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public final java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> c() {
            r1 = this;
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r0 = r1.e
            return r0
    }

    public final boolean d() {
            r1 = this;
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r0 = r1.e
            boolean r0 = r0.isEmpty()
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L39
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L39
        L12:
            com.tkay.expressad.exoplayer.j.a.g r5 = (com.tkay.expressad.exoplayer.j.a.g) r5
            int r2 = r4.a
            int r3 = r5.a
            if (r2 != r3) goto L39
            java.lang.String r2 = r4.b
            java.lang.String r3 = r5.b
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L39
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r2 = r4.e
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r3 = r5.e
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L39
            com.tkay.expressad.exoplayer.j.a.l r2 = r4.f
            com.tkay.expressad.exoplayer.j.a.l r5 = r5.f
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto L39
            return r0
        L39:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            int r0 = r2.a(r0)
            int r0 = r0 * 31
            java.util.TreeSet<com.tkay.expressad.exoplayer.j.a.n> r1 = r2.e
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }
}
