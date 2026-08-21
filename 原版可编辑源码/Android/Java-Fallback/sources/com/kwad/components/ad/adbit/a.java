package com.kwad.components.ad.adbit;

public final class a {
    public org.json.JSONObject bt;
    public java.util.Map<java.lang.String, java.lang.String> bu;

    public a(org.json.JSONObject r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = this;
            r0.<init>()
            r0.bt = r1
            r0.bu = r2
            return
    }

    public final java.lang.String N() {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.bu
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            org.json.JSONObject r2 = r4.bt
            java.util.Map<java.lang.String, java.lang.String> r3 = r4.bu
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            com.kwad.sdk.utils.t.putValue(r2, r1, r3)
            goto La
        L24:
            org.json.JSONObject r0 = r4.bt
            java.lang.String r0 = r0.toString()
            return r0
    }
}
