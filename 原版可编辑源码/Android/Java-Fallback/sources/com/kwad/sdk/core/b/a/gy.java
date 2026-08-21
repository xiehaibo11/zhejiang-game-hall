package com.kwad.sdk.core.b.a;

public final class gy implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.check.RewardCheckMonitorInfo> {
    public gy() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "check_type"
            int r0 = r3.optInt(r0)
            r2.checkType = r0
            java.lang.String r0 = "request_state"
            int r0 = r3.optInt(r0)
            r2.requestStatus = r0
            java.lang.String r0 = "code"
            int r0 = r3.optInt(r0)
            r2.code = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r0 = r3.optString(r0)
            r2.errorMsg = r0
            java.lang.String r0 = r2.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            java.lang.String r0 = ""
            r2.errorMsg = r0
        L2d:
            java.lang.String r0 = "creative_id"
            long r0 = r3.optLong(r0)
            r2.creativeId = r0
            java.lang.String r0 = "data_load_interval_duration_ms"
            long r0 = r3.optLong(r0)
            r2.dataLoadInterval = r0
            java.lang.String r0 = "pos_Id"
            long r0 = r3.optLong(r0)
            r2.posId = r0
            java.lang.String r0 = "enviType"
            int r3 = r3.optInt(r0)
            r2.enviType = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            int r0 = r5.checkType
            if (r0 == 0) goto L12
            int r0 = r5.checkType
            java.lang.String r1 = "check_type"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L12:
            int r0 = r5.requestStatus
            if (r0 == 0) goto L1d
            int r0 = r5.requestStatus
            java.lang.String r1 = "request_state"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L1d:
            int r0 = r5.code
            if (r0 == 0) goto L28
            int r0 = r5.code
            java.lang.String r1 = "code"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L28:
            java.lang.String r0 = r5.errorMsg
            if (r0 == 0) goto L3d
            java.lang.String r0 = r5.errorMsg
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3d
            java.lang.String r0 = r5.errorMsg
            java.lang.String r1 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L3d:
            long r0 = r5.creativeId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L4c
            long r0 = r5.creativeId
            java.lang.String r4 = "creative_id"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L4c:
            long r0 = r5.dataLoadInterval
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L59
            long r0 = r5.dataLoadInterval
            java.lang.String r4 = "data_load_interval_duration_ms"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L59:
            long r0 = r5.posId
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L66
            long r0 = r5.posId
            java.lang.String r2 = "pos_Id"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L66:
            int r0 = r5.enviType
            if (r0 == 0) goto L71
            int r5 = r5.enviType
            java.lang.String r0 = "enviType"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L71:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r1 = (com.kwad.components.ad.reward.check.RewardCheckMonitorInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r1 = (com.kwad.components.ad.reward.check.RewardCheckMonitorInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
