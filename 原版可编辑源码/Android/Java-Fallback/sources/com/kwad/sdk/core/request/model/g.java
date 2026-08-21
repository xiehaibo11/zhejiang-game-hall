package com.kwad.sdk.core.request.model;

public final class g implements com.kwad.sdk.core.b {
    public int ajr;
    public int ajs;
    public java.lang.String ajt;
    private java.lang.String aux;
    private java.lang.String auy;

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.request.model.g Cy() {
            com.kwad.sdk.core.request.model.g r0 = new com.kwad.sdk.core.request.model.g
            r0.<init>()
            return r0
    }

    public final void dC(java.lang.String r1) {
            r0 = this;
            r0.auy = r1
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.aux
            java.lang.String r2 = "user_id"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.auy
            java.lang.String r2 = "thirdUserId"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.ajr
            if (r1 == 0) goto L1c
            java.lang.String r2 = "thirdAge"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L1c:
            int r1 = r3.ajs
            if (r1 == 0) goto L25
            java.lang.String r2 = "thirdGender"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L25:
            java.lang.String r1 = r3.ajt
            java.lang.String r2 = "thirdInterest"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
