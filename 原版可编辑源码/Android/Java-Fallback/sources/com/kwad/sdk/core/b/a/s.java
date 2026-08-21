package com.kwad.sdk.core.b.a;

public final class s implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdInsertScreenInfo> {
    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdInsertScreenInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "cycleAggregateSwitch"
            boolean r0 = r4.optBoolean(r0)
            r3.cycleAggregateSwitch = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "10"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "cycleAggregateDailyShowCount"
            int r0 = r4.optInt(r2, r0)
            r3.cycleAggregateDailyShowCount = r0
            java.lang.String r0 = "cycleAggregateStyle"
            int r0 = r4.optInt(r0)
            r3.cycleAggregateStyle = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "cycleAggregateInterval"
            int r0 = r4.optInt(r1, r0)
            r3.cycleAggregateInterval = r0
            java.lang.String r0 = "autoCloseTime"
            int r0 = r4.optInt(r0)
            r3.autoCloseTime = r0
            java.lang.String r0 = "retainWindowStyle"
            int r0 = r4.optInt(r0)
            r3.retainWindowStyle = r0
            java.lang.String r0 = "retainWindowText"
            java.lang.String r0 = r4.optString(r0)
            r3.retainWindowText = r0
            java.lang.String r0 = r3.retainWindowText
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L59
            java.lang.String r0 = ""
            r3.retainWindowText = r0
        L59:
            java.lang.String r0 = "retainWindowBasedAdShowCount"
            int r0 = r4.optInt(r0)
            r3.retainWindowBasedAdShowCount = r0
            java.lang.String r0 = "retainWindowDailyShowCount"
            int r0 = r4.optInt(r0)
            r3.retainWindowDailyShowCount = r0
            java.lang.String r0 = "guideShowStyle"
            int r0 = r4.optInt(r0)
            r3.guideShowStyle = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "5"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "guideShowTime"
            int r4 = r4.optInt(r1, r0)
            r3.guideShowTime = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdInsertScreenInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            boolean r0 = r2.cycleAggregateSwitch
            if (r0 == 0) goto L12
            boolean r0 = r2.cycleAggregateSwitch
            java.lang.String r1 = "cycleAggregateSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.cycleAggregateDailyShowCount
            java.lang.String r1 = "cycleAggregateDailyShowCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.cycleAggregateStyle
            if (r0 == 0) goto L24
            int r0 = r2.cycleAggregateStyle
            java.lang.String r1 = "cycleAggregateStyle"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L24:
            int r0 = r2.cycleAggregateInterval
            java.lang.String r1 = "cycleAggregateInterval"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.autoCloseTime
            if (r0 == 0) goto L36
            int r0 = r2.autoCloseTime
            java.lang.String r1 = "autoCloseTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L36:
            int r0 = r2.retainWindowStyle
            if (r0 == 0) goto L41
            int r0 = r2.retainWindowStyle
            java.lang.String r1 = "retainWindowStyle"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L41:
            java.lang.String r0 = r2.retainWindowText
            if (r0 == 0) goto L56
            java.lang.String r0 = r2.retainWindowText
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L56
            java.lang.String r0 = r2.retainWindowText
            java.lang.String r1 = "retainWindowText"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L56:
            int r0 = r2.retainWindowBasedAdShowCount
            if (r0 == 0) goto L61
            int r0 = r2.retainWindowBasedAdShowCount
            java.lang.String r1 = "retainWindowBasedAdShowCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L61:
            int r0 = r2.retainWindowDailyShowCount
            if (r0 == 0) goto L6c
            int r0 = r2.retainWindowDailyShowCount
            java.lang.String r1 = "retainWindowDailyShowCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L6c:
            int r0 = r2.guideShowStyle
            if (r0 == 0) goto L77
            int r0 = r2.guideShowStyle
            java.lang.String r1 = "guideShowStyle"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L77:
            int r2 = r2.guideShowTime
            java.lang.String r0 = "guideShowTime"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdInsertScreenInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdInsertScreenInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
