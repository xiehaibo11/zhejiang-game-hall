package com.kwad.framework.filedownloader.b;

public final class c implements com.kwad.framework.filedownloader.b.a {
    private final com.kwad.framework.filedownloader.b.b abN;
    private final com.kwad.framework.filedownloader.b.d abO;
    private final long abP;
    private volatile java.util.List<java.lang.Integer> abQ;
    private java.util.concurrent.atomic.AtomicInteger abR;
    private volatile java.lang.Thread abS;
    private android.os.Handler handler;


    public c() {
            r3 = this;
            r3.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r3.abQ = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r3.abR = r0
            com.kwad.framework.filedownloader.b.b r0 = new com.kwad.framework.filedownloader.b.b
            r0.<init>()
            r3.abN = r0
            com.kwad.framework.filedownloader.b.d r0 = new com.kwad.framework.filedownloader.b.d
            r0.<init>()
            r3.abO = r0
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.vO()
            long r0 = r0.aeK
            r3.abP = r0
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "RemitHandoverToDB"
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.bs(r1)
            r2 = 10
            r0.<init>(r1, r2)
            r0.start()
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r0 = r0.getLooper()
            com.kwad.framework.filedownloader.b.c$1 r2 = new com.kwad.framework.filedownloader.b.c$1
            r2.<init>(r3)
            r1.<init>(r0, r2)
            r3.handler = r1
            return
    }

    static java.lang.Thread a(com.kwad.framework.filedownloader.b.c r0) {
            java.lang.Thread r0 = r0.abS
            return r0
    }

    static java.lang.Thread a(com.kwad.framework.filedownloader.b.c r0, java.lang.Thread r1) {
            r1 = 0
            r0.abS = r1
            return r1
    }

    static void a(com.kwad.framework.filedownloader.b.c r0, int r1) {
            r0.bk(r1)
            return
    }

    static java.util.concurrent.atomic.AtomicInteger b(com.kwad.framework.filedownloader.b.c r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.abR
            return r0
    }

    private void bk(int r3) {
            r2 = this;
            com.kwad.framework.filedownloader.b.d r0 = r2.abO
            com.kwad.framework.filedownloader.b.b r1 = r2.abN
            com.kwad.framework.filedownloader.d.c r1 = r1.bf(r3)
            r0.b(r1)
            com.kwad.framework.filedownloader.b.b r0 = r2.abN
            java.util.List r0 = r0.bg(r3)
            com.kwad.framework.filedownloader.b.d r1 = r2.abO
            r1.bh(r3)
            java.util.Iterator r3 = r0.iterator()
        L1a:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r3.next()
            com.kwad.framework.filedownloader.d.a r0 = (com.kwad.framework.filedownloader.d.a) r0
            com.kwad.framework.filedownloader.b.d r1 = r2.abO
            r1.a(r0)
            goto L1a
        L2c:
            return
    }

    private boolean bl(int r2) {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.abQ
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r2 = r0.contains(r2)
            if (r2 != 0) goto Le
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }

