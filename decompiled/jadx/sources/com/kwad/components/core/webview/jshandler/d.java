package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String data;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.b.b.j jVar = new com.kwad.components.core.webview.b.b.j();
        try {
            jVar.parseJson(new JSONObject(str));
        } catch (Exception unused) {
        }
        a aVar = new a();
        aVar.data = TextUtils.isEmpty(jVar.data) ? "" : com.kwad.sdk.utils.ad.bp(jVar.data);
        cVar.a(aVar);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "md5";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
