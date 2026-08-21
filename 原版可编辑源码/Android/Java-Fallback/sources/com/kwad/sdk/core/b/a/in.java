package com.kwad.sdk.core.b.a;

public final class in implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo> {
    public in() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "itemId"
            java.lang.String r0 = r4.optString(r0)
            r3.itemId = r0
            java.lang.String r0 = r3.itemId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.itemId = r2
        L15:
            java.lang.String r0 = "imageUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.imageUrl = r0
            java.lang.String r0 = r3.imageUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.imageUrl = r2
        L25:
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.title = r2
        L35:
            java.lang.String r0 = "price"
            java.lang.String r4 = r4.optString(r0)
            r3.price = r4
            java.lang.String r4 = r3.price
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L45
            r3.price = r2
        L45:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.itemId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.itemId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.itemId
            java.lang.String r2 = "itemId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.imageUrl
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.imageUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.imageUrl
            java.lang.String r2 = "imageUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.title
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.lang.String r0 = r3.price
            if (r0 == 0) goto L55
            java.lang.String r0 = r3.price
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r3 = r3.price
            java.lang.String r0 = "price"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L55:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r1 = (com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r1 = (com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
