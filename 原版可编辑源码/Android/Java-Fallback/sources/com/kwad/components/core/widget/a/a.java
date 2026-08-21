package com.kwad.components.core.widget.a;

public abstract class a implements com.kwad.sdk.core.h.a, com.kwad.sdk.utils.bn.a {
    private final java.util.concurrent.atomic.AtomicBoolean Ze;
    private java.util.Set<com.kwad.sdk.core.h.c> Zf;
    private final int Zg;
    protected final com.kwad.sdk.utils.bn gx;
    private final android.view.View mRootView;

    public a(android.view.View r3, int r4) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.Ze = r0
            r2.mRootView = r3
            r2.Zg = r4
            com.kwad.sdk.utils.bn r3 = new com.kwad.sdk.utils.bn
            r3.<init>(r2)
            r2.gx = r3
            return
    }

    private void aS(boolean r3) {
            r2 = this;
            java.util.Set<com.kwad.sdk.core.h.c> r0 = r2.Zf
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.h.c r1 = (com.kwad.sdk.core.h.c) r1
            if (r1 == 0) goto L9
            if (r3 == 0) goto L1d
            r1.aK()
            goto L9
        L1d:
            r1.aL()
            goto L9
        L21:
            return
    }

    private void jg() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.Ze
            r1 = 1
            boolean r0 = r0.getAndSet(r1)
            if (r0 != 0) goto Lc
            r2.aS(r1)
        Lc:
            return
    }

    private void sA() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.Ze
            r1 = 0
            boolean r0 = r0.getAndSet(r1)
            if (r0 == 0) goto Lc
            r2.aS(r1)
        Lc:
            return
    }

    private void sx() {
            r1 = this;
            boolean r0 = r1.ep()
            if (r0 == 0) goto La
            r1.jg()
            return
        La:
            r1.sA()
            return
    }

    @Override
    public final void a(android.os.Message r4) {
            r3 = this;
            int r4 = r4.what
            r0 = 666(0x29a, float:9.33E-43)
            if (r4 != r0) goto L10
            r3.sx()
            com.kwad.sdk.utils.bn r4 = r3.gx
            r1 = 500(0x1f4, double:2.47E-321)
            r4.sendEmptyMessageDelayed(r0, r1)
        L10:
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.h.c r2) {
            r1 = this;
            com.kwad.sdk.utils.ah.checkUiThread()
            if (r2 != 0) goto L6
            return
        L6:
            boolean r0 = r1.ep()
            if (r0 == 0) goto L10
            r2.aK()
            goto L13
        L10:
            r2.aL()
        L13:
            java.util.Set<com.kwad.sdk.core.h.c> r0 = r1.Zf
            if (r0 != 0) goto L1e
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.Zf = r0
        L1e:
            java.util.Set<com.kwad.sdk.core.h.c> r0 = r1.Zf
            r0.add(r2)
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.h.c r2) {
            r1 = this;
            com.kwad.sdk.utils.ah.checkUiThread()
            if (r2 != 0) goto L6
            return
        L6:
            java.util.Set<com.kwad.sdk.core.h.c> r0 = r1.Zf
            if (r0 == 0) goto Ld
            r0.remove(r2)
        Ld:
            return
    }

    public abstract boolean ep();

    @Override
    public final void release() {
            r1 = this;
            r1.sz()
            java.util.Set<com.kwad.sdk.core.h.c> r0 = r1.Zf
            if (r0 == 0) goto La
            r0.clear()
        La:
            return
    }

    @Override
    public final boolean sB() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.Ze
            boolean r0 = r0.get()
            return r0
    }

    public final void sy() {
            r2 = this;
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 666(0x29a, float:9.33E-43)
            r0.removeMessages(r1)
            com.kwad.sdk.utils.bn r0 = r2.gx
            r0.sendEmptyMessage(r1)
            return
    }

    public final void sz() {
            r2 = this;
            r2.sx()
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }
}
