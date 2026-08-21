package com.kwad.sdk.core.b.a;

public final class jm implements com.kwad.sdk.core.d<com.kwad.sdk.commercial.model.WebViewLoadMsg> {
    public jm() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.commercial.model.WebViewLoadMsg r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.url = r2
        L15:
            java.lang.String r0 = "state"
            int r0 = r4.optInt(r0)
            r3.state = r0
            java.lang.String r0 = "interval"
            java.lang.String r0 = r4.optString(r0)
            r3.interval = r0
            java.lang.String r0 = r3.interval
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.interval = r2
        L2d:
            java.lang.String r0 = "fail_reason"
            java.lang.String r0 = r4.optString(r0)
            r3.failReason = r0
            java.lang.String r0 = r3.failReason
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.failReason = r2
        L3d:
            java.lang.String r0 = "cost_time"
            java.lang.String r4 = r4.optString(r0)
            r3.costTime = r4
            java.lang.String r4 = r3.costTime
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L4d
            r3.costTime = r2
        L4d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.commercial.model.WebViewLoadMsg r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.url
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            int r0 = r3.state
            if (r0 == 0) goto L27
            int r0 = r3.state
            java.lang.String r2 = "state"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.interval
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.interval
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.interval
            java.lang.String r2 = "interval"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.failReason
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.failReason
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.failReason
            java.lang.String r2 = "fail_reason"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L4d:
            java.lang.String r0 = r3.costTime
            if (r0 == 0) goto L60
            java.lang.String r0 = r3.costTime
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L60
            java.lang.String r3 = r3.costTime
            java.lang.String r0 = "cost_time"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L60:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.WebViewLoadMsg r1 = (com.kwad.sdk.commercial.model.WebViewLoadMsg) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.WebViewLoadMsg r1 = (com.kwad.sdk.commercial.model.WebViewLoadMsg) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
