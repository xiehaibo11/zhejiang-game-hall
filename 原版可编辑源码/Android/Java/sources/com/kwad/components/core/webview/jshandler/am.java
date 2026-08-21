package com.kwad.components.core.webview.jshandler;

import org.json.JSONObject;

public final class am implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public static final class a implements com.kwad.sdk.core.b {
        private String Vo;

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "lifeStatus", this.Vo);
            return jSONObject;
        }
    }

    private void aK(String str) {
        if (this.Tv != null) {
            a aVar = new a();
            aVar.Vo = str;
            this.Tv.a(aVar);
        }
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
    }

    @Override
    public final String getKey() {
        return "registerLifecycleListener";
    }

    @Override
    public final void onDestroy() {
        this.Tv = null;
    }

    public final void rA() {
        aK("showEnd");
    }

    public final void rB() {
        aK("hideStart");
    }

    public final void rC() {
        aK("hideEnd");
    }

    public final void rD() {
        aK("pageVisiable");
    }

    public final void rE() {
        aK("pageInvisiable");
    }

    public final void rz() {
        aK("showStart");
    }
}
