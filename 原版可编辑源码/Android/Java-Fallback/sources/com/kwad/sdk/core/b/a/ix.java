package com.kwad.sdk.core.b.a;

public final class ix implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.block.BlockEvent.a> {
    public ix() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.online.monitor.block.BlockEvent.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "endTimestamp"
            long r0 = r3.optLong(r0)
            r2.aAC = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "repeatCount"
            int r0 = r3.optInt(r1, r0)
            r2.repeatCount = r0
            java.lang.String r0 = "runIdle"
            boolean r0 = r3.optBoolean(r0)
            r2.aAD = r0
            java.lang.String r0 = "stackTraceDetail"
            java.lang.String r0 = r3.optString(r0)
            r2.aAE = r0
            java.lang.String r0 = r2.aAE
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L38
            java.lang.String r0 = ""
            r2.aAE = r0
        L38:
            java.lang.String r0 = "startTimestamp"
            long r0 = r3.optLong(r0)
            r2.aAF = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.online.monitor.block.BlockEvent.a r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.aAC
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.aAC
            java.lang.String r4 = "endTimestamp"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            int r0 = r5.repeatCount
            java.lang.String r1 = "repeatCount"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            boolean r0 = r5.aAD
            if (r0 == 0) goto L28
            boolean r0 = r5.aAD
            java.lang.String r1 = "runIdle"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L28:
            java.lang.String r0 = r5.aAE
            if (r0 == 0) goto L3d
            java.lang.String r0 = r5.aAE
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3d
            java.lang.String r0 = r5.aAE
            java.lang.String r1 = "stackTraceDetail"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L3d:
            long r0 = r5.aAF
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L4a
            long r0 = r5.aAF
            java.lang.String r5 = "startTimestamp"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L4a:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.BlockEvent$a r1 = (com.kwad.sdk.crash.online.monitor.block.BlockEvent.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.BlockEvent$a r1 = (com.kwad.sdk.crash.online.monitor.block.BlockEvent.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
