package com.kwad.sdk.core.b.a;

public final class aq implements com.kwad.sdk.core.d<com.kwad.sdk.crash.model.message.AnrReason> {
    public aq() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.model.message.AnrReason r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mTag"
            java.lang.String r0 = r4.optString(r0)
            r3.mTag = r0
            java.lang.String r0 = r3.mTag
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.mTag = r2
        L15:
            java.lang.String r0 = "mShortMsg"
            java.lang.String r0 = r4.optString(r0)
            r3.mShortMsg = r0
            java.lang.String r0 = r3.mShortMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.mShortMsg = r2
        L25:
            java.lang.String r0 = "mLongMsg"
            java.lang.String r4 = r4.optString(r0)
            r3.mLongMsg = r4
            java.lang.String r4 = r3.mLongMsg
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L35
            r3.mLongMsg = r2
        L35:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.model.message.AnrReason r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.mTag
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.mTag
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.mTag
            java.lang.String r2 = "mTag"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.mShortMsg
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.mShortMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.mShortMsg
            java.lang.String r2 = "mShortMsg"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.mLongMsg
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.mLongMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r3 = r3.mLongMsg
            java.lang.String r0 = "mLongMsg"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L42:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.model.message.AnrReason r1 = (com.kwad.sdk.crash.model.message.AnrReason) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.model.message.AnrReason r1 = (com.kwad.sdk.crash.model.message.AnrReason) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
