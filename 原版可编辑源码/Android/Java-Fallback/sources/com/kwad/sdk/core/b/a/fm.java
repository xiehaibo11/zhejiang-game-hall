package com.kwad.sdk.core.b.a;

public final class fm implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.a.c> {
    public fm() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.online.monitor.a.c r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.sdk.crash.online.monitor.a.a r0 = new com.kwad.sdk.crash.online.monitor.a.a
            r0.<init>()
            r1.aBi = r0
            com.kwad.sdk.crash.online.monitor.a.a r1 = r1.aBi
            java.lang.String r0 = "blockConfig"
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            r1.parseJson(r2)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.online.monitor.a.c r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            com.kwad.sdk.crash.online.monitor.a.a r1 = r1.aBi
            java.lang.String r0 = "blockConfig"
            com.kwad.sdk.utils.t.a(r2, r0, r1)
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.a.c r1 = (com.kwad.sdk.crash.online.monitor.a.c) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.a.c r1 = (com.kwad.sdk.crash.online.monitor.a.c) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
