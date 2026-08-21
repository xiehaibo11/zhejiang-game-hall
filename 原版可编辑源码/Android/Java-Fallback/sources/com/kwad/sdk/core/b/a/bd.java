package com.kwad.sdk.core.b.a;

public final class bd implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.block.BlockEvent> {
    public bd() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.online.monitor.block.BlockEvent r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "blockDuration"
            long r0 = r4.optLong(r0)
            r3.blockDuration = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "1000"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "blockTimeThreshold"
            long r0 = r4.optLong(r2, r0)
            r3.blockTimeThreshold = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "100"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "blockLoopInterval"
            long r0 = r4.optLong(r2, r0)
            r3.blockLoopInterval = r0
            java.lang.String r0 = "calcBlockOverhead"
            long r0 = r4.optLong(r0)
            r3.calcBlockOverhead = r0
            java.lang.String r0 = "currentActivity"
            java.lang.String r0 = r4.optString(r0)
            r3.currentActivity = r0
            java.lang.String r0 = r3.currentActivity
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L4b
            r3.currentActivity = r2
        L4b:
            java.lang.String r0 = "processName"
            java.lang.String r0 = r4.optString(r0)
            r3.processName = r0
            java.lang.String r0 = r3.processName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5b
            r3.processName = r2
        L5b:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.stackTraceSample = r0
            java.lang.String r0 = "stackTraceSample"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L85
            r0 = 0
        L6b:
            int r1 = r4.length()
            if (r0 >= r1) goto L85
            com.kwad.sdk.crash.online.monitor.block.BlockEvent$a r1 = new com.kwad.sdk.crash.online.monitor.block.BlockEvent$a
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.crash.online.monitor.block.BlockEvent$a> r2 = r3.stackTraceSample
            r2.add(r1)
            int r0 = r0 + 1
            goto L6b
        L85:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.online.monitor.block.BlockEvent r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.blockDuration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.blockDuration
            java.lang.String r4 = "blockDuration"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            long r0 = r5.blockTimeThreshold
            java.lang.String r4 = "blockTimeThreshold"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
            long r0 = r5.blockLoopInterval
            java.lang.String r4 = "blockLoopInterval"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
            long r0 = r5.calcBlockOverhead
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L31
            long r0 = r5.calcBlockOverhead
            java.lang.String r2 = "calcBlockOverhead"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L31:
            java.lang.String r0 = r5.currentActivity
            java.lang.String r1 = ""
            if (r0 == 0) goto L46
            java.lang.String r0 = r5.currentActivity
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L46
            java.lang.String r0 = r5.currentActivity
            java.lang.String r2 = "currentActivity"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L46:
            java.lang.String r0 = r5.processName
            if (r0 == 0) goto L59
            java.lang.String r0 = r5.processName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L59
            java.lang.String r0 = r5.processName
            java.lang.String r1 = "processName"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L59:
            java.util.List<com.kwad.sdk.crash.online.monitor.block.BlockEvent$a> r5 = r5.stackTraceSample
            java.lang.String r0 = "stackTraceSample"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.BlockEvent r1 = (com.kwad.sdk.crash.online.monitor.block.BlockEvent) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.BlockEvent r1 = (com.kwad.sdk.crash.online.monitor.block.BlockEvent) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
