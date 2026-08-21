package com.mbridge.msdk.video.js.a;

public class j extends com.mbridge.msdk.video.js.a.c {
    private static final java.lang.String o = null;
    private boolean A;
    private boolean B;
    private android.app.Activity p;
    private java.lang.String q;
    private java.lang.String r;
    private android.content.Context s;
    private com.mbridge.msdk.video.bt.module.a.b t;
    private com.mbridge.msdk.foundation.entity.CampaignEx u;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> v;
    private int w;
    private java.lang.String x;
    private java.lang.String y;
    private boolean z;



    static {
            java.lang.Class<com.mbridge.msdk.video.js.a.j> r0 = com.mbridge.msdk.video.js.a.j.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.video.js.a.j.o = r0
            return
    }

    public j(android.app.Activity r2, com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.x = r0
            r1.y = r0
            r0 = 0
            r1.z = r0
            r1.A = r0
            r0 = 1
            r1.B = r0
            r1.p = r2
            r1.u = r3
            return
    }

    public j(android.app.Activity r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.x = r0
            r1.y = r0
            r0 = 0
            r1.z = r0
            r1.A = r0
            r0 = 1
            r1.B = r0
            r1.p = r2
            r1.u = r3
            r1.v = r4
            return
    }

    private org.json.JSONObject A() {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()
            if (r1 == 0) goto L13
            org.json.JSONObject r0 = r1.k()
        L13:
            return r0
    }

