package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStatusInfo;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class af implements com.kwad.sdk.core.d<AdStatusInfo> {
    private static void a(AdStatusInfo adStatusInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adStatusInfo.loadFromCache = jSONObject.optBoolean("loadFromCache");
        adStatusInfo.loadDataTime = jSONObject.optLong("loadDataTime");
        adStatusInfo.downloadFinishTime = jSONObject.optLong("downloadFinishTime");
        adStatusInfo.downloadType = jSONObject.optInt("downloadType");
        adStatusInfo.downloadSize = jSONObject.optLong("downloadSize");
    }

    private static JSONObject b(AdStatusInfo adStatusInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adStatusInfo.loadFromCache) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "loadFromCache", adStatusInfo.loadFromCache);
        }
        if (adStatusInfo.loadDataTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "loadDataTime", adStatusInfo.loadDataTime);
        }
        if (adStatusInfo.downloadFinishTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadFinishTime", adStatusInfo.downloadFinishTime);
        }
        if (adStatusInfo.downloadType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadType", adStatusInfo.downloadType);
        }
        if (adStatusInfo.downloadSize != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadSize", adStatusInfo.downloadSize);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStatusInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStatusInfo) bVar, jSONObject);
    }
}
