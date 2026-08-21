package com.kwad.components.core.webview.b.d;

public final class b {
    private final java.util.Set<com.kwad.components.core.webview.b.e.e> XF;



    static class a {
        private static final com.kwad.components.core.webview.b.d.b XJ = null;

        static {
                com.kwad.components.core.webview.b.d.b r0 = new com.kwad.components.core.webview.b.d.b
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.core.webview.b.d.b.a.XJ = r0
                return
        }

        static com.kwad.components.core.webview.b.d.b sh() {
                com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.a.XJ
                return r0
        }
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r1.XF = r0
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.core.webview.b.d.b r0, java.lang.String r1) {
            r0.aR(r1)
            return
    }

    static void a(com.kwad.components.core.webview.b.d.b r0, java.lang.String r1, long r2, long r4, long r6) {
            r0.b(r1, r2, r4, r6)
            return
    }

    private void aR(java.lang.String r3) {
            r2 = this;
            java.util.Set<com.kwad.components.core.webview.b.e.e> r0 = r2.XF
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.HashSet r0 = new java.util.HashSet
            java.util.Set<com.kwad.components.core.webview.b.e.e> r1 = r2.XF
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        L14:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.webview.b.e.e r1 = (com.kwad.components.core.webview.b.e.e) r1
            r1.q(r3)
            goto L14
        L24:
            return
    }

    private void b(java.lang.String r12, long r13, long r15, long r17) {
            r11 = this;
            r0 = r11
            java.util.Set<com.kwad.components.core.webview.b.e.e> r1 = r0.XF
            int r1 = r1.size()
            if (r1 != 0) goto La
            return
        La:
            java.util.HashSet r1 = new java.util.HashSet
            java.util.Set<com.kwad.components.core.webview.b.e.e> r2 = r0.XF
            r1.<init>(r2)
            java.util.Iterator r1 = r1.iterator()
        L15:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r1.next()
            r3 = r2
            com.kwad.components.core.webview.b.e.e r3 = (com.kwad.components.core.webview.b.e.e) r3
            r4 = r12
            r5 = r13
            r7 = r15
            r9 = r17
            r3.a(r4, r5, r7, r9)
            goto L15
        L2b:
            return
    }

    public static com.kwad.components.core.webview.b.d.b sf() {
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.a.sh()
            return r0
    }

    public final void a(com.kwad.components.core.webview.b.e.e r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.Set<com.kwad.components.core.webview.b.e.e> r0 = r1.XF
            r0.add(r2)
        L7:
            return
    }

    public final void aS(java.lang.String r2) {
            r1 = this;
            com.kwad.components.core.webview.b.d.b$1 r0 = new com.kwad.components.core.webview.b.d.b$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void b(com.kwad.components.core.webview.b.e.e r2) {
            r1 = this;
            java.util.Set<com.kwad.components.core.webview.b.e.e> r0 = r1.XF
            r0.remove(r2)
            return
    }

    public final void c(java.lang.String r11, long r12, long r14, long r16) {
            r10 = this;
            com.kwad.components.core.webview.b.d.b$2 r9 = new com.kwad.components.core.webview.b.d.b$2
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r5 = r14
            r7 = r16
            r0.<init>(r1, r2, r3, r5, r7)
            com.kwad.sdk.utils.bj.runOnUiThread(r9)
            return
    }

    public final void sg() {
            r1 = this;
            java.util.Set<com.kwad.components.core.webview.b.e.e> r0 = r1.XF
            r0.clear()
            return
    }
}
