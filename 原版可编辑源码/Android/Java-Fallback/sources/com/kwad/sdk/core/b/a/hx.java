package com.kwad.sdk.core.b.a;

public final class hx implements com.kwad.sdk.core.d<com.kwad.sdk.internal.api.b> {
    public hx() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.internal.api.b r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "disableShake"
            boolean r0 = r2.optBoolean(r0)
            r1.disableShake = r0
            java.lang.String r0 = "disableRotate"
            boolean r0 = r2.optBoolean(r0)
            r1.disableRotate = r0
            java.lang.String r0 = "disableSlide"
            boolean r2 = r2.optBoolean(r0)
            r1.disableSlide = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.internal.api.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            boolean r0 = r2.disableShake
            if (r0 == 0) goto L12
            boolean r0 = r2.disableShake
            java.lang.String r1 = "disableShake"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            boolean r0 = r2.disableRotate
            if (r0 == 0) goto L1d
            boolean r0 = r2.disableRotate
            java.lang.String r1 = "disableRotate"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            boolean r0 = r2.disableSlide
            if (r0 == 0) goto L28
            boolean r2 = r2.disableSlide
            java.lang.String r0 = "disableSlide"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L28:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.b r1 = (com.kwad.sdk.internal.api.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.b r1 = (com.kwad.sdk.internal.api.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
