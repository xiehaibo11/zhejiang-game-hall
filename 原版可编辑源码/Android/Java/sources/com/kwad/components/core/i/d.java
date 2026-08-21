package com.kwad.components.core.i;

import com.kwad.sdk.api.KsInnerAd;

public final class d {
    private Object KS;

    public d(Object obj) {
        this.KS = obj;
    }

    public final void c(c cVar) {
        if (this.KS == null || cVar == null || cVar.getHost() == null) {
            return;
        }
        try {
            ((KsInnerAd.KsInnerAdInteractionListener) this.KS).onAdClicked((KsInnerAd) cVar.getHost());
        } catch (Exception unused) {
        }
    }

    public final void d(c cVar) {
        if (this.KS == null || cVar == null || cVar.getHost() == null) {
            return;
        }
        try {
            ((KsInnerAd.KsInnerAdInteractionListener) this.KS).onAdShow((KsInnerAd) cVar.getHost());
        } catch (Exception unused) {
        }
    }

    public final void destroy() {
        this.KS = null;
    }
}
