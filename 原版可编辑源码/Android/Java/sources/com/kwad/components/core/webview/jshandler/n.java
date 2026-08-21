package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public final class n implements com.kwad.sdk.core.webview.c.a {
    private List<AdTemplate> TJ;
    private com.kwad.sdk.core.webview.b cE;
    private b oQ;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public long creativeId = -1;
        public int adStyle = -1;
    }

    public interface b {
        void y(AdTemplate adTemplate);
    }

    public n(com.kwad.sdk.core.webview.b bVar) {
        this.cE = bVar;
    }

    public n(List<AdTemplate> list) {
        this.TJ = list;
    }

    private List<AdTemplate> ru() {
        List<AdTemplate> list = this.TJ;
        if (list != null) {
            return list;
        }
        com.kwad.sdk.core.webview.b bVar = this.cE;
        if (bVar != null) {
            return bVar.DX();
        }
        return null;
    }

    public final void a(b bVar) {
        this.oQ = bVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            a aVar = new a();
            aVar.parseJson(new JSONObject(str));
            AdTemplate adTemplateA = com.kwad.sdk.core.response.b.d.a(ru(), aVar.creativeId, aVar.adStyle);
            if (this.oQ != null) {
                this.oQ.y(adTemplateA);
            }
        } catch (JSONException unused) {
        }
    }

    @Override
    public final String getKey() {
        return "adImpression";
    }

    @Override
    public final void onDestroy() {
    }
}
