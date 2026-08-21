package com.tkay.core.common.res.a;

public class a extends com.tkay.core.common.res.image.b {
    final java.lang.String a;
    public com.tkay.core.common.res.a.b b;
    public java.util.List<com.tkay.core.common.res.a.a.a> j;
    public com.tkay.core.common.res.a.a.b k;
    int l;
    private final int m;
    private final int n;
    private int o;
    private int p;
    private long q;
    private java.lang.String r;
    private boolean s;

    public static abstract class a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract void a(java.lang.String r1, java.lang.String r2);

        public abstract boolean a(int r1, long r2, long r4);
    }

    public static abstract class b {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract void a(long r1, long r3, long r5, long r7, long r9);

        public abstract void a(java.lang.String r1, java.lang.String r2, long r3, long r5, long r7, long r9);
    }

    public a(java.lang.String r3) {
            r2 = this;
            r2.<init>(r3)
            java.lang.Class<com.tkay.core.common.res.a.a> r3 = com.tkay.core.common.res.a.a.class
            java.lang.String r3 = r3.getSimpleName()
            r2.a = r3
            r3 = 0
            r2.m = r3
            r0 = 1
            r2.n = r0
            r0 = -1
            r2.l = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.j = r0
            com.tkay.core.common.res.a.b r0 = new com.tkay.core.common.res.a.b
            r0.<init>()
            r2.b = r0
            r2.p = r3
            r0 = 0
            r2.q = r0
            r2.s = r3
            r2.o = r3
            return
    }

    private void a(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private synchronized void a(int r12, long r13) {
            r11 = this;
            monitor-enter(r11)
            int r0 = r11.l     // Catch: java.lang.Throwable -> L55
            if (r0 == r12) goto L19
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L55
            r0.<init>()     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = r11.c     // Catch: java.lang.Throwable -> L55
            r0.append(r1)     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = " notifyDownloadProcess:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L55
            r0.append(r12)     // Catch: java.lang.Throwable -> L55
            r11.l = r12     // Catch: java.lang.Throwable -> L55
        L19:
            java.util.List<com.tkay.core.common.res.a.a$a> r0 = r11.j     // Catch: java.lang.Throwable -> L55
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L55
            r1 = 0
            r10 = r1
        L21:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L44
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L55
            r3 = r2
            com.tkay.core.common.res.a.a$a r3 = (com.tkay.core.common.res.a.a.a) r3     // Catch: java.lang.Throwable -> L55
            long r7 = r11.i     // Catch: java.lang.Throwable -> L55
            r4 = r12
            r5 = r13
            boolean r2 = r3.a(r4, r5, r7)     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L21
            r2 = 100
            if (r12 == r2) goto L3f
            r2 = 1
            r10 = r2
            goto L40
        L3f:
            r10 = r1
        L40:
            r0.remove()     // Catch: java.lang.Throwable -> L55
            goto L21
        L44:
            com.tkay.core.common.a.j r2 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = r11.c     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = r11.r     // Catch: java.lang.Throwable -> L55
            long r5 = r11.i     // Catch: java.lang.Throwable -> L55
            r7 = r13
            r9 = r12
            r2.a(r3, r4, r5, r7, r9, r10)     // Catch: java.lang.Throwable -> L55
            monitor-exit(r11)
            return
        L55:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    private void a(com.tkay.core.common.res.a.a.b r1) {
            r0 = this;
            r0.k = r1
            return
    }

    private void b(int r22, long r23) {
            r21 = this;
            r0 = r21
            r8 = r22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.c
            r1.append(r2)
            java.lang.String r2 = " notifyDownloadFinish: downloadRate:"
            r1.append(r2)
            r1.append(r8)
            r1 = 100
            if (r8 != r1) goto L42
            com.tkay.core.common.a.j r1 = com.tkay.core.common.a.j.a()
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.r
            long r4 = r0.i
            r9 = 1
            r6 = r23
            r8 = r22
            r1.a(r2, r3, r4, r6, r8, r9)
            com.tkay.core.common.res.a.a$b r10 = r0.k
            if (r10 == 0) goto L42
            long r11 = r0.i
            long r13 = r0.e
            long r1 = r0.g
            long r3 = r0.f
            long r5 = r0.h
            r15 = r1
            r17 = r3
            r19 = r5
            r10.a(r11, r13, r15, r17, r19)
        L42:
            return
    }

    private synchronized void b(java.lang.String r13, java.lang.String r14) {
            r12 = this;
            monitor-enter(r12)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r0.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = r12.c     // Catch: java.lang.Throwable -> L4c
            r0.append(r1)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = " notifyLoadFailed: errorCode:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L4c
            r0.append(r13)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = ",errorMsg:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L4c
            r0.append(r14)     // Catch: java.lang.Throwable -> L4c
            r0 = 0
            r12.o = r0     // Catch: java.lang.Throwable -> L4c
            java.util.List<com.tkay.core.common.res.a.a$a> r0 = r12.j     // Catch: java.lang.Throwable -> L4c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4c
        L24:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4c
            if (r1 == 0) goto L34
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.res.a.a$a r1 = (com.tkay.core.common.res.a.a.a) r1     // Catch: java.lang.Throwable -> L4c
            r1.a(r13, r14)     // Catch: java.lang.Throwable -> L4c
            goto L24
        L34:
            r12.j()     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.res.a.a$b r0 = r12.k     // Catch: java.lang.Throwable -> L4c
            if (r0 == 0) goto L4a
            com.tkay.core.common.res.a.a$b r1 = r12.k     // Catch: java.lang.Throwable -> L4c
            long r4 = r12.i     // Catch: java.lang.Throwable -> L4c
            long r6 = r12.e     // Catch: java.lang.Throwable -> L4c
            long r8 = r12.f     // Catch: java.lang.Throwable -> L4c
            long r10 = r12.h     // Catch: java.lang.Throwable -> L4c
            r2 = r13
            r3 = r14
            r1.a(r2, r3, r4, r6, r8, r10)     // Catch: java.lang.Throwable -> L4c
        L4a:
            monitor-exit(r12)
            return
        L4c:
            r13 = move-exception
            monitor-exit(r12)
            throw r13
    }

    private synchronized boolean b(int r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.s     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            if (r0 == 0) goto L8
            monitor-exit(r3)
            return r1
        L8:
            com.tkay.core.common.res.a.b r0 = r3.b     // Catch: java.lang.Throwable -> L1a
            int r0 = r0.c     // Catch: java.lang.Throwable -> L1a
            r2 = 2
            if (r0 != r2) goto L18
            com.tkay.core.common.res.a.b r0 = r3.b     // Catch: java.lang.Throwable -> L1a
            int r0 = r0.a     // Catch: java.lang.Throwable -> L1a
            if (r4 < r0) goto L18
            r4 = 0
            monitor-exit(r3)
            return r4
        L18:
            monitor-exit(r3)
            return r1
        L1a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private int g() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    private void h() {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            r1 = 4
            java.lang.String r0 = r0.a(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L1f
            java.lang.String r0 = ""
            java.lang.String r1 = "without saveDirectory"
            r3.b(r0, r1)
            return
        L1f:
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            boolean r0 = r2.exists()
            if (r0 != 0) goto L2d
            r2.mkdirs()
        L2d:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            java.lang.String r2 = r3.c
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            java.lang.String r0 = r0.b(r1, r2)
            r3.r = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r3.r
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L58
            long r0 = r0.length()
            r3.q = r0
        L58:
            return
    }

    private boolean i() {
            r4 = this;
            int r0 = r4.p
            r1 = 0
            r2 = 100
            if (r0 != r2) goto L14
            long r2 = r4.q
            r4.a(r0, r2)
            int r0 = r4.p
            long r2 = r4.q
            r4.b(r0, r2)
            return r1
        L14:
            int r3 = r4.o
            if (r3 != 0) goto L1c
            if (r0 >= r2) goto L1c
            r0 = 1
            return r0
        L1c:
            return r1
    }

    private synchronized void j() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.res.a.a$a> r0 = r1.j     // Catch: java.lang.Throwable -> L8
            r0.clear()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r1 = 5
            r0.a(r3, r1)
            return
    }

    public final synchronized void a(com.tkay.core.common.res.a.a.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.res.a.a$a> r0 = r1.j     // Catch: java.lang.Throwable -> L10
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto Le
            java.util.List<com.tkay.core.common.res.a.a$a> r0 = r1.j     // Catch: java.lang.Throwable -> L10
            r0.add(r2)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void a(com.tkay.core.common.res.a.b r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            r0.<init>()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = r2.c     // Catch: java.lang.Throwable -> L3c
            r0.append(r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = " setVideoUrlLoaderConfig: mReadyRate:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L3c
            int r1 = r3.a     // Catch: java.lang.Throwable -> L3c
            r0.append(r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = ",mVideoCtnType:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L3c
            int r1 = r3.c     // Catch: java.lang.Throwable -> L3c
            r0.append(r1)     // Catch: java.lang.Throwable -> L3c
            com.tkay.core.common.res.a.b r0 = r2.b     // Catch: java.lang.Throwable -> L3c
            int r0 = r0.a     // Catch: java.lang.Throwable -> L3c
            int r1 = r3.a     // Catch: java.lang.Throwable -> L3c
            if (r0 >= r1) goto L2d
            com.tkay.core.common.res.a.b r0 = r2.b     // Catch: java.lang.Throwable -> L3c
            int r1 = r3.a     // Catch: java.lang.Throwable -> L3c
            r0.a = r1     // Catch: java.lang.Throwable -> L3c
        L2d:
            com.tkay.core.common.res.a.b r0 = r2.b     // Catch: java.lang.Throwable -> L3c
            int r0 = r0.c     // Catch: java.lang.Throwable -> L3c
            r1 = 1
            if (r0 == r1) goto L3a
            com.tkay.core.common.res.a.b r0 = r2.b     // Catch: java.lang.Throwable -> L3c
            int r3 = r3.c     // Catch: java.lang.Throwable -> L3c
            r0.c = r3     // Catch: java.lang.Throwable -> L3c
        L3a:
            monitor-exit(r2)
            return
        L3c:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    protected final void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.b(r1, r2)
            return
    }

    @Override
    protected final boolean a(java.io.InputStream r14) {
            r13 = this;
            java.lang.String r0 = r13.r
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Ld
        La:
            r1 = r2
            goto L82
        Ld:
            r0 = 0
            long r3 = r13.q     // Catch: java.lang.Throwable -> L78
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r4 = 4636737291354636288(0x4059000000000000, double:100.0)
            r6 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            if (r3 <= 0) goto L38
            long r8 = r13.q     // Catch: java.lang.Throwable -> L78
            r14.skip(r8)     // Catch: java.lang.Throwable -> L78
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L78
            java.lang.String r8 = r13.r     // Catch: java.lang.Throwable -> L78
            r3.<init>(r8, r1)     // Catch: java.lang.Throwable -> L78
            long r8 = r13.q     // Catch: java.lang.Throwable -> L75
            double r8 = (double) r8     // Catch: java.lang.Throwable -> L75
            double r8 = r8 * r6
            long r10 = r13.i     // Catch: java.lang.Throwable -> L75
            double r10 = (double) r10     // Catch: java.lang.Throwable -> L75
            double r8 = r8 / r10
            double r8 = r8 * r4
            int r0 = (int) r8     // Catch: java.lang.Throwable -> L75
            r13.p = r0     // Catch: java.lang.Throwable -> L75
            long r8 = r13.q     // Catch: java.lang.Throwable -> L75
            r13.a(r0, r8)     // Catch: java.lang.Throwable -> L75
            goto L41
        L38:
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L78
            java.lang.String r8 = r13.r     // Catch: java.lang.Throwable -> L78
            r3.<init>(r8)     // Catch: java.lang.Throwable -> L78
            r13.p = r2     // Catch: java.lang.Throwable -> L75
        L41:
            r0 = r3
            r3 = 2048(0x800, float:2.87E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L78
        L46:
            int r8 = r14.read(r3)     // Catch: java.lang.Throwable -> L78
            r9 = -1
            if (r8 == r9) goto L6e
            int r9 = r13.p     // Catch: java.lang.Throwable -> L78
            boolean r9 = r13.b(r9)     // Catch: java.lang.Throwable -> L78
            if (r9 == 0) goto L6e
            r0.write(r3, r2, r8)     // Catch: java.lang.Throwable -> L78
            long r9 = r13.q     // Catch: java.lang.Throwable -> L78
            long r11 = (long) r8     // Catch: java.lang.Throwable -> L78
            long r9 = r9 + r11
            r13.q = r9     // Catch: java.lang.Throwable -> L78
            double r8 = (double) r9     // Catch: java.lang.Throwable -> L78
            double r8 = r8 * r6
            long r10 = r13.i     // Catch: java.lang.Throwable -> L78
            double r10 = (double) r10     // Catch: java.lang.Throwable -> L78
            double r8 = r8 / r10
            double r8 = r8 * r4
            int r8 = (int) r8     // Catch: java.lang.Throwable -> L78
            r13.p = r8     // Catch: java.lang.Throwable -> L78
            long r9 = r13.q     // Catch: java.lang.Throwable -> L78
            r13.a(r8, r9)     // Catch: java.lang.Throwable -> L78
            goto L46
        L6e:
            r0.close()     // Catch: java.lang.Throwable -> L78
            r0.close()     // Catch: java.lang.Throwable -> L82
            goto L82
        L75:
            r14 = move-exception
            r0 = r3
            goto L79
        L78:
            r14 = move-exception
        L79:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L8a
            if (r0 == 0) goto La
            r0.close()     // Catch: java.lang.Throwable -> La
            goto La
        L82:
            int r14 = r13.p
            long r2 = r13.q
            r13.b(r14, r2)
            return r1
        L8a:
            r14 = move-exception
            if (r0 == 0) goto L90
            r0.close()     // Catch: java.lang.Throwable -> L90
        L90:
            throw r14
    }

    @Override
    protected final void b() {
            r0 = this;
            return
    }

    @Override
    protected final void c() {
            r1 = this;
            r0 = 0
            r1.o = r0
            return
    }

    public final void e() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = " startRequest: canStartLoader():"
            r0.append(r1)
            boolean r1 = r2.i()
            r0.append(r1)
            boolean r0 = r2.i()
            if (r0 == 0) goto L25
            r2.h()
            r0 = 1
            r2.o = r0
            r2.d()
        L25:
            return
    }

    public final void f() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = " startRequest: resumeRequest():"
            r0.append(r1)
            boolean r1 = r2.i()
            r0.append(r1)
            r0 = 1
            r2.s = r0
            boolean r1 = r2.i()
            if (r1 == 0) goto L27
            r2.h()
            r2.o = r0
            r2.d()
        L27:
            return
    }
}
