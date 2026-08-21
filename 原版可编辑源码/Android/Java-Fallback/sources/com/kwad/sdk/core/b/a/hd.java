package com.kwad.sdk.core.b.a;

public final class hd implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoTaskInfo> {
    public hd() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoTaskInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateId"
            java.lang.String r0 = r4.optString(r0)
            r3.templateId = r0
            java.lang.String r0 = r3.templateId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r3.templateId = r0
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
            java.lang.String r2 = "duration"
            int r0 = r4.optInt(r2, r0)
            r3.duration = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r2 = "0"
            r0.<init>(r2)
            int r0 = r0.intValue()
            java.lang.String r2 = "taskType"
            int r0 = r4.optInt(r2, r0)
            r3.taskType = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "thresholdTime"
            int r4 = r4.optInt(r1, r0)
            r3.thresholdTime = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoTaskInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.templateId
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.templateId
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.templateId
            java.lang.String r1 = "templateId"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            int r0 = r2.showTime
            java.lang.String r1 = "showTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.duration
            java.lang.String r1 = "duration"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.taskType
            java.lang.String r1 = "taskType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.thresholdTime
            java.lang.String r0 = "thresholdTime"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoTaskInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoTaskInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
