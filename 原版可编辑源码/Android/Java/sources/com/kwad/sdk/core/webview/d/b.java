package com.kwad.sdk.core.webview.d;

import com.kwad.sdk.core.webview.c.c;
import com.kwad.sdk.core.webview.request.WebCardGetDataResponse;
import com.kwad.sdk.core.webview.request.b;
import org.json.JSONException;
import org.json.JSONObject;

public final class b implements com.kwad.sdk.core.webview.c.a {
    private c aza;

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public String method;
        public String params;
        public String url;
    }

    private void a(a aVar) {
        new com.kwad.sdk.core.webview.request.b().a(aVar, new b.a() {
            @Override
            public final void a(WebCardGetDataResponse webCardGetDataResponse) {
                if (b.this.aza != null) {
                    b.this.aza.a(webCardGetDataResponse);
                }
            }

            @Override
            public final void onError(int i, String str) {
                if (b.this.aza != null) {
                    b.this.aza.onError(i, str);
                }
            }
        });
    }

    @Override
    public final void a(String str, c cVar) {
        this.aza = cVar;
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(str));
            a(aVar);
        } catch (JSONException e) {
            c cVar2 = this.aza;
            if (cVar2 != null) {
                cVar2.onError(-1, "data parse json error.");
            }
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    @Override
    public final String getKey() {
        return "requestData";
    }

    @Override
    public final void onDestroy() {
        this.aza = null;
    }
}
