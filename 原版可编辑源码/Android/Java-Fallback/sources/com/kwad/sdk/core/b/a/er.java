package com.kwad.sdk.core.b.a;

public final class er implements com.kwad.sdk.core.d<com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo> {
    public er() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "status"
            int r0 = r4.optInt(r0)
            r3.status = r0
            java.lang.String r0 = "type"
            int r0 = r4.optInt(r0)
            r3.type = r0
            java.lang.String r0 = "load_data_duration_ms"
            long r0 = r4.optLong(r0)
            r3.loadDataTime = r0
            java.lang.String r0 = "render_duration_ms"
            long r0 = r4.optLong(r0)
            r3.renderDuration = r0
            java.lang.String r0 = "render_type"
            int r0 = r4.optInt(r0)
            r3.renderType = r0
            java.lang.String r0 = "expected_render_type"
            int r0 = r4.optInt(r0)
            r3.expectedRenderType = r0
            java.lang.String r0 = "material_type"
            int r0 = r4.optInt(r0)
            r3.materialType = r0
            java.lang.String r0 = "download_duration_ms"
            long r0 = r4.optLong(r0)
            r3.downloadDuration = r0
            java.lang.String r0 = "download_type"
            int r0 = r4.optInt(r0)
            r3.downloadType = r0
            java.lang.String r0 = "download_size"
            long r0 = r4.optLong(r0)
            r3.downloadSize = r0
            java.lang.String r0 = "error_code"
            int r0 = r4.optInt(r0)
            r3.errorCode = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = r3.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L6d
            r3.errorMsg = r2
        L6d:
            java.lang.String r0 = "creative_id"
            long r0 = r4.optLong(r0)
            r3.creativeId = r0
            java.lang.String r0 = "video_url"
            java.lang.String r0 = r4.optString(r0)
            r3.videoUrl = r0
            java.lang.String r0 = r3.videoUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L85
            r3.videoUrl = r2
        L85:
            java.lang.String r0 = "video_duration_ms"
            long r0 = r4.optLong(r0)
            r3.videoDuration = r0
            java.lang.String r0 = "pos_Id"
            long r0 = r4.optLong(r0)
            r3.posId = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            int r0 = r6.status
            if (r0 == 0) goto L12
            int r0 = r6.status
            java.lang.String r1 = "status"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L12:
            int r0 = r6.type
            if (r0 == 0) goto L1d
            int r0 = r6.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L1d:
            long r0 = r6.loadDataTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2c
            long r0 = r6.loadDataTime
            java.lang.String r4 = "load_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L2c:
            long r0 = r6.renderDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L39
            long r0 = r6.renderDuration
            java.lang.String r4 = "render_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L39:
            int r0 = r6.renderType
            if (r0 == 0) goto L44
            int r0 = r6.renderType
            java.lang.String r1 = "render_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L44:
            int r0 = r6.expectedRenderType
            if (r0 == 0) goto L4f
            int r0 = r6.expectedRenderType
            java.lang.String r1 = "expected_render_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L4f:
            int r0 = r6.materialType
            if (r0 == 0) goto L5a
            int r0 = r6.materialType
            java.lang.String r1 = "material_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L5a:
            long r0 = r6.downloadDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L67
            long r0 = r6.downloadDuration
            java.lang.String r4 = "download_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L67:
            int r0 = r6.downloadType
            if (r0 == 0) goto L72
            int r0 = r6.downloadType
            java.lang.String r1 = "download_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L72:
            long r0 = r6.downloadSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L7f
            long r0 = r6.downloadSize
            java.lang.String r4 = "download_size"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L7f:
            int r0 = r6.errorCode
            if (r0 == 0) goto L8a
            int r0 = r6.errorCode
            java.lang.String r1 = "error_code"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L8a:
            java.lang.String r0 = r6.errorMsg
            java.lang.String r1 = ""
            if (r0 == 0) goto L9f
            java.lang.String r0 = r6.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = r6.errorMsg
            java.lang.String r4 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L9f:
            long r4 = r6.creativeId
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lac
            long r4 = r6.creativeId
            java.lang.String r0 = "creative_id"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lac:
            java.lang.String r0 = r6.videoUrl
            if (r0 == 0) goto Lbf
            java.lang.String r0 = r6.videoUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lbf
            java.lang.String r0 = r6.videoUrl
            java.lang.String r1 = "video_url"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lbf:
            long r0 = r6.videoDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lcc
            long r0 = r6.videoDuration
            java.lang.String r4 = "video_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lcc:
            long r0 = r6.posId
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld9
            long r0 = r6.posId
            java.lang.String r6 = "pos_Id"
            com.kwad.sdk.utils.t.putValue(r7, r6, r0)
        Ld9:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = (com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = (com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
