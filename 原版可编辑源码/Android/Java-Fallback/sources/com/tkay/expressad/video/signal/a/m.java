package com.tkay.expressad.video.signal.a;

public final class m extends com.tkay.expressad.video.signal.a.f {
    private android.app.Activity b;
    private com.tkay.expressad.video.module.TkayContainerView c;

    public m(android.app.Activity r1, com.tkay.expressad.video.module.TkayContainerView r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    private static java.lang.String a(java.util.List<com.tkay.expressad.foundation.d.c> r7, java.lang.String r8, java.lang.String r9, org.json.JSONObject r10) {
            java.lang.String r0 = ""
            r1 = 0
            int r2 = r7.size()     // Catch: java.lang.Exception -> L109
            if (r2 <= 0) goto L10d
            com.tkay.expressad.foundation.h.b r2 = new com.tkay.expressad.foundation.h.b     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L109
            android.content.Context r3 = r3.d()     // Catch: java.lang.Exception -> L109
            r2.<init>(r3)     // Catch: java.lang.Exception -> L109
            org.json.JSONArray r7 = com.tkay.expressad.foundation.d.c.b(r7)     // Catch: java.lang.Exception -> L109
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L109
            r3.<init>()     // Catch: java.lang.Exception -> L109
            java.lang.String r4 = "campaignList"
            r3.put(r4, r7)     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = "device"
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Exception -> L109
            r3.put(r7, r2)     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = "unit_id"
            r3.put(r7, r8)     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = "sdk_info"
            r3.put(r7, r9)     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = "unitSetting"
            r3.put(r7, r10)     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.d.b r7 = com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L109
            if (r7 == 0) goto L104
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.b.b r7 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = r7.e()     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = com.tkay.expressad.d.b.a(r7)     // Catch: java.lang.Exception -> L109
            boolean r9 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L109
            if (r9 != 0) goto L104
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Exception -> L109
            r9.<init>(r7)     // Catch: java.lang.Exception -> L109
            com.tkay.expressad.foundation.b.b r7 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> Le4
            android.content.Context r7 = r7.d()     // Catch: java.lang.Exception -> Le4
            java.lang.String r10 = "Tkay_ConfirmTitle"
            java.lang.String r2 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> Le4
            java.lang.String r10 = r10.concat(r2)     // Catch: java.lang.Exception -> Le4
            java.lang.Object r10 = com.tkay.expressad.foundation.h.v.b(r7, r10, r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "Tkay_ConfirmContent"
            java.lang.String r4 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = r2.concat(r4)     // Catch: java.lang.Exception -> Le4
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r7, r2, r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Le4
            java.lang.String r4 = "Tkay_CancelText"
            java.lang.String r5 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> Le4
            java.lang.String r4 = r4.concat(r5)     // Catch: java.lang.Exception -> Le4
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r7, r4, r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le4
            java.lang.String r5 = "Tkay_ConfirmText"
            java.lang.String r6 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> Le4
            java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Exception -> Le4
            java.lang.Object r7 = com.tkay.expressad.foundation.h.v.b(r7, r5, r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Le4
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> Le4
            if (r0 != 0) goto Lb7
            java.lang.String r0 = "confirm_title"
            r9.put(r0, r10)     // Catch: java.lang.Exception -> Le4
        Lb7:
            boolean r10 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Le4
            if (r10 != 0) goto Lc2
            java.lang.String r10 = "confirm_description"
            r9.put(r10, r2)     // Catch: java.lang.Exception -> Le4
        Lc2:
            boolean r10 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Le4
            if (r10 != 0) goto Lcd
            java.lang.String r10 = "confirm_t"
            r9.put(r10, r4)     // Catch: java.lang.Exception -> Le4
        Lcd:
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Le4
            if (r10 != 0) goto Ld8
            java.lang.String r10 = "confirm_c_play"
            r9.put(r10, r7)     // Catch: java.lang.Exception -> Le4
        Ld8:
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Le4
            if (r10 != 0) goto Le8
            java.lang.String r10 = "confirm_c_rv"
            r9.put(r10, r7)     // Catch: java.lang.Exception -> Le4
            goto Le8
        Le4:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Exception -> L109
        Le8:
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = com.tkay.expressad.d.b.b(r8)     // Catch: java.lang.Exception -> L109
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L109
            if (r8 != 0) goto Lff
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Exception -> L109
            r8.<init>(r7)     // Catch: java.lang.Exception -> L109
            java.lang.String r7 = "ivreward"
            r9.put(r7, r8)     // Catch: java.lang.Exception -> L109
        Lff:
            java.lang.String r7 = "appSetting"
            r3.put(r7, r9)     // Catch: java.lang.Exception -> L109
        L104:
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L109
            goto L10d
        L109:
            r7 = move-exception
            r7.printStackTrace()
        L10d:
            return r1
    }

    private static void a(org.json.JSONObject r6, java.lang.String r7) {
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L8a
            android.content.Context r1 = r1.d()     // Catch: java.lang.Exception -> L8a
            java.lang.String r2 = "Tkay_ConfirmTitle"
            java.lang.String r3 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L8a
            java.lang.String r2 = r2.concat(r3)     // Catch: java.lang.Exception -> L8a
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r1, r2, r0)     // Catch: java.lang.Exception -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = "Tkay_ConfirmContent"
            java.lang.String r4 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L8a
            java.lang.Object r3 = com.tkay.expressad.foundation.h.v.b(r1, r3, r0)     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L8a
            java.lang.String r4 = "Tkay_CancelText"
            java.lang.String r5 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L8a
            java.lang.String r4 = r4.concat(r5)     // Catch: java.lang.Exception -> L8a
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r1, r4, r0)     // Catch: java.lang.Exception -> L8a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L8a
            java.lang.String r5 = "Tkay_ConfirmText"
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L8a
            java.lang.String r7 = r5.concat(r7)     // Catch: java.lang.Exception -> L8a
            java.lang.Object r7 = com.tkay.expressad.foundation.h.v.b(r1, r7, r0)     // Catch: java.lang.Exception -> L8a
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L8a
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L8a
            if (r0 != 0) goto L5d
            java.lang.String r0 = "confirm_title"
            r6.put(r0, r2)     // Catch: java.lang.Exception -> L8a
        L5d:
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L8a
            if (r0 != 0) goto L68
            java.lang.String r0 = "confirm_description"
            r6.put(r0, r3)     // Catch: java.lang.Exception -> L8a
        L68:
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L8a
            if (r0 != 0) goto L73
            java.lang.String r0 = "confirm_t"
            r6.put(r0, r4)     // Catch: java.lang.Exception -> L8a
        L73:
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L8a
            if (r0 != 0) goto L7e
            java.lang.String r0 = "confirm_c_play"
            r6.put(r0, r7)     // Catch: java.lang.Exception -> L8a
        L7e:
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L8a
            if (r0 != 0) goto L89
            java.lang.String r0 = "confirm_c_rv"
            r6.put(r0, r7)     // Catch: java.lang.Exception -> L8a
        L89:
            return
        L8a:
            r6 = move-exception
            r6.printStackTrace()
            return
    }

    private static com.tkay.expressad.videocommon.e.d c(java.lang.String r2) {
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            com.tkay.expressad.videocommon.e.d r2 = r0.a(r1, r2)
            return r2
    }

    @Override
    public final java.lang.String a() {
            r6 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r6.c
            if (r0 != 0) goto L8
            super.a()
            goto L6b
        L8:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L67
            r0.<init>()     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.video.module.TkayContainerView r1 = r6.c     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.foundation.d.c r1 = r1.getCampaign()     // Catch: java.lang.Throwable -> L67
            r0.add(r1)     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.video.module.TkayContainerView r1 = r6.c     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r1.getUnitID()     // Catch: java.lang.Throwable -> L67
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            r2.<init>()     // Catch: java.lang.Throwable -> L67
            java.lang.String r3 = com.tkay.expressad.out.n.a     // Catch: java.lang.Throwable -> L67
            r2.append(r3)     // Catch: java.lang.Throwable -> L67
            java.lang.String r3 = ",3.0.1"
            r2.append(r3)     // Catch: java.lang.Throwable -> L67
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.videocommon.e.c r3 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L67
            if (r3 != 0) goto L37
            r3 = 0
            goto L47
        L37:
            com.tkay.expressad.videocommon.e.c r3 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L67
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.videocommon.e.d r3 = r3.a(r4, r1)     // Catch: java.lang.Throwable -> L67
        L47:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L67
            r4.<init>()     // Catch: java.lang.Throwable -> L67
            if (r3 == 0) goto L52
            org.json.JSONObject r4 = r3.R()     // Catch: java.lang.Throwable -> L67
        L52:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            java.lang.String r5 = "getEndScreenInfo success campaign = "
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.video.module.TkayContainerView r5 = r6.c     // Catch: java.lang.Throwable -> L67
            com.tkay.expressad.foundation.d.c r5 = r5.getCampaign()     // Catch: java.lang.Throwable -> L67
            r3.append(r5)     // Catch: java.lang.Throwable -> L67
            java.lang.String r0 = a(r0, r1, r2, r4)     // Catch: java.lang.Throwable -> L67
            return r0
        L67:
            r0 = move-exception
            r0.printStackTrace()
        L6b:
            java.lang.String r0 = super.a()
            return r0
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            super.a(r2)
            android.app.Activity r0 = r1.b     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L1e
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1f
            if (r0 != 0) goto L1e
            java.lang.String r0 = "click"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L1e
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L1e
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> L1f
            r0.triggerCloseBtn(r2)     // Catch: java.lang.Throwable -> L1f
        L1e:
            return
        L1f:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void b(java.lang.String r2) {
            r1 = this;
            super.b(r2)
            android.app.Activity r0 = r1.b     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L2a
            java.lang.String r0 = "landscape"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L1c
            android.app.Activity r2 = r1.b     // Catch: java.lang.Throwable -> L2b
            r0 = 0
            r2.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2b
            return
        L1c:
            java.lang.String r0 = "portrait"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L2a
            android.app.Activity r2 = r1.b     // Catch: java.lang.Throwable -> L2b
            r0 = 1
            r2.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2b
        L2a:
            return
        L2b:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void handlerPlayableException(java.lang.String r2) {
            r1 = this;
            super.handlerPlayableException(r2)
            android.app.Activity r0 = r1.b     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L16
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L16
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> L17
            r0.handlerPlayableException(r2)     // Catch: java.lang.Throwable -> L17
        L16:
            return
        L17:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void install(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            super.install(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c
            if (r0 == 0) goto La
            r0.install(r2)
        La:
            return
    }

    @Override
    public final void notifyCloseBtn(int r2) {
            r1 = this;
            super.notifyCloseBtn(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c
            if (r0 == 0) goto La
            r0.notifyCloseBtn(r2)
        La:
            return
    }

    @Override
    public final void orientation(android.content.res.Configuration r2) {
            r1 = this;
            super.orientation(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> Ld
            r0.orientation(r2)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void toggleCloseBtn(int r2) {
            r1 = this;
            super.toggleCloseBtn(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c
            if (r0 == 0) goto La
            r0.toggleCloseBtn(r2)
        La:
            return
    }

    @Override
    public final void webviewshow() {
            r1 = this;
            super.webviewshow()
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.c     // Catch: java.lang.Throwable -> Ld
            r0.webviewshow()     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
