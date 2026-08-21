package com.kwad.sdk.core.b.a;

public final class ba implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.PhotoInfo.BaseInfo> {
    public ba() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.PhotoInfo.BaseInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "photoId"
            long r0 = r4.optLong(r0)
            r3.photoId = r0
            java.lang.String r0 = "sdkExtraData"
            java.lang.String r0 = r4.optString(r0)
            r3.sdkExtraData = r0
            java.lang.String r0 = r3.sdkExtraData
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.sdkExtraData = r2
        L1d:
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.title = r2
        L2d:
            java.lang.String r0 = "shareUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.shareUrl = r0
            java.lang.String r0 = r3.shareUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.shareUrl = r2
        L3d:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "waterMarkPosition"
            int r0 = r4.optInt(r1, r0)
            r3.waterMarkPosition = r0
            java.lang.String r0 = "recoExt"
            java.lang.String r0 = r4.optString(r0)
            r3.recoExt = r0
            java.lang.String r0 = r3.recoExt
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L60
            r3.recoExt = r2
        L60:
            java.lang.String r0 = "likeCount"
            long r0 = r4.optLong(r0)
            r3.likeCount = r0
            java.lang.String r0 = "commentCount"
            long r0 = r4.optLong(r0)
            r3.commentCount = r0
            java.lang.String r0 = "viewCount"
            long r0 = r4.optLong(r0)
            r3.viewCount = r0
            java.lang.String r0 = "createTime"
            long r0 = r4.optLong(r0)
            r3.createTime = r0
            java.lang.String r0 = "videoDesc"
            java.lang.String r0 = r4.optString(r0)
            r3.videoDesc = r0
            java.lang.String r0 = r3.videoDesc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L90
            r3.videoDesc = r2
        L90:
            java.lang.String r0 = "playTimes"
            long r0 = r4.optLong(r0)
            r3.playTimes = r0
            java.lang.String r0 = "videoUrlCacheTime"
            long r0 = r4.optLong(r0)
            r3.videoUrlCacheTime = r0
            java.lang.String r0 = "contentSourceType"
            int r4 = r4.optInt(r0)
            r3.contentSourceType = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.PhotoInfo.BaseInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            long r0 = r6.photoId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r6.photoId
            java.lang.String r4 = "photoId"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L16:
            java.lang.String r0 = r6.sdkExtraData
            java.lang.String r1 = ""
            if (r0 == 0) goto L2b
            java.lang.String r0 = r6.sdkExtraData
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r6.sdkExtraData
            java.lang.String r4 = "sdkExtraData"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L2b:
            java.lang.String r0 = r6.title
            if (r0 == 0) goto L3e
            java.lang.String r0 = r6.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3e
            java.lang.String r0 = r6.title
            java.lang.String r4 = "title"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3e:
            java.lang.String r0 = r6.shareUrl
            if (r0 == 0) goto L51
            java.lang.String r0 = r6.shareUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L51
            java.lang.String r0 = r6.shareUrl
            java.lang.String r4 = "shareUrl"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L51:
            int r0 = r6.waterMarkPosition
            java.lang.String r4 = "waterMarkPosition"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            java.lang.String r0 = r6.recoExt
            if (r0 == 0) goto L6b
            java.lang.String r0 = r6.recoExt
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6b
            java.lang.String r0 = r6.recoExt
            java.lang.String r4 = "recoExt"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L6b:
            long r4 = r6.likeCount
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L78
            long r4 = r6.likeCount
            java.lang.String r0 = "likeCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L78:
            long r4 = r6.commentCount
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L85
            long r4 = r6.commentCount
            java.lang.String r0 = "commentCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L85:
            long r4 = r6.viewCount
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L92
            long r4 = r6.viewCount
            java.lang.String r0 = "viewCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L92:
            long r4 = r6.createTime
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L9f
            long r4 = r6.createTime
            java.lang.String r0 = "createTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L9f:
            java.lang.String r0 = r6.videoDesc
            if (r0 == 0) goto Lb2
            java.lang.String r0 = r6.videoDesc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lb2
            java.lang.String r0 = r6.videoDesc
            java.lang.String r1 = "videoDesc"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lb2:
            long r0 = r6.playTimes
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lbf
            long r0 = r6.playTimes
            java.lang.String r4 = "playTimes"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lbf:
            long r0 = r6.videoUrlCacheTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lcc
            long r0 = r6.videoUrlCacheTime
            java.lang.String r2 = "videoUrlCacheTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lcc:
            int r0 = r6.contentSourceType
            if (r0 == 0) goto Ld7
            int r6 = r6.contentSourceType
            java.lang.String r0 = "contentSourceType"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        Ld7:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r1 = (com.kwad.sdk.core.response.model.PhotoInfo.BaseInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r1 = (com.kwad.sdk.core.response.model.PhotoInfo.BaseInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
