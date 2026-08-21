package com.kwad.sdk.core.b.a;

public final class gj implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.PhotoInfo> {
    public gj() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.PhotoInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mOriginJString"
            java.lang.String r0 = r3.optString(r0)
            r2.mOriginJString = r0
            java.lang.String r0 = r2.mOriginJString
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r2.mOriginJString = r0
        L15:
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r0 = new com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo
            r0.<init>()
            r2.baseInfo = r0
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r0 = r2.baseInfo
            java.lang.String r1 = "baseInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r0 = new com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo
            r0.<init>()
            r2.videoInfo = r0
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r2 = r2.videoInfo
            java.lang.String r0 = "videoInfo"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.PhotoInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.mOriginJString
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.mOriginJString
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.mOriginJString
            java.lang.String r1 = "mOriginJString"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r0 = r2.baseInfo
            java.lang.String r1 = "baseInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r2 = r2.videoInfo
            java.lang.String r0 = "videoInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.PhotoInfo r1 = (com.kwad.sdk.core.response.model.PhotoInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.PhotoInfo r1 = (com.kwad.sdk.core.response.model.PhotoInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
