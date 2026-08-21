package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import com.tencent.connect.share.QzonePublish;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class fh implements com.kwad.sdk.core.d<AdInfo.AdMaterialInfo.MaterialFeature> {
    private static void a(AdInfo.AdMaterialInfo.MaterialFeature materialFeature, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        materialFeature.featureType = jSONObject.optInt("featureType");
        materialFeature.materialUrl = jSONObject.optString("materialUrl");
        if (materialFeature.materialUrl == JSONObject.NULL) {
            materialFeature.materialUrl = "";
        }
        materialFeature.photoId = jSONObject.optLong("photoId");
        materialFeature.coverUrl = jSONObject.optString("coverUrl");
        if (materialFeature.coverUrl == JSONObject.NULL) {
            materialFeature.coverUrl = "";
        }
        materialFeature.videoDuration = jSONObject.optInt(QzonePublish.PUBLISH_TO_QZONE_VIDEO_DURATION);
        materialFeature.firstFrame = jSONObject.optString("firstFrame");
        if (materialFeature.firstFrame == JSONObject.NULL) {
            materialFeature.firstFrame = "";
        }
        materialFeature.blurBackgroundUrl = jSONObject.optString("blurBackgroundUrl");
        if (materialFeature.blurBackgroundUrl == JSONObject.NULL) {
            materialFeature.blurBackgroundUrl = "";
        }
        materialFeature.webpCoverUrl = jSONObject.optString("webpCoverUrl");
        if (materialFeature.webpCoverUrl == JSONObject.NULL) {
            materialFeature.webpCoverUrl = "";
        }
        materialFeature.videoWidth = jSONObject.optInt("videoWidth");
        materialFeature.videoHeight = jSONObject.optInt("videoHeight");
        materialFeature.likeCount = jSONObject.optLong("likeCount");
        materialFeature.commentCount = jSONObject.optLong("commentCount");
        materialFeature.source = jSONObject.optInt("source");
        materialFeature.ruleId = jSONObject.optString("ruleId");
        if (materialFeature.ruleId == JSONObject.NULL) {
            materialFeature.ruleId = "";
        }
    }

    private static JSONObject b(AdInfo.AdMaterialInfo.MaterialFeature materialFeature, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (materialFeature.featureType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "featureType", materialFeature.featureType);
        }
        if (materialFeature.materialUrl != null && !materialFeature.materialUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "materialUrl", materialFeature.materialUrl);
        }
        if (materialFeature.photoId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "photoId", materialFeature.photoId);
        }
        if (materialFeature.coverUrl != null && !materialFeature.coverUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "coverUrl", materialFeature.coverUrl);
        }
        if (materialFeature.videoDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, QzonePublish.PUBLISH_TO_QZONE_VIDEO_DURATION, materialFeature.videoDuration);
        }
        if (materialFeature.firstFrame != null && !materialFeature.firstFrame.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "firstFrame", materialFeature.firstFrame);
        }
        if (materialFeature.blurBackgroundUrl != null && !materialFeature.blurBackgroundUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "blurBackgroundUrl", materialFeature.blurBackgroundUrl);
        }
        if (materialFeature.webpCoverUrl != null && !materialFeature.webpCoverUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "webpCoverUrl", materialFeature.webpCoverUrl);
        }
        if (materialFeature.videoWidth != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "videoWidth", materialFeature.videoWidth);
        }
        if (materialFeature.videoHeight != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "videoHeight", materialFeature.videoHeight);
        }
        if (materialFeature.likeCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "likeCount", materialFeature.likeCount);
        }
        if (materialFeature.commentCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "commentCount", materialFeature.commentCount);
        }
        if (materialFeature.source != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "source", materialFeature.source);
        }
        if (materialFeature.ruleId != null && !materialFeature.ruleId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "ruleId", materialFeature.ruleId);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdMaterialInfo.MaterialFeature) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdMaterialInfo.MaterialFeature) bVar, jSONObject);
    }
}
