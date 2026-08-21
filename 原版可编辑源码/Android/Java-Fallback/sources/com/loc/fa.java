package com.loc;

public final class fa {
    public int a;
    public int b;
    public int c;
    public int d;
    public long e;
    public int f;
    public int g;
    public int h;
    public int i;
    public int j;
    public int k;
    public int l;
    public short m;
    public boolean n;
    public int o;
    public int p;
    public int q;
    public boolean r;
    public int s;
    public long t;

    public fa(int r5, boolean r6) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            r4.c = r0
            r4.d = r0
            r1 = 0
            r4.e = r1
            r4.f = r0
            r4.g = r0
            r4.h = r0
            r4.i = r0
            r4.j = r0
            r3 = -113(0xffffffffffffff8f, float:NaN)
            r4.k = r3
            r4.l = r0
            r4.m = r0
            r4.n = r0
            r0 = 32767(0x7fff, float:4.5916E-41)
            r4.o = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r4.p = r0
            r4.q = r0
            r0 = 1
            r4.r = r0
            r0 = 99
            r4.s = r0
            r4.t = r1
            r4.l = r5
            r4.n = r6
            return
    }

    private java.lang.String e() {
            r5 = this;
            int r0 = r5.l
            r1 = 5
            r0 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r3 = r5.l
            r2.append(r3)
            java.lang.String r3 = "#"
            r2.append(r3)
            int r4 = r5.a
            r2.append(r4)
            r2.append(r3)
            int r4 = r5.b
            r2.append(r4)
            r2.append(r3)
            r2.append(r0)
            r2.append(r3)
            long r0 = r5.a()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    private java.lang.String f() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.l
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            int r2 = r3.h
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.i
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.j
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final long a() {
            r2 = this;
            int r0 = r2.l
            r1 = 5
            if (r0 != r1) goto L8
            long r0 = r2.e
            return r0
        L8:
            int r0 = r2.d
            long r0 = (long) r0
            return r0
    }

    public final java.lang.String b() {
            r2 = this;
            int r0 = r2.l
            r1 = 1
            if (r0 == r1) goto L18
            r1 = 2
            if (r0 == r1) goto L13
            r1 = 3
            if (r0 == r1) goto L18
            r1 = 4
            if (r0 == r1) goto L18
            r1 = 5
            if (r0 == r1) goto L18
            r0 = 0
            return r0
        L13:
            java.lang.String r0 = r2.f()
            return r0
        L18:
            java.lang.String r0 = r2.e()
            return r0
    }

    public final java.lang.String c() {
            r3 = this;
            java.lang.String r0 = r3.b()
            if (r0 == 0) goto L23
            int r1 = r0.length()
            if (r1 <= 0) goto L23
            boolean r1 = r3.r
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "#"
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
        L23:
            java.lang.String r0 = ""
            return r0
    }

    protected final java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.loc.fa r0 = r1.d()
            return r0
    }

    protected final com.loc.fa d() {
            r3 = this;
            com.loc.fa r0 = new com.loc.fa
            int r1 = r3.l
            boolean r2 = r3.n
            r0.<init>(r1, r2)
            int r1 = r3.a
            r0.a = r1
            int r1 = r3.b
            r0.b = r1
            int r1 = r3.c
            r0.c = r1
            int r1 = r3.d
            r0.d = r1
            long r1 = r3.e
            r0.e = r1
            int r1 = r3.f
            r0.f = r1
            int r1 = r3.g
            r0.g = r1
            int r1 = r3.h
            r0.h = r1
            int r1 = r3.i
            r0.i = r1
            int r1 = r3.j
            r0.j = r1
            int r1 = r3.k
            r0.k = r1
            short r1 = r3.m
            r0.m = r1
            int r1 = r3.o
            r0.o = r1
            int r1 = r3.p
            r0.p = r1
            int r1 = r3.q
            r0.q = r1
            boolean r1 = r3.r
            r0.r = r1
            int r1 = r3.s
            r0.s = r1
            long r1 = r3.t
            r0.t = r1
            return r0
    }

    public final boolean equals(java.lang.Object r8) {
            r7 = this;
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            boolean r1 = r8 instanceof com.loc.fa
            if (r1 == 0) goto L9a
            com.loc.fa r8 = (com.loc.fa) r8
            int r1 = r8.l
            r2 = 1
            if (r1 == r2) goto L82
            r3 = 2
            if (r1 == r3) goto L69
            r3 = 3
            if (r1 == r3) goto L50
            r3 = 4
            if (r1 == r3) goto L37
            r3 = 5
            if (r1 == r3) goto L1c
            return r0
        L1c:
            int r1 = r7.l
            if (r1 == r3) goto L21
            return r0
        L21:
            int r1 = r8.c
            int r3 = r7.c
            if (r1 != r3) goto L36
            long r3 = r8.e
            long r5 = r7.e
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 != 0) goto L36
            int r8 = r8.q
            int r1 = r7.q
            if (r8 != r1) goto L36
            return r2
        L36:
            return r0
        L37:
            int r1 = r7.l
            if (r1 == r3) goto L3c
            return r0
        L3c:
            int r1 = r8.c
            int r3 = r7.c
            if (r1 != r3) goto L4f
            int r1 = r8.d
            int r3 = r7.d
            if (r1 != r3) goto L4f
            int r8 = r8.b
            int r1 = r7.b
            if (r8 != r1) goto L4f
            return r2
        L4f:
            return r0
        L50:
            int r1 = r7.l
            if (r1 == r3) goto L55
            return r0
        L55:
            int r1 = r8.c
            int r3 = r7.c
            if (r1 != r3) goto L68
            int r1 = r8.d
            int r3 = r7.d
            if (r1 != r3) goto L68
            int r8 = r8.b
            int r1 = r7.b
            if (r8 != r1) goto L68
            return r2
        L68:
            return r0
        L69:
            int r1 = r7.l
            if (r1 == r3) goto L6e
            return r0
        L6e:
            int r1 = r8.j
            int r3 = r7.j
            if (r1 != r3) goto L81
            int r1 = r8.i
            int r3 = r7.i
            if (r1 != r3) goto L81
            int r8 = r8.h
            int r1 = r7.h
            if (r8 != r1) goto L81
            return r2
        L81:
            return r0
        L82:
            int r1 = r7.l
            if (r1 == r2) goto L87
            return r0
        L87:
            int r1 = r8.c
            int r3 = r7.c
            if (r1 != r3) goto L9a
            int r1 = r8.d
            int r3 = r7.d
            if (r1 != r3) goto L9a
            int r8 = r8.b
            int r1 = r7.b
            if (r8 != r1) goto L9a
            return r2
        L9a:
            return r0
    }

    public final int hashCode() {
            r3 = this;
            int r0 = r3.l
            java.lang.String r0 = java.lang.String.valueOf(r0)
            int r0 = r0.hashCode()
            int r1 = r3.l
            r2 = 2
            if (r1 != r2) goto L27
            int r1 = r3.j
            java.lang.String r1 = java.lang.String.valueOf(r1)
            int r1 = r1.hashCode()
            int r2 = r3.i
            java.lang.String r2 = java.lang.String.valueOf(r2)
            int r2 = r2.hashCode()
            int r1 = r1 + r2
            int r2 = r3.h
            goto L3e
        L27:
            int r1 = r3.c
            java.lang.String r1 = java.lang.String.valueOf(r1)
            int r1 = r1.hashCode()
            int r2 = r3.d
            java.lang.String r2 = java.lang.String.valueOf(r2)
            int r2 = r2.hashCode()
            int r1 = r1 + r2
            int r2 = r3.b
        L3e:
            java.lang.String r2 = java.lang.String.valueOf(r2)
            int r2 = r2.hashCode()
            int r1 = r1 + r2
            int r0 = r0 + r1
            return r0
    }
}
