package com.kwad.sdk.core.b.a;

public final class de implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.FeedSlideConf> {
    public de() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.FeedSlideConf r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "maxRange"
            int r0 = r2.optInt(r0)
            r1.maxRange = r0
            java.lang.String r0 = "minRange"
            int r2 = r2.optInt(r0)
            r1.minRange = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.FeedSlideConf r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.maxRange
            if (r0 == 0) goto L12
            int r0 = r2.maxRange
            java.lang.String r1 = "maxRange"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.minRange
            if (r0 == 0) goto L1d
            int r2 = r2.minRange
            java.lang.String r0 = "minRange"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L1d:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.FeedSlideConf r1 = (com.kwad.sdk.core.response.model.FeedSlideConf) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.FeedSlideConf r1 = (com.kwad.sdk.core.response.model.FeedSlideConf) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
