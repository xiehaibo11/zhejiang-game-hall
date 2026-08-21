package com.kwad.sdk.core.b.a;

public final class bj implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.z.a> {
    public bj() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.report.z.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "template_id"
            java.lang.String r0 = r4.optString(r0)
            r3.templateId = r0
            java.lang.String r0 = r3.templateId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.templateId = r2
        L15:
            java.lang.String r0 = "template_show_type"
            java.lang.String r0 = r4.optString(r0)
            r3.asK = r0
            java.lang.String r0 = r3.asK
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.asK = r2
        L25:
            java.lang.String r0 = "award_task_name"
            int r0 = r4.optInt(r0)
            r3.asL = r0
            java.lang.String r0 = "jumps_liveroom_type"
            int r0 = r4.optInt(r0)
            r3.asM = r0
            java.lang.String r0 = "universe_feature_freg"
            int r0 = r4.optInt(r0)
            r3.asN = r0
            java.lang.String r0 = "is_special_preload"
            int r0 = r4.optInt(r0)
            r3.asP = r0
            java.lang.String r0 = "card_type"
            int r4 = r4.optInt(r0)
            r3.asQ = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.report.z.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.templateId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.templateId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.templateId
            java.lang.String r2 = "template_id"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.asK
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.asK
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.asK
            java.lang.String r1 = "template_show_type"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L2f:
            int r0 = r3.asL
            if (r0 == 0) goto L3a
            int r0 = r3.asL
            java.lang.String r1 = "award_task_name"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L3a:
            int r0 = r3.asM
            if (r0 == 0) goto L45
            int r0 = r3.asM
            java.lang.String r1 = "jumps_liveroom_type"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L45:
            int r0 = r3.asN
            if (r0 == 0) goto L50
            int r0 = r3.asN
            java.lang.String r1 = "universe_feature_freg"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L50:
            int r0 = r3.asP
            if (r0 == 0) goto L5b
            int r0 = r3.asP
            java.lang.String r1 = "is_special_preload"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L5b:
            int r0 = r3.asQ
            if (r0 == 0) goto L66
            int r3 = r3.asQ
            java.lang.String r0 = "card_type"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L66:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.z$a r1 = (com.kwad.sdk.core.report.z.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.z$a r1 = (com.kwad.sdk.core.report.z.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
