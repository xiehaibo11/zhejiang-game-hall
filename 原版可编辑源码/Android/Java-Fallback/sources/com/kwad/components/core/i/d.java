package com.kwad.components.core.i;

public final class d {
    private java.lang.Object KS;

    public d(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.KS = r1
            return
    }

    public final void c(com.kwad.components.core.i.c r2) {
            r1 = this;
            java.lang.Object r0 = r1.KS
            if (r0 == 0) goto L19
            if (r2 == 0) goto L19
            java.lang.Object r0 = r2.getHost()
            if (r0 == 0) goto L19
            java.lang.Object r2 = r2.getHost()     // Catch: java.lang.Exception -> L19
            com.kwad.sdk.api.KsInnerAd r2 = (com.kwad.sdk.api.KsInnerAd) r2     // Catch: java.lang.Exception -> L19
            java.lang.Object r0 = r1.KS     // Catch: java.lang.Exception -> L19
            com.kwad.sdk.api.KsInnerAd$KsInnerAdInteractionListener r0 = (com.kwad.sdk.api.KsInnerAd.KsInnerAdInteractionListener) r0     // Catch: java.lang.Exception -> L19
            r0.onAdClicked(r2)     // Catch: java.lang.Exception -> L19
        L19:
            return
    }

    public final void d(com.kwad.components.core.i.c r2) {
            r1 = this;
            java.lang.Object r0 = r1.KS
            if (r0 == 0) goto L19
            if (r2 == 0) goto L19
            java.lang.Object r0 = r2.getHost()
            if (r0 == 0) goto L19
            java.lang.Object r2 = r2.getHost()     // Catch: java.lang.Exception -> L19
            com.kwad.sdk.api.KsInnerAd r2 = (com.kwad.sdk.api.KsInnerAd) r2     // Catch: java.lang.Exception -> L19
            java.lang.Object r0 = r1.KS     // Catch: java.lang.Exception -> L19
            com.kwad.sdk.api.KsInnerAd$KsInnerAdInteractionListener r0 = (com.kwad.sdk.api.KsInnerAd.KsInnerAdInteractionListener) r0     // Catch: java.lang.Exception -> L19
            r0.onAdShow(r2)     // Catch: java.lang.Exception -> L19
        L19:
            return
    }

    public final void destroy() {
            r1 = this;
            r0 = 0
            r1.KS = r0
            return
    }
}
