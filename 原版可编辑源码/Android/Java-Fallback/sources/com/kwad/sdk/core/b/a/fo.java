package com.kwad.sdk.core.b.a;

public final class fo implements com.kwad.sdk.core.d<com.kwad.sdk.internal.api.NativeAdExtraDataImpl> {
    public fo() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.internal.api.NativeAdExtraDataImpl r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "enableShake"
            boolean r0 = r2.optBoolean(r0)
            r1.enableShake = r0
            java.lang.String r0 = "showLiveStatus"
            int r0 = r2.optInt(r0)
            r1.showLiveStatus = r0
            java.lang.String r0 = "showLiveStyle"
            int r2 = r2.optInt(r0)
            r1.showLiveStyle = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.internal.api.NativeAdExtraDataImpl r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            boolean r0 = r2.enableShake
            if (r0 == 0) goto L12
            boolean r0 = r2.enableShake
            java.lang.String r1 = "enableShake"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.showLiveStatus
            if (r0 == 0) goto L1d
            int r0 = r2.showLiveStatus
            java.lang.String r1 = "showLiveStatus"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.showLiveStyle
            if (r0 == 0) goto L28
            int r2 = r2.showLiveStyle
            java.lang.String r0 = "showLiveStyle"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L28:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r1 = (com.kwad.sdk.internal.api.NativeAdExtraDataImpl) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r1 = (com.kwad.sdk.internal.api.NativeAdExtraDataImpl) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
