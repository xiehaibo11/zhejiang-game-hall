package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements com.kwad.sdk.core.webview.c.a {

    /* JADX INFO: renamed from: com.kwad.components.core.webview.jshandler.a$a, reason: collision with other inner class name */
    public static class C0170a extends com.kwad.sdk.core.response.a.a {
        public boolean Tu;

        @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "isInstalled", this.Tu);
            return jSONObject;
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public String packageName;
    }

    private static boolean aF(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return com.kwad.sdk.utils.ak.ak(ServiceProvider.getContext(), str);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        b bVar = new b();
        try {
            bVar.parseJson(new JSONObject(str));
        } catch (Exception unused) {
        }
        C0170a c0170a = new C0170a();
        c0170a.Tu = aF(bVar.packageName);
        cVar.a(c0170a);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "isAppInstalled";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
