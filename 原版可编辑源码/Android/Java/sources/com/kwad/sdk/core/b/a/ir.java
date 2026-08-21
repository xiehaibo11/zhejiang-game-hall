package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.TemplateConfig;
import org.json.JSONObject;

public final class ir implements com.kwad.sdk.core.d<TemplateConfig> {
    private static void a(TemplateConfig templateConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        templateConfig.h5Url = jSONObject.optString("h5Url");
        if (templateConfig.h5Url == JSONObject.NULL) {
            templateConfig.h5Url = "";
        }
        templateConfig.h5Version = jSONObject.optString("h5Version");
        if (templateConfig.h5Version == JSONObject.NULL) {
            templateConfig.h5Version = "";
        }
        templateConfig.h5Checksum = jSONObject.optString("h5Checksum");
        if (templateConfig.h5Checksum == JSONObject.NULL) {
            templateConfig.h5Checksum = "";
        }
    }

    private static JSONObject b(TemplateConfig templateConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (templateConfig.h5Url != null && !templateConfig.h5Url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "h5Url", templateConfig.h5Url);
        }
        if (templateConfig.h5Version != null && !templateConfig.h5Version.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "h5Version", templateConfig.h5Version);
        }
        if (templateConfig.h5Checksum != null && !templateConfig.h5Checksum.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "h5Checksum", templateConfig.h5Checksum);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((TemplateConfig) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((TemplateConfig) bVar, jSONObject);
    }
}
