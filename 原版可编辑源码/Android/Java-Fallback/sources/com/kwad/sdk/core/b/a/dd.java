package com.kwad.sdk.core.b.a;

public final class dd implements com.kwad.sdk.core.d<com.kwad.components.ad.feed.monitor.FeedPageInfo> {
    public dd() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.feed.monitor.FeedPageInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "status"
            int r0 = r4.optInt(r0)
            r3.status = r0
            java.lang.String r0 = "load_status"
            int r0 = r4.optInt(r0)
            r3.loadStatus = r0
            java.lang.String r0 = "ad_num"
            int r0 = r4.optInt(r0)
            r3.adNum = r0
            java.lang.String r0 = "type"
            int r0 = r4.optInt(r0)
            r3.type = r0
            java.lang.String r0 = "load_data_duration_ms"
            long r0 = r4.optLong(r0)
            r3.loadDataDuration = r0
            java.lang.String r0 = "resource_load_duration_ms"
            long r0 = r4.optLong(r0)
            r3.resourceLoadDuration = r0
            java.lang.String r0 = "material_type"
            int r0 = r4.optInt(r0)
            r3.materialType = r0
            java.lang.String r0 = "material_url"
            java.lang.String r0 = r4.optString(r0)
            r3.materialUrl = r0
            java.lang.String r0 = r3.materialUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L4d
            r3.materialUrl = r2
        L4d:
            java.lang.String r0 = "render_duration_ms"
            long r0 = r4.optLong(r0)
            r3.renderDuration = r0
            java.lang.String r0 = "render_type"
            int r0 = r4.optInt(r0)
            r3.renderType = r0
            java.lang.String r0 = "expected_render_type"
            int r0 = r4.optInt(r0)
            r3.expectedRenderType = r0
            java.lang.String r0 = "convert_duartion_ms"
            long r0 = r4.optLong(r0)
            r3.convertDuration = r0
            java.lang.String r0 = "error_code"
            int r0 = r4.optInt(r0)
            r3.errorCode = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = r3.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L85
            r3.errorMsg = r2
        L85:
            java.lang.String r0 = "ext_msg"
            java.lang.String r0 = r4.optString(r0)
            r3.extMsg = r0
            java.lang.String r0 = r3.extMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L95
            r3.extMsg = r2
        L95:
            java.lang.String r0 = "ab_params"
            java.lang.String r4 = r4.optString(r0)
            r3.abParams = r4
            java.lang.String r4 = r3.abParams
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto La5
            r3.abParams = r2
        La5:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.feed.monitor.FeedPageInfo r6, org.json.JSONObject r7) {
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
            int r0 = r6.loadStatus
            if (r0 == 0) goto L1d
            int r0 = r6.loadStatus
            java.lang.String r1 = "load_status"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L1d:
            int r0 = r6.adNum
            if (r0 == 0) goto L28
            int r0 = r6.adNum
            java.lang.String r1 = "ad_num"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L28:
            int r0 = r6.type
            if (r0 == 0) goto L33
            int r0 = r6.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L33:
            long r0 = r6.loadDataDuration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L42
            long r0 = r6.loadDataDuration
            java.lang.String r4 = "load_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L42:
            long r0 = r6.resourceLoadDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L4f
            long r0 = r6.resourceLoadDuration
            java.lang.String r4 = "resource_load_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L4f:
            int r0 = r6.materialType
            if (r0 == 0) goto L5a
            int r0 = r6.materialType
            java.lang.String r1 = "material_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L5a:
            java.lang.String r0 = r6.materialUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L6f
            java.lang.String r0 = r6.materialUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r6.materialUrl
            java.lang.String r4 = "material_url"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L6f:
            long r4 = r6.renderDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L7c
            long r4 = r6.renderDuration
            java.lang.String r0 = "render_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L7c:
            int r0 = r6.renderType
            if (r0 == 0) goto L87
            int r0 = r6.renderType
            java.lang.String r4 = "render_type"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L87:
            int r0 = r6.expectedRenderType
            if (r0 == 0) goto L92
            int r0 = r6.expectedRenderType
            java.lang.String r4 = "expected_render_type"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L92:
            long r4 = r6.convertDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L9f
            long r2 = r6.convertDuration
            java.lang.String r0 = "convert_duartion_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L9f:
            int r0 = r6.errorCode
            if (r0 == 0) goto Laa
            int r0 = r6.errorCode
            java.lang.String r2 = "error_code"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Laa:
            java.lang.String r0 = r6.errorMsg
            if (r0 == 0) goto Lbd
            java.lang.String r0 = r6.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lbd
            java.lang.String r0 = r6.errorMsg
            java.lang.String r2 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lbd:
            java.lang.String r0 = r6.extMsg
            if (r0 == 0) goto Ld0
            java.lang.String r0 = r6.extMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ld0
            java.lang.String r0 = r6.extMsg
            java.lang.String r2 = "ext_msg"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Ld0:
            java.lang.String r0 = r6.abParams
            if (r0 == 0) goto Le3
            java.lang.String r0 = r6.abParams
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le3
            java.lang.String r6 = r6.abParams
            java.lang.String r0 = "ab_params"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        Le3:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = (com.kwad.components.ad.feed.monitor.FeedPageInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = (com.kwad.components.ad.feed.monitor.FeedPageInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
