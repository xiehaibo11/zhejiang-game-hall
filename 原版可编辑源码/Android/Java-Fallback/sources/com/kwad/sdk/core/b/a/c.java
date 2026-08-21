package com.kwad.sdk.core.b.a;

public final class c implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.ActionBarInfo> {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.ActionBarInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "translateBtnShowTime"
            long r0 = r3.optLong(r0)
            r2.translateBtnShowTime = r0
            java.lang.String r0 = "lightBtnShowTime"
            long r0 = r3.optLong(r0)
            r2.lightBtnShowTime = r0
            java.lang.String r0 = "cardShowTime"
            long r0 = r3.optLong(r0)
            r2.cardShowTime = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.ActionBarInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.translateBtnShowTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.translateBtnShowTime
            java.lang.String r4 = "translateBtnShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            long r0 = r5.lightBtnShowTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = r5.lightBtnShowTime
            java.lang.String r4 = "lightBtnShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L23:
            long r0 = r5.cardShowTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            long r0 = r5.cardShowTime
            java.lang.String r5 = "cardShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L30:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.ActionBarInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.ActionBarInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
