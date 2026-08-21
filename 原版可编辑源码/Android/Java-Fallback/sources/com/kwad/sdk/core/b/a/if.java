package com.kwad.sdk.core.b.a;

public final class if implements com.kwad.sdk.core.d<com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo> {
    public if() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r3, org.json.JSONObject r4) {
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
            java.lang.String r0 = "scene_id"
            java.lang.String r0 = r4.optString(r0)
            r3.sceneId = r0
            java.lang.String r0 = r3.sceneId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.sceneId = r2
        L3d:
            java.lang.String r0 = "duration_ms"
            long r0 = r4.optLong(r0)
            r3.durationMs = r0
            java.lang.String r0 = "time_type"
            int r0 = r4.optInt(r0)
            r3.timeType = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r4 = r4.optString(r0)
            r3.errorMsg = r4
            java.lang.String r4 = r3.errorMsg
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L5d
            r3.errorMsg = r2
        L5d:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.event
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.event
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.event
            java.lang.String r2 = "event"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            int r0 = r6.status
            if (r0 == 0) goto L27
            int r0 = r6.status
            java.lang.String r2 = "status"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L27:
            java.lang.String r0 = r6.url
            if (r0 == 0) goto L3a
            java.lang.String r0 = r6.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r6.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L3a:
            java.lang.String r0 = r6.sceneId
            if (r0 == 0) goto L4d
            java.lang.String r0 = r6.sceneId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r6.sceneId
            java.lang.String r2 = "scene_id"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L4d:
            long r2 = r6.durationMs
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L5c
            long r2 = r6.durationMs
            java.lang.String r0 = "duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L5c:
            int r0 = r6.timeType
            if (r0 == 0) goto L67
            int r0 = r6.timeType
            java.lang.String r2 = "time_type"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L67:
            java.lang.String r0 = r6.errorMsg
            if (r0 == 0) goto L7a
            java.lang.String r0 = r6.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7a
            java.lang.String r6 = r6.errorMsg
            java.lang.String r0 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L7a:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r1 = (com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r1 = (com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
