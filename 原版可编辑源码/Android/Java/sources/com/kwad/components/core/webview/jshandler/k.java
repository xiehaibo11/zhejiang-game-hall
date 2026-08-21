package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import com.kwad.components.core.webview.jshandler.l;
import com.kwad.sdk.service.ServiceProvider;
import org.json.JSONException;
import org.json.JSONObject;

public final class k implements com.kwad.sdk.core.webview.c.a {
    private static boolean aH(String str) {
        l.a aVar = new l.a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (JSONException unused) {
        }
        if (TextUtils.isEmpty(aVar.key)) {
            return false;
        }
        com.kwad.sdk.utils.y.i(ServiceProvider.getContext(), "ksadsdk_js_storage_cache_name", aVar.key);
        return true;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (TextUtils.isEmpty(str)) {
            cVar.onError(-1, "data is empty");
        } else if (aH(str)) {
            cVar.a(null);
        } else {
            cVar.onError(-1, "");
        }
    }

    @Override
    public final String getKey() {
        return "removeStorageItem";
    }

    @Override
    public final void onDestroy() {
    }
}
