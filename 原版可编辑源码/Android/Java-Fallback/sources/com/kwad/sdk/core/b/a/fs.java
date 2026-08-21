package com.kwad.sdk.core.b.a;

public final class fs implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl> {
    public fs() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "enableShake"
            boolean r2 = r2.optBoolean(r0)
            r1.enableShake = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            boolean r0 = r1.enableShake
            if (r0 == 0) goto L12
            boolean r1 = r1.enableShake
            java.lang.String r0 = "enableShake"
            com.kwad.sdk.utils.t.putValue(r2, r0, r1)
        L12:
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdStyleControl r1 = (com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdStyleControl r1 = (com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
