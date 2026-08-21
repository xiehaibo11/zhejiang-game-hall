package com.kwad.sdk.core.b.a;

public final class ed implements com.kwad.sdk.core.d<com.kwad.sdk.commercial.model.HybridLoadMsg> {
    public ed() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.commercial.model.HybridLoadMsg r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "scene_id"
            java.lang.String r0 = r4.optString(r0)
            r3.sceneId = r0
            java.lang.String r0 = r3.sceneId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.sceneId = r2
        L15:
            java.lang.String r0 = "h5_version"
            java.lang.String r0 = r4.optString(r0)
            r3.h5Version = r0
            java.lang.String r0 = r3.h5Version
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.h5Version = r2
        L25:
            java.lang.String r0 = "load_type"
            int r0 = r4.optInt(r0)
            r3.loadType = r0
            java.lang.String r0 = "state"
            int r0 = r4.optInt(r0)
            r3.state = r0
            java.lang.String r0 = "interval"
            java.lang.String r0 = r4.optString(r0)
            r3.interval = r0
            java.lang.String r0 = r3.interval
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.interval = r2
        L45:
            java.lang.String r0 = "fail_state"
            int r0 = r4.optInt(r0)
            r3.failState = r0
            java.lang.String r0 = "fail_reason"
            java.lang.String r0 = r4.optString(r0)
            r3.failReason = r0
            java.lang.String r0 = r3.failReason
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.failReason = r2
        L5d:
            java.lang.String r0 = "url"
            java.lang.String r0 = r4.optString(r0)
            r3.url = r0
            java.lang.String r0 = r3.url
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.url = r2
        L6d:
            java.lang.String r0 = "package_url"
            java.lang.String r4 = r4.optString(r0)
            r3.packageUrl = r4
            java.lang.String r4 = r3.packageUrl
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L7d
            r3.packageUrl = r2
        L7d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.commercial.model.HybridLoadMsg r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.sceneId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.sceneId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.sceneId
            java.lang.String r2 = "scene_id"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.h5Version
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.h5Version
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.h5Version
            java.lang.String r2 = "h5_version"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            int r0 = r3.loadType
            if (r0 == 0) goto L3a
            int r0 = r3.loadType
            java.lang.String r2 = "load_type"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            int r0 = r3.state
            if (r0 == 0) goto L45
            int r0 = r3.state
            java.lang.String r2 = "state"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L45:
            java.lang.String r0 = r3.interval
            if (r0 == 0) goto L58
            java.lang.String r0 = r3.interval
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L58
            java.lang.String r0 = r3.interval
            java.lang.String r2 = "interval"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L58:
            int r0 = r3.failState
            if (r0 == 0) goto L63
            int r0 = r3.failState
            java.lang.String r2 = "fail_state"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L63:
            java.lang.String r0 = r3.failReason
            if (r0 == 0) goto L76
            java.lang.String r0 = r3.failReason
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L76
            java.lang.String r0 = r3.failReason
            java.lang.String r2 = "fail_reason"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L76:
            java.lang.String r0 = r3.url
            if (r0 == 0) goto L89
            java.lang.String r0 = r3.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L89
            java.lang.String r0 = r3.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L89:
            java.lang.String r0 = r3.packageUrl
            if (r0 == 0) goto L9c
            java.lang.String r0 = r3.packageUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9c
            java.lang.String r3 = r3.packageUrl
            java.lang.String r0 = "package_url"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L9c:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.HybridLoadMsg r1 = (com.kwad.sdk.commercial.model.HybridLoadMsg) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.commercial.model.HybridLoadMsg r1 = (com.kwad.sdk.commercial.model.HybridLoadMsg) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
