package com.kwad.components.ad.reward;

public final class b {
    private final java.util.Set<com.kwad.components.ad.reward.e.h> oo;




    static class a {
        private static final com.kwad.components.ad.reward.b os = null;

        static {
                com.kwad.components.ad.reward.b r0 = new com.kwad.components.ad.reward.b
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.reward.b.a.os = r0
                return
        }

        static com.kwad.components.ad.reward.b fs() {
                com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.a.os
                return r0
        }
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.oo = r0
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.reward.b r0, com.kwad.components.core.playable.PlayableSource r1) {
            r0.c(r1)
            return
    }

    static void a(com.kwad.components.ad.reward.b r0, com.kwad.components.core.playable.PlayableSource r1, com.kwad.components.ad.reward.e.l r2) {
            r0.b(r1, r2)
            return
    }

    private void b(com.kwad.components.core.playable.PlayableSource r3, com.kwad.components.ad.reward.e.l r4) {
            r2 = this;
            java.util.Set<com.kwad.components.ad.reward.e.h> r0 = r2.oo
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.Set<com.kwad.components.ad.reward.e.h> r0 = r2.oo
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.e.h r1 = (com.kwad.components.ad.reward.e.h) r1
            r1.a(r3, r4)
            goto Lf
        L1f:
            return
    }

    private void c(com.kwad.components.core.playable.PlayableSource r2) {
            r1 = this;
            java.util.Set<com.kwad.components.ad.reward.e.h> r2 = r1.oo
            int r2 = r2.size()
            if (r2 != 0) goto L9
            return
        L9:
            java.util.Set<com.kwad.components.ad.reward.e.h> r2 = r1.oo
            java.util.Iterator r2 = r2.iterator()
        Lf:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r2.next()
            com.kwad.components.ad.reward.e.h r0 = (com.kwad.components.ad.reward.e.h) r0
            r0.bT()
            goto Lf
        L1f:
            return
    }

    public static com.kwad.components.ad.reward.b fp() {
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.a.fs()
            return r0
    }

    private void fr() {
            r2 = this;
            java.util.Set<com.kwad.components.ad.reward.e.h> r0 = r2.oo
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.Set<com.kwad.components.ad.reward.e.h> r0 = r2.oo
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.e.h r1 = (com.kwad.components.ad.reward.e.h) r1
            r1.bS()
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

    public final void a(com.kwad.components.ad.reward.e.h r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.Set<com.kwad.components.ad.reward.e.h> r0 = r1.oo
            r0.add(r2)
        L7:
            return
    }

    public final void a(com.kwad.components.core.playable.PlayableSource r2) {
            r1 = this;
            r0 = 0
            r1.c(r2, r0)
            return
    }

    public final void b(com.kwad.components.ad.reward.e.h r2) {
            r1 = this;
            java.util.Set<com.kwad.components.ad.reward.e.h> r0 = r1.oo
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.core.playable.PlayableSource r2) {
            r1 = this;
            boolean r0 = isMainThread()
            if (r0 == 0) goto La
            r1.c(r2)
            return
        La:
            com.kwad.components.ad.reward.b$3 r0 = new com.kwad.components.ad.reward.b$3
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void c(com.kwad.components.core.playable.PlayableSource r2, com.kwad.components.ad.reward.e.l r3) {
            r1 = this;
            boolean r0 = isMainThread()
            if (r0 == 0) goto La
            r1.b(r2, r3)
            return
        La:
            com.kwad.components.ad.reward.b$1 r0 = new com.kwad.components.ad.reward.b$1
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void fq() {
            r1 = this;
            boolean r0 = isMainThread()
            if (r0 == 0) goto La
            r1.fr()
            return
        La:
            com.kwad.components.ad.reward.b$2 r0 = new com.kwad.components.ad.reward.b$2
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }
}
