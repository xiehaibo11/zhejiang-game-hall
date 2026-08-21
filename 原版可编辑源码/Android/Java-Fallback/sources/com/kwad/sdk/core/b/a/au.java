package com.kwad.sdk.core.b.a;

public final class au implements com.kwad.sdk.core.d<com.kwad.components.core.p.a.c.a> {
    public au() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.p.a.c.a r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "streamType"
            int r0 = r2.optInt(r0)
            r1.streamType = r0
            java.lang.String r0 = "maxVolume"
            int r0 = r2.optInt(r0)
            r1.Qo = r0
            java.lang.String r0 = "minVolume"
            int r0 = r2.optInt(r0)
            r1.Qp = r0
            java.lang.String r0 = "currentVolume"
            int r2 = r2.optInt(r0)
            r1.Qq = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.p.a.c.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.streamType
            if (r0 == 0) goto L12
            int r0 = r2.streamType
            java.lang.String r1 = "streamType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.Qo
            if (r0 == 0) goto L1d
            int r0 = r2.Qo
            java.lang.String r1 = "maxVolume"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.Qp
            if (r0 == 0) goto L28
            int r0 = r2.Qp
            java.lang.String r1 = "minVolume"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L28:
            int r0 = r2.Qq
            if (r0 == 0) goto L33
            int r2 = r2.Qq
            java.lang.String r0 = "currentVolume"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L33:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.p.a.c$a r1 = (com.kwad.components.core.p.a.c.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.p.a.c$a r1 = (com.kwad.components.core.p.a.c.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
