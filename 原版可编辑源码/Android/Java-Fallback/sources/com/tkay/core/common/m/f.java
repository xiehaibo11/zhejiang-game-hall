package com.tkay.core.common.m;

public final class f {
    public static final java.lang.String a = null;
    final int b;
    int c;
    int d;
    long e;
    java.util.List<com.tkay.core.common.f.aj> f;
    java.util.List<com.tkay.core.common.f.aj> g;
    java.util.List<com.tkay.core.common.f.aj> h;
    volatile int i;
    volatile int j;
    volatile int k;
    volatile int l;
    com.tkay.core.common.f.am m;
    com.tkay.core.common.f.ae n;
    java.util.List<com.tkay.core.common.f.aj> o;
    private java.util.List<com.tkay.core.common.f.aj> p;

    static {
            java.lang.Class<com.tkay.core.common.h> r0 = com.tkay.core.common.h.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.m.f.a = r0
            return
    }

    public f(com.tkay.core.common.m.g r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.c = r0
            r0 = 0
            r2.i = r0
            r2.j = r0
            r2.k = r0
            r2.l = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 5
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.f = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.g = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 2
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.h = r0
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.f
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.d
            r0.addAll(r1)
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.o
            if (r0 != 0) goto L48
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.o = r0
        L48:
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.o
            r0.clear()
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.o
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.d
            r0.addAll(r1)
            com.tkay.core.c.d r0 = r3.c
            int r0 = r0.an()
            r2.b = r0
            com.tkay.core.c.d r0 = r3.c
            int r0 = r0.l()
            r2.c = r0
            com.tkay.core.c.d r0 = r3.c
            int r0 = r0.ab()
            r2.d = r0
            com.tkay.core.c.d r0 = r3.c
            long r0 = r0.n()
            r2.e = r0
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.d
            java.util.List r0 = b(r0)
            if (r0 == 0) goto L86
            java.util.List<com.tkay.core.common.f.aj> r1 = r2.f
            r1.removeAll(r0)
            java.util.List<com.tkay.core.common.f.aj> r1 = r2.h
            r1.addAll(r0)
        L86:
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 3
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.p = r0
            com.tkay.core.common.f.am r0 = r3.g
            r2.m = r0
            com.tkay.core.common.f.ae r3 = r3.h
            r2.n = r3
            return
    }

