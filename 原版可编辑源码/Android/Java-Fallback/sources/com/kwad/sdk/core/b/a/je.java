package com.kwad.sdk.core.b.a;

public final class je implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo> {
    public je() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "videoUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.videoUrl = r0
            java.lang.String r0 = r4.videoUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r4.videoUrl = r2
        L15:
            java.lang.String r0 = "manifest"
            java.lang.String r0 = r5.optString(r0)
            r4.manifest = r0
            java.lang.String r0 = r4.manifest
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r4.manifest = r2
        L25:
            java.lang.String r0 = "firstFrame"
            java.lang.String r0 = r5.optString(r0)
            r4.firstFrame = r0
            java.lang.String r0 = r4.firstFrame
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r4.firstFrame = r2
        L35:
            java.lang.String r0 = "duration"
            long r0 = r5.optLong(r0)
            r4.duration = r0
            java.lang.String r0 = "size"
            int r0 = r5.optInt(r0)
            r4.size = r0
            java.lang.String r0 = "width"
            int r0 = r5.optInt(r0)
            r4.width = r0
            java.lang.String r0 = "height"
            int r0 = r5.optInt(r0)
            r4.height = r0
            java.lang.String r0 = "leftRatio"
            double r0 = r5.optDouble(r0)
            r4.leftRatio = r0
            java.lang.String r0 = "topRatio"
            double r0 = r5.optDouble(r0)
            r4.topRatio = r0
            java.lang.Double r0 = new java.lang.Double
            java.lang.String r1 = "1.0f"
            r0.<init>(r1)
            double r2 = r0.doubleValue()
            java.lang.String r0 = "widthRatio"
            double r2 = r5.optDouble(r0, r2)
            r4.widthRatio = r2
            java.lang.Double r0 = new java.lang.Double
            r0.<init>(r1)
            double r0 = r0.doubleValue()
            java.lang.String r2 = "heightRatio"
            double r0 = r5.optDouble(r2, r0)
            r4.heightRatio = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            java.lang.String r0 = r5.videoUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r5.videoUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r5.videoUrl
            java.lang.String r2 = "videoUrl"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L1c:
            java.lang.String r0 = r5.manifest
            if (r0 == 0) goto L2f
            java.lang.String r0 = r5.manifest
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r5.manifest
            java.lang.String r2 = "manifest"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L2f:
            java.lang.String r0 = r5.firstFrame
            if (r0 == 0) goto L42
            java.lang.String r0 = r5.firstFrame
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r5.firstFrame
            java.lang.String r1 = "firstFrame"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L42:
            long r0 = r5.duration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L51
            long r0 = r5.duration
            java.lang.String r2 = "duration"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L51:
            int r0 = r5.size
            if (r0 == 0) goto L5c
            int r0 = r5.size
            java.lang.String r1 = "size"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L5c:
            int r0 = r5.width
            if (r0 == 0) goto L67
            int r0 = r5.width
            java.lang.String r1 = "width"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L67:
            int r0 = r5.height
            if (r0 == 0) goto L72
            int r0 = r5.height
            java.lang.String r1 = "height"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L72:
            double r0 = r5.leftRatio
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L81
            double r0 = r5.leftRatio
            java.lang.String r4 = "leftRatio"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L81:
            double r0 = r5.topRatio
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L8e
            double r0 = r5.topRatio
            java.lang.String r2 = "topRatio"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L8e:
            double r0 = r5.widthRatio
            java.lang.String r2 = "widthRatio"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
            double r0 = r5.heightRatio
            java.lang.String r5 = "heightRatio"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r1 = (com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r1 = (com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
