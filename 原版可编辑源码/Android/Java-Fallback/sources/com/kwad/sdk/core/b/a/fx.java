package com.kwad.sdk.core.b.a;

public final class fx implements com.kwad.sdk.core.d<com.kwad.components.core.offline.b> {
    public fx() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.offline.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "load_module"
            int r0 = r3.optInt(r0)
            r2.Lk = r0
            java.lang.String r0 = "load_status"
            long r0 = r3.optLong(r0)
            r2.Ll = r0
            java.lang.String r0 = "load_duration_ms"
            long r0 = r3.optLong(r0)
            r2.Lm = r0
            java.lang.String r0 = "error_code"
            long r0 = r3.optLong(r0)
            r2.Ln = r0
            java.lang.String r0 = "error_msg"
            long r0 = r3.optLong(r0)
            r2.Lo = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.offline.b r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            int r0 = r5.Lk
            if (r0 == 0) goto L12
            int r0 = r5.Lk
            java.lang.String r1 = "load_module"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L12:
            long r0 = r5.Ll
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
            long r0 = r5.Ll
            java.lang.String r4 = "load_status"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L21:
            long r0 = r5.Lm
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2e
            long r0 = r5.Lm
            java.lang.String r4 = "load_duration_ms"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L2e:
            long r0 = r5.Ln
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3b
            long r0 = r5.Ln
            java.lang.String r4 = "error_code"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L3b:
            long r0 = r5.Lo
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L48
            long r0 = r5.Lo
            java.lang.String r5 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L48:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.offline.b r1 = (com.kwad.components.core.offline.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.offline.b r1 = (com.kwad.components.core.offline.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
