package com.mbridge.msdk.video.js.a;

public final class m extends com.mbridge.msdk.video.js.a.f {
    private android.app.Activity a;
    private com.mbridge.msdk.video.module.MBridgeContainerView b;

    public m(android.app.Activity r1, com.mbridge.msdk.video.module.MBridgeContainerView r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    private java.lang.String a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8, java.lang.String r9, java.lang.String r10, org.json.JSONObject r11) {
            r7 = this;
            java.lang.String r0 = ""
            r1 = 0
            if (r8 == 0) goto L12d
            int r2 = r8.size()     // Catch: java.lang.Exception -> L129
            if (r2 <= 0) goto L12d
            com.mbridge.msdk.foundation.tools.d r2 = new com.mbridge.msdk.foundation.tools.d     // Catch: java.lang.Exception -> L129
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L129
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L129
            r2.<init>(r3)     // Catch: java.lang.Exception -> L129
            org.json.JSONArray r8 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r8)     // Catch: java.lang.Exception -> L129
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L129
            r3.<init>()     // Catch: java.lang.Exception -> L129
            java.lang.String r4 = "campaignList"
            r3.put(r4, r8)     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = "device"
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Exception -> L129
            r3.put(r8, r2)     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = "unit_id"
            r3.put(r8, r9)     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = "sdk_info"
            r3.put(r8, r10)     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = "unitSetting"
            r3.put(r8, r11)     // Catch: java.lang.Exception -> L129
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L129
            if (r8 == 0) goto L124
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L129
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L129
            java.lang.String r10 = r10.k()     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = r8.c(r10)     // Catch: java.lang.Exception -> L129
            boolean r10 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L129
            if (r10 != 0) goto L124
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Exception -> L129
            r10.<init>(r8)     // Catch: java.lang.Exception -> L129
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L103
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> L103
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L103
            r11.<init>()     // Catch: java.lang.Exception -> L103
            java.lang.String r2 = "MBridge_ConfirmTitle"
            r11.append(r2)     // Catch: java.lang.Exception -> L103
            r11.append(r9)     // Catch: java.lang.Exception -> L103
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L103
            java.lang.Object r11 = com.mbridge.msdk.foundation.tools.ag.b(r8, r11, r0)     // Catch: java.lang.Exception -> L103
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L103
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L103
            r2.<init>()     // Catch: java.lang.Exception -> L103
            java.lang.String r4 = "MBridge_ConfirmContent"
            r2.append(r4)     // Catch: java.lang.Exception -> L103
            r2.append(r9)     // Catch: java.lang.Exception -> L103
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L103
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r8, r2, r0)     // Catch: java.lang.Exception -> L103
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L103
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L103
            r4.<init>()     // Catch: java.lang.Exception -> L103
            java.lang.String r5 = "MBridge_CancelText"
            r4.append(r5)     // Catch: java.lang.Exception -> L103
            r4.append(r9)     // Catch: java.lang.Exception -> L103
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L103
            java.lang.Object r4 = com.mbridge.msdk.foundation.tools.ag.b(r8, r4, r0)     // Catch: java.lang.Exception -> L103
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L103
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L103
            r5.<init>()     // Catch: java.lang.Exception -> L103
            java.lang.String r6 = "MBridge_ConfirmText"
            r5.append(r6)     // Catch: java.lang.Exception -> L103
            r5.append(r9)     // Catch: java.lang.Exception -> L103
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L103
            java.lang.Object r8 = com.mbridge.msdk.foundation.tools.ag.b(r8, r5, r0)     // Catch: java.lang.Exception -> L103
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L103
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L103
            if (r0 != 0) goto Ld6
            java.lang.String r0 = "confirm_title"
            r10.put(r0, r11)     // Catch: java.lang.Exception -> L103
        Ld6:
            boolean r11 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L103
            if (r11 != 0) goto Le1
            java.lang.String r11 = "confirm_description"
            r10.put(r11, r2)     // Catch: java.lang.Exception -> L103
        Le1:
            boolean r11 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L103
            if (r11 != 0) goto Lec
            java.lang.String r11 = "confirm_t"
            r10.put(r11, r4)     // Catch: java.lang.Exception -> L103
        Lec:
            boolean r11 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L103
            if (r11 != 0) goto Lf7
            java.lang.String r11 = "confirm_c_play"
            r10.put(r11, r8)     // Catch: java.lang.Exception -> L103
        Lf7:
            boolean r11 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L103
            if (r11 != 0) goto L107
            java.lang.String r11 = "confirm_c_rv"
            r10.put(r11, r8)     // Catch: java.lang.Exception -> L103
            goto L107
        L103:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Exception -> L129
        L107:
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = r8.e(r9)     // Catch: java.lang.Exception -> L129
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L129
            if (r9 != 0) goto L11f
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Exception -> L129
            r9.<init>(r8)     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = "ivreward"
            r10.put(r8, r9)     // Catch: java.lang.Exception -> L129
        L11f:
            java.lang.String r8 = "appSetting"
            r3.put(r8, r10)     // Catch: java.lang.Exception -> L129
        L124:
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L129
            goto L12d
        L129:
            r8 = move-exception
            r8.printStackTrace()
        L12d:
            return r1
    }

    @Override
    public final java.lang.String a() {
            r7 = this;
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.b
            if (r0 != 0) goto L8
            super.a()
            goto L66
        L8:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L62
            r0.<init>()     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.b     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.getCampaign()     // Catch: java.lang.Throwable -> L62
            r0.add(r1)     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.b     // Catch: java.lang.Throwable -> L62
            java.lang.String r1 = r1.getUnitID()     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = "MAL_16.3.67,3.0.1"
            com.mbridge.msdk.videocommon.d.b r3 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L62
            if (r3 != 0) goto L26
            r3 = 0
            goto L36
        L26:
            com.mbridge.msdk.videocommon.d.b r3 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L62
            java.lang.String r4 = r4.k()     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.videocommon.d.c r3 = r3.a(r4, r1)     // Catch: java.lang.Throwable -> L62
        L36:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L62
            r4.<init>()     // Catch: java.lang.Throwable -> L62
            if (r3 == 0) goto L41
            org.json.JSONObject r4 = r3.G()     // Catch: java.lang.Throwable -> L62
        L41:
            java.lang.String r3 = "JSRewardVideoV1"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L62
            r5.<init>()     // Catch: java.lang.Throwable -> L62
            java.lang.String r6 = "getEndScreenInfo success campaign = "
            r5.append(r6)     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.video.module.MBridgeContainerView r6 = r7.b     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r6.getCampaign()     // Catch: java.lang.Throwable -> L62
            r5.append(r6)     // Catch: java.lang.Throwable -> L62
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L62
            com.mbridge.msdk.foundation.tools.z.a(r3, r5)     // Catch: java.lang.Throwable -> L62
            java.lang.String r0 = r7.a(r0, r1, r2, r4)     // Catch: java.lang.Throwable -> L62
            return r0
        L62:
            r0 = move-exception
            r0.printStackTrace()
        L66:
            java.lang.String r0 = super.a()
            return r0
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            super.a(r2)
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1f
            if (r0 != 0) goto L23
            java.lang.String r0 = "click"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L23
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.b     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L23
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.b     // Catch: java.lang.Throwable -> L1f
            r0.triggerCloseBtn(r2)     // Catch: java.lang.Throwable -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            return
    }

    @Override
    public final void b(java.lang.String r2) {
            r1 = this;
            super.b(r2)
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L2f
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L2f
            java.lang.String r0 = "landscape"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L1c
            android.app.Activity r2 = r1.a     // Catch: java.lang.Throwable -> L2b
            r0 = 0
            r2.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2b
            goto L2f
        L1c:
            java.lang.String r0 = "portrait"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L2f
            android.app.Activity r2 = r1.a     // Catch: java.lang.Throwable -> L2b
            r0 = 1
            r2.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2b
            goto L2f
        L2b:
            r2 = move-exception
            r2.printStackTrace()
        L2f:
            return
    }

    @Override
    public final void c(java.lang.String r2) {
            r1 = this;
            super.c(r2)
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L1b
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L1b
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.b     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L1b
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.b     // Catch: java.lang.Throwable -> L17
            r0.handlerPlayableException(r2)     // Catch: java.lang.Throwable -> L17
            goto L1b
        L17:
            r2 = move-exception
            r2.printStackTrace()
        L1b:
            return
    }

    @Override
    public final void notifyCloseBtn(int r2) {
            r1 = this;
            super.notifyCloseBtn(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.b
            if (r0 == 0) goto La
            r0.notifyCloseBtn(r2)
        La:
            return
    }

    @Override
    public final void toggleCloseBtn(int r2) {
            r1 = this;
            super.toggleCloseBtn(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.b
            if (r0 == 0) goto La
            r0.toggleCloseBtn(r2)
        La:
            return
    }
}