    private void bm(int r2) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            r0.removeMessages(r2)
            java.util.concurrent.atomic.AtomicInteger r0 = r1.abR
            int r0 = r0.get()
            if (r0 != r2) goto L1d
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r1.abS = r2
            android.os.Handler r2 = r1.handler
            r0 = 0
            r2.sendEmptyMessage(r0)
            java.util.concurrent.locks.LockSupport.park()
            return
        L1d:
            r1.bk(r2)
            return
    }

    static java.util.List c(com.kwad.framework.filedownloader.b.c r0) {
            java.util.List<java.lang.Integer> r0 = r0.abQ
            return r0
    }

    @Override
    public final void a(int r2, int r3, long r4) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.a(r2, r3, r4)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.a(r2, r3, r4)
            return
    }

    @Override
    public final void a(int r8, long r9, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            com.kwad.framework.filedownloader.b.b r0 = r7.abN
            r1 = r8
            r2 = r9
            r4 = r11
            r5 = r12
            r0.a(r1, r2, r4, r5)
            boolean r0 = r7.bl(r8)
            if (r0 == 0) goto L10
            return
        L10:
            com.kwad.framework.filedownloader.b.d r1 = r7.abO
            r2 = r8
            r3 = r9
            r5 = r11
            r6 = r12
            r1.a(r2, r3, r5, r6)
            return
    }

    @Override
    public final void a(int r11, java.lang.String r12, long r13, long r15, int r17) {
            r10 = this;
            r0 = r10
            com.kwad.framework.filedownloader.b.b r1 = r0.abN
            r2 = r11
            r3 = r12
            r4 = r13
            r6 = r15
            r8 = r17
            r1.a(r2, r3, r4, r6, r8)
            boolean r1 = r10.bl(r11)
            if (r1 == 0) goto L13
            return
        L13:
            com.kwad.framework.filedownloader.b.d r2 = r0.abO
            r3 = r11
            r4 = r12
            r5 = r13
            r7 = r15
            r9 = r17
            r2.a(r3, r4, r5, r7, r9)
            return
    }

    @Override
    public final void a(int r2, java.lang.Throwable r3) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.a(r2, r3)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.a(r2, r3)
            return
    }

    @Override
    public final void a(int r2, java.lang.Throwable r3, long r4) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.a(r2, r3, r4)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Le
            r1.bm(r2)
        Le:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.a(r2, r3, r4)
            java.util.List<java.lang.Integer> r3 = r1.abQ
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.remove(r2)
            return
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.d.a r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.a(r2)
            int r0 = r2.getId()
            boolean r0 = r1.bl(r0)
            if (r0 == 0) goto L10
            return
        L10:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.a(r2)
            return
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.d.c r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.b(r2)
            int r0 = r2.getId()
            boolean r0 = r1.bl(r0)
            if (r0 == 0) goto L10
            return
        L10:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.b(r2)
            return
    }

    @Override
    public final void be(int r4) {
            r3 = this;
            android.os.Handler r0 = r3.handler
            long r1 = r3.abP
            r0.sendEmptyMessageDelayed(r4, r1)
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.d.c bf(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            com.kwad.framework.filedownloader.d.c r2 = r0.bf(r2)
            return r2
    }

    @Override
    public final java.util.List<com.kwad.framework.filedownloader.d.a> bg(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            java.util.List r2 = r0.bg(r2)
            return r2
    }

    @Override
    public final void bh(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.bh(r2)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.bh(r2)
            return
    }

    @Override
    public final boolean bi(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.bi(r2)
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            boolean r2 = r0.bi(r2)
            return r2
    }

    @Override
    public final void bj(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.bj(r2)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.bj(r2)
            return
    }

    @Override
    public final void c(int r2, long r3) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.c(r2, r3)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.c(r2, r3)
            return
    }

    @Override
    public final void clear() {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.clear()
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.clear()
            return
    }

    @Override
    public final void d(int r3, long r4) {
            r2 = this;
            com.kwad.framework.filedownloader.b.b r0 = r2.abN
            r0.d(r3, r4)
            boolean r0 = r2.bl(r3)
            if (r0 == 0) goto L27
            android.os.Handler r0 = r2.handler
            r0.removeMessages(r3)
            java.util.concurrent.atomic.AtomicInteger r0 = r2.abR
            int r0 = r0.get()
            if (r0 != r3) goto L2c
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r2.abS = r0
            android.os.Handler r0 = r2.handler
            r1 = 0
            r0.sendEmptyMessage(r1)
            java.util.concurrent.locks.LockSupport.park()
        L27:
            com.kwad.framework.filedownloader.b.d r0 = r2.abO
            r0.d(r3, r4)
        L2c:
            java.util.List<java.lang.Integer> r4 = r2.abQ
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4.remove(r3)
            return
    }

    @Override
    public final void e(int r2, long r3) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.e(r2, r3)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Le
            r1.bm(r2)
        Le:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.e(r2, r3)
            java.util.List<java.lang.Integer> r3 = r1.abQ
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.remove(r2)
            return
    }

    @Override
    public final void q(int r2, int r3) {
            r1 = this;
            com.kwad.framework.filedownloader.b.b r0 = r1.abN
            r0.q(r2, r3)
            boolean r0 = r1.bl(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            com.kwad.framework.filedownloader.b.d r0 = r1.abO
            r0.q(r2, r3)
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.b.a.a uh() {
            r3 = this;
            com.kwad.framework.filedownloader.b.d r0 = r3.abO
            com.kwad.framework.filedownloader.b.b r1 = r3.abN
            android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r1.abK
            com.kwad.framework.filedownloader.b.b r2 = r3.abN
            android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r2 = r2.abL
            com.kwad.framework.filedownloader.b.a$a r0 = r0.a(r1, r2)
            return r0
    }
}
