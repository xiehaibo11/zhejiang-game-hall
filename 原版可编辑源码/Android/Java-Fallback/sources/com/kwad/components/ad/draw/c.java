package com.kwad.components.ad.draw;

public final class c extends com.kwad.sdk.api.core.AbstractKsDrawAd implements com.kwad.components.core.internal.api.a {
    private com.kwad.sdk.api.KsDrawAd.AdInteractionListener bD;
    private final com.kwad.sdk.core.h.b bJ;
    private com.kwad.components.ad.draw.b bO;
    private com.kwad.components.core.internal.api.c bP;
    private final com.kwad.sdk.api.KsDrawAd.AdInteractionListener bQ;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;



    public c(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.internal.api.c r0 = new com.kwad.components.core.internal.api.c
            r0.<init>()
            r1.bP = r0
            com.kwad.components.ad.draw.c$1 r0 = new com.kwad.components.ad.draw.c$1
            r0.<init>(r1)
            r1.bJ = r0
            com.kwad.components.ad.draw.c$2 r0 = new com.kwad.components.ad.draw.c$2
            r0.<init>(r1)
            r1.bQ = r0
            r1.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            com.kwad.sdk.core.response.model.b r2 = com.kwad.sdk.core.response.b.a.bi(r2)
            java.lang.String r2 = r2.getUrl()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.preloadImage(r2, r0)
            com.kwad.components.ad.h.b r2 = com.kwad.components.ad.h.b.fa()
            r2.a(r1)
            return
    }

    static com.kwad.components.core.internal.api.c a(com.kwad.components.ad.draw.c r0) {
            com.kwad.components.core.internal.api.c r0 = r0.bP
            return r0
    }

    static com.kwad.sdk.api.KsDrawAd.AdInteractionListener b(com.kwad.components.ad.draw.c r0) {
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r0 = r0.bD
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.internal.api.b r2) {
            r1 = this;
            com.kwad.components.core.internal.api.c r0 = r1.bP
            r0.a(r2)
            return
    }

    @Override
    public final boolean ae() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void b(com.kwad.components.core.internal.api.b r2) {
            r1 = this;
            com.kwad.components.core.internal.api.c r0 = r1.bP
            r0.b(r2)
            return
    }

    @Override
    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    @Override
    public final android.view.View getDrawView2(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = "show"
            java.lang.String r1 = "draw"
            if (r5 == 0) goto L89
            com.kwad.sdk.KsAdSDKImpl r2 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r2 = r2.hasInitFinish()
            if (r2 != 0) goto L12
            goto L89
        L12:
            android.content.Context r5 = com.kwad.sdk.m.l.wrapContextIfNeed(r5)     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.i.a.ah(r1, r0)     // Catch: java.lang.Throwable -> L43
            com.kwad.components.ad.draw.b r2 = r4.bO     // Catch: java.lang.Throwable -> L43
            if (r2 != 0) goto L38
            com.kwad.components.ad.draw.b r2 = new com.kwad.components.ad.draw.b     // Catch: java.lang.Throwable -> L43
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L43
            r4.bO = r2     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.core.h.b r3 = r4.bJ     // Catch: java.lang.Throwable -> L43
            r2.setPageExitListener(r3)     // Catch: java.lang.Throwable -> L43
            com.kwad.components.ad.draw.b r2 = r4.bO     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r3 = r4.bD     // Catch: java.lang.Throwable -> L43
            r2.setAdInteractionListener(r3)     // Catch: java.lang.Throwable -> L43
            com.kwad.components.ad.draw.b r2 = r4.bO     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate     // Catch: java.lang.Throwable -> L43
            r2.a(r3)     // Catch: java.lang.Throwable -> L43
            goto L3f
        L38:
            java.lang.String r2 = "KSDrawAdControl"
            java.lang.String r3 = "mDrawVideoView is not null"
            com.kwad.sdk.core.e.c.i(r2, r3)     // Catch: java.lang.Throwable -> L43
        L3f:
            com.kwad.sdk.i.a.ai(r1, r0)     // Catch: java.lang.Throwable -> L43
            goto L85
        L43:
            r0 = move-exception
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r1 = r1.getIsExternal()
            if (r1 == 0) goto L88
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "context:"
            r2.<init>(r3)
            java.lang.Class r3 = r5.getClass()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = "--classloader:"
            r2.append(r3)
            java.lang.Class r5 = r5.getClass()
            java.lang.ClassLoader r5 = r5.getClassLoader()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            int r5 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r5 < r2) goto L82
            r1.addSuppressed(r0)
        L82:
            com.kwad.components.core.d.a.b(r1)
        L85:
            com.kwad.components.ad.draw.b r5 = r4.bO
            return r5
        L88:
            throw r0
        L89:
            r5 = 0
            return r5
    }

    @Override
    public final int getECPM() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aJ(r0)
            return r0
    }

    @Override
    public final int getInteractionType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aI(r0)
            return r0
    }

    @Override
    public final int getMaterialType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = com.kwad.sdk.core.config.d.zt()
            if (r1 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            long r1 = r1.llsid
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "llsid"
            r0.put(r2, r1)
        L18:
            return r0
    }

    @Override
    public final void reportAdExposureFailed(int r2, com.kwad.sdk.api.model.AdExposureFailedReason r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r2, r3)
            return
    }

    @Override
    public final void setAdInteractionListener(com.kwad.sdk.api.KsDrawAd.AdInteractionListener r1) {
            r0 = this;
            r0.bD = r1
            return
    }

    @Override
    public final void setBidEcpm(int r5) {
            r4 = this;
            long r0 = (long) r5
            r2 = -1
            r4.setBidEcpm(r0, r2)
            return
    }

    @Override
    public final void setBidEcpm(long r2, long r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            r0.mBidEcpm = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.i(r2, r4)
            return
    }
}
