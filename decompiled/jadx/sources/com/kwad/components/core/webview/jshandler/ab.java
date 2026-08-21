package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class ab implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private int UN = 0;
    private a kc;

    public interface a {
        void onAdShow();
    }

    public static final class b extends com.kwad.sdk.core.report.b implements com.kwad.sdk.core.b {
        private int UO;
        private String UP;
        private int UQ;
        private AdTemplate adTemplate;

        public final int getActionType() {
            return this.UO;
        }

        @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
        public final void parseJson(JSONObject jSONObject) {
            if (jSONObject == null) {
                return;
            }
            this.UO = jSONObject.optInt("actionType");
            this.UQ = jSONObject.optInt("refreshType");
            this.UP = jSONObject.optString("payload");
            try {
                if (jSONObject.has("adTemplate")) {
                    String string = jSONObject.getString("adTemplate");
                    if (this.adTemplate == null) {
                        this.adTemplate = new AdTemplate();
                    }
                    this.adTemplate.parseJson(new JSONObject(string));
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
        }

        public final String rw() {
            return this.UP;
        }

        @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "actionType", this.UO);
            com.kwad.sdk.utils.t.putValue(jSONObject, "payload", this.UP);
            com.kwad.sdk.utils.t.putValue(jSONObject, "refreshType", this.UQ);
            com.kwad.sdk.utils.t.a(jSONObject, "adTemplate", this.adTemplate);
            return jSONObject;
        }
    }

    public ab(com.kwad.sdk.core.webview.b bVar) {
        this.TL = bVar;
    }

    private AdTemplate c(b bVar) {
        return bVar.adTemplate != null ? bVar.adTemplate : this.TL.getAdTemplate();
    }

    public final void a(a aVar) {
        this.kc = aVar;
    }

    protected void a(b bVar) {
        com.kwad.sdk.core.e.c.d("WebCardLogHandler", "handleH5Log actionType actionType" + bVar.UO);
        if (bVar.UO == 1) {
            com.kwad.sdk.core.report.j jVarDt = new com.kwad.sdk.core.report.j().dt(bVar.UP);
            a aVar = this.kc;
            if (aVar != null) {
                aVar.onAdShow();
            }
            if (bVar.adTemplate == null) {
                com.kwad.components.core.t.b.qj().a(this.TL.getAdTemplate(), null, jVarDt);
                return;
            } else {
                jVarDt.cj(this.UN);
                com.kwad.components.core.t.b.qj().a(bVar.adTemplate, null, jVarDt);
                return;
            }
        }
        if (bVar.UO != 2) {
            if (bVar.UO == 12006) {
                com.kwad.components.core.o.a.pA().a(c(bVar), bVar.UQ, this.UN);
                return;
            } else {
                com.kwad.sdk.core.report.a.a(c(bVar), bVar.UO, this.TL.mReportExtData, bVar.UP);
                com.kwad.components.core.webview.b.d.a.sb().aQ(bVar.UP);
                return;
            }
        }
        com.kwad.sdk.widget.e eVar = this.TL.aye;
        com.kwad.sdk.core.report.j jVarDt2 = new com.kwad.sdk.core.report.j().cj(this.UN).dt(bVar.UP);
        if (eVar != null) {
            jVarDt2.c(eVar.getTouchCoords());
        }
        a(jVarDt2);
        com.kwad.sdk.core.report.a.a(c(bVar), jVarDt2, this.TL.mReportExtData);
    }

    protected void a(com.kwad.sdk.core.report.j jVar) {
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.TL.DY()) {
            cVar.onError(-1, "native adTemplate is null");
        }
        try {
            b bVar = new b();
            bVar.parseJson(new JSONObject(str));
            a(bVar);
            cVar.a(null);
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            cVar.onError(-1, e.getMessage());
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "log";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
