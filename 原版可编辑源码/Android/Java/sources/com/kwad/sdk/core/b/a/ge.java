package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.PageInfo;
import org.json.JSONObject;

public final class ge implements com.kwad.sdk.core.d<PageInfo> {
    private static void a(PageInfo pageInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        pageInfo.pageType = jSONObject.optInt("pageType");
    }

    private static JSONObject b(PageInfo pageInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (pageInfo.pageType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pageType", pageInfo.pageType);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((PageInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((PageInfo) bVar, jSONObject);
    }
}
