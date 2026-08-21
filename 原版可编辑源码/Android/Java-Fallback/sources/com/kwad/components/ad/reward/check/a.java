package com.kwad.components.ad.reward.check;

public final class a {
    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, int r5, long r6, int r8, java.lang.String r9) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r1 = new com.kwad.components.ad.reward.check.RewardCheckMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            r4 = 2
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r1.setRequestStatus(r4)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setCheckType(r5)
            r5 = 0
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setEnviType(r5)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setDataLoadInterval(r6)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setCode(r8)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setErrorMsg(r9)
            long r5 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setCreativeId(r5)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.i(r4)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r4, int r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r1 = new com.kwad.components.ad.reward.check.RewardCheckMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            r4 = 1
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r1.setRequestStatus(r4)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setCheckType(r5)
            r5 = 0
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setEnviType(r5)
            long r0 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.check.RewardCheckMonitorInfo r4 = r4.setCreativeId(r0)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.i(r4)
            return
    }
}
