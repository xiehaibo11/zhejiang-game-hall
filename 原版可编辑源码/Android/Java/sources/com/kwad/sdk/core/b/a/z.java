package com.kwad.sdk.core.b.a;

import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class z implements com.kwad.sdk.core.d<AdMatrixInfo> {
    private static void a(AdMatrixInfo adMatrixInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adMatrixInfo.styles = new AdMatrixInfo.Styles();
        adMatrixInfo.styles.parseJson(jSONObject.optJSONObject("styles"));
        adMatrixInfo.adDataV2 = new AdMatrixInfo.AdDataV2();
        adMatrixInfo.adDataV2.parseJson(jSONObject.optJSONObject("adDataV2"));
        adMatrixInfo.tag = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(RemoteMessageConst.Notification.TAG);
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                AdMatrixInfo.MatrixTag matrixTag = new AdMatrixInfo.MatrixTag();
                matrixTag.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                adMatrixInfo.tag.add(matrixTag);
            }
        }
    }

    private static JSONObject b(AdMatrixInfo adMatrixInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "styles", adMatrixInfo.styles);
        com.kwad.sdk.utils.t.a(jSONObject, "adDataV2", adMatrixInfo.adDataV2);
        com.kwad.sdk.utils.t.putValue(jSONObject, RemoteMessageConst.Notification.TAG, adMatrixInfo.tag);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo) bVar, jSONObject);
    }
}
