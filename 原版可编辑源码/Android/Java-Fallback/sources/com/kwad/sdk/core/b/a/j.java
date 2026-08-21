package com.kwad.sdk.core.b.a;

public final class j implements com.kwad.sdk.core.d<com.kwad.components.ad.adbit.AdBid> {
    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.adbit.AdBid r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "creativeId"
            long r0 = r4.optLong(r0)
            r3.creativeId = r0
            java.lang.String r0 = "ecpm"
            long r0 = r4.optLong(r0)
            r3.ecpm = r0
            java.lang.String r0 = "bidEcpm"
            int r0 = r4.optInt(r0)
            r3.bidEcpm = r0
            java.lang.String r0 = "winNoticeUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.winNoticeUrl = r0
            java.lang.String r0 = r3.winNoticeUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L2d
            r3.winNoticeUrl = r2
        L2d:
            java.lang.String r0 = "materialId"
            java.lang.String r4 = r4.optString(r0)
            r3.materialId = r4
            java.lang.String r4 = r3.materialId
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L3d
            r3.materialId = r2
        L3d:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.adbit.AdBid r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.creativeId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.creativeId
            java.lang.String r4 = "creativeId"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            long r0 = r5.ecpm
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = r5.ecpm
            java.lang.String r2 = "ecpm"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L23:
            int r0 = r5.bidEcpm
            if (r0 == 0) goto L2e
            int r0 = r5.bidEcpm
            java.lang.String r1 = "bidEcpm"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L2e:
            java.lang.String r0 = r5.winNoticeUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L43
            java.lang.String r0 = r5.winNoticeUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L43
            java.lang.String r0 = r5.winNoticeUrl
            java.lang.String r2 = "winNoticeUrl"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L43:
            java.lang.String r0 = r5.materialId
            if (r0 == 0) goto L56
            java.lang.String r0 = r5.materialId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L56
            java.lang.String r5 = r5.materialId
            java.lang.String r0 = "materialId"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L56:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.adbit.AdBid r1 = (com.kwad.components.ad.adbit.AdBid) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.adbit.AdBid r1 = (com.kwad.components.ad.adbit.AdBid) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
