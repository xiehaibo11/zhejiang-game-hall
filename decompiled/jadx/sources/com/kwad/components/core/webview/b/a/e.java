package com.kwad.components.core.webview.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class e extends v {
    private final b Ww;

    static class a implements com.kwad.sdk.core.b {
        public int height;

        private a() {
        }

        /* synthetic */ a(byte b) {
            this();
        }

        @Override // com.kwad.sdk.core.b
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override // com.kwad.sdk.core.b
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", this.height);
            return jSONObject;
        }
    }

    public interface b {
        int jj();
    }

    public e(b bVar) {
        this.Ww = bVar;
    }

    @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = new a((byte) 0);
        b bVar = this.Ww;
        if (bVar != null) {
            aVar.height = bVar.jj();
            cVar.a(aVar);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "getBottomLimitHeight";
    }

    @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