    private com.mbridge.msdk.foundation.entity.CampaignEx a(java.lang.String r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            r7 = this;
            java.lang.String r0 = "deep_link"
            java.lang.String r1 = "akdlui"
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto Lb
            return r9
        Lb:
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto L17
            if (r9 == 0) goto L14
            goto L17
        L14:
            r9 = 0
            goto L134
        L17:
            java.lang.String r2 = "notice"
            boolean r2 = r8.contains(r2)
            if (r2 != 0) goto Lf2
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r9)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r0)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            if (r1 != 0) goto L2a
            r1 = r9
        L2a:
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            if (r2 != 0) goto Le6
            r7.a(r0, r1)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r0.<init>(r8)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r8 = com.mbridge.msdk.foundation.same.a.p     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            org.json.JSONObject r8 = r0.optJSONObject(r8)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r0 = "-999"
            if (r8 == 0) goto L75
            android.app.Activity r0 = r7.p     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.n     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r2 = r8.getString(r2)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            float r2 = (float) r2     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            android.app.Activity r2 = r7.p     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.o     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r3 = r8.getString(r3)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            float r3 = (float) r3     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            goto L76
        L75:
            r2 = r0
        L76:
            java.lang.String r3 = r1.getClickURL()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r0 = com.mbridge.msdk.click.c.a(r3, r0, r2)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r1.setClickURL(r0)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r0 = r1.getNoticeUrl()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            if (r8 == 0) goto Le6
            java.util.Iterator r2 = r8.keys()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r3.<init>()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
        L90:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            if (r4 == 0) goto Ld4
            java.lang.String r4 = "&"
            r3.append(r4)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r5 = r8.optString(r4)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.n     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            if (r6 != 0) goto Lb5
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.o     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            if (r6 == 0) goto Lc8
        Lb5:
            android.app.Activity r6 = r7.p     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            float r5 = (float) r5     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r6, r5)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
        Lc8:
            r3.append(r4)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r4 = "="
            r3.append(r4)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r3.append(r5)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            goto L90
        Ld4:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r8.<init>()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r8.append(r0)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r8.append(r3)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
            r1.setNoticeUrl(r8)     // Catch: java.lang.Throwable -> Le8 org.json.JSONException -> Led
        Le6:
            r9 = r1
            goto L134
        Le8:
            r8 = move-exception
            r8.printStackTrace()
            goto L134
        Led:
            r8 = move-exception
            r8.printStackTrace()
            goto L134
        Lf2:
            org.json.JSONObject r2 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r9)     // Catch: org.json.JSONException -> L130
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L130
            r3.<init>(r8)     // Catch: org.json.JSONException -> L130
            java.lang.Object r8 = r3.opt(r1)     // Catch: org.json.JSONException -> L130
            java.lang.String r4 = ""
            if (r8 != 0) goto L106
            r3.put(r1, r4)     // Catch: org.json.JSONException -> L130
        L106:
            boolean r8 = r3.has(r0)     // Catch: java.lang.Exception -> L10f org.json.JSONException -> L130
            if (r8 != 0) goto L10f
            r2.put(r0, r4)     // Catch: java.lang.Exception -> L10f org.json.JSONException -> L130
        L10f:
            java.util.Iterator r8 = r3.keys()     // Catch: org.json.JSONException -> L130
        L113:
            boolean r0 = r8.hasNext()     // Catch: org.json.JSONException -> L130
            if (r0 == 0) goto L127
            java.lang.Object r0 = r8.next()     // Catch: org.json.JSONException -> L130
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L130
            java.lang.String r1 = r3.getString(r0)     // Catch: org.json.JSONException -> L130
            r2.put(r0, r1)     // Catch: org.json.JSONException -> L130
            goto L113
        L127:
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r2)     // Catch: org.json.JSONException -> L130
            r7.a(r2, r8)     // Catch: org.json.JSONException -> L130
            r9 = r8
            goto L134
        L130:
            r8 = move-exception
            r8.printStackTrace()
        L134:
            return r9
    }

    static com.mbridge.msdk.video.bt.module.a.b a(com.mbridge.msdk.video.js.a.j r0) {
            com.mbridge.msdk.video.bt.module.a.b r0 = r0.t
            return r0
    }

    static void a(com.mbridge.msdk.video.js.a.j r0, com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0.b(r1)
            return
    }

    private void a(org.json.JSONObject r8) {
            r7 = this;
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lae
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = "MBridge_ConfirmTitle"
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r7.j     // Catch: java.lang.Exception -> Lae
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r1, r2, r0)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r3.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = "MBridge_ConfirmContent"
            r3.append(r4)     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = r7.j     // Catch: java.lang.Exception -> Lae
            r3.append(r4)     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.Object r3 = com.mbridge.msdk.foundation.tools.ag.b(r1, r3, r0)     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r4.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r5 = "MBridge_CancelText"
            r4.append(r5)     // Catch: java.lang.Exception -> Lae
            java.lang.String r5 = r7.j     // Catch: java.lang.Exception -> Lae
            r4.append(r5)     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.Object r4 = com.mbridge.msdk.foundation.tools.ag.b(r1, r4, r0)     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r5.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r6 = "MBridge_ConfirmText"
            r5.append(r6)     // Catch: java.lang.Exception -> Lae
            java.lang.String r6 = r7.j     // Catch: java.lang.Exception -> Lae
            r5.append(r6)     // Catch: java.lang.Exception -> Lae
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Lae
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r1, r5, r0)     // Catch: java.lang.Exception -> Lae
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lae
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto L81
            java.lang.String r1 = "confirm_title"
            r8.put(r1, r2)     // Catch: java.lang.Exception -> Lae
        L81:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto L8c
            java.lang.String r1 = "confirm_description"
            r8.put(r1, r3)     // Catch: java.lang.Exception -> Lae
        L8c:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto L97
            java.lang.String r1 = "confirm_t"
            r8.put(r1, r4)     // Catch: java.lang.Exception -> Lae
        L97:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto La2
            java.lang.String r1 = "confirm_c_play"
            r8.put(r1, r0)     // Catch: java.lang.Exception -> Lae
        La2:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto Lb2
            java.lang.String r1 = "confirm_c_rv"
            r8.put(r1, r0)     // Catch: java.lang.Exception -> Lae
            goto Lb2
        Lae:
            r8 = move-exception
            r8.printStackTrace()
        Lb2:
            return
    }

    private void a(org.json.JSONObject r2, com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r1 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r2 = r2.optString(r0)     // Catch: java.lang.Exception -> L10
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L10
            if (r0 != 0) goto L14
            r3.setCampaignUnitId(r2)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx b(com.mbridge.msdk.video.js.a.j r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.u
            return r0
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            java.lang.String r0 = r5.getNoticeUrl()
            r1 = 0
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.q     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getQueryParameter(r2)     // Catch: java.lang.Throwable -> L1a
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L22
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L1a
            goto L23
        L1a:
            r0 = move-exception
            java.lang.String r2 = com.mbridge.msdk.video.js.a.j.o
            java.lang.String r3 = "INSTALL"
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r0)
        L22:
            r0 = r1
        L23:
            com.mbridge.msdk.video.js.c$a r2 = r4.m
            r3 = 2
            if (r0 != r3) goto L29
            r1 = 1
        L29:
            r2.a(r1)
            com.mbridge.msdk.click.b r0 = r4.r()
            com.mbridge.msdk.video.js.c$a r1 = r4.m
            r0.a(r1)
            com.mbridge.msdk.click.b r0 = r4.r()
            r0.c(r5)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.video.module.b.b.d(r0, r5)
            return
    }

    static android.app.Activity c(com.mbridge.msdk.video.js.a.j r0) {
            android.app.Activity r0 = r0.p
            return r0
    }

    private boolean c(com.mbridge.msdk.foundation.entity.CampaignEx r7) {
            r6 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L38
            java.lang.String r0 = r0.k()     // Catch: java.lang.Exception -> L38
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L38
            r2 = 0
            if (r1 != 0) goto L22
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.c.a r0 = r1.b(r0)     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L22
            long r0 = r0.W()     // Catch: java.lang.Exception -> L38
            r4 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r4
            goto L23
        L22:
            r0 = r2
        L23:
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.videocommon.d.a r4 = r4.b()     // Catch: java.lang.Exception -> L38
            if (r4 == 0) goto L31
            long r2 = r4.e()     // Catch: java.lang.Exception -> L38
        L31:
            if (r7 == 0) goto L38
            boolean r7 = r7.isSpareOffer(r2, r0)     // Catch: java.lang.Exception -> L38
            return r7
        L38:
            r7 = 0
            return r7
    }

    private java.lang.String q() {
            r7 = this;
            java.lang.String r0 = "unit_id"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.mbridge.msdk.foundation.tools.d r2 = new com.mbridge.msdk.foundation.tools.d
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            r2.<init>(r3)
            java.lang.String r3 = r7.j     // Catch: java.lang.Throwable -> Lfb
            r1.put(r0, r3)     // Catch: java.lang.Throwable -> Lfb
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lfb
            r3.<init>()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = "instanceId"
            java.lang.String r5 = r7.x     // Catch: java.lang.Throwable -> Lfb
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = "rootViewInstanceId"
            java.lang.String r5 = r7.y     // Catch: java.lang.Throwable -> Lfb
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = "isRootTemplateWebView"
            boolean r5 = r7.z     // Catch: java.lang.Throwable -> Lfb
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = "MAL_16.3.67,3.0.1"
            java.lang.String r5 = "sdk_info"
            r1.put(r5, r4)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = "playVideoMute"
            int r5 = r7.n     // Catch: java.lang.Throwable -> Lfb
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = "sdkSetting"
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r3 = "device"
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Throwable -> Lfb
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> Lfb
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> Lfb
            r2.<init>()     // Catch: java.lang.Throwable -> Lfb
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.v     // Catch: java.lang.Throwable -> Lfb
            if (r3 == 0) goto L82
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.v     // Catch: java.lang.Throwable -> Lfb
            int r3 = r3.size()     // Catch: java.lang.Throwable -> Lfb
            if (r3 <= 0) goto L82
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.v     // Catch: java.lang.Throwable -> Lfb
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> Lfb
        L66:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> Lfb
            if (r4 == 0) goto L8b
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> Lfb
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Throwable -> Lfb
            boolean r5 = r4.isReady()     // Catch: java.lang.Throwable -> Lfb
            boolean r6 = r7.c(r4)     // Catch: java.lang.Throwable -> Lfb
            org.json.JSONObject r4 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r4, r5, r6)     // Catch: java.lang.Throwable -> Lfb
            r2.put(r4)     // Catch: java.lang.Throwable -> Lfb
            goto L66
        L82:
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.u     // Catch: java.lang.Throwable -> Lfb
            org.json.JSONObject r3 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r3)     // Catch: java.lang.Throwable -> Lfb
            r2.put(r3)     // Catch: java.lang.Throwable -> Lfb
        L8b:
            java.lang.String r3 = "campaignList"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> Lfb
            org.json.JSONObject r2 = r7.z()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r3 = "unitSetting"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> Lfb
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> Lfb
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r2 = r3.c(r2)     // Catch: java.lang.Throwable -> Lfb
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lfb
            if (r3 != 0) goto Ld6
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lfb
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lfb
            r7.a(r3)     // Catch: java.lang.Throwable -> Lfb
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r4 = r7.j     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r2 = r2.e(r4)     // Catch: java.lang.Throwable -> Lfb
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lfb
            if (r4 != 0) goto Ld1
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lfb
            r4.<init>(r2)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r2 = "ivreward"
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> Lfb
        Ld1:
            java.lang.String r2 = "appSetting"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lfb
        Ld6:
            java.lang.String r2 = "rewardSetting"
            org.json.JSONObject r3 = r7.A()     // Catch: java.lang.Throwable -> Lfb
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r2 = r7.j     // Catch: java.lang.Throwable -> Lfb
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lfb
            if (r2 != 0) goto Lec
            java.lang.String r2 = r7.j     // Catch: java.lang.Throwable -> Lfb
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> Lfb
        Lec:
            java.lang.String r0 = "rw_plus"
            boolean r2 = r7.A     // Catch: java.lang.Throwable -> Lfb
            if (r2 == 0) goto Lf5
            java.lang.String r2 = "1"
            goto Lf7
        Lf5:
            java.lang.String r2 = "0"
        Lf7:
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> Lfb
            goto Lff
        Lfb:
            r0 = move-exception
            r0.printStackTrace()
        Lff:
            java.lang.String r0 = r1.toString()
            return r0
    }

    private com.mbridge.msdk.click.b r() {
            r3 = this;
            com.mbridge.msdk.click.b r0 = r3.l
            if (r0 != 0) goto L15
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r3.j
            r0.<init>(r1, r2)
            r3.l = r0
        L15:
            com.mbridge.msdk.click.b r0 = r3.l
            return r0
    }

    private org.json.JSONObject s() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.foundation.tools.d r1 = new com.mbridge.msdk.foundation.tools.d
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            r1.<init>(r2)
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8e
            r2.<init>()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r3 = "playVideoMute"
            int r4 = r5.n     // Catch: java.lang.Throwable -> L8e
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r3 = "sdkSetting"
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: java.lang.Throwable -> L8e
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8e
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L8e
            r1.<init>()     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.u     // Catch: java.lang.Throwable -> L8e
            org.json.JSONObject r2 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r2)     // Catch: java.lang.Throwable -> L8e
            r1.put(r2)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r2 = "campaignList"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8e
            org.json.JSONObject r1 = r5.z()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r2 = "unitSetting"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r1 = r2.c(r1)     // Catch: java.lang.Throwable -> L8e
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8e
            if (r2 != 0) goto L84
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L8e
            r5.a(r2)     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L8e
            java.lang.String r1 = r1.e(r3)     // Catch: java.lang.Throwable -> L8e
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8e
            if (r3 != 0) goto L7b
            java.lang.String r3 = "ivreward"
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L8e
        L7b:
            java.lang.String r1 = "appSetting"
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8e
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8e
        L84:
            java.lang.String r1 = "rewardSetting"
            org.json.JSONObject r2 = r5.A()     // Catch: java.lang.Throwable -> L8e
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L8e
            goto L92
        L8e:
            r1 = move-exception
            r1.printStackTrace()
        L92:
            return r0
    }

    private org.json.JSONObject t() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "sdk_info"
            java.lang.String r2 = "MAL_16.3.67,3.0.1"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return r0
    }

    private org.json.JSONObject u() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.j     // Catch: org.json.JSONException -> L15
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L15
            if (r1 != 0) goto L19
            java.lang.String r1 = "unit_id"
            java.lang.String r2 = r3.j     // Catch: org.json.JSONException -> L15
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            return r0
    }

    private org.json.JSONObject v() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            java.lang.String r1 = r1.k()     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            java.lang.String r1 = r2.c(r1)     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            if (r2 != 0) goto L2a
            java.lang.String r2 = "appSetting"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            r3.<init>(r1)     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L26 java.lang.Throwable -> L2a
            goto L2a
        L26:
            r1 = move-exception
            r1.printStackTrace()
        L2a:
            return r0
    }

    private org.json.JSONObject w() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.videocommon.d.c r1 = r3.k     // Catch: org.json.JSONException -> L15
            if (r1 == 0) goto L19
            java.lang.String r1 = "unitSetting"
            com.mbridge.msdk.videocommon.d.c r2 = r3.k     // Catch: org.json.JSONException -> L15
            org.json.JSONObject r2 = r2.G()     // Catch: org.json.JSONException -> L15
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            return r0
    }

    private org.json.JSONObject x() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.foundation.tools.d r1 = new com.mbridge.msdk.foundation.tools.d     // Catch: org.json.JSONException -> L1c
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L1c
            android.content.Context r2 = r2.j()     // Catch: org.json.JSONException -> L1c
            r1.<init>(r2)     // Catch: org.json.JSONException -> L1c
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: org.json.JSONException -> L1c
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L1c
            goto L20
        L1c:
            r1 = move-exception
            r1.printStackTrace()
        L20:
            return r0
    }

    private org.json.JSONObject y() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1e
            r1.<init>()     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "playVideoMute"
            int r3 = r4.n     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "instanceId"
            java.lang.String r3 = r4.x     // Catch: org.json.JSONException -> L1e
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r2 = "sdkSetting"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L1e
            goto L22
        L1e:
            r1 = move-exception
            r1.printStackTrace()
        L22:
            return r0
    }

    private org.json.JSONObject z() {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.videocommon.d.c r1 = r2.k
            if (r1 == 0) goto Lf
            com.mbridge.msdk.videocommon.d.c r0 = r2.k
            org.json.JSONObject r0 = r0.G()
        Lf:
            return r0
    }

    @Override
    public final void a(int r10, java.lang.String r11) {
            r9 = this;
            java.lang.String r0 = "-1"
            java.lang.String r1 = "event"
            super.a(r10, r11)
            r2 = 2
            if (r10 == r2) goto Lb
            goto L59
        Lb:
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4f
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = r10.optString(r1, r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r11 = "template"
            java.lang.String r5 = r10.optString(r11, r0)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r11 = "layout"
            java.lang.String r6 = r10.optString(r11, r0)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r11 = "unit_id"
            java.lang.String r0 = r9.j     // Catch: java.lang.Throwable -> L4f
            java.lang.String r7 = r10.optString(r11, r0)     // Catch: java.lang.Throwable -> L4f
            android.app.Activity r10 = r9.p     // Catch: java.lang.Throwable -> L4f
            android.app.Application r10 = r10.getApplication()     // Catch: java.lang.Throwable -> L4f
            int r8 = com.mbridge.msdk.foundation.tools.v.D(r10)     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.video.js.a.j$2 r10 = new com.mbridge.msdk.video.js.a.j$2     // Catch: java.lang.Throwable -> L4f
            r2 = r10
            r3 = r9
            r2.<init>(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.foundation.controller.b r11 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> L4f
            boolean r11 = r11.d()     // Catch: java.lang.Throwable -> L4f
            if (r11 == 0) goto L4b
            java.util.concurrent.ThreadPoolExecutor r11 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L4f
            r11.execute(r10)     // Catch: java.lang.Throwable -> L4f
            goto L59
        L4b:
            r10.run()     // Catch: java.lang.Throwable -> L4f
            goto L59
        L4f:
            r10 = move-exception
            java.lang.String r11 = com.mbridge.msdk.video.js.a.j.o
            java.lang.String r0 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r11, r0, r10)
        L59:
            return
    }

    @Override
    public final void a(android.app.Activity r1) {
            r0 = this;
            r0.p = r1
            return
    }

    @Override
    public final void a(android.content.Context r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            r0.u = r1
            return
    }

    @Override
    public final void a(com.mbridge.msdk.video.bt.module.a.b r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.v = r1
            return
    }

    @Override
    public final void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L8
            r1.r = r2
        L8:
            return
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.B = r1
            return
    }

    @Override
    public void click(int r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "camp_position"
            super.click(r9, r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.u
            if (r1 == 0) goto L3f
            int r1 = r1.getDynamicTempCode()
            r2 = 5
            if (r1 != r2) goto L3f
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.u
            if (r1 != 0) goto L15
            goto L3f
        L15:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r8.v
            if (r1 != 0) goto L1a
            goto L3f
        L1a:
            int r1 = r1.size()
            if (r1 != 0) goto L21
            goto L3f
        L21:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3b
            r1.<init>(r10)     // Catch: org.json.JSONException -> L3b
            boolean r2 = r1.has(r0)     // Catch: org.json.JSONException -> L3b
            if (r2 == 0) goto L3f
            int r0 = r1.getInt(r0)     // Catch: org.json.JSONException -> L3b
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r8.v     // Catch: org.json.JSONException -> L3b
            java.lang.Object r0 = r1.get(r0)     // Catch: org.json.JSONException -> L3b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: org.json.JSONException -> L3b
            r8.u = r0     // Catch: org.json.JSONException -> L3b
            goto L3f
        L3b:
            r0 = move-exception
            r0.printStackTrace()
        L3f:
            r0 = 1
            if (r9 == r0) goto L79
            r1 = 3
            if (r9 == r1) goto L47
            goto L17b
        L47:
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.u     // Catch: java.lang.Throwable -> L171
            if (r9 == 0) goto L5b
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.u     // Catch: java.lang.Throwable -> L171
            int r9 = r9.getCbd()     // Catch: java.lang.Throwable -> L171
            r1 = -2
            if (r9 <= r1) goto L5b
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.u     // Catch: java.lang.Throwable -> L171
            int r9 = r9.getCbd()     // Catch: java.lang.Throwable -> L171
            goto L67
        L5b:
            com.mbridge.msdk.videocommon.d.c r9 = r8.k     // Catch: java.lang.Throwable -> L171
            if (r9 == 0) goto L66
            com.mbridge.msdk.videocommon.d.c r9 = r8.k     // Catch: java.lang.Throwable -> L171
            int r9 = r9.p()     // Catch: java.lang.Throwable -> L171
            goto L67
        L66:
            r9 = r0
        L67:
            r1 = -1
            if (r9 != r1) goto L74
            com.mbridge.msdk.video.js.a.c$b r9 = new com.mbridge.msdk.video.js.a.c$b     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.video.js.c$a r1 = r8.m     // Catch: java.lang.Throwable -> L171
            r9.<init>(r8, r1)     // Catch: java.lang.Throwable -> L171
            r8.a(r9)     // Catch: java.lang.Throwable -> L171
        L74:
            r8.click(r0, r10)     // Catch: java.lang.Throwable -> L171
            goto L17b
        L79:
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.u     // Catch: java.lang.Throwable -> L171
            r1 = 0
            if (r9 != 0) goto L94
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r9 = r8.v     // Catch: java.lang.Throwable -> L171
            if (r9 == 0) goto L94
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r9 = r8.v     // Catch: java.lang.Throwable -> L171
            int r9 = r9.size()     // Catch: java.lang.Throwable -> L171
            if (r9 <= 0) goto L94
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r9 = r8.v     // Catch: java.lang.Throwable -> L171
            java.lang.Object r9 = r9.get(r1)     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Throwable -> L171
            r8.u = r9     // Catch: java.lang.Throwable -> L171
        L94:
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.u     // Catch: java.lang.Throwable -> L171
            if (r9 != 0) goto L99
            return
        L99:
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.u     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.a(r10, r9)     // Catch: java.lang.Throwable -> L171
            if (r9 == 0) goto Lb5
            com.mbridge.msdk.scheme.applet.AppletModelManager r10 = com.mbridge.msdk.scheme.applet.AppletModelManager.getInstance()     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.scheme.applet.AppletsModel r10 = r10.get(r9)     // Catch: java.lang.Throwable -> L171
            if (r10 == 0) goto Lb5
            r10.setUserClick(r0)     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.scheme.applet.AppletModelManager r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.getInstance()     // Catch: java.lang.Throwable -> L171
            r0.replace(r10, r9)     // Catch: java.lang.Throwable -> L171
        Lb5:
            if (r9 == 0) goto L16d
            boolean r10 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L171
            if (r10 == 0) goto L16d
            boolean r10 = r8.B     // Catch: java.lang.Throwable -> L171
            if (r10 == 0) goto L16d
            boolean r10 = com.mbridge.msdk.click.c.a(r9)     // Catch: java.lang.Throwable -> L171
            if (r10 == 0) goto L16d
            r9.getAppName()     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.video.js.a.j$1 r7 = new com.mbridge.msdk.video.js.a.j$1     // Catch: java.lang.Throwable -> L15f
            r7.<init>(r8, r9)     // Catch: java.lang.Throwable -> L15f
            android.app.Activity r10 = r8.p     // Catch: java.lang.Throwable -> L15f
            if (r10 == 0) goto Ldc
            android.content.Context r0 = r10.getApplicationContext()     // Catch: java.lang.Throwable -> L15f
            if (r10 != r0) goto Lda
            goto Ldc
        Lda:
            r5 = r10
            goto L119
        Ldc:
            android.content.Context r10 = r8.s     // Catch: java.lang.Throwable -> L15f
            if (r10 == 0) goto Le6
            android.content.Context r0 = r10.getApplicationContext()     // Catch: java.lang.Throwable -> L15f
            if (r10 != r0) goto Lda
        Le6:
            com.mbridge.msdk.video.bt.a.c r10 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L15f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15f
            r0.<init>()     // Catch: java.lang.Throwable -> L15f
            java.lang.String r2 = r8.j     // Catch: java.lang.Throwable -> L15f
            r0.append(r2)     // Catch: java.lang.Throwable -> L15f
            java.lang.String r2 = "_"
            r0.append(r2)     // Catch: java.lang.Throwable -> L15f
            java.lang.String r2 = r9.getRequestId()     // Catch: java.lang.Throwable -> L15f
            r0.append(r2)     // Catch: java.lang.Throwable -> L15f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L15f
            android.app.Activity r10 = r10.d(r0)     // Catch: java.lang.Throwable -> L15f
            if (r10 == 0) goto L110
            android.content.Context r0 = r10.getApplicationContext()     // Catch: java.lang.Throwable -> L15f
            if (r10 != r0) goto Lda
        L110:
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L15f
            android.content.Context r10 = r10.j()     // Catch: java.lang.Throwable -> L15f
            goto Lda
        L119:
            if (r5 == 0) goto L169
            if (r9 == 0) goto L169
            com.mbridge.msdk.click.b r10 = r8.r()     // Catch: java.lang.Throwable -> L15f
            boolean r10 = r10.b(r9)     // Catch: java.lang.Throwable -> L15f
            if (r10 != 0) goto L14e
            com.mbridge.msdk.videocommon.d.b r10 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L15f
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L15f
            java.lang.String r0 = r0.k()     // Catch: java.lang.Throwable -> L15f
            java.lang.String r2 = r8.j     // Catch: java.lang.Throwable -> L15f
            r10.a(r0, r2, r1)     // Catch: java.lang.Throwable -> L15f
            java.lang.String r3 = com.mbridge.msdk.videocommon.d.c.a     // Catch: java.lang.Throwable -> L15f
            com.mbridge.msdk.mbjscommon.confirmation.e r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L15f
            java.lang.String r6 = r8.j     // Catch: java.lang.Throwable -> L15f
            r4 = r9
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L15f
            com.mbridge.msdk.video.bt.module.a.b r10 = r8.t     // Catch: java.lang.Throwable -> L15f
            if (r10 == 0) goto L17b
            com.mbridge.msdk.video.bt.module.a.b r10 = r8.t     // Catch: java.lang.Throwable -> L15f
            r10.a()     // Catch: java.lang.Throwable -> L15f
            goto L17b
        L14e:
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L15f
            android.content.Context r10 = r10.j()     // Catch: java.lang.Throwable -> L15f
            com.mbridge.msdk.video.module.b.b.d(r10, r9)     // Catch: java.lang.Throwable -> L15f
            com.mbridge.msdk.video.js.c$a r10 = r8.m     // Catch: java.lang.Throwable -> L15f
            r10.a(r1)     // Catch: java.lang.Throwable -> L15f
            goto L17b
        L15f:
            r10 = move-exception
            java.lang.String r0 = com.mbridge.msdk.video.js.a.j.o     // Catch: java.lang.Throwable -> L171
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> L171
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> L171
        L169:
            r8.b(r9)     // Catch: java.lang.Throwable -> L171
            goto L17b
        L16d:
            r8.b(r9)     // Catch: java.lang.Throwable -> L171
            goto L17b
        L171:
            r9 = move-exception
            java.lang.String r10 = com.mbridge.msdk.video.js.a.j.o
            java.lang.String r0 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r10, r0, r9)
        L17b:
            return
    }

    @Override
    public final java.lang.String d() {
            r3 = this;
            com.mbridge.msdk.video.js.c$a r0 = r3.m
            r0.a()
            r0 = 1
            r3.a = r0
            java.lang.String r0 = r3.q
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17
            java.lang.String r0 = r3.q()
            r3.q = r0
            goto L36
        L17:
            java.lang.String r0 = r3.q
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = com.mbridge.msdk.foundation.tools.v.P()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "tun"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2, r1)
            r3.q = r0
        L36:
            java.lang.String r0 = r3.q
            return r0
    }

    public final void d(java.lang.String r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public final void d(boolean r1) {
            r0 = this;
            r0.z = r1
            return
    }

    @Override
    public final void e() {
            r3 = this;
            super.e()
            android.app.Activity r0 = r3.p     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L17
            android.app.Activity r0 = r3.p     // Catch: java.lang.Throwable -> Ld
            r0.finish()     // Catch: java.lang.Throwable -> Ld
            goto L17
        Ld:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.js.a.j.o
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L17:
            return
    }

    public final void e(boolean r1) {
            r0 = this;
            r0.A = r1
            return
    }

    @Override
    public final void g() {
            r1 = this;
            super.g()
            com.mbridge.msdk.video.js.c$a r0 = r1.m
            if (r0 == 0) goto Lc
            com.mbridge.msdk.video.js.c$a r0 = r1.m
            r0.b()
        Lc:
            return
    }

    @Override
    public final java.lang.String h(int r1) {
            r0 = this;
            switch(r1) {
                case 1: goto L39;
                case 2: goto L30;
                case 3: goto L27;
                case 4: goto L1e;
                case 5: goto L15;
                case 6: goto Lc;
                default: goto L3;
            }
        L3:
            org.json.JSONObject r1 = r0.s()
            java.lang.String r1 = r1.toString()
            goto L41
        Lc:
            org.json.JSONObject r1 = r0.y()
            java.lang.String r1 = r1.toString()
            goto L41
        L15:
            org.json.JSONObject r1 = r0.x()
            java.lang.String r1 = r1.toString()
            goto L41
        L1e:
            org.json.JSONObject r1 = r0.w()
            java.lang.String r1 = r1.toString()
            goto L41
        L27:
            org.json.JSONObject r1 = r0.v()
            java.lang.String r1 = r1.toString()
            goto L41
        L30:
            org.json.JSONObject r1 = r0.u()
            java.lang.String r1 = r1.toString()
            goto L41
        L39:
            org.json.JSONObject r1 = r0.t()
            java.lang.String r1 = r1.toString()
        L41:
            return r1
    }

    @Override
    public void handlerH5Exception(int r2, java.lang.String r3) {
            r1 = this;
            super.handlerH5Exception(r2, r3)
            com.mbridge.msdk.video.js.c$a r0 = r1.m     // Catch: java.lang.Throwable -> L9
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L9
            goto L13
        L9:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.video.js.a.j.o
            java.lang.String r0 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L13:
            return
    }

    @Override
    public final java.lang.String j() {
            r2 = this;
            java.lang.String r0 = com.mbridge.msdk.video.js.a.j.o
            java.lang.String r1 = "getNotchArea"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r0 = r2.r
            return r0
    }

    public final void j(int r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public final void o() {
            r1 = this;
            java.lang.String r0 = ""
            r1.q = r0
            return
    }

    public final int p() {
            r1 = this;
            int r0 = r1.w
            return r0
    }
}
