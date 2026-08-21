package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.scene.URLPackage;
import com.kwad.sdk.internal.api.NativeAdExtraDataImpl;
import com.kwad.sdk.internal.api.SceneImpl;
import org.json.JSONObject;

public final class hl implements com.kwad.sdk.core.d<SceneImpl> {
    private static void a(SceneImpl sceneImpl, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        sceneImpl.urlPackage = new URLPackage();
        sceneImpl.urlPackage.parseJson(jSONObject.optJSONObject("urlPackage"));
        sceneImpl.posId = jSONObject.optLong("posId");
        sceneImpl.entryScene = jSONObject.optLong("entryScene");
        sceneImpl.adNum = jSONObject.optInt("adNum");
        sceneImpl.action = jSONObject.optInt("action");
        sceneImpl.width = jSONObject.optInt("width");
        sceneImpl.height = jSONObject.optInt("height");
        sceneImpl.adStyle = jSONObject.optInt("adStyle");
        sceneImpl.screenOrientation = jSONObject.optInt("screenOrientation");
        sceneImpl.nativeAdExtraData = new NativeAdExtraDataImpl();
        sceneImpl.nativeAdExtraData.parseJson(jSONObject.optJSONObject("nativeAdExtraData"));
        sceneImpl.backUrl = jSONObject.optString("backUrl");
        if (sceneImpl.backUrl == JSONObject.NULL) {
            sceneImpl.backUrl = "";
        }
        sceneImpl.bidResponse = jSONObject.optString("bidResponse");
        if (sceneImpl.bidResponse == JSONObject.NULL) {
            sceneImpl.bidResponse = "";
        }
        sceneImpl.bidResponseV2 = jSONObject.optString("bidResponseV2");
        if (sceneImpl.bidResponseV2 == JSONObject.NULL) {
            sceneImpl.bidResponseV2 = "";
        }
    }

    private static JSONObject b(SceneImpl sceneImpl, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "urlPackage", sceneImpl.urlPackage);
        if (sceneImpl.posId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "posId", sceneImpl.posId);
        }
        if (sceneImpl.entryScene != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "entryScene", sceneImpl.entryScene);
        }
        if (sceneImpl.adNum != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adNum", sceneImpl.adNum);
        }
        if (sceneImpl.action != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "action", sceneImpl.action);
        }
        if (sceneImpl.width != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "width", sceneImpl.width);
        }
        if (sceneImpl.height != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", sceneImpl.height);
        }
        if (sceneImpl.adStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adStyle", sceneImpl.adStyle);
        }
        if (sceneImpl.screenOrientation != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenOrientation", sceneImpl.screenOrientation);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "nativeAdExtraData", sceneImpl.nativeAdExtraData);
        if (sceneImpl.backUrl != null && !sceneImpl.backUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "backUrl", sceneImpl.backUrl);
        }
        if (sceneImpl.bidResponse != null && !sceneImpl.bidResponse.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "bidResponse", sceneImpl.bidResponse);
        }
        if (sceneImpl.bidResponseV2 != null && !sceneImpl.bidResponseV2.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "bidResponseV2", sceneImpl.bidResponseV2);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((SceneImpl) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((SceneImpl) bVar, jSONObject);
    }
}
