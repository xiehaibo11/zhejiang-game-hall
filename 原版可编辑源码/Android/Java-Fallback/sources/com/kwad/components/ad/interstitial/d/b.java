package com.kwad.components.ad.interstitial.d;

public class b extends com.kwad.sdk.mvp.Presenter {
    public com.kwad.components.ad.interstitial.d.c jf;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void ah() {
            r1 = this;
            super.ah()
            java.lang.Object r0 = r1.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r1.jf = r0
            return
    }

    public void cN() {
            r3 = this;
            java.util.List r0 = r3.Gj()
            if (r0 != 0) goto L7
            return
        L7:
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.mvp.Presenter r1 = (com.kwad.sdk.mvp.Presenter) r1
            boolean r2 = r1 instanceof com.kwad.components.ad.interstitial.d.b
            if (r2 == 0) goto Lb
            com.kwad.components.ad.interstitial.d.b r1 = (com.kwad.components.ad.interstitial.d.b) r1
            r1.cN()
            goto Lb
        L21:
            return
    }

    public void cO() {
            r3 = this;
            java.util.List r0 = r3.Gj()
            if (r0 != 0) goto L7
            return
        L7:
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.mvp.Presenter r1 = (com.kwad.sdk.mvp.Presenter) r1
            boolean r2 = r1 instanceof com.kwad.components.ad.interstitial.d.b
            if (r2 == 0) goto Lb
            com.kwad.components.ad.interstitial.d.b r1 = (com.kwad.components.ad.interstitial.d.b) r1
            r1.cO()
            goto Lb
        L21:
            return
    }
}
