package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.request.model.StatusInfo;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ij implements com.kwad.sdk.core.d<StatusInfo> {
    private static void a(StatusInfo statusInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        statusInfo.aur = jSONObject.optInt("personalRecommend");
        statusInfo.aus = jSONObject.optInt("programmaticRecommend");
        statusInfo.aut = new StatusInfo.SplashAdInfo();
        statusInfo.aut.parseJson(jSONObject.optJSONObject("splashAdInfo"));
        statusInfo.auu = new StatusInfo.NativeAdRequestInfo();
        statusInfo.auu.parseJson(jSONObject.optJSONObject("nativeAdInfo"));
        statusInfo.auv = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("taskStats");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                com.kwad.sdk.core.request.model.f fVar = new com.kwad.sdk.core.request.model.f();
                fVar.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                statusInfo.auv.add(fVar);
            }
        }
    }

    private static JSONObject b(StatusInfo statusInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (statusInfo.aur != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "personalRecommend", statusInfo.aur);
        }
        if (statusInfo.aus != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "programmaticRecommend", statusInfo.aus);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "splashAdInfo", statusInfo.aut);
        com.kwad.sdk.utils.t.a(jSONObject, "nativeAdInfo", statusInfo.auu);
        com.kwad.sdk.utils.t.putValue(jSONObject, "taskStats", statusInfo.auv);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((StatusInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((StatusInfo) bVar, jSONObject);
    }
}
