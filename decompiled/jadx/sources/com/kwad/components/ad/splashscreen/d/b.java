package com.kwad.components.ad.splashscreen.d;

import android.os.Bundle;
import android.view.ViewGroup;
import com.kwad.components.ad.splashscreen.c;
import com.kwad.components.core.n.e;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends e {
    private KsSplashScreenAd.SplashScreenAdInteractionListener BR;
    private com.kwad.sdk.core.h.b bJ;
    private AdTemplate mAdTemplate;

    private void a(com.kwad.sdk.core.h.b bVar) {
        this.bJ = bVar;
    }

    public static b b(AdTemplate adTemplate, com.kwad.sdk.core.h.b bVar, KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener) {
        Bundle bundle = new Bundle();
        bundle.putString("ad_splash_template_str", adTemplate.toJson().toString());
        b bVar2 = new b();
        bVar2.setArguments(bundle);
        bVar2.a(bVar);
        bVar2.setSplashScreenAdListener(splashScreenAdInteractionListener);
        return bVar2;
    }

    private void initData() {
        String string = getArguments().getString("ad_splash_template_str");
        try {
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(string));
            this.mAdTemplate = adTemplate;
        } catch (Throwable unused) {
        }
    }

    private void setSplashScreenAdListener(KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener) {
        this.BR = splashScreenAdInteractionListener;
    }

    @Override // com.kwad.components.core.n.e
    public final ViewGroup lA() {
        initData();
        if (this.mAdTemplate != null) {
            return c.a(this.mContext, this.mAdTemplate, false, this.bJ, this.BR);
        }
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.a((AdTemplate) null, "adTemplate null", false);
        KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener = this.BR;
        if (splashScreenAdInteractionListener != null) {
            splashScreenAdInteractionListener.onAdShowError(0, "data parse error");
        }
        return null;
    }
}
