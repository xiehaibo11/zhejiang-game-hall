package com.kwad.sdk.core.b.a;

public final class dw implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.H5Config> {
    public dw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.H5Config r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "apiMisTouch"
            int r0 = r2.optInt(r0)
            r1.apiMisTouch = r0
            java.lang.String r0 = "apiAdTag"
            int r0 = r2.optInt(r0)
            r1.apiAdTag = r0
            java.lang.String r0 = "apiBreathLamp"
            int r0 = r2.optInt(r0)
            r1.apiBreathLamp = r0
            java.lang.String r0 = "tagTip"
            java.lang.String r2 = r2.optString(r0)
            r1.tagTip = r2
            java.lang.String r2 = r1.tagTip
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r2 != r0) goto L2d
            java.lang.String r2 = ""
            r1.tagTip = r2
        L2d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.H5Config r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.apiMisTouch
            if (r0 == 0) goto L12
            int r0 = r2.apiMisTouch
            java.lang.String r1 = "apiMisTouch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.apiAdTag
            if (r0 == 0) goto L1d
            int r0 = r2.apiAdTag
            java.lang.String r1 = "apiAdTag"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.apiBreathLamp
            if (r0 == 0) goto L28
            int r0 = r2.apiBreathLamp
            java.lang.String r1 = "apiBreathLamp"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L28:
            java.lang.String r0 = r2.tagTip
            if (r0 == 0) goto L3d
            java.lang.String r0 = r2.tagTip
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3d
            java.lang.String r2 = r2.tagTip
            java.lang.String r0 = "tagTip"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L3d:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$H5Config r1 = (com.kwad.sdk.core.response.model.AdInfo.H5Config) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$H5Config r1 = (com.kwad.sdk.core.response.model.AdInfo.H5Config) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
