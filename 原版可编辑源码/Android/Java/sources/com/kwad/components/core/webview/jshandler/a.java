package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import org.json.JSONObject;

public final class a implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public boolean Tu;

        @Override
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

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        b bVar = new b();
        try {
            bVar.parseJson(new JSONObject(str));
        } catch (Exception unused) {
        }
        a aVar = new a();
        aVar.Tu = aF(bVar.packageName);
        cVar.a(aVar);
    }

    @Override
    public final String getKey() {
        return "isAppInstalled";
    }

    @Override
    public final void onDestroy() {
    }
}
