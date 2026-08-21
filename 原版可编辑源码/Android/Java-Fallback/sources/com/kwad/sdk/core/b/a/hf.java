package com.kwad.sdk.core.b.a;

public final class hf implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.monitor.RewardWebViewInfo> {
    public hf() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.reward.monitor.RewardWebViewInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "event"
            java.lang.String r0 = r4.optString(r0)
            r3.event = r0
            java.lang.String r0 = r3.event
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.event = r2
        L15:
            java.lang.String r0 = "status"
            int r0 = r4.optInt(r0)
            r3.status = r0
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.url = r2
        L2d:
            java.lang.String r0 = "source"
            java.lang.String r0 = r4.optString(r0)
            r3.source = r0
            java.lang.String r0 = r3.source
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.source = r2
        L3d:
            java.lang.String r0 = "scene_id"
            java.lang.String r0 = r4.optString(r0)
            r3.sceneId = r0
            java.lang.String r0 = r3.sceneId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.sceneId = r2
        L4d:
            java.lang.String r0 = "page_type"
            java.lang.String r0 = r4.optString(r0)
            r3.pageType = r0
            java.lang.String r0 = r3.pageType
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.pageType = r2
        L5d:
            java.lang.String r0 = "duration_ms"
            long r0 = r4.optLong(r0)
            r3.durationMs = r0
            java.lang.String r0 = "time_type"
            int r4 = r4.optInt(r0)
            r3.timeType = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.reward.monitor.RewardWebViewInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            java.lang.String r0 = r4.event
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r4.event
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r4.event
            java.lang.String r2 = "event"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L1c:
            int r0 = r4.status
            if (r0 == 0) goto L27
            int r0 = r4.status
            java.lang.String r2 = "status"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L27:
            java.lang.String r0 = r4.url
            if (r0 == 0) goto L3a
            java.lang.String r0 = r4.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r4.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L3a:
            java.lang.String r0 = r4.source
            if (r0 == 0) goto L4d
            java.lang.String r0 = r4.source
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r4.source
            java.lang.String r2 = "source"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L4d:
            java.lang.String r0 = r4.sceneId
            if (r0 == 0) goto L60
            java.lang.String r0 = r4.sceneId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L60
            java.lang.String r0 = r4.sceneId
            java.lang.String r2 = "scene_id"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L60:
            java.lang.String r0 = r4.pageType
            if (r0 == 0) goto L73
            java.lang.String r0 = r4.pageType
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L73
            java.lang.String r0 = r4.pageType
            java.lang.String r1 = "page_type"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L73:
            long r0 = r4.durationMs
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L82
            long r0 = r4.durationMs
            java.lang.String r2 = "duration_ms"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L82:
            int r0 = r4.timeType
            if (r0 == 0) goto L8d
            int r4 = r4.timeType
            java.lang.String r0 = "time_type"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        L8d:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = (com.kwad.components.ad.reward.monitor.RewardWebViewInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = (com.kwad.components.ad.reward.monitor.RewardWebViewInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
