package com.mbridge.msdk.splash.js;

public final class b implements com.mbridge.msdk.splash.js.a {
    private java.lang.String a;
    private java.lang.ref.WeakReference<android.content.Context> b;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> c;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private int g;
    private int h;
    private int i;
    private com.mbridge.msdk.splash.d.a j;
    private com.mbridge.msdk.splash.js.SplashExpandDialog k;


    public b(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "SplashJSBridgeImpl"
            r1.a = r0
            r0 = 5
            r1.h = r0
            r1.e = r3
            r1.d = r4
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            r1.b = r3
            return
    }

    static java.lang.String a(com.mbridge.msdk.splash.js.b r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    public final com.mbridge.msdk.splash.d.a a() {
            r1 = this;
            com.mbridge.msdk.splash.d.a r0 = r1.j
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(android.content.Context r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.b = r0
            return
    }

    public final void a(com.mbridge.msdk.splash.d.a r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.j = r1
        L4:
            return
    }

    public final void a(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r7 = "init"
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lcc
            r0.<init>()     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.splash.a.a r1 = new com.mbridge.msdk.splash.a.a     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lcc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Lcc
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lcc
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lcc
            r2.<init>()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r3 = "dev_close_state"
            int r4 = r5.f     // Catch: java.lang.Throwable -> Lcc
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r3 = "sdkSetting"
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: java.lang.Throwable -> Lcc
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r1 = "campaignList"
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r5.c     // Catch: java.lang.Throwable -> Lcc
            org.json.JSONArray r2 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r2)     // Catch: java.lang.Throwable -> Lcc
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r3 = r5.d     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.c.d r1 = r1.e(r2, r3)     // Catch: java.lang.Throwable -> Lcc
            if (r1 != 0) goto L53
            java.lang.String r1 = r5.d     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.d(r1)     // Catch: java.lang.Throwable -> Lcc
        L53:
            java.lang.String r2 = r5.e     // Catch: java.lang.Throwable -> Lcc
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lcc
            if (r2 != 0) goto L60
            java.lang.String r2 = r5.e     // Catch: java.lang.Throwable -> Lcc
            r1.g(r2)     // Catch: java.lang.Throwable -> Lcc
        L60:
            java.lang.String r2 = r5.d     // Catch: java.lang.Throwable -> Lcc
            r1.a(r2)     // Catch: java.lang.Throwable -> Lcc
            int r2 = r5.h     // Catch: java.lang.Throwable -> Lcc
            r1.b(r2)     // Catch: java.lang.Throwable -> Lcc
            int r2 = r5.g     // Catch: java.lang.Throwable -> Lcc
            r1.a(r2)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r2 = "unitSetting"
            org.json.JSONObject r1 = r1.t()     // Catch: java.lang.Throwable -> Lcc
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r1 = r1.c(r2)     // Catch: java.lang.Throwable -> Lcc
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lcc
            if (r2 != 0) goto L98
            java.lang.String r2 = "appSetting"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lcc
            r3.<init>(r1)     // Catch: java.lang.Throwable -> Lcc
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lcc
        L98:
            java.lang.String r1 = "sdk_info"
            java.lang.String r2 = com.mbridge.msdk.mbjscommon.base.d.a     // Catch: java.lang.Throwable -> Lcc
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> Lcc
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcc
            r2.<init>()     // Catch: java.lang.Throwable -> Lcc
            r2.append(r7)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> Lcc
            r2.append(r3)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lcc
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> Lcc
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> Lcc
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> Lcc
            r1.a(r6, r0)     // Catch: java.lang.Throwable -> Lcc
            goto Ld2
        Lcc:
            r6 = move-exception
            java.lang.String r0 = r5.a
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r6)
        Ld2:
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.c
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void b(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1b
            if (r2 != 0) goto L23
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = "state"
            int r2 = r2.optInt(r3)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.splash.d.a r3 = r1.j     // Catch: java.lang.Throwable -> L1b
            if (r3 == 0) goto L23
            com.mbridge.msdk.splash.d.a r3 = r1.j     // Catch: java.lang.Throwable -> L1b
            r3.a(r2)     // Catch: java.lang.Throwable -> L1b
            goto L23
        L1b:
            r2 = move-exception
            java.lang.String r3 = r1.a
            java.lang.String r0 = "toggleCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L23:
            return
    }

    public final void c(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void c(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.splash.d.a r0 = r1.j
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    @Override
    public final void close() {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.String r1 = "close"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.d.a r0 = r3.j     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L17
            com.mbridge.msdk.splash.d.a r0 = r3.j     // Catch: java.lang.Throwable -> L11
            r0.a()     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r0 = move-exception
            java.lang.String r2 = r3.a
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L17:
            return
    }

    public final void d(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r5 = r4.a
            java.lang.String r0 = "install"
            com.mbridge.msdk.foundation.tools.z.d(r5, r0)
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r4.c     // Catch: java.lang.Throwable -> L6c
            if (r5 != 0) goto Lc
            return
        Lc:
            r5 = 0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.c     // Catch: java.lang.Throwable -> L6c
            if (r0 == 0) goto L22
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.c     // Catch: java.lang.Throwable -> L6c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L6c
            if (r0 <= 0) goto L22
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r4.c     // Catch: java.lang.Throwable -> L6c
            r0 = 0
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L6c
        L22:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L6c
            if (r0 != 0) goto L74
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r5)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            r1.<init>(r6)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            java.util.Iterator r6 = r1.keys()     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
        L35:
            boolean r2 = r6.hasNext()     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            if (r2 == 0) goto L49
            java.lang.Object r2 = r6.next()     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            java.lang.String r3 = r1.getString(r2)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            goto L35
        L49:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r0)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            java.lang.String r1 = "unitId"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
            if (r1 != 0) goto L5c
            r6.setCampaignUnitId(r0)     // Catch: org.json.JSONException -> L5e java.lang.Throwable -> L6c
        L5c:
            r5 = r6
            goto L62
        L5e:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L6c
        L62:
            com.mbridge.msdk.splash.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L6c
            if (r6 == 0) goto L74
            com.mbridge.msdk.splash.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L6c
            r6.a(r5)     // Catch: java.lang.Throwable -> L6c
            goto L74
        L6c:
            r5 = move-exception
            java.lang.String r6 = r4.a
            java.lang.String r0 = "click"
            com.mbridge.msdk.foundation.tools.z.c(r6, r0, r5)
        L74:
            return
    }

    public final void e(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "openURL:"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L22
            java.lang.String r5 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r4, r5)
            return
        L22:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L83
            if (r0 != 0) goto L4c
            boolean r1 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L4c
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Exception -> L42
            if (r4 == 0) goto L4c
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Exception -> L42
            r0 = r4
            goto L4c
        L42:
            r4 = move-exception
            java.lang.String r1 = r3.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L4c:
            if (r0 != 0) goto L4f
            return
        L4f:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6e org.json.JSONException -> L79
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L6e org.json.JSONException -> L79
            java.lang.String r5 = "url"
            java.lang.String r5 = r4.optString(r5)     // Catch: java.lang.Throwable -> L6e org.json.JSONException -> L79
            java.lang.String r1 = "type"
            int r4 = r4.optInt(r1)     // Catch: java.lang.Throwable -> L6e org.json.JSONException -> L79
            r1 = 1
            if (r4 != r1) goto L67
            com.mbridge.msdk.click.c.a(r0, r5)     // Catch: java.lang.Throwable -> L6e org.json.JSONException -> L79
            goto L83
        L67:
            r1 = 2
            if (r4 != r1) goto L83
            com.mbridge.msdk.click.c.b(r0, r5)     // Catch: java.lang.Throwable -> L6e org.json.JSONException -> L79
            goto L83
        L6e:
            r4 = move-exception
            java.lang.String r5 = r3.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
            goto L83
        L79:
            r4 = move-exception
            java.lang.String r5 = r3.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L83:
            return
    }

