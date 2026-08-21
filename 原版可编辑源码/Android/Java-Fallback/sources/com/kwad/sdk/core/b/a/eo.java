package com.kwad.sdk.core.b.a;

public final class eo implements com.kwad.sdk.core.d<com.kwad.components.ad.interstitial.c.a> {
    public eo() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.interstitial.c.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "lastShowCardTimeStamp"
            long r0 = r3.optLong(r0)
            r2.iX = r0
            java.lang.String r0 = "cardShowCount"
            int r3 = r3.optInt(r0)
            r2.iY = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.interstitial.c.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            long r0 = r4.iX
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r4.iX
            java.lang.String r2 = "lastShowCardTimeStamp"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L16:
            int r0 = r4.iY
            if (r0 == 0) goto L21
            int r4 = r4.iY
            java.lang.String r0 = "cardShowCount"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        L21:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.interstitial.c.a r1 = (com.kwad.components.ad.interstitial.c.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.interstitial.c.a r1 = (com.kwad.components.ad.interstitial.c.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
