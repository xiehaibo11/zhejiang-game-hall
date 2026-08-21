package com.kwad.components.core.p.a;

public final class d implements com.kwad.sdk.core.b {
    public long Qr;
    public long photoId;

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r1 = r4.photoId
            java.lang.String r3 = "photoId"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            long r1 = r4.Qr
            java.lang.String r3 = "authorId"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            return r0
    }
}
