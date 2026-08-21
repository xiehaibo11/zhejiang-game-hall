package com.kwad.sdk.core.b.a;

public final class be implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.block.c> {
    public be() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.online.monitor.block.c r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "printerName"
            java.lang.String r0 = r4.optString(r0)
            r3.aAL = r0
            java.lang.String r0 = r3.aAL
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.aAL = r2
        L15:
            java.lang.String r0 = "errorMsg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = r3.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.errorMsg = r2
        L25:
            java.lang.String r0 = "isDisable"
            boolean r0 = r4.optBoolean(r0)
            r3.aAM = r0
            java.lang.String r0 = "hasMatrix"
            boolean r4 = r4.optBoolean(r0)
            r3.aAN = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.online.monitor.block.c r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.aAL
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.aAL
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.aAL
            java.lang.String r2 = "printerName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.errorMsg
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.errorMsg
            java.lang.String r1 = "errorMsg"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L2f:
            boolean r0 = r3.aAM
            if (r0 == 0) goto L3a
            boolean r0 = r3.aAM
            java.lang.String r1 = "isDisable"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L3a:
            boolean r0 = r3.aAN
            if (r0 == 0) goto L45
            boolean r3 = r3.aAN
            java.lang.String r0 = "hasMatrix"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L45:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.c r1 = (com.kwad.sdk.crash.online.monitor.block.c) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.c r1 = (com.kwad.sdk.crash.online.monitor.block.c) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
