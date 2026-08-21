package com.kwad.components.ad.interstitial.aggregate;

public final class c {
    private volatile boolean hY;
    private com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> hZ;

    final class 1 extends com.kwad.components.core.p.h {
        final com.kwad.sdk.internal.api.SceneImpl dU;
        final long hD;
        final com.kwad.components.ad.interstitial.aggregate.c.b ia;
        final com.kwad.components.ad.interstitial.aggregate.c ib;



        1(com.kwad.components.ad.interstitial.aggregate.c r1, com.kwad.sdk.internal.api.SceneImpl r2, com.kwad.components.ad.interstitial.aggregate.c.b r3, long r4) {
                r0 = this;
                r0.ib = r1
                r0.dU = r2
                r0.ia = r3
                r0.hD = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(com.kwad.components.core.response.model.AdResultData r2) {
                r1 = this;
                com.kwad.components.ad.interstitial.aggregate.c$1$2 r0 = new com.kwad.components.ad.interstitial.aggregate.c$1$2
                r0.<init>(r1, r2)
                com.kwad.sdk.utils.bj.runOnUiThread(r0)
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.kwad.components.ad.interstitial.aggregate.c$1$1 r0 = new com.kwad.components.ad.interstitial.aggregate.c$1$1
                r0.<init>(r1, r2, r3)
                com.kwad.sdk.utils.bj.runOnUiThread(r0)
                return
        }
    }


    static class a {
        private static com.kwad.components.ad.interstitial.aggregate.c ih;

        static {
                com.kwad.components.ad.interstitial.aggregate.c r0 = new com.kwad.components.ad.interstitial.aggregate.c
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.interstitial.aggregate.c.a.ih = r0
                return
        }

        static com.kwad.components.ad.interstitial.aggregate.c cu() {
                com.kwad.components.ad.interstitial.aggregate.c r0 = com.kwad.components.ad.interstitial.aggregate.c.a.ih
                return r0
        }
    }

    public interface b {
        void onInterstitialAdLoad(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1);
    }

    private c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.hY = r0
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.interstitial.aggregate.c r0, com.kwad.components.core.response.model.AdResultData r1, long r2) {
            a(r1, r2)
            return
    }

    private void a(com.kwad.components.core.p.a.b r2, com.kwad.components.core.p.h r3) {
            r1 = this;
            com.kwad.components.core.m.a r0 = new com.kwad.components.core.m.a
            r0.<init>(r2)
            r1.hZ = r0
            com.kwad.components.ad.interstitial.aggregate.c$2 r2 = new com.kwad.components.ad.interstitial.aggregate.c$2
            r2.<init>(r1, r3)
            r0.request(r2)
            return
    }

    private static void a(com.kwad.components.core.response.model.AdResultData r3, long r4) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.util.List r2 = r3.getAdTemplateList()
            int r2 = r2.size()
            if (r2 <= 0) goto L23
            java.util.List r3 = r3.getAdTemplateList()
            r2 = 0
            java.lang.Object r3 = r3.get(r2)
            com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
            if (r3 == 0) goto L23
            com.kwad.components.core.o.a r2 = com.kwad.components.core.o.a.pA()
            long r0 = r0 - r4
            r2.f(r3, r0)
        L23:
            return
    }

    static boolean a(com.kwad.components.ad.interstitial.aggregate.c r0, boolean r1) {
            r1 = 0
            r0.hY = r1
            return r1
    }

    public static com.kwad.components.ad.interstitial.aggregate.c ct() {
            com.kwad.components.ad.interstitial.aggregate.c r0 = com.kwad.components.ad.interstitial.aggregate.c.a.cu()
            return r0
    }

    public final void a(int r7, int r8, com.kwad.sdk.internal.api.SceneImpl r9, com.kwad.components.ad.interstitial.aggregate.c.b r10) {
            r6 = this;
            boolean r7 = r6.hY
            if (r7 == 0) goto L5
            return
        L5:
            com.kwad.sdk.internal.api.SceneImpl r7 = r9.clone()
            long r4 = android.os.SystemClock.elapsedRealtime()
            r0 = 16
            r7.setAdStyle(r0)
            r7.setAdNum(r8)
            com.kwad.components.core.p.a.b r8 = new com.kwad.components.core.p.a.b
            r8.<init>(r7)
            com.kwad.components.ad.interstitial.aggregate.c$1 r7 = new com.kwad.components.ad.interstitial.aggregate.c$1
            r0 = r7
            r1 = r6
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4)
            r6.a(r8, r7)
            return
    }

    public final void release() {
            r1 = this;
            com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> r0 = r1.hZ
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }
}
