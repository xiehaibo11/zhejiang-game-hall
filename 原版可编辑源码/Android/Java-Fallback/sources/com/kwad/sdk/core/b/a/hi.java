package com.kwad.sdk.core.b.a;

public final class hi implements com.kwad.sdk.core.d<com.kwad.sdk.commercial.model.SDKInitMsg> {
    public hi() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.commercial.model.SDKInitMsg r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "init_launch_interval_time"
            long r0 = r3.optLong(r0)
            r2.launchIntervalTime = r0
            java.lang.String r0 = "init_total_duration_time"
            long r0 = r3.optLong(r0)
            r2.totalDurationTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "0"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "init_status"
            int r0 = r3.optInt(r1, r0)
            r2.initStatus = r0
            java.lang.String r0 = "error_reason"
            java.lang.String r0 = r3.optString(r0)
            r2.errorReason = r0
            java.lang.String r0 = r2.errorReason
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L38
            java.lang.String r0 = ""
            r2.errorReason = r0
        L38:
            java.lang.String r0 = "init_count"
            int r0 = r3.optInt(r0)
            r2.initCount = r0
            java.lang.String r0 = "init_process"
            int r0 = r3.optInt(r0)
            r2.initProcess = r0
            java.lang.String r0 = "init_thread"
            int r0 = r3.optInt(r0)
            r2.initThread = r0
            java.lang.String r0 = "init_dynamic_sdk"
            int r0 = r3.optInt(r0)
            r2.intDynamicSDK = r0
            java.lang.String r0 = "init_build_number"
            int r3 = r3.optInt(r0)
            r2.intBuildNumber = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.commercial.model.SDKInitMsg r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.launchIntervalTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.launchIntervalTime
            java.lang.String r4 = "init_launch_interval_time"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            long r0 = r5.totalDurationTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = r5.totalDurationTime
            java.lang.String r2 = "init_total_duration_time"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L23:
            int r0 = r5.initStatus
            java.lang.String r1 = "init_status"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            java.lang.String r0 = r5.errorReason
            if (r0 == 0) goto L3f
            java.lang.String r0 = r5.errorReason
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3f
            java.lang.String r0 = r5.errorReason
            java.lang.String r1 = "error_reason"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L3f:
            int r0 = r5.initCount
            if (r0 == 0) goto L4a
            int r0 = r5.initCount
            java.lang.String r1 = "init_count"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L4a:
            int r0 = r5.initProcess
            if (r0 == 0) goto L55
            int r0 = r5.initProcess
            java.lang.String r1 = "init_process"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L55:
            int r0 = r5.initThread
            if (r0 == 0) goto L60
            int r0 = r5.initThread
            java.lang.String r1 = "init_thread"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L60:
            int r0 = r5.intDynamicSDK
            if (r0 == 0) goto L6b
            int r0 = r5.intDynamicSDK
            java.lang.String r1 = "init_dynamic_sdk"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L6b:
            int r0 = r5.intBuildNumber
            if (r0 == 0) goto L76
            int r5 = r5.intBuildNumber
            java.lang.String r0 = "init_build_number"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L76:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.SDKInitMsg r1 = (com.kwad.sdk.commercial.model.SDKInitMsg) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.SDKInitMsg r1 = (com.kwad.sdk.commercial.model.SDKInitMsg) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
