package com.kwad.components.ad.h;

public final class e {
    private final java.util.concurrent.atomic.AtomicBoolean ol;
    private final java.util.List<com.kwad.components.ad.b.a.b> om;

    static class a {
        private static final com.kwad.components.ad.h.e on = null;

        static {
                com.kwad.components.ad.h.e r0 = new com.kwad.components.ad.h.e
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.h.e.a.on = r0
                return
        }

        static com.kwad.components.ad.h.e fo() {
                com.kwad.components.ad.h.e r0 = com.kwad.components.ad.h.e.a.on
                return r0
        }
    }

    private e() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.ol = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.om = r0
            return
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.h.e fn() {
            com.kwad.components.ad.h.e r0 = com.kwad.components.ad.h.e.a.fo()
            return r0
    }

    public final boolean S() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.ol
            boolean r0 = r0.get()
            return r0
    }

    public final void a(com.kwad.components.ad.b.a.b r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.components.ad.b.a.b> r0 = r1.om
            r0.add(r2)
        L7:
            return
    }

    public final void b(com.kwad.components.ad.b.a.b r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.components.ad.b.a.b> r0 = r1.om
            r0.remove(r2)
        L7:
            return
    }

    public final void fj() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.ol
            r1 = 1
            r0.set(r1)
            java.util.List<com.kwad.components.ad.b.a.b> r0 = r2.om
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.b.a.b r1 = (com.kwad.components.ad.b.a.b) r1
            r1.T()
            goto Lc
        L1c:
            return
    }

    public final void fl() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.ol
            r1 = 0
            r0.set(r1)
            java.util.List<com.kwad.components.ad.b.a.b> r0 = r2.om
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.b.a.b r1 = (com.kwad.components.ad.b.a.b) r1
            r1.U()
            goto Lc
        L1c:
            return
    }
}
