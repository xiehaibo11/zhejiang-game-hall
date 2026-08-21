package com.kwad.sdk.core.b.a;

public final class fc implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo.LiveReservationPlayEndInfo> {
    public fc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo.LiveReservationPlayEndInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "查看详情"
            r0.<init>(r1)
            java.lang.String r1 = "detailBtnTitle"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.detailBtnTitle = r0
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "立即预约"
            r0.<init>(r1)
            java.lang.String r1 = "reservationBtnTitle"
            java.lang.String r3 = r3.optString(r1, r0)
            r2.reservationBtnTitle = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo.LiveReservationPlayEndInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.detailBtnTitle
            java.lang.String r1 = "detailBtnTitle"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.lang.String r2 = r2.reservationBtnTitle
            java.lang.String r0 = "reservationBtnTitle"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo.LiveReservationPlayEndInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo.LiveReservationPlayEndInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
