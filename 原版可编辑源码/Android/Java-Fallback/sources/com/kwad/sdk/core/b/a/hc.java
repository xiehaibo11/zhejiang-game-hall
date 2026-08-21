package com.kwad.sdk.core.b.a;

public final class hc implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoInteractInfo> {
    public hc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoInteractInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateId"
            java.lang.String r0 = r4.optString(r0)
            r3.templateId = r0
            java.lang.String r0 = r3.templateId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.templateId = r2
        L15:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "15"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "showTime"
            int r0 = r4.optInt(r1, r0)
            r3.showTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "10"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "duration"
            int r0 = r4.optInt(r1, r0)
            r3.duration = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "5"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "rewardTime"
            int r0 = r4.optInt(r1, r0)
            r3.rewardTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "3"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "intervalShow"
            int r0 = r4.optInt(r1, r0)
            r3.intervalShow = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "2"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "dayMaxLimit"
            int r0 = r4.optInt(r1, r0)
            r3.dayMaxLimit = r0
            java.lang.String r0 = "style"
            int r0 = r4.optInt(r0)
            r3.style = r0
            java.lang.String r0 = "successfulMsg"
            java.lang.String r0 = r4.optString(r0)
            r3.successfulMsg = r0
            java.lang.String r0 = r3.successfulMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8c
            r3.successfulMsg = r2
        L8c:
            java.lang.String r0 = "errorMsg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = r3.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L9c
            r3.errorMsg = r2
        L9c:
            com.kwad.sdk.core.response.model.AdMatrixInfo$StyleInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$StyleInfo
            r0.<init>()
            r3.styleInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$StyleInfo r3 = r3.styleInfo
            java.lang.String r0 = "styleInfo"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoInteractInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.templateId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.templateId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.templateId
            java.lang.String r2 = "templateId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            int r0 = r3.showTime
            java.lang.String r2 = "showTime"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.duration
            java.lang.String r2 = "duration"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.rewardTime
            java.lang.String r2 = "rewardTime"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.intervalShow
            java.lang.String r2 = "intervalShow"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.dayMaxLimit
            java.lang.String r2 = "dayMaxLimit"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.style
            if (r0 == 0) goto L4a
            int r0 = r3.style
            java.lang.String r2 = "style"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L4a:
            java.lang.String r0 = r3.successfulMsg
            if (r0 == 0) goto L5d
            java.lang.String r0 = r3.successfulMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L5d
            java.lang.String r0 = r3.successfulMsg
            java.lang.String r2 = "successfulMsg"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L5d:
            java.lang.String r0 = r3.errorMsg
            if (r0 == 0) goto L70
            java.lang.String r0 = r3.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L70
            java.lang.String r0 = r3.errorMsg
            java.lang.String r1 = "errorMsg"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L70:
            com.kwad.sdk.core.response.model.AdMatrixInfo$StyleInfo r3 = r3.styleInfo
            java.lang.String r0 = "styleInfo"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoInteractInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoInteractInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
