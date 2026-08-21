package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.sdk.core.webview.c.a {

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
        if (TextUtils.isEmpty(jVar.data)) {
            aVar.data = "";
        } else {
            aVar.data = new String(com.kwad.sdk.core.a.c.AJ().encode(jVar.data.getBytes()), com.kwad.sdk.crash.utils.a.UTF_8);
        }
        cVar.a(aVar);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "base64";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
