package com.kwad.sdk.core.b.a;

public final class hk implements com.kwad.sdk.core.d<com.kwad.sdk.i.b.b> {
    public hk() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.i.b.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "enable_monitor"
            int r0 = r4.optInt(r0)
            r3.aCZ = r0
            java.lang.String r0 = "c_sc_name"
            java.lang.String r0 = r4.optString(r0)
            r3.aDa = r0
            java.lang.String r0 = r3.aDa
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.aDa = r2
        L1d:
            java.lang.String r0 = "c_pcl_name"
            java.lang.String r0 = r4.optString(r0)
            r3.aDb = r0
            java.lang.String r0 = r3.aDb
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.aDb = r2
        L2d:
            java.lang.String r0 = "m_gam_name"
            java.lang.String r0 = r4.optString(r0)
            r3.aDc = r0
            java.lang.String r0 = r3.aDc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.aDc = r2
        L3d:
            java.lang.String r0 = "m_gsv_name"
            java.lang.String r0 = r4.optString(r0)
            r3.aDd = r0
            java.lang.String r0 = r3.aDd
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.aDd = r2
        L4d:
            java.lang.String r0 = "m_gpv_name"
            java.lang.String r4 = r4.optString(r0)
            r3.aDe = r4
            java.lang.String r4 = r3.aDe
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L5d
            r3.aDe = r2
        L5d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.i.b.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.aCZ
            if (r0 == 0) goto L12
            int r0 = r3.aCZ
            java.lang.String r1 = "enable_monitor"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.aDa
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.aDa
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.aDa
            java.lang.String r2 = "c_sc_name"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.aDb
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.aDb
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.aDb
            java.lang.String r2 = "c_pcl_name"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.aDc
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.aDc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.aDc
            java.lang.String r2 = "m_gam_name"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L4d:
            java.lang.String r0 = r3.aDd
            if (r0 == 0) goto L60
            java.lang.String r0 = r3.aDd
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L60
            java.lang.String r0 = r3.aDd
            java.lang.String r2 = "m_gsv_name"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L60:
            java.lang.String r0 = r3.aDe
            if (r0 == 0) goto L73
            java.lang.String r0 = r3.aDe
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L73
            java.lang.String r3 = r3.aDe
            java.lang.String r0 = "m_gpv_name"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L73:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.i.b$b r1 = (com.kwad.sdk.i.b.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.i.b$b r1 = (com.kwad.sdk.i.b.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
