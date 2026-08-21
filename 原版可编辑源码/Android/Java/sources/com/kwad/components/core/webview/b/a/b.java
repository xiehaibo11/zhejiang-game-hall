package com.kwad.components.core.webview.b.a;

import com.kwad.components.core.e.d.a;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

public final class b implements com.kwad.sdk.core.webview.c.a {
    protected final com.kwad.sdk.core.webview.b TL;
    private AdTemplate mAdTemplate;

    public b(com.kwad.sdk.core.webview.b bVar, AdTemplate adTemplate) {
        this.TL = bVar;
        this.mAdTemplate = adTemplate;
    }

    private void Z(AdTemplate adTemplate) {
        adTemplate.mIsForceJumpLandingPage = true;
        com.kwad.components.core.e.d.a.a(new a.a(this.TL.MT.getContext()).P(adTemplate).ao(1).ao(false));
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("adTemplate")) {
                String string = jSONObject.getString("adTemplate");
                AdTemplate adTemplate = new AdTemplate();
                adTemplate.parseJson(new JSONObject(string));
                Z(adTemplate);
            } else {
                Z(this.mAdTemplate);
            }
            cVar.a(null);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    @Override
    public final String getKey() {
        return "activityMiddlePageConvert";
    }

    @Override
    public final void onDestroy() {
    }
}
