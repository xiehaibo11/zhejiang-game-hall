package com.kwad.sdk.core.b.a;

public final class eh implements com.kwad.sdk.core.d<com.kwad.sdk.core.config.item.j.a> {
    public eh() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.config.item.j.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "180000"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "horizontalShowDuration"
            int r0 = r3.optInt(r1, r0)
            r2.amF = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "90000"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "verticalShowDuration"
            int r3 = r3.optInt(r1, r0)
            r2.amG = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.config.item.j.a r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.amF
            java.lang.String r1 = "horizontalShowDuration"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.amG
            java.lang.String r0 = "verticalShowDuration"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.config.item.j$a r1 = (com.kwad.sdk.core.config.item.j.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.config.item.j$a r1 = (com.kwad.sdk.core.config.item.j.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
