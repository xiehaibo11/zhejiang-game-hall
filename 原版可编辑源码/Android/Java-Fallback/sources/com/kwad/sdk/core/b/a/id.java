package com.kwad.sdk.core.b.a;

public final class id implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo> {
    public id() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.title = r2
        L15:
            java.lang.String r0 = "subtitle"
            java.lang.String r0 = r4.optString(r0)
            r3.subtitle = r0
            java.lang.String r0 = r3.subtitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.subtitle = r2
        L25:
            java.lang.String r0 = "style"
            int r0 = r4.optInt(r0)
            r3.style = r0
            java.lang.String r0 = "convertDistance"
            int r0 = r4.optInt(r0)
            r3.convertDistance = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
            r0.<init>()
            r3.downloadTexts = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r3 = r3.downloadTexts
            java.lang.String r0 = "downloadTexts"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo r3, org.json.JSONObject r4) {
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
            java.lang.String r0 = r3.subtitle
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.subtitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.subtitle
            java.lang.String r1 = "subtitle"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L2f:
            int r0 = r3.style
            if (r0 == 0) goto L3a
            int r0 = r3.style
            java.lang.String r1 = "style"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L3a:
            int r0 = r3.convertDistance
            if (r0 == 0) goto L45
            int r0 = r3.convertDistance
            java.lang.String r1 = "convertDistance"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L45:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r3 = r3.downloadTexts
            java.lang.String r0 = "downloadTexts"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