    public static java.lang.String a(java.util.List<com.tkay.core.common.f.aj> r4) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            int r2 = r4.size()
            if (r1 >= r2) goto L44
            if (r1 <= 0) goto L1c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ","
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        L1c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Object r3 = r4.get(r1)
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3
            int r3 = r3.c()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            int r1 = r1 + 1
            goto L3
        L44:
            return r0
    }

    public static void a(android.content.Context r0, java.lang.String r1) {
            com.tkay.core.common.y r0 = com.tkay.core.common.y.a(r0)
            r0.a(r1)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.tkay.core.common.f.aj r4, com.tkay.core.common.f.aj r5) {
            r0 = 0
            if (r4 == 0) goto Lb
            com.tkay.core.common.f.am$a r5 = new com.tkay.core.common.f.am$a
            r5.<init>(r4)
            r4 = r0
            r0 = r5
            goto L14
        Lb:
            if (r5 == 0) goto L13
            com.tkay.core.common.f.am$a r4 = new com.tkay.core.common.f.am$a
            r4.<init>(r5)
            goto L14
        L13:
            r4 = r0
        L14:
            com.tkay.core.common.y r1 = com.tkay.core.common.y.a(r1)
            r1.a(r2, r3, r0, r4)
            return
    }

    private void a(com.tkay.core.common.f.aj r4, int r5, com.tkay.core.common.f.aj r6) {
            r3 = this;
            boolean r0 = r4.j()
            if (r0 == 0) goto L1b
            com.tkay.core.common.f.l r0 = r4.M()
            if (r0 == 0) goto L1b
            if (r6 == 0) goto L15
            double r1 = com.tkay.core.common.l.g.a(r6)
            r0.q = r1
            goto L1b
        L15:
            double r1 = com.tkay.core.common.l.g.a(r4)
            r0.q = r1
        L1b:
            if (r5 <= 0) goto L39
            java.util.List<com.tkay.core.common.f.aj> r6 = r3.o
            int r5 = r5 + (-1)
            java.lang.Object r5 = r6.get(r5)
            com.tkay.core.common.f.aj r5 = (com.tkay.core.common.f.aj) r5
            boolean r6 = r5.j()
            if (r6 == 0) goto L39
            com.tkay.core.common.f.l r5 = r5.M()
            if (r5 == 0) goto L39
            double r0 = com.tkay.core.common.l.g.a(r4)
            r5.q = r0
        L39:
            return
    }

    public static void a(com.tkay.core.common.f.aj r5, com.tkay.core.common.f.d r6, com.tkay.core.common.f.aj r7, boolean r8) {
            if (r7 != 0) goto L3
            return
        L3:
            com.tkay.core.common.f.l r0 = r5.M()
            if (r0 == 0) goto L20
            double r1 = com.tkay.core.common.l.g.a(r7)
            com.tkay.core.common.f.q r3 = new com.tkay.core.common.f.q
            r3.<init>()
            r4 = 2
            r3.a = r4
            r3.b = r1
            r3.e = r6
            r3.c = r7
            r3.d = r5
            r0.a(r3, r8)
        L20:
            return
    }

    private void a(java.util.List<com.tkay.core.common.f.aj> r10, java.util.List<com.tkay.core.common.f.aj> r11) {
            r9 = this;
            int r0 = r11.size()
            java.util.List<com.tkay.core.common.f.aj> r1 = r9.p
            int r1 = r1.size()
            r2 = 0
        Lb:
            if (r2 >= r0) goto L3d
            java.lang.Object r3 = r11.get(r2)
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3
            boolean r4 = r3.j()
            if (r4 == 0) goto L3a
            int r4 = r3.ae()
            if (r4 <= 0) goto L3a
            if (r4 > r1) goto L3a
            double r5 = com.tkay.core.common.l.g.a(r3)
            java.util.List<com.tkay.core.common.f.aj> r7 = r9.p
            int r4 = r4 + (-1)
            java.lang.Object r4 = r7.get(r4)
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4
            double r7 = com.tkay.core.common.l.g.a(r4)
            int r4 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r4 >= 0) goto L3a
            r10.add(r3)
        L3a:
            int r2 = r2 + 1
            goto Lb
        L3d:
            return
    }

    public static boolean a(com.tkay.core.common.f.aj r4, com.tkay.core.common.m.h r5) {
            int r0 = r4.Y()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            if (r0 == 0) goto L2c
            int r4 = r4.l()
            if (r4 == r2) goto L25
            r3 = 3
            if (r4 == r3) goto L25
            r3 = 6
            if (r4 == r3) goto L1d
            r3 = 7
            if (r4 == r3) goto L25
            goto L2c
        L1d:
            boolean r4 = r5.g
            if (r4 == 0) goto L22
            goto L2d
        L22:
            r5.g = r2
            goto L2c
        L25:
            boolean r4 = r5.f
            if (r4 == 0) goto L2a
            goto L2d
        L2a:
            r5.f = r2
        L2c:
            r1 = r0
        L2d:
            return r1
    }

    private static java.util.List<com.tkay.core.common.f.aj> b(java.util.List<com.tkay.core.common.f.aj> r4) {
            java.util.Iterator r4 = r4.iterator()
            r0 = 0
        L5:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r4.next()
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1
            int r2 = r1.l()
            r3 = 8
            if (r2 != r3) goto L5
            if (r0 != 0) goto L21
            java.util.ArrayList r0 = new java.util.ArrayList
            r2 = 4
            r0.<init>(r2)
        L21:
            r0.add(r1)
            goto L5
        L25:
            return r0
    }

    private double j() {
            r2 = this;
            r0 = 0
            double r0 = r2.a(r0)
            return r0
    }

    private double k() {
            r2 = this;
            r0 = 1
            double r0 = r2.a(r0)
            return r0
    }

    public final double a(boolean r6) {
            r5 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.p
            monitor-enter(r0)
            java.util.List<com.tkay.core.common.f.aj> r1 = r5.p     // Catch: java.lang.Throwable -> L2d
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L2d
            r2 = 0
            if (r1 != 0) goto Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            return r2
        Lf:
            int r4 = r5.b     // Catch: java.lang.Throwable -> L2d
            int r4 = r4 + (-1)
            int r1 = r1 + (-1)
            if (r6 == 0) goto L1b
            if (r1 >= r4) goto L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            return r2
        L1b:
            java.util.List<com.tkay.core.common.f.aj> r6 = r5.p     // Catch: java.lang.Throwable -> L2d
            int r1 = java.lang.Math.min(r4, r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r6 = r6.get(r1)     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.f.aj r6 = (com.tkay.core.common.f.aj) r6     // Catch: java.lang.Throwable -> L2d
            double r1 = com.tkay.core.common.l.g.a(r6)     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            return r1
        L2d:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public final java.util.List<com.tkay.core.common.f.aj> a() {
            r1 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.f
            return r0
    }

    public final void a(int r3) {
            r2 = this;
            int r0 = r2.c
            r1 = 2
            if (r0 != r1) goto Ld
            r0 = 1
            if (r3 != r0) goto Ld
            int r3 = r2.l
            int r3 = r3 - r0
            r2.l = r3
        Ld:
            return
    }

    public final void a(int r2, int r3) {
            r1 = this;
            int r0 = r1.i
            int r0 = r0 + r2
            r1.i = r0
            r0 = 2
            if (r3 == r0) goto Le
            int r3 = r1.j
            int r3 = r3 + r2
            r1.j = r3
            return
        Le:
            int r3 = r1.k
            int r3 = r3 + r2
            r1.k = r3
            return
    }

    public final void a(com.tkay.core.common.f.aj r9) {
            r8 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r8.o
            monitor-enter(r0)
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L54
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L56
            r2 = 0
            r3 = 0
            if (r1 != 0) goto L1b
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            r1.add(r9)     // Catch: java.lang.Throwable -> L56
            r8.a(r9, r3, r2)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return
        L1b:
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L56
            if (r3 >= r1) goto L44
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L56
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1     // Catch: java.lang.Throwable -> L56
            double r4 = com.tkay.core.common.l.g.a(r9)     // Catch: java.lang.Throwable -> L56
            double r6 = com.tkay.core.common.l.g.a(r1)     // Catch: java.lang.Throwable -> L56
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L41
            java.util.List<com.tkay.core.common.f.aj> r2 = r8.o     // Catch: java.lang.Throwable -> L56
            r2.add(r3, r9)     // Catch: java.lang.Throwable -> L56
            r8.a(r9, r3, r1)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return
        L41:
            int r3 = r3 + 1
            goto L1b
        L44:
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            r1.add(r9)     // Catch: java.lang.Throwable -> L56
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.o     // Catch: java.lang.Throwable -> L56
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L56
            int r1 = r1 + (-1)
            r8.a(r9, r1, r2)     // Catch: java.lang.Throwable -> L56
        L54:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return
        L56:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    public final void a(com.tkay.core.common.f.d r4, com.tkay.core.common.f.aj r5) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 5
            r0.<init>(r1)
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.p
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.aj> r2 = r3.p     // Catch: java.lang.Throwable -> L31
            r3.a(r0, r2)     // Catch: java.lang.Throwable -> L31
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L31
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.g
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.aj> r2 = r3.g     // Catch: java.lang.Throwable -> L2e
            r3.a(r0, r2)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2e
            java.util.Iterator r0 = r0.iterator()
        L1c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1
            r2 = 0
            a(r1, r4, r5, r2)
            goto L1c
        L2d:
            return
        L2e:
            r4 = move-exception
            monitor-exit(r1)
            throw r4
        L31:
            r4 = move-exception
            monitor-exit(r1)
            throw r4
    }

    public final java.util.List<com.tkay.core.common.f.aj> b() {
            r1 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.g
            return r0
    }

    public final java.util.List<com.tkay.core.common.f.aj> b(int r10) {
            r9 = this;
            r0 = 2
            if (r10 == r0) goto L6
            java.util.List<com.tkay.core.common.f.aj> r1 = r9.f
            goto L8
        L6:
            java.util.List<com.tkay.core.common.f.aj> r1 = r9.h
        L8:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            if (r1 == 0) goto La9
            int r3 = r1.size()
            if (r3 != 0) goto L17
            goto La9
        L17:
            r3 = 0
            java.lang.Object r4 = r1.get(r3)
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4
            if (r10 != r0) goto L25
            r2.add(r4)
            goto La0
        L25:
            double r5 = com.tkay.core.common.l.g.a(r4)
            r10 = 1
            double r7 = r9.a(r10)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto L34
            r5 = r10
            goto L35
        L34:
            r5 = r3
        L35:
            int r6 = r9.c
            if (r6 != r10) goto L5b
            int r0 = r9.j
            int r6 = r9.d
            if (r0 >= r6) goto L40
            r3 = r10
        L40:
            if (r3 == 0) goto L48
            if (r5 == 0) goto L48
            r2.add(r4)
            goto La0
        L48:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "getNextRequestList, isLessThenMaxRequestNum: "
            r10.<init>(r0)
            r10.append(r3)
            java.lang.String r0 = ", isExceedCachePrice"
            r10.append(r0)
            r10.append(r5)
            goto La0
        L5b:
            if (r6 != r0) goto La0
            int r10 = r9.l
            if (r10 != 0) goto L94
            if (r5 == 0) goto L94
            double r4 = com.tkay.core.common.l.g.a(r4)
            int r10 = r1.size()
        L6b:
            if (r3 >= r10) goto L81
            java.lang.Object r0 = r1.get(r3)
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0
            double r6 = com.tkay.core.common.l.g.a(r0)
            int r6 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r6 != 0) goto L7e
            r2.add(r0)
        L7e:
            int r3 = r3 + 1
            goto L6b
        L81:
            int r10 = r2.size()
            r9.l = r10
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "getNextRequestList: same price, need request num: "
            r10.<init>(r0)
            int r0 = r9.l
            r10.append(r0)
            goto La0
        L94:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "getNextRequestList: The number of ad sources with the same price that did not return results: "
            r10.<init>(r0)
            int r0 = r9.l
            r10.append(r0)
        La0:
            int r10 = r2.size()
            if (r10 <= 0) goto La9
            r1.removeAll(r2)
        La9:
            return r2
    }

    public final void b(com.tkay.core.common.f.aj r7) {
            r6 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r6.p
            monitor-enter(r0)
            java.util.List<com.tkay.core.common.f.aj> r1 = r6.p     // Catch: java.lang.Throwable -> L49
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L49
            if (r1 != 0) goto L11
            java.util.List<com.tkay.core.common.f.aj> r1 = r6.p     // Catch: java.lang.Throwable -> L49
            r1.add(r7)     // Catch: java.lang.Throwable -> L49
            goto L47
        L11:
            double r1 = com.tkay.core.common.l.g.a(r7)     // Catch: java.lang.Throwable -> L49
            r3 = 0
        L16:
            java.util.List<com.tkay.core.common.f.aj> r4 = r6.p     // Catch: java.lang.Throwable -> L49
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L49
            if (r3 >= r4) goto L47
            java.util.List<com.tkay.core.common.f.aj> r4 = r6.p     // Catch: java.lang.Throwable -> L49
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L49
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4     // Catch: java.lang.Throwable -> L49
            double r4 = com.tkay.core.common.l.g.a(r4)     // Catch: java.lang.Throwable -> L49
            int r4 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r4 <= 0) goto L34
            java.util.List<com.tkay.core.common.f.aj> r1 = r6.p     // Catch: java.lang.Throwable -> L49
            r1.add(r3, r7)     // Catch: java.lang.Throwable -> L49
            goto L47
        L34:
            java.util.List<com.tkay.core.common.f.aj> r4 = r6.p     // Catch: java.lang.Throwable -> L49
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L49
            int r4 = r4 + (-1)
            if (r3 != r4) goto L44
            java.util.List<com.tkay.core.common.f.aj> r1 = r6.p     // Catch: java.lang.Throwable -> L49
            r1.add(r7)     // Catch: java.lang.Throwable -> L49
            goto L47
        L44:
            int r3 = r3 + 1
            goto L16
        L47:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    public final java.util.List<com.tkay.core.common.f.aj> c() {
            r1 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.h
            return r0
    }

    public final boolean c(com.tkay.core.common.f.aj r13) {
            r12 = this;
            double r0 = com.tkay.core.common.l.g.a(r13)
            r2 = 1
            double r3 = r12.a(r2)
            java.util.List<com.tkay.core.common.f.aj> r5 = r12.g
            monitor-enter(r5)
            java.util.List<com.tkay.core.common.f.aj> r6 = r12.g     // Catch: java.lang.Throwable -> L3f
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L3f
        L12:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> L3f
            if (r7 == 0) goto L31
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> L3f
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7     // Catch: java.lang.Throwable -> L3f
            double r8 = com.tkay.core.common.l.g.a(r7)     // Catch: java.lang.Throwable -> L3f
            boolean r7 = r7.j()     // Catch: java.lang.Throwable -> L3f
            if (r7 == 0) goto L12
            double r10 = com.tkay.core.common.l.g.a(r13)     // Catch: java.lang.Throwable -> L3f
            int r7 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r7 <= 0) goto L12
            goto L33
        L31:
            r8 = 0
        L33:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L3f
            double r3 = java.lang.Math.max(r3, r8)
            int r13 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r13 <= 0) goto L3d
            return r2
        L3d:
            r13 = 0
            return r13
        L3f:
            r13 = move-exception
            monitor-exit(r5)
            throw r13
    }

    public final int d() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public final int e() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public final int f() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final com.tkay.core.common.f.am g() {
            r1 = this;
            com.tkay.core.common.f.am r0 = r1.m
            return r0
    }

    public final com.tkay.core.common.f.ae h() {
            r1 = this;
            com.tkay.core.common.f.ae r0 = r1.n
            return r0
    }

    public final java.util.List<com.tkay.core.common.f.aj> i() {
            r5 = this;
            int r0 = r5.c
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L28
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r2 = r5.d
            java.util.List<com.tkay.core.common.f.aj> r3 = r5.f
            int r3 = r3.size()
            int r2 = java.lang.Math.min(r2, r3)
            r3 = r1
        L18:
            if (r3 >= r2) goto L31
            java.util.List<com.tkay.core.common.f.aj> r4 = r5.f
            java.lang.Object r4 = r4.get(r3)
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4
            r0.add(r4)
            int r3 = r3 + 1
            goto L18
        L28:
            r3 = 2
            if (r0 != r3) goto L30
            java.util.List r0 = r5.b(r2)
            goto L31
        L30:
            r0 = 0
        L31:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "startToRequestMediationAd: mRequestNumType: "
            r2.<init>(r3)
            int r3 = r5.c
            r2.append(r3)
            java.lang.String r3 = ", needRequestNum: "
            r2.append(r3)
            if (r0 == 0) goto L48
            int r1 = r0.size()
        L48:
            r2.append(r1)
            java.lang.String r1 = ", validCacheNum: "
            r2.append(r1)
            int r1 = r5.b
            r2.append(r1)
            java.lang.String r1 = ", mWaitingFillTime: "
            r2.append(r1)
            long r3 = r5.e
            r2.append(r3)
            int r1 = r0.size()
            if (r1 <= 0) goto L6a
            java.util.List<com.tkay.core.common.f.aj> r1 = r5.f
            r1.removeAll(r0)
        L6a:
            return r0
    }
}