    @Override
    public final void expand(java.lang.String r4, boolean r5) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L59
            r0.<init>()     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = "url"
            r0.putString(r1, r4)     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = "shouldUseCustomClose"
            r0.putBoolean(r1, r5)     // Catch: java.lang.Throwable -> L59
            java.lang.ref.WeakReference<android.content.Context> r5 = r3.b     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L61
            java.lang.ref.WeakReference<android.content.Context> r5 = r3.b     // Catch: java.lang.Throwable -> L59
            java.lang.Object r5 = r5.get()     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L61
            com.mbridge.msdk.splash.js.SplashExpandDialog r5 = r3.k     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L28
            com.mbridge.msdk.splash.js.SplashExpandDialog r5 = r3.k     // Catch: java.lang.Throwable -> L59
            boolean r5 = r5.isShowing()     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L28
            return
        L28:
            com.mbridge.msdk.splash.js.SplashExpandDialog r5 = new com.mbridge.msdk.splash.js.SplashExpandDialog     // Catch: java.lang.Throwable -> L59
            java.lang.ref.WeakReference<android.content.Context> r1 = r3.b     // Catch: java.lang.Throwable -> L59
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L59
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.splash.d.a r2 = r3.j     // Catch: java.lang.Throwable -> L59
            r5.<init>(r1, r0, r2)     // Catch: java.lang.Throwable -> L59
            r3.k = r5     // Catch: java.lang.Throwable -> L59
            java.lang.String r0 = r3.d     // Catch: java.lang.Throwable -> L59
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r3.c     // Catch: java.lang.Throwable -> L59
            r5.setCampaignList(r0, r1)     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.splash.js.SplashExpandDialog r5 = r3.k     // Catch: java.lang.Throwable -> L59
            r5.show()     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.splash.d.a r5 = r3.j     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L4f
            com.mbridge.msdk.splash.d.a r5 = r3.j     // Catch: java.lang.Throwable -> L59
            r0 = 1
            r5.a(r0)     // Catch: java.lang.Throwable -> L59
        L4f:
            java.lang.String r5 = r3.d     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.getMraidCampaign()     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.splash.e.a.a(r5, r0, r4)     // Catch: java.lang.Throwable -> L59
            goto L61
        L59:
            r4 = move-exception
            java.lang.String r5 = r3.a
            java.lang.String r0 = "expand"
            com.mbridge.msdk.foundation.tools.z.c(r5, r0, r4)
        L61:
            return
    }

    public final void f(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "cai"
            java.lang.String r1 = "exception: "
            java.lang.String r2 = r6.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "cai:"
            r3.append(r4)
            r3.append(r8)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r3)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto L26
            java.lang.String r8 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r8)
            return
        L26:
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto Lce
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            r2.<init>(r8)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r8 = "packageName"
            java.lang.String r8 = r2.optString(r8)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            if (r2 == 0) goto L42
            java.lang.String r2 = "packageName is empty"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r2)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
        L42:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            boolean r8 = com.mbridge.msdk.foundation.tools.ae.c(r2, r8)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            r2 = 2
            if (r8 == 0) goto L53
            r8 = 1
            goto L54
        L53:
            r8 = r2
        L54:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            r3.<init>()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r4 = "code"
            int r5 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            r4.<init>()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r5 = "result"
            r4.put(r5, r8)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r8 = "data"
            r3.put(r8, r4)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            com.mbridge.msdk.mbjscommon.windvane.h r8 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r2 = android.util.Base64.encodeToString(r3, r2)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            r8.a(r7, r2)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            goto Lce
        L83:
            r8 = move-exception
            java.lang.String r2 = r8.getMessage()     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r2)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            com.mbridge.msdk.foundation.tools.z.a(r2, r8)     // Catch: java.lang.Throwable -> L95 org.json.JSONException -> Lb2
            goto Lce
        L95:
            r8 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r8.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r1)
            java.lang.String r7 = r6.a
            com.mbridge.msdk.foundation.tools.z.c(r7, r0, r8)
            goto Lce
        Lb2:
            r8 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r8.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r1)
            java.lang.String r7 = r6.a
            com.mbridge.msdk.foundation.tools.z.c(r7, r0, r8)
        Lce:
            return
    }

    public final void g(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = r6.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "gial:"
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r8.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            java.lang.String r0 = "code"
            int r1 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r8.put(r0, r1)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r0.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            java.util.List<java.lang.String> r1 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r2.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            if (r1 == 0) goto L47
            int r3 = r1.size()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            if (r3 <= 0) goto L47
            int r3 = r1.size()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r4 = 0
        L3b:
            if (r4 >= r3) goto L47
            java.lang.Object r5 = r1.get(r4)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r2.put(r5)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            int r4 = r4 + 1
            goto L3b
        L47:
            java.lang.String r1 = "packageNameList"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            java.lang.String r1 = "data"
            r8.put(r1, r0)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r1 = 2
            java.lang.String r8 = android.util.Base64.encodeToString(r8, r1)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            r0.a(r7, r8)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L78
            goto L89
        L66:
            r8 = move-exception
            java.lang.String r0 = r8.getMessage()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r0)
            java.lang.String r7 = r6.a
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r7, r8)
            goto L89
        L78:
            r8 = move-exception
            java.lang.String r0 = r8.getMessage()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r0)
            java.lang.String r7 = r6.a
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r7, r8)
        L89:
            return
    }

    @Override
    public final com.mbridge.msdk.foundation.entity.CampaignEx getMraidCampaign() {
            r2 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.c
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.c
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            return r0
        L14:
            r0 = 0
            return r0
    }

    public final void h(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L1b
            if (r1 != 0) goto L1f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1b
            r1.<init>(r2)     // Catch: org.json.JSONException -> L1b
            java.lang.String r2 = "countdown"
            int r1 = r1.getInt(r2)     // Catch: org.json.JSONException -> L1b
            com.mbridge.msdk.splash.d.a r2 = r0.j     // Catch: org.json.JSONException -> L1b
            if (r2 == 0) goto L1f
            com.mbridge.msdk.splash.d.a r2 = r0.j     // Catch: org.json.JSONException -> L1b
            r2.b(r1)     // Catch: org.json.JSONException -> L1b
            goto L1f
        L1b:
            r1 = move-exception
            r1.printStackTrace()
        L1f:
            return
    }

    public final void i(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r7 = r6.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sendImpressions:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r7, r0)
            boolean r7 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L69
            if (r7 != 0) goto L71
            org.json.JSONArray r7 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L69
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L69
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L69
            r8.<init>()     // Catch: java.lang.Throwable -> L69
            r0 = 0
        L27:
            int r1 = r7.length()     // Catch: java.lang.Throwable -> L69
            if (r0 >= r1) goto L5b
            java.lang.String r1 = r7.getString(r0)     // Catch: java.lang.Throwable -> L69
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r6.c     // Catch: java.lang.Throwable -> L69
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L69
        L37:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L69
            if (r3 == 0) goto L58
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = r3.getId()     // Catch: java.lang.Throwable -> L69
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Throwable -> L69
            if (r4 == 0) goto L37
            java.lang.String r4 = r6.d     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = "splash"
            com.mbridge.msdk.foundation.same.a.d.a(r4, r3, r5)     // Catch: java.lang.Throwable -> L69
            r8.add(r1)     // Catch: java.lang.Throwable -> L69
            goto L37
        L58:
            int r0 = r0 + 1
            goto L27
        L5b:
            java.lang.Thread r7 = new java.lang.Thread     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.splash.js.b$1 r0 = new com.mbridge.msdk.splash.js.b$1     // Catch: java.lang.Throwable -> L69
            r0.<init>(r6, r8)     // Catch: java.lang.Throwable -> L69
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L69
            r7.start()     // Catch: java.lang.Throwable -> L69
            goto L71
        L69:
            r7 = move-exception
            java.lang.String r8 = r6.a
            java.lang.String r0 = "sendImpressions"
            com.mbridge.msdk.foundation.tools.z.c(r8, r0, r7)
        L71:
            return
    }

    public final void j(java.lang.Object r18, java.lang.String r19) {
            r17 = this;
            r1 = r17
            r0 = r18
            r2 = r19
            java.lang.String r3 = r1.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "reportUrls:"
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.a(r3, r4)
            boolean r3 = android.text.TextUtils.isEmpty(r19)
            if (r3 == 0) goto L28
            java.lang.String r2 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r0, r2)
            return
        L28:
            boolean r3 = android.text.TextUtils.isEmpty(r19)
            if (r3 != 0) goto Laf
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> La7
            r3.<init>(r2)     // Catch: java.lang.Throwable -> La7
            r2 = 0
            r4 = r2
        L35:
            int r5 = r3.length()     // Catch: java.lang.Throwable -> La7
            if (r4 >= r5) goto L9b
            org.json.JSONObject r5 = r3.getJSONObject(r4)     // Catch: java.lang.Throwable -> La7
            java.lang.String r6 = "type"
            int r6 = r5.optInt(r6)     // Catch: java.lang.Throwable -> La7
            java.lang.String r7 = "url"
            java.lang.String r7 = r5.optString(r7)     // Catch: java.lang.Throwable -> La7
            java.lang.String r8 = "&tun="
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            r9.<init>()     // Catch: java.lang.Throwable -> La7
            int r10 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: java.lang.Throwable -> La7
            r9.append(r10)     // Catch: java.lang.Throwable -> La7
            java.lang.String r10 = ""
            r9.append(r10)     // Catch: java.lang.Throwable -> La7
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> La7
            java.lang.String r13 = com.mbridge.msdk.foundation.tools.ae.a(r7, r8, r9)     // Catch: java.lang.Throwable -> La7
            java.lang.String r7 = "report"
            int r16 = r5.optInt(r7)     // Catch: java.lang.Throwable -> La7
            r5 = 1
            if (r16 != 0) goto L84
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La7
            android.content.Context r10 = r7.j()     // Catch: java.lang.Throwable -> La7
            r11 = 0
            java.lang.String r12 = ""
            r14 = 0
            if (r6 == 0) goto L7f
            r15 = r5
            goto L80
        L7f:
            r15 = r2
        L80:
            com.mbridge.msdk.click.b.a(r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> La7
            goto L98
        L84:
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La7
            android.content.Context r10 = r7.j()     // Catch: java.lang.Throwable -> La7
            r11 = 0
            java.lang.String r12 = ""
            r14 = 0
            if (r6 == 0) goto L94
            r15 = r5
            goto L95
        L94:
            r15 = r2
        L95:
            com.mbridge.msdk.click.b.a(r10, r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Throwable -> La7
        L98:
            int r4 = r4 + 1
            goto L35
        L9b:
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = com.mbridge.msdk.splash.js.c.a(r2)     // Catch: java.lang.Throwable -> La7
            r3.a(r0, r2)     // Catch: java.lang.Throwable -> La7
            goto Laf
        La7:
            r0 = move-exception
            java.lang.String r2 = r1.a
            java.lang.String r3 = "reportUrls"
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r0)
        Laf:
            return
    }

    public final void k(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r3 = r2 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Throwable -> L10
            if (r3 == 0) goto L18
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.mbjscommon.windvane.a r2 = (com.mbridge.msdk.mbjscommon.windvane.a) r2     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r2.a     // Catch: java.lang.Throwable -> L10
            r3.a(r2)     // Catch: java.lang.Throwable -> L10
            goto L18
        L10:
            r2 = move-exception
            java.lang.String r3 = r1.a
            java.lang.String r0 = "onJSBridgeConnect"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L18:
            return
    }

    public final void l(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r0 = "code"
            r1 = 0
            r5.put(r0, r1)     // Catch: java.lang.Exception -> L38
            java.lang.String r0 = "message"
            java.lang.String r1 = "Call pause count down success."
            r5.put(r0, r1)     // Catch: java.lang.Exception -> L38
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L38
            r0.<init>()     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = "countdown"
            int r2 = r3.i     // Catch: java.lang.Exception -> L38
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = "data"
            r5.put(r1, r0)     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L38
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L38
            r1 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L38
            r0.a(r4, r5)     // Catch: java.lang.Exception -> L38
            goto L42
        L38:
            r4 = move-exception
            java.lang.String r5 = r3.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L42:
            com.mbridge.msdk.splash.d.a r4 = r3.j
            if (r4 == 0) goto L4b
            r5 = 1
            r0 = -1
            r4.a(r5, r0)
        L4b:
            return
    }

    public final void m(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L2c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L22
            r0.<init>(r4)     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = "countdown"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = com.mbridge.msdk.splash.js.c.a(r1)     // Catch: java.lang.Exception -> L1f
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L1f
            r1 = r4
            goto L2c
        L1f:
            r3 = move-exception
            r1 = r4
            goto L23
        L22:
            r3 = move-exception
        L23:
            java.lang.String r4 = r2.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L2c:
            com.mbridge.msdk.splash.d.a r3 = r2.j
            if (r3 == 0) goto L34
            r4 = 2
            r3.a(r4, r1)
        L34:
            return
    }

    @Override
    public final void open(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.splash.d.a r0 = r2.j
            if (r0 == 0) goto L8
            r1 = 1
            r0.a(r1, r3)
        L8:
            return
    }

    @Override
    public final void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public final void useCustomClose(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L4
            r3 = 2
            goto L5
        L4:
            r3 = 1
        L5:
            com.mbridge.msdk.splash.d.a r0 = r2.j     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L17
            com.mbridge.msdk.splash.d.a r0 = r2.j     // Catch: java.lang.Throwable -> Lf
            r0.a(r3)     // Catch: java.lang.Throwable -> Lf
            goto L17
        Lf:
            r3 = move-exception
            java.lang.String r0 = r2.a
            java.lang.String r1 = "useCustomClose"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
        L17:
            return
    }
}
