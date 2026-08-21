package com.tkay.network.ks;

public class KSATDrawAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    android.content.Context a;
    com.kwad.sdk.api.KsDrawAd b;
    android.view.View c;


    public KSATDrawAd(android.content.Context r1, com.kwad.sdk.api.KsDrawAd r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            com.tkay.network.ks.KSATDrawAd$1 r1 = new com.tkay.network.ks.KSATDrawAd$1
            r1.<init>(r0, r2)
            r2.setAdInteractionListener(r1)
            return
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.kwad.sdk.api.KsDrawAd r0 = r2.b
            r1 = 0
            if (r0 == 0) goto La
            r0.setAdInteractionListener(r1)
            r2.b = r1
        La:
            r2.a = r1
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r2) {
            r1 = this;
            android.view.View r2 = r1.c     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto Le
            com.kwad.sdk.api.KsDrawAd r2 = r1.b     // Catch: java.lang.Exception -> L11
            android.content.Context r0 = r1.a     // Catch: java.lang.Exception -> L11
            android.view.View r2 = r2.getDrawView(r0)     // Catch: java.lang.Exception -> L11
            r1.c = r2     // Catch: java.lang.Exception -> L11
        Le:
            android.view.View r2 = r1.c     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            r2 = 0
            return r2
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void prepare(android.view.View r1, com.tkay.nativead.api.TYNativePrepareInfo r2) {
            r0 = this;
            return
    }
}
