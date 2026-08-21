package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class hh implements com.kwad.sdk.core.d<AdMatrixInfo.RotateInfo> {
    private static void a(AdMatrixInfo.RotateInfo rotateInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rotateInfo.title = jSONObject.optString("title");
        if (rotateInfo.title == JSONObject.NULL) {
            rotateInfo.title = "";
        }
        rotateInfo.subTitle = jSONObject.optString("subTitle");
        if (rotateInfo.subTitle == JSONObject.NULL) {
            rotateInfo.subTitle = "";
        }
        rotateInfo.downloadTexts = new AdMatrixInfo.DownloadTexts();
        rotateInfo.downloadTexts.parseJson(jSONObject.optJSONObject("downloadTexts"));
        rotateInfo.x = new AdMatrixInfo.RotateDegreeInfo();
        rotateInfo.x.parseJson(jSONObject.optJSONObject("x"));
        rotateInfo.y = new AdMatrixInfo.RotateDegreeInfo();
        rotateInfo.y.parseJson(jSONObject.optJSONObject("y"));
        rotateInfo.z = new AdMatrixInfo.RotateDegreeInfo();
        rotateInfo.z.parseJson(jSONObject.optJSONObject("z"));
    }

    private static JSONObject b(AdMatrixInfo.RotateInfo rotateInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rotateInfo.title != null && !rotateInfo.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", rotateInfo.title);
        }
        if (rotateInfo.subTitle != null && !rotateInfo.subTitle.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "subTitle", rotateInfo.subTitle);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "downloadTexts", rotateInfo.downloadTexts);
        com.kwad.sdk.utils.t.a(jSONObject, "x", rotateInfo.x);
        com.kwad.sdk.utils.t.a(jSONObject, "y", rotateInfo.y);
        com.kwad.sdk.utils.t.a(jSONObject, "z", rotateInfo.z);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.RotateInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.RotateInfo) bVar, jSONObject);
    }
}
