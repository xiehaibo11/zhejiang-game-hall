package com.kwad.sdk.core.b.a;

public final class gc implements com.kwad.sdk.core.d<com.kwad.sdk.h.a.b> {
    public gc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.h.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "packageId"
            java.lang.String r0 = r4.optString(r0)
            r3.aCb = r0
            java.lang.String r0 = r3.aCb
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.aCb = r2
        L15:
            java.lang.String r0 = "zipFileName"
            java.lang.String r0 = r4.optString(r0)
            r3.aCc = r0
            java.lang.String r0 = r3.aCc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.aCc = r2
        L25:
            java.lang.String r0 = "zipPath"
            java.lang.String r0 = r4.optString(r0)
            r3.aCd = r0
            java.lang.String r0 = r3.aCd
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.aCd = r2
        L35:
            java.lang.String r0 = "packageUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.packageUrl = r0
            java.lang.String r0 = r3.packageUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.packageUrl = r2
        L45:
            java.lang.String r0 = "version"
            java.lang.String r0 = r4.optString(r0)
            r3.version = r0
            java.lang.String r0 = r3.version
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.version = r2
        L55:
            java.lang.String r0 = "checksum"
            java.lang.String r0 = r4.optString(r0)
            r3.agi = r0
            java.lang.String r0 = r3.agi
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.agi = r2
        L65:
            java.lang.String r0 = "loadType"
            int r0 = r4.optInt(r0)
            r3.loadType = r0
            java.lang.String r0 = "packageType"
            int r0 = r4.optInt(r0)
            r3.packageType = r0
            java.lang.String r0 = "public"
            boolean r4 = r4.optBoolean(r0)
            r3.aCf = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.h.a.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.aCb
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.aCb
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.aCb
            java.lang.String r2 = "packageId"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.aCc
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.aCc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.aCc
            java.lang.String r2 = "zipFileName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.aCd
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.aCd
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.aCd
            java.lang.String r2 = "zipPath"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.lang.String r0 = r3.packageUrl
            if (r0 == 0) goto L55
            java.lang.String r0 = r3.packageUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r3.packageUrl
            java.lang.String r2 = "packageUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L55:
            java.lang.String r0 = r3.version
            if (r0 == 0) goto L68
            java.lang.String r0 = r3.version
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            java.lang.String r0 = r3.version
            java.lang.String r2 = "version"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L68:
            java.lang.String r0 = r3.agi
            if (r0 == 0) goto L7b
            java.lang.String r0 = r3.agi
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7b
            java.lang.String r0 = r3.agi
            java.lang.String r1 = "checksum"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L7b:
            int r0 = r3.loadType
            if (r0 == 0) goto L86
            int r0 = r3.loadType
            java.lang.String r1 = "loadType"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L86:
            int r0 = r3.packageType
            if (r0 == 0) goto L91
            int r0 = r3.packageType
            java.lang.String r1 = "packageType"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L91:
            boolean r0 = r3.aCf
            if (r0 == 0) goto L9c
            boolean r3 = r3.aCf
            java.lang.String r0 = "public"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L9c:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.h.a.b r1 = (com.kwad.sdk.h.a.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.h.a.b r1 = (com.kwad.sdk.h.a.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
