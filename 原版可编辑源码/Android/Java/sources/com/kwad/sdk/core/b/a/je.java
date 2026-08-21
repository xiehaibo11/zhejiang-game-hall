package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.PhotoInfo;
import com.tkay.core.api.TYAdConst;
import org.json.JSONObject;

public final class je implements com.kwad.sdk.core.d<PhotoInfo.VideoInfo> {
    private static void a(PhotoInfo.VideoInfo videoInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        videoInfo.videoUrl = jSONObject.optString("videoUrl");
        if (videoInfo.videoUrl == JSONObject.NULL) {
            videoInfo.videoUrl = "";
        }
        videoInfo.manifest = jSONObject.optString("manifest");
        if (videoInfo.manifest == JSONObject.NULL) {
            videoInfo.manifest = "";
        }
        videoInfo.firstFrame = jSONObject.optString("firstFrame");
        if (videoInfo.firstFrame == JSONObject.NULL) {
            videoInfo.firstFrame = "";
        }
        videoInfo.duration = jSONObject.optLong(com.tkay.expressad.foundation.d.r.ag);
        videoInfo.size = jSONObject.optInt(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE);
        videoInfo.width = jSONObject.optInt("width");
        videoInfo.height = jSONObject.optInt("height");
        videoInfo.leftRatio = jSONObject.optDouble("leftRatio");
        videoInfo.topRatio = jSONObject.optDouble("topRatio");
        videoInfo.widthRatio = jSONObject.optDouble("widthRatio", new Double("1.0f").doubleValue());
        videoInfo.heightRatio = jSONObject.optDouble("heightRatio", new Double("1.0f").doubleValue());
    }

    private static JSONObject b(PhotoInfo.VideoInfo videoInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (videoInfo.videoUrl != null && !videoInfo.videoUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "videoUrl", videoInfo.videoUrl);
        }
        if (videoInfo.manifest != null && !videoInfo.manifest.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "manifest", videoInfo.manifest);
        }
        if (videoInfo.firstFrame != null && !videoInfo.firstFrame.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "firstFrame", videoInfo.firstFrame);
        }
        if (videoInfo.duration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.foundation.d.r.ag, videoInfo.duration);
        }
        if (videoInfo.size != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, videoInfo.size);
        }
        if (videoInfo.width != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "width", videoInfo.width);
        }
        if (videoInfo.height != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", videoInfo.height);
        }
        if (videoInfo.leftRatio != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "leftRatio", videoInfo.leftRatio);
        }
        if (videoInfo.topRatio != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "topRatio", videoInfo.topRatio);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "widthRatio", videoInfo.widthRatio);
        com.kwad.sdk.utils.t.putValue(jSONObject, "heightRatio", videoInfo.heightRatio);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((PhotoInfo.VideoInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((PhotoInfo.VideoInfo) bVar, jSONObject);
    }
}
