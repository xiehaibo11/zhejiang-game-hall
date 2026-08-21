package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.splashscreen.SplashPreloadManager;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gt implements com.kwad.sdk.core.d<SplashPreloadManager.PreLoadItem> {
    private static void a(SplashPreloadManager.PreLoadItem preLoadItem, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        preLoadItem.cacheTime = jSONObject.optLong("cacheTime");
        preLoadItem.expiredTime = jSONObject.optLong("expiredTime");
        preLoadItem.preloadId = jSONObject.optString("preloadId");
        if (preLoadItem.preloadId == JSONObject.NULL) {
            preLoadItem.preloadId = "";
        }
    }

    private static JSONObject b(SplashPreloadManager.PreLoadItem preLoadItem, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (preLoadItem.cacheTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cacheTime", preLoadItem.cacheTime);
        }
        if (preLoadItem.expiredTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "expiredTime", preLoadItem.expiredTime);
        }
        if (preLoadItem.preloadId != null && !preLoadItem.preloadId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "preloadId", preLoadItem.preloadId);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((SplashPreloadManager.PreLoadItem) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((SplashPreloadManager.PreLoadItem) bVar, jSONObject);
    }
}
