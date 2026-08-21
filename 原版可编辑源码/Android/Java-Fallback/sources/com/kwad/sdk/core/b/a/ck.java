package com.kwad.sdk.core.b.a;

public final class ck implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailWebCardInfo> {
    public ck() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailWebCardInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "style"
            int r0 = r4.optInt(r0)
            r3.style = r0
            java.lang.String r0 = "maxTimeOut"
            long r0 = r4.optLong(r0)
            r3.maxTimeOut = r0
            java.lang.String r0 = "typeLandscape"
            long r0 = r4.optLong(r0)
            r3.typeLandscape = r0
            java.lang.String r0 = "typePortrait"
            long r0 = r4.optLong(r0)
            r3.typePortrait = r0
            java.lang.String r0 = "cardUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.cardUrl = r0
            java.lang.String r0 = r3.cardUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L35
            r3.cardUrl = r2
        L35:
            java.lang.String r0 = "cardData"
            java.lang.String r0 = r4.optString(r0)
            r3.cardData = r0
            java.lang.String r0 = r3.cardData
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.cardData = r2
        L45:
            java.lang.String r0 = "cardShowTime"
            long r0 = r4.optLong(r0)
            r3.cardShowTime = r0
            java.lang.String r0 = "cardType"
            int r4 = r4.optInt(r0)
            r3.cardType = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailWebCardInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            int r0 = r5.style
            if (r0 == 0) goto L12
            int r0 = r5.style
            java.lang.String r1 = "style"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L12:
            long r0 = r5.maxTimeOut
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
            long r0 = r5.maxTimeOut
            java.lang.String r4 = "maxTimeOut"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L21:
            long r0 = r5.typeLandscape
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2e
            long r0 = r5.typeLandscape
            java.lang.String r4 = "typeLandscape"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L2e:
            long r0 = r5.typePortrait
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3b
            long r0 = r5.typePortrait
            java.lang.String r4 = "typePortrait"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L3b:
            java.lang.String r0 = r5.cardUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L50
            java.lang.String r0 = r5.cardUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L50
            java.lang.String r0 = r5.cardUrl
            java.lang.String r4 = "cardUrl"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L50:
            java.lang.String r0 = r5.cardData
            if (r0 == 0) goto L63
            java.lang.String r0 = r5.cardData
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L63
            java.lang.String r0 = r5.cardData
            java.lang.String r1 = "cardData"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L63:
            long r0 = r5.cardShowTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L70
            long r0 = r5.cardShowTime
            java.lang.String r2 = "cardShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L70:
            int r0 = r5.cardType
            if (r0 == 0) goto L7b
            int r5 = r5.cardType
            java.lang.String r0 = "cardType"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L7b:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailWebCardInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailWebCardInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
