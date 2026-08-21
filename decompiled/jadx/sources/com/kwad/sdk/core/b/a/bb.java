package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bb implements com.kwad.sdk.core.d<AdMatrixInfo.BaseMatrixTemplate> {
    private static void a(AdMatrixInfo.BaseMatrixTemplate baseMatrixTemplate, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        baseMatrixTemplate.templateId = jSONObject.optString("templateId");
        if (baseMatrixTemplate.templateId == JSONObject.NULL) {
            baseMatrixTemplate.templateId = "";
        }
        baseMatrixTemplate.renderType = jSONObject.optInt("renderType");
    }

    private static JSONObject b(AdMatrixInfo.BaseMatrixTemplate baseMatrixTemplate, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (baseMatrixTemplate.templateId != null && !baseMatrixTemplate.templateId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "templateId", baseMatrixTemplate.templateId);
        }
        if (baseMatrixTemplate.renderType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "renderType", baseMatrixTemplate.renderType);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.BaseMatrixTemplate) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.BaseMatrixTemplate) bVar, jSONObject);
    }
}
