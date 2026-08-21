package com.kwad.components.core.webview.b;

import android.text.TextUtils;
import com.kwad.components.core.webview.b.b.l;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class a implements com.kwad.sdk.core.webview.c.a {
    private final AdTemplate mAdTemplate;

    public a(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        String str2;
        AdTemplate adTemplate = this.mAdTemplate;
        if (adTemplate != null) {
            String strAK = com.kwad.sdk.core.response.b.a.aK(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            if (!TextUtils.isEmpty(strAK)) {
                l lVar = new l();
                lVar.WZ = strAK;
                cVar.a(lVar);
                return;
            }
            str2 = "landing page url is null";
        } else {
            str2 = "adTemplate is null";
        }
        cVar.onError(-1, str2);
    }

    @Override
    public final String getKey() {
        return "getLandingPageInfo";
    }

    @Override
    public final void onDestroy() {
    }
}
