package com.kwad.sdk.core.b.a;

public final class em implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.InstalledActivateInfo> {
    public em() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.InstalledActivateInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "cardSwitch"
            boolean r0 = r3.optBoolean(r0)
            r2.cardSwitch = r0
            java.lang.String r0 = "showTime"
            long r0 = r3.optLong(r0)
            r2.showTime = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.InstalledActivateInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            boolean r0 = r4.cardSwitch
            if (r0 == 0) goto L12
            boolean r0 = r4.cardSwitch
            java.lang.String r1 = "cardSwitch"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            long r0 = r4.showTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
            long r0 = r4.showTime
            java.lang.String r4 = "showTime"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L21:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.InstalledActivateInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.InstalledActivateInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
