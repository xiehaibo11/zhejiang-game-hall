package com.kwad.sdk.ranger.b.a;

public class b extends com.kwad.sdk.core.response.a.a {
    public java.util.List<com.kwad.sdk.ranger.b.a.a> aHr;
    public int avp;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.List<com.kwad.sdk.ranger.b.a.a> r1 = r4.aHr
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.ranger.b.a.a r2 = (com.kwad.sdk.ranger.b.a.a) r2
            java.lang.String r3 = r2.key
            int r2 = r2.value
            com.kwad.sdk.utils.t.putValue(r0, r3, r2)
            goto Lb
        L1f:
            int r1 = r4.avp
            java.lang.String r2 = "func_ratio_count"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "ranger"
            com.kwad.sdk.utils.t.putValue(r1, r2, r0)
            return r1
    }
}
