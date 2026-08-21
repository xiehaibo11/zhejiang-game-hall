package com.kwad.framework.filedownloader.b;

public final class b implements com.kwad.framework.filedownloader.b.a {
    final android.util.SparseArray<com.kwad.framework.filedownloader.d.c> abK;
    final android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> abL;

    class a implements com.kwad.framework.filedownloader.b.a.a {
        final com.kwad.framework.filedownloader.b.b abM;

        a(com.kwad.framework.filedownloader.b.b r1) {
                r0 = this;
                r0.abM = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(int r1, com.kwad.framework.filedownloader.d.c r2) {
                r0 = this;
                return
        }

        @Override
        public final void c(com.kwad.framework.filedownloader.d.c r1) {
                r0 = this;
                return
        }

        @Override
        public final java.util.Iterator<com.kwad.framework.filedownloader.d.c> iterator() {
                r2 = this;
                com.kwad.framework.filedownloader.b.b$b r0 = new com.kwad.framework.filedownloader.b.b$b
                com.kwad.framework.filedownloader.b.b r1 = r2.abM
                r0.<init>(r1)
                return r0
        }

        @Override
        public final void ui() {
                r0 = this;
                return
        }
    }

    class b implements java.util.Iterator<com.kwad.framework.filedownloader.d.c> {
        final com.kwad.framework.filedownloader.b.b abM;

        b(com.kwad.framework.filedownloader.b.b r1) {
                r0 = this;
                r0.abM = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean hasNext() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final com.kwad.framework.filedownloader.d.c next() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final void remove() {
                r0 = this;
                return
        }
    }

    public b() {
            r1 = this;
            r1.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.abK = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.abL = r0
            return
    }

    private void d(com.kwad.framework.filedownloader.d.c r4) {
            r3 = this;
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r3.abK
            monitor-enter(r0)
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r3.abK     // Catch: java.lang.Throwable -> Le
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> Le
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r4
    }

    @Override
    public final void a(int r3, int r4, long r5) {
            r2 = this;
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r0 = r2.abL
            monitor-enter(r0)
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r1 = r2.abL     // Catch: java.lang.Throwable -> L29
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L29
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            if (r3 != 0) goto Lf
            return
        Lf:
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L28
            java.lang.Object r0 = r3.next()
            com.kwad.framework.filedownloader.d.a r0 = (com.kwad.framework.filedownloader.d.a) r0
            int r1 = r0.getIndex()
            if (r1 != r4) goto L13
            r0.J(r5)
        L28:
            return
        L29:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r3
    }

    @Override
    public final void a(int r1, long r2, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public final void a(int r1, java.lang.String r2, long r3, long r5, int r7) {
            r0 = this;
            return
    }

    @Override
    public final void a(int r1, java.lang.Throwable r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(int r1, java.lang.Throwable r2, long r3) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.d.a r5) {
            r4 = this;
            int r0 = r5.getId()     // Catch: java.lang.Exception -> L23
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r1 = r4.abL     // Catch: java.lang.Exception -> L23
            monitor-enter(r1)     // Catch: java.lang.Exception -> L23
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r2 = r4.abL     // Catch: java.lang.Throwable -> L20
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L20
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L20
            if (r2 != 0) goto L1b
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L20
            r2.<init>()     // Catch: java.lang.Throwable -> L20
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r3 = r4.abL     // Catch: java.lang.Throwable -> L20
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> L20
        L1b:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L20
            r2.add(r5)     // Catch: java.lang.Exception -> L23
            return
        L20:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L20
            throw r5     // Catch: java.lang.Exception -> L23
        L23:
            return
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.d.c r4) {
            r3 = this;
            if (r4 != 0) goto Lb
            r4 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r0 = "update but model == null!"
            com.kwad.framework.filedownloader.f.d.d(r3, r0, r4)
            return
        Lb:
            int r0 = r4.getId()
            com.kwad.framework.filedownloader.d.c r0 = r3.bf(r0)
            if (r0 == 0) goto L2f
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r3.abK
            monitor-enter(r0)
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r3.abK     // Catch: java.lang.Throwable -> L2c
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> L2c
            r1.remove(r2)     // Catch: java.lang.Throwable -> L2c
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r3.abK     // Catch: java.lang.Throwable -> L2c
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> L2c
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            goto L32
        L2c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r4
        L2f:
            r3.d(r4)
        L32:
            return
    }

    @Override
    public final void be(int r1) {
            r0 = this;
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.d.c bf(int r3) {
            r2 = this;
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r2.abK
            monitor-enter(r0)
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r2.abK     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld
            com.kwad.framework.filedownloader.d.c r3 = (com.kwad.framework.filedownloader.d.c) r3     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return r3
        Ld:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r3
    }

    @Override
    public final java.util.List<com.kwad.framework.filedownloader.d.a> bg(int r4) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L1a
            r0.<init>()     // Catch: java.lang.Exception -> L1a
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r1 = r3.abL     // Catch: java.lang.Exception -> L1a
            monitor-enter(r1)     // Catch: java.lang.Exception -> L1a
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r2 = r3.abL     // Catch: java.lang.Throwable -> L17
            java.lang.Object r4 = r2.get(r4)     // Catch: java.lang.Throwable -> L17
            java.util.List r4 = (java.util.List) r4     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L17
            if (r4 == 0) goto L16
            r0.addAll(r4)     // Catch: java.lang.Exception -> L1a
        L16:
            return r0
        L17:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L17
            throw r4     // Catch: java.lang.Exception -> L1a
        L1a:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            return r4
    }

    @Override
    public final void bh(int r3) {
            r2 = this;
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r0 = r2.abL     // Catch: java.lang.Exception -> Ld
            monitor-enter(r0)     // Catch: java.lang.Exception -> Ld
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r1 = r2.abL     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            goto Ld
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }

    @Override
    public final boolean bi(int r3) {
            r2 = this;
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r2.abK
            monitor-enter(r0)
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r2.abK     // Catch: java.lang.Throwable -> Lb
            r1.remove(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            r3 = 1
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    @Override
    public final void bj(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void c(int r1, long r2) {
            r0 = this;
            return
    }

    @Override
    public final void clear() {
            r2 = this;
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r2.abK
            monitor-enter(r0)
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r2.abK     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    @Override
    public final void d(int r1, long r2) {
            r0 = this;
            r0.bi(r1)
            return
    }

    @Override
    public final void e(int r1, long r2) {
            r0 = this;
            return
    }

    @Override
    public final void q(int r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.b.a.a uh() {
            r1 = this;
            com.kwad.framework.filedownloader.b.b$a r0 = new com.kwad.framework.filedownloader.b.b$a
            r0.<init>(r1)
            return r0
    }
}
