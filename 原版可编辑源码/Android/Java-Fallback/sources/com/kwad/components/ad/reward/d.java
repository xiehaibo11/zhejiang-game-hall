package com.kwad.components.ad.reward;

public final class d {
    private final java.util.Set<com.kwad.components.ad.reward.e.k> ow;


    static class a {
        private static final com.kwad.components.ad.reward.d oz = null;

        static {
                com.kwad.components.ad.reward.d r0 = new com.kwad.components.ad.reward.d
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.reward.d.a.oz = r0
                return
        }

        static com.kwad.components.ad.reward.d fx() {
                com.kwad.components.ad.reward.d r0 = com.kwad.components.ad.reward.d.a.oz
                return r0
        }
    }

    private d() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.ow = r0
            return
    }

    d(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.reward.d r0, com.kwad.components.core.webview.b.b.q r1) {
            r0.b(r1)
            return
    }

    private void b(com.kwad.components.core.webview.b.b.q r3) {
            r2 = this;
            java.util.Set<com.kwad.components.ad.reward.e.k> r0 = r2.ow
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.Set<com.kwad.components.ad.reward.e.k> r0 = r2.ow
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.e.k r1 = (com.kwad.components.ad.reward.e.k) r1
            r1.a(r3)
            goto Lf
        L1f:
            return
    }

    public static com.kwad.components.ad.reward.d fw() {
            com.kwad.components.ad.reward.d r0 = com.kwad.components.ad.reward.d.a.fx()
            return r0
    }

    public final void a(com.kwad.components.ad.reward.e.k r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.Set<com.kwad.components.ad.reward.e.k> r0 = r1.ow
            r0.add(r2)
        L7:
            return
    }

    public final void b(com.kwad.components.ad.reward.e.k r2) {
            r1 = this;
            java.util.Set<com.kwad.components.ad.reward.e.k> r0 = r1.ow
            r0.remove(r2)
            return
    }

    public final void c(com.kwad.components.core.webview.b.b.q r2) {
            r1 = this;
            com.kwad.components.ad.reward.d$1 r0 = new com.kwad.components.ad.reward.d$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }
}
