package com.kwad.components.ad.reward;

public final class c {
    private final java.util.Set<com.kwad.components.ad.reward.e.j> ot;


    static class a {
        private static final com.kwad.components.ad.reward.c ov = null;

        static {
                com.kwad.components.ad.reward.c r0 = new com.kwad.components.ad.reward.c
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.reward.c.a.ov = r0
                return
        }

        static com.kwad.components.ad.reward.c fv() {
                com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.a.ov
                return r0
        }
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.ot = r0
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.reward.c ft() {
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.a.fv()
            return r0
    }

    private void fu() {
            r2 = this;
            java.util.Set<com.kwad.components.ad.reward.e.j> r0 = r2.ot
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.Set<com.kwad.components.ad.reward.e.j> r0 = r2.ot
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.e.j r1 = (com.kwad.components.ad.reward.e.j) r1
            r1.onRewardVerify()
            goto Lf
        L1f:
            return
    }

    private static boolean isMainThread() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public final void a(com.kwad.components.ad.reward.e.j r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.Set<com.kwad.components.ad.reward.e.j> r0 = r1.ot
            r0.add(r2)
        L7:
            return
    }

    public final void b(com.kwad.components.ad.reward.e.j r2) {
            r1 = this;
            java.util.Set<com.kwad.components.ad.reward.e.j> r0 = r1.ot
            r0.remove(r2)
            return
    }

    public final void notifyRewardVerify() {
            r1 = this;
            boolean r0 = isMainThread()
            if (r0 == 0) goto La
            r1.fu()
            return
        La:
            com.kwad.components.ad.reward.c$1 r0 = new com.kwad.components.ad.reward.c$1
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }
}
