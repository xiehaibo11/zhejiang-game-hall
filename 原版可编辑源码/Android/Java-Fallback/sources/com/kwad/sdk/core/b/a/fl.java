package com.kwad.sdk.core.b.a;

public final class fl implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo> {
    public fl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "title"
            java.lang.String r0 = r5.optString(r0)
            r4.title = r0
            java.lang.String r0 = r4.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r4.title = r2
        L15:
            java.lang.String r0 = "userHeadUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.userHeadUrl = r0
            java.lang.String r0 = r4.userHeadUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r4.userHeadUrl = r2
        L25:
            java.lang.String r0 = "bookUserCount"
            int r0 = r5.optInt(r0)
            r4.bookUserCount = r0
            java.lang.String r0 = "liveStartTime"
            java.lang.String r0 = r5.optString(r0)
            r4.liveStartTime = r0
            java.lang.String r0 = r4.liveStartTime
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r4.liveStartTime = r2
        L3d:
            java.lang.String r0 = "displayWeakCard"
            boolean r0 = r5.optBoolean(r0)
            r4.displayWeakCard = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.bookUserUrlList = r0
            java.lang.String r0 = "bookUserUrlList"
            org.json.JSONArray r0 = r5.optJSONArray(r0)
            if (r0 == 0) goto L69
            r1 = 0
        L55:
            int r2 = r0.length()
            if (r1 >= r2) goto L69
            java.util.List<java.lang.String> r2 = r4.bookUserUrlList
            java.lang.Object r3 = r0.opt(r1)
            java.lang.String r3 = (java.lang.String) r3
            r2.add(r3)
            int r1 = r1 + 1
            goto L55
        L69:
            java.lang.String r0 = "displayBookCount"
            boolean r0 = r5.optBoolean(r0)
            r4.displayBookCount = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo
            r0.<init>()
            r4.playEndCard = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r4 = r4.playEndCard
            java.lang.String r0 = "playEndCard"
            org.json.JSONObject r5 = r5.optJSONObject(r0)
            r4.parseJson(r5)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.title
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.userHeadUrl
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.userHeadUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.userHeadUrl
            java.lang.String r2 = "userHeadUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            int r0 = r3.bookUserCount
            if (r0 == 0) goto L3a
            int r0 = r3.bookUserCount
            java.lang.String r2 = "bookUserCount"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.liveStartTime
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.liveStartTime
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.liveStartTime
            java.lang.String r1 = "liveStartTime"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L4d:
            boolean r0 = r3.displayWeakCard
            if (r0 == 0) goto L58
            boolean r0 = r3.displayWeakCard
            java.lang.String r1 = "displayWeakCard"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L58:
            java.util.List<java.lang.String> r0 = r3.bookUserUrlList
            java.lang.String r1 = "bookUserUrlList"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            boolean r0 = r3.displayBookCount
            if (r0 == 0) goto L6a
            boolean r0 = r3.displayBookCount
            java.lang.String r1 = "displayBookCount"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L6a:
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r3 = r3.playEndCard
            java.lang.String r0 = "playEndCard"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
