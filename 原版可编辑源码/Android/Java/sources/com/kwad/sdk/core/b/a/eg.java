package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.imageloader.ImageLoaderInfo;
import org.json.JSONObject;

public final class eg implements com.kwad.sdk.core.d<ImageLoaderInfo> {
    private static void a(ImageLoaderInfo imageLoaderInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        imageLoaderInfo.totalCount = jSONObject.optInt("total_count");
        imageLoaderInfo.failedCount = jSONObject.optInt("failed_count");
        imageLoaderInfo.successCount = jSONObject.optInt("success_count");
        imageLoaderInfo.duration = jSONObject.optDouble(com.tkay.expressad.foundation.d.r.ag);
    }

    private static JSONObject b(ImageLoaderInfo imageLoaderInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (imageLoaderInfo.totalCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "total_count", imageLoaderInfo.totalCount);
        }
        if (imageLoaderInfo.failedCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "failed_count", imageLoaderInfo.failedCount);
        }
        if (imageLoaderInfo.successCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "success_count", imageLoaderInfo.successCount);
        }
        if (imageLoaderInfo.duration != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.foundation.d.r.ag, imageLoaderInfo.duration);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ImageLoaderInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ImageLoaderInfo) bVar, jSONObject);
    }
}
