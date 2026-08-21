package com.kwad.components.ad.adbit;

public class AdBitResultData extends com.kwad.components.core.response.model.AdResultData {
    private static final long serialVersionUID = -3932631606478587475L;
    public java.util.List<com.kwad.components.ad.adbit.AdBid> adBidList;
    public java.lang.String adxId;

    public AdBitResultData(com.kwad.sdk.internal.api.SceneImpl r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.adBidList = r1
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r4) {
            r3 = this;
            super.parseJson(r4)
            java.lang.String r0 = "adxId"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Exception -> L41
            r3.adxId = r0     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = "adBids"
            java.lang.String r4 = r4.optString(r0)     // Catch: java.lang.Exception -> L41
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L41
            if (r0 == 0) goto L18
            return
        L18:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L41
            r0.<init>(r4)     // Catch: java.lang.Exception -> L41
            int r4 = r0.length()     // Catch: java.lang.Exception -> L41
            if (r4 <= 0) goto L40
            r4 = 0
        L24:
            int r1 = r0.length()     // Catch: java.lang.Exception -> L41
            if (r4 >= r1) goto L40
            org.json.JSONObject r1 = r0.optJSONObject(r4)     // Catch: java.lang.Exception -> L41
            if (r1 == 0) goto L3d
            com.kwad.components.ad.adbit.AdBid r2 = new com.kwad.components.ad.adbit.AdBid     // Catch: java.lang.Exception -> L41
            r2.<init>()     // Catch: java.lang.Exception -> L41
            r2.parseJson(r1)     // Catch: java.lang.Exception -> L41
            java.util.List<com.kwad.components.ad.adbit.AdBid> r1 = r3.adBidList     // Catch: java.lang.Exception -> L41
            r1.add(r2)     // Catch: java.lang.Exception -> L41
        L3d:
            int r4 = r4 + 1
            goto L24
        L40:
            return
        L41:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
            return
    }
}
