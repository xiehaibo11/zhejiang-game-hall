package com.kwad.sdk.core.b.a;

public final class fh implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature> {
    public fh() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "featureType"
            int r0 = r4.optInt(r0)
            r3.featureType = r0
            java.lang.String r0 = "materialUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.materialUrl = r0
            java.lang.String r0 = r3.materialUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.materialUrl = r2
        L1d:
            java.lang.String r0 = "photoId"
            long r0 = r4.optLong(r0)
            r3.photoId = r0
            java.lang.String r0 = "coverUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.coverUrl = r0
            java.lang.String r0 = r3.coverUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.coverUrl = r2
        L35:
            java.lang.String r0 = "videoDuration"
            int r0 = r4.optInt(r0)
            r3.videoDuration = r0
            java.lang.String r0 = "firstFrame"
            java.lang.String r0 = r4.optString(r0)
            r3.firstFrame = r0
            java.lang.String r0 = r3.firstFrame
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.firstFrame = r2
        L4d:
            java.lang.String r0 = "blurBackgroundUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.blurBackgroundUrl = r0
            java.lang.String r0 = r3.blurBackgroundUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.blurBackgroundUrl = r2
        L5d:
            java.lang.String r0 = "webpCoverUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.webpCoverUrl = r0
            java.lang.String r0 = r3.webpCoverUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.webpCoverUrl = r2
        L6d:
            java.lang.String r0 = "videoWidth"
            int r0 = r4.optInt(r0)
            r3.videoWidth = r0
            java.lang.String r0 = "videoHeight"
            int r0 = r4.optInt(r0)
            r3.videoHeight = r0
            java.lang.String r0 = "likeCount"
            long r0 = r4.optLong(r0)
            r3.likeCount = r0
            java.lang.String r0 = "commentCount"
            long r0 = r4.optLong(r0)
            r3.commentCount = r0
            java.lang.String r0 = "source"
            int r0 = r4.optInt(r0)
            r3.source = r0
            java.lang.String r0 = "ruleId"
            java.lang.String r4 = r4.optString(r0)
            r3.ruleId = r4
            java.lang.String r4 = r3.ruleId
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto La5
            r3.ruleId = r2
        La5:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            int r0 = r6.featureType
            if (r0 == 0) goto L12
            int r0 = r6.featureType
            java.lang.String r1 = "featureType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L12:
            java.lang.String r0 = r6.materialUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r6.materialUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r6.materialUrl
            java.lang.String r2 = "materialUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L27:
            long r2 = r6.photoId
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L36
            long r2 = r6.photoId
            java.lang.String r0 = "photoId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L36:
            java.lang.String r0 = r6.coverUrl
            if (r0 == 0) goto L49
            java.lang.String r0 = r6.coverUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L49
            java.lang.String r0 = r6.coverUrl
            java.lang.String r2 = "coverUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L49:
            int r0 = r6.videoDuration
            if (r0 == 0) goto L54
            int r0 = r6.videoDuration
            java.lang.String r2 = "videoDuration"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L54:
            java.lang.String r0 = r6.firstFrame
            if (r0 == 0) goto L67
            java.lang.String r0 = r6.firstFrame
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L67
            java.lang.String r0 = r6.firstFrame
            java.lang.String r2 = "firstFrame"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L67:
            java.lang.String r0 = r6.blurBackgroundUrl
            if (r0 == 0) goto L7a
            java.lang.String r0 = r6.blurBackgroundUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7a
            java.lang.String r0 = r6.blurBackgroundUrl
            java.lang.String r2 = "blurBackgroundUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L7a:
            java.lang.String r0 = r6.webpCoverUrl
            if (r0 == 0) goto L8d
            java.lang.String r0 = r6.webpCoverUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8d
            java.lang.String r0 = r6.webpCoverUrl
            java.lang.String r2 = "webpCoverUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L8d:
            int r0 = r6.videoWidth
            if (r0 == 0) goto L98
            int r0 = r6.videoWidth
            java.lang.String r2 = "videoWidth"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L98:
            int r0 = r6.videoHeight
            if (r0 == 0) goto La3
            int r0 = r6.videoHeight
            java.lang.String r2 = "videoHeight"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        La3:
            long r2 = r6.likeCount
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto Lb0
            long r2 = r6.likeCount
            java.lang.String r0 = "likeCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        Lb0:
            long r2 = r6.commentCount
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto Lbd
            long r2 = r6.commentCount
            java.lang.String r0 = "commentCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        Lbd:
            int r0 = r6.source
            if (r0 == 0) goto Lc8
            int r0 = r6.source
            java.lang.String r2 = "source"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lc8:
            java.lang.String r0 = r6.ruleId
            if (r0 == 0) goto Ldb
            java.lang.String r0 = r6.ruleId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ldb
            java.lang.String r6 = r6.ruleId
            java.lang.String r0 = "ruleId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        Ldb:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
