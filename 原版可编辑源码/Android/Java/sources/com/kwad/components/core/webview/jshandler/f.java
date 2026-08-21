package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import com.kwad.components.core.webview.jshandler.l;
import com.kwad.sdk.service.ServiceProvider;
import org.json.JSONException;
import org.json.JSONObject;

public final class f implements com.kwad.sdk.core.webview.c.a {
    private static String aG(String str) {
        l.a aVar = new l.a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (JSONException unused) {
        }
        return TextUtils.isEmpty(aVar.key) ? "" : com.kwad.sdk.utils.y.b(ServiceProvider.getContext(), "ksadsdk_js_storage_cache_name", aVar.key, "");
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (TextUtils.isEmpty(str)) {
            cVar.onError(-1, "data is empty");
            return;
        }
        String strAG = aG(str);
        l.a aVar = new l.a();
        aVar.value = strAG;
        cVar.a(aVar);
    }

    @Override
    public final String getKey() {
        return "getStorageItem";
    }

    @Override
    public final void onDestroy() {
    }
}
