package com.kwad.sdk.core.b.a;

public final class gi implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchEcInfo> {
    public gi() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchEcInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "strongStyleItemId"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStyleItemId = r0
            java.lang.String r0 = r3.strongStyleItemId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.strongStyleItemId = r2
        L15:
            java.lang.String r0 = "strongStylePicUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStylePicUrl = r0
            java.lang.String r0 = r3.strongStylePicUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.strongStylePicUrl = r2
        L25:
            java.lang.String r0 = "strongStyleItemUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStyleItemUrl = r0
            java.lang.String r0 = r3.strongStyleItemUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.strongStyleItemUrl = r2
        L35:
            java.lang.String r0 = "strongStyleItemPrice"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStyleItemPrice = r0
            java.lang.String r0 = r3.strongStyleItemPrice
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.strongStyleItemPrice = r2
        L45:
            java.lang.String r0 = "strongStylePriceAfterComm"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStylePriceAfterComm = r0
            java.lang.String r0 = r3.strongStylePriceAfterComm
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.strongStylePriceAfterComm = r2
        L55:
            java.lang.String r0 = "strongStyleUserCommAmountBuying"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStyleUserCommAmountBuying = r0
            java.lang.String r0 = r3.strongStyleUserCommAmountBuying
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.strongStyleUserCommAmountBuying = r2
        L65:
            java.lang.String r0 = "strongStyleUserCommAmountSharing"
            java.lang.String r0 = r4.optString(r0)
            r3.strongStyleUserCommAmountSharing = r0
            java.lang.String r0 = r3.strongStyleUserCommAmountSharing
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L75
            r3.strongStyleUserCommAmountSharing = r2
        L75:
            java.lang.String r0 = "nebulaKwaiLink"
            java.lang.String r0 = r4.optString(r0)
            r3.nebulaKwaiLink = r0
            java.lang.String r0 = r3.nebulaKwaiLink
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L85
            r3.nebulaKwaiLink = r2
        L85:
            java.lang.String r0 = "linkCode"
            java.lang.String r0 = r4.optString(r0)
            r3.linkCode = r0
            java.lang.String r0 = r3.linkCode
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L95
            r3.linkCode = r2
        L95:
            java.lang.String r0 = "platformTypeCode"
            int r4 = r4.optInt(r0)
            r3.platformTypeCode = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchEcInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.strongStyleItemId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.strongStyleItemId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.strongStyleItemId
            java.lang.String r2 = "strongStyleItemId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.strongStylePicUrl
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.strongStylePicUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.strongStylePicUrl
            java.lang.String r2 = "strongStylePicUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.strongStyleItemUrl
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.strongStyleItemUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.strongStyleItemUrl
            java.lang.String r2 = "strongStyleItemUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.lang.String r0 = r3.strongStyleItemPrice
            if (r0 == 0) goto L55
            java.lang.String r0 = r3.strongStyleItemPrice
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r3.strongStyleItemPrice
            java.lang.String r2 = "strongStyleItemPrice"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L55:
            java.lang.String r0 = r3.strongStylePriceAfterComm
            if (r0 == 0) goto L68
            java.lang.String r0 = r3.strongStylePriceAfterComm
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            java.lang.String r0 = r3.strongStylePriceAfterComm
            java.lang.String r2 = "strongStylePriceAfterComm"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L68:
            java.lang.String r0 = r3.strongStyleUserCommAmountBuying
            if (r0 == 0) goto L7b
            java.lang.String r0 = r3.strongStyleUserCommAmountBuying
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7b
            java.lang.String r0 = r3.strongStyleUserCommAmountBuying
            java.lang.String r2 = "strongStyleUserCommAmountBuying"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L7b:
            java.lang.String r0 = r3.strongStyleUserCommAmountSharing
            if (r0 == 0) goto L8e
            java.lang.String r0 = r3.strongStyleUserCommAmountSharing
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8e
            java.lang.String r0 = r3.strongStyleUserCommAmountSharing
            java.lang.String r2 = "strongStyleUserCommAmountSharing"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L8e:
            java.lang.String r0 = r3.nebulaKwaiLink
            if (r0 == 0) goto La1
            java.lang.String r0 = r3.nebulaKwaiLink
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La1
            java.lang.String r0 = r3.nebulaKwaiLink
            java.lang.String r2 = "nebulaKwaiLink"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        La1:
            java.lang.String r0 = r3.linkCode
            if (r0 == 0) goto Lb4
            java.lang.String r0 = r3.linkCode
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lb4
            java.lang.String r0 = r3.linkCode
            java.lang.String r1 = "linkCode"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Lb4:
            int r0 = r3.platformTypeCode
            if (r0 == 0) goto Lbf
            int r3 = r3.platformTypeCode
            java.lang.String r0 = "platformTypeCode"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        Lbf:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchEcInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchEcInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchEcInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchEcInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
