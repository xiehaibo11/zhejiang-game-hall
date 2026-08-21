package com.kwad.sdk.core.b.a;

public final class cj implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo> {
    public cj() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "callButtonShowTime"
            long r0 = r4.optLong(r0)
            r3.callButtonShowTime = r0
            java.lang.String r0 = "callButtonDescription"
            java.lang.String r0 = r4.optString(r0)
            r3.callButtonDescription = r0
            java.lang.String r0 = r3.callButtonDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.callButtonDescription = r2
        L1d:
            java.lang.String r0 = "rewardIconUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.rewardIconUrl = r0
            java.lang.String r0 = r3.rewardIconUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.rewardIconUrl = r2
        L2d:
            java.lang.String r0 = "rewardCallDescription"
            java.lang.String r0 = r4.optString(r0)
            r3.rewardCallDescription = r0
            java.lang.String r0 = r3.rewardCallDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.rewardCallDescription = r2
        L3d:
            java.lang.String r0 = "style"
            int r0 = r4.optInt(r0)
            r3.style = r0
            java.lang.String r0 = "maxTimeOut"
            long r0 = r4.optLong(r0)
            r3.maxTimeOut = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.callButtonShowTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.callButtonShowTime
            java.lang.String r4 = "callButtonShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            java.lang.String r0 = r5.callButtonDescription
            java.lang.String r1 = ""
            if (r0 == 0) goto L2b
            java.lang.String r0 = r5.callButtonDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r5.callButtonDescription
            java.lang.String r4 = "callButtonDescription"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L2b:
            java.lang.String r0 = r5.rewardIconUrl
            if (r0 == 0) goto L3e
            java.lang.String r0 = r5.rewardIconUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3e
            java.lang.String r0 = r5.rewardIconUrl
            java.lang.String r4 = "rewardIconUrl"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L3e:
            java.lang.String r0 = r5.rewardCallDescription
            if (r0 == 0) goto L51
            java.lang.String r0 = r5.rewardCallDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L51
            java.lang.String r0 = r5.rewardCallDescription
            java.lang.String r1 = "rewardCallDescription"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L51:
            int r0 = r5.style
            if (r0 == 0) goto L5c
            int r0 = r5.style
            java.lang.String r1 = "style"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L5c:
            long r0 = r5.maxTimeOut
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L69
            long r0 = r5.maxTimeOut
            java.lang.String r5 = "maxTimeOut"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L69:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
