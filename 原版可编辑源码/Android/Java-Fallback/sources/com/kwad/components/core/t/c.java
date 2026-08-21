package com.kwad.components.core.t;

public final class c {
    private java.util.Set<com.kwad.components.core.t.c.b> Rk;

    static class a {
        private static com.kwad.components.core.t.c Rl;

        static {
                com.kwad.components.core.t.c r0 = new com.kwad.components.core.t.c
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.core.t.c.a.Rl = r0
                return
        }

        static com.kwad.components.core.t.c qm() {
                com.kwad.components.core.t.c r0 = com.kwad.components.core.t.c.a.Rl
                return r0
        }
    }

    public interface b {
        void onPageClose();
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.Rk = r0
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.core.t.c qk() {
            com.kwad.components.core.t.c r0 = com.kwad.components.core.t.c.a.qm()
            return r0
    }

    public final void a(com.kwad.components.core.t.c.b r2) {
            r1 = this;
            java.util.Set<com.kwad.components.core.t.c$b> r0 = r1.Rk
            r0.add(r2)
            return
    }

    public final void b(com.kwad.components.core.t.c.b r2) {
            r1 = this;
            java.util.Set<com.kwad.components.core.t.c$b> r0 = r1.Rk
            r0.remove(r2)
            return
    }

    public final void ql() {
            r2 = this;
            java.util.Set<com.kwad.components.core.t.c$b> r0 = r2.Rk
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.Set<com.kwad.components.core.t.c$b> r0 = r2.Rk
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.t.c$b r1 = (com.kwad.components.core.t.c.b) r1
            r1.onPageClose()
            goto Lf
        L1f:
            return
    }
}
