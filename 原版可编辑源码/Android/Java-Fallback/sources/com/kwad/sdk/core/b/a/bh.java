package com.kwad.sdk.core.b.a;

public final class bh implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.CallBackStrategyInfo> {
    public bh() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.CallBackStrategyInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "5000"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "impressionCheckMs"
            int r0 = r3.optInt(r1, r0)
            r2.impressionCheckMs = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "2000"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "callBackAdvanceMs"
            int r0 = r3.optInt(r1, r0)
            r2.callBackAdvanceMs = r0
            java.lang.String r0 = "serverCheckSwitch"
            boolean r0 = r3.optBoolean(r0)
            r2.serverCheckSwitch = r0
            java.lang.String r0 = "rewardAdvanceSwitch"
            boolean r3 = r3.optBoolean(r0)
            r2.rewardAdvanceSwitch = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.CallBackStrategyInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.impressionCheckMs
            java.lang.String r1 = "impressionCheckMs"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.callBackAdvanceMs
            java.lang.String r1 = "callBackAdvanceMs"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            boolean r0 = r2.serverCheckSwitch
            if (r0 == 0) goto L20
            boolean r0 = r2.serverCheckSwitch
            java.lang.String r1 = "serverCheckSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L20:
            boolean r0 = r2.rewardAdvanceSwitch
            if (r0 == 0) goto L2b
            boolean r2 = r2.rewardAdvanceSwitch
            java.lang.String r0 = "rewardAdvanceSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L2b:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.CallBackStrategyInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.CallBackStrategyInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
