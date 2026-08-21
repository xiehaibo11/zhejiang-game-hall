package com.mbridge.msdk.advanced.js;

public final class a extends com.mbridge.msdk.mbjscommon.bridge.a {
    private java.lang.String b;
    private java.lang.ref.WeakReference<android.content.Context> c;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private int h;
    private int i;
    private com.mbridge.msdk.advanced.c.a j;
    private com.mbridge.msdk.advanced.js.NativeAdvancedExpandDialog k;


    public a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NativeAdvancedJSBridgeImpl"
            r1.b = r0
            r0 = 5
            r1.i = r0
            r1.f = r3
            r1.e = r4
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            r1.c = r3
            return
    }

    static java.lang.String a(com.mbridge.msdk.advanced.js.a r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.d
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(com.mbridge.msdk.advanced.c.a r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.j = r1
        L4:
            return
    }

    @Override
    public final void a(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r7 = "init"
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld2
            r0.<init>()     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.advanced.common.a r1 = new com.mbridge.msdk.advanced.common.a     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ld2
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Ld2
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld2
            r2.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "dev_close_state"
            int r4 = r5.g     // Catch: java.lang.Throwable -> Ld2
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "customURLScheme"
            r4 = 1
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "sdkSetting"
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: java.lang.Throwable -> Ld2
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "campaignList"
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r5.d     // Catch: java.lang.Throwable -> Ld2
            org.json.JSONArray r2 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r2)     // Catch: java.lang.Throwable -> Ld2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = r5.e     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.c.d r1 = r1.f(r2, r3)     // Catch: java.lang.Throwable -> Ld2
            if (r1 != 0) goto L59
            java.lang.String r1 = r5.e     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.c(r1)     // Catch: java.lang.Throwable -> Ld2
        L59:
            java.lang.String r2 = r5.f     // Catch: java.lang.Throwable -> Ld2
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Ld2
            if (r2 != 0) goto L66
            java.lang.String r2 = r5.f     // Catch: java.lang.Throwable -> Ld2
            r1.g(r2)     // Catch: java.lang.Throwable -> Ld2
        L66:
            java.lang.String r2 = r5.e     // Catch: java.lang.Throwable -> Ld2
            r1.a(r2)     // Catch: java.lang.Throwable -> Ld2
            int r2 = r5.i     // Catch: java.lang.Throwable -> Ld2
            r1.b(r2)     // Catch: java.lang.Throwable -> Ld2
            int r2 = r5.h     // Catch: java.lang.Throwable -> Ld2
            r1.a(r2)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r2 = "unitSetting"
            org.json.JSONObject r1 = r1.t()     // Catch: java.lang.Throwable -> Ld2
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = r1.c(r2)     // Catch: java.lang.Throwable -> Ld2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Ld2
            if (r2 != 0) goto L9e
            java.lang.String r2 = "appSetting"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld2
            r3.<init>(r1)     // Catch: java.lang.Throwable -> Ld2
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Ld2
        L9e:
            java.lang.String r1 = "sdk_info"
            java.lang.String r2 = com.mbridge.msdk.mbjscommon.base.d.a     // Catch: java.lang.Throwable -> Ld2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = r5.b     // Catch: java.lang.Throwable -> Ld2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld2
            r2.<init>()     // Catch: java.lang.Throwable -> Ld2
            r2.append(r7)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> Ld2
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Ld2
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> Ld2
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> Ld2
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> Ld2
            r1.a(r6, r0)     // Catch: java.lang.Throwable -> Ld2
            goto Ld8
        Ld2:
            r6 = move-exception
            java.lang.String r0 = r5.b
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r6)
        Ld8:
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public final void b(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            r5 = 0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.d     // Catch: java.lang.Throwable -> L66
            if (r0 == 0) goto L16
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.d     // Catch: java.lang.Throwable -> L66
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L66
            if (r0 <= 0) goto L16
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r4.d     // Catch: java.lang.Throwable -> L66
            r0 = 0
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L66
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L66
        L16:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L66
            if (r0 != 0) goto L6e
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r5)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            r1.<init>(r6)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            java.lang.String r6 = "pt"
            org.json.JSONObject r6 = r1.getJSONObject(r6)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            java.util.Iterator r1 = r6.keys()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
        L2f:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            if (r2 == 0) goto L43
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            java.lang.String r3 = r6.getString(r2)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            goto L2f
        L43:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            java.lang.String r1 = "unitId"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
            if (r1 != 0) goto L56
            r6.setCampaignUnitId(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L66
        L56:
            r5 = r6
            goto L5c
        L58:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L66
        L5c:
            com.mbridge.msdk.advanced.c.a r6 = r4.j     // Catch: java.lang.Throwable -> L66
            if (r6 == 0) goto L6e
            com.mbridge.msdk.advanced.c.a r6 = r4.j     // Catch: java.lang.Throwable -> L66
            r6.a(r5)     // Catch: java.lang.Throwable -> L66
            goto L6e
        L66:
            r5 = move-exception
            java.lang.String r6 = r4.b
            java.lang.String r0 = "click"
            com.mbridge.msdk.foundation.tools.z.c(r6, r0, r5)
        L6e:
            return
    }

    @Override
    public final void c(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L30
            com.mbridge.msdk.mbjscommon.windvane.a r3 = (com.mbridge.msdk.mbjscommon.windvane.a) r3     // Catch: java.lang.Throwable -> L26
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L30
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            r0.<init>(r4)     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            com.mbridge.msdk.mbjscommon.windvane.d r4 = r3.getWebViewListener()     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            java.lang.String r1 = "isReady"
            int r0 = r0.getInt(r1)     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            goto L30
        L1d:
            com.mbridge.msdk.mbjscommon.windvane.d r4 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L26
            r0 = 2
            r4.a(r3, r0)     // Catch: java.lang.Throwable -> L26
            goto L30
        L26:
            r3 = move-exception
            java.lang.String r4 = r2.b
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L30:
            return
    }

    @Override
    public final void close() {
            r3 = this;
            java.lang.String r0 = r3.b
            java.lang.String r1 = "close"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.advanced.c.a r0 = r3.j     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L17
            com.mbridge.msdk.advanced.c.a r0 = r3.j     // Catch: java.lang.Throwable -> L11
            r0.a()     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r0 = move-exception
            java.lang.String r2 = r3.b
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L17:
            return
    }

    @Override
    public final void d(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1b
            if (r2 != 0) goto L23
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = "state"
            int r2 = r2.optInt(r3)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.advanced.c.a r3 = r1.j     // Catch: java.lang.Throwable -> L1b
            if (r3 == 0) goto L23
            com.mbridge.msdk.advanced.c.a r3 = r1.j     // Catch: java.lang.Throwable -> L1b
            r3.a(r2)     // Catch: java.lang.Throwable -> L1b
            goto L23
        L1b:
            r2 = move-exception
            java.lang.String r3 = r1.b
            java.lang.String r0 = "toggleCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L23:
            return
    }

    @Override
    public final void e(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.advanced.c.a r0 = r1.j
            if (r0 == 0) goto Lc
            com.mbridge.msdk.advanced.js.b.a(r2)
            com.mbridge.msdk.advanced.c.a r0 = r1.j
            r0.a(r2, r3)
        Lc:
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
            java.lang.ref.WeakReference<android.content.Context> r5 = r3.c     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L61
            java.lang.ref.WeakReference<android.content.Context> r5 = r3.c     // Catch: java.lang.Throwable -> L59
            java.lang.Object r5 = r5.get()     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L61
            com.mbridge.msdk.advanced.js.NativeAdvancedExpandDialog r5 = r3.k     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L28
            com.mbridge.msdk.advanced.js.NativeAdvancedExpandDialog r5 = r3.k     // Catch: java.lang.Throwable -> L59
            boolean r5 = r5.isShowing()     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L28
            return
        L28:
            com.mbridge.msdk.advanced.js.NativeAdvancedExpandDialog r5 = new com.mbridge.msdk.advanced.js.NativeAdvancedExpandDialog     // Catch: java.lang.Throwable -> L59
            java.lang.ref.WeakReference<android.content.Context> r1 = r3.c     // Catch: java.lang.Throwable -> L59
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L59
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.advanced.c.a r2 = r3.j     // Catch: java.lang.Throwable -> L59
            r5.<init>(r1, r0, r2)     // Catch: java.lang.Throwable -> L59
            r3.k = r5     // Catch: java.lang.Throwable -> L59
            java.lang.String r0 = r3.e     // Catch: java.lang.Throwable -> L59
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r3.d     // Catch: java.lang.Throwable -> L59
            r5.setCampaignList(r0, r1)     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.advanced.js.NativeAdvancedExpandDialog r5 = r3.k     // Catch: java.lang.Throwable -> L59
            r5.show()     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.advanced.c.a r5 = r3.j     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L4f
            com.mbridge.msdk.advanced.c.a r5 = r3.j     // Catch: java.lang.Throwable -> L59
            r0 = 1
            r5.a(r0)     // Catch: java.lang.Throwable -> L59
        L4f:
            java.lang.String r5 = r3.e     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.getMraidCampaign()     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.advanced.d.a.a(r5, r0, r4)     // Catch: java.lang.Throwable -> L59
            goto L61
        L59:
            r4 = move-exception
            java.lang.String r5 = r3.b
            java.lang.String r0 = "expand"
            com.mbridge.msdk.foundation.tools.z.c(r5, r0, r4)
        L61:
            return
    }

    @Override
    public final void f(java.lang.Object r2, java.lang.String r3) {
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
            java.lang.String r3 = r1.b
            java.lang.String r0 = "onJSBridgeConnect"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L18:
            return
    }

    @Override
    public final void g(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r6 = r5.b
            java.lang.String r0 = "install"
            com.mbridge.msdk.foundation.tools.z.d(r6, r0)
            r6 = 0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.d     // Catch: java.lang.Throwable -> L6d
            if (r1 == 0) goto L1d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.d     // Catch: java.lang.Throwable -> L6d
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L6d
            if (r1 <= 0) goto L1d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r6 = r5.d     // Catch: java.lang.Throwable -> L6d
            r1 = 0
            java.lang.Object r6 = r6.get(r1)     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6     // Catch: java.lang.Throwable -> L6d
        L1d:
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L6d
            if (r1 != 0) goto L73
            org.json.JSONObject r1 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r6)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            r2.<init>(r7)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            java.lang.String r7 = "pt"
            org.json.JSONObject r7 = r2.getJSONObject(r7)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            java.util.Iterator r2 = r7.keys()     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
        L36:
            boolean r3 = r2.hasNext()     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            if (r3 == 0) goto L4a
            java.lang.Object r3 = r2.next()     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            java.lang.String r4 = r7.getString(r3)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            goto L36
        L4a:
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r1)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            java.lang.String r2 = "unitId"
            java.lang.String r1 = r1.optString(r2)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
            if (r2 != 0) goto L5d
            r7.setCampaignUnitId(r1)     // Catch: org.json.JSONException -> L5f java.lang.Throwable -> L6d
        L5d:
            r6 = r7
            goto L63
        L5f:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L6d
        L63:
            com.mbridge.msdk.advanced.c.a r7 = r5.j     // Catch: java.lang.Throwable -> L6d
            if (r7 == 0) goto L73
            com.mbridge.msdk.advanced.c.a r7 = r5.j     // Catch: java.lang.Throwable -> L6d
            r7.a(r6)     // Catch: java.lang.Throwable -> L6d
            goto L73
        L6d:
            r6 = move-exception
            java.lang.String r7 = r5.b
            com.mbridge.msdk.foundation.tools.z.c(r7, r0, r6)
        L73:
            return
    }

    @Override
    public final com.mbridge.msdk.foundation.entity.CampaignEx getMraidCampaign() {
            r2 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.d
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.d
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final void h(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L1b
            if (r1 != 0) goto L1f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1b
            r1.<init>(r2)     // Catch: org.json.JSONException -> L1b
            java.lang.String r2 = "countdown"
            int r1 = r1.getInt(r2)     // Catch: org.json.JSONException -> L1b
            com.mbridge.msdk.advanced.c.a r2 = r0.j     // Catch: org.json.JSONException -> L1b
            if (r2 == 0) goto L1f
            com.mbridge.msdk.advanced.c.a r2 = r0.j     // Catch: org.json.JSONException -> L1b
            r2.b(r1)     // Catch: org.json.JSONException -> L1b
            goto L1f
        L1b:
            r1 = move-exception
            r1.printStackTrace()
        L1f:
            return
    }

    @Override
    public final void i(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r7 = r6.b
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
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r6.d     // Catch: java.lang.Throwable -> L69
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L69
        L37:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L69
            if (r3 == 0) goto L58
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = r3.getId()     // Catch: java.lang.Throwable -> L69
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Throwable -> L69
            if (r4 == 0) goto L37
            java.lang.String r4 = r6.e     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = "h5_native"
            com.mbridge.msdk.foundation.same.a.d.a(r4, r3, r5)     // Catch: java.lang.Throwable -> L69
            r8.add(r1)     // Catch: java.lang.Throwable -> L69
            goto L37
        L58:
            int r0 = r0 + 1
            goto L27
        L5b:
            java.lang.Thread r7 = new java.lang.Thread     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.advanced.js.a$1 r0 = new com.mbridge.msdk.advanced.js.a$1     // Catch: java.lang.Throwable -> L69
            r0.<init>(r6, r8)     // Catch: java.lang.Throwable -> L69
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L69
            r7.start()     // Catch: java.lang.Throwable -> L69
            goto L71
        L69:
            r7 = move-exception
            java.lang.String r8 = r6.b
            java.lang.String r0 = "sendImpressions"
            com.mbridge.msdk.foundation.tools.z.c(r8, r0, r7)
        L71:
            return
    }

    @Override
    public final void j(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "params is empty"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r2, r3)
            return
        Lc:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L15
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L15
            com.mbridge.msdk.advanced.js.b.a(r2, r0)     // Catch: java.lang.Throwable -> L15
            goto L1f
        L15:
            r2 = move-exception
            java.lang.String r3 = r1.b
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
        L1f:
            return
    }

    @Override
    public final void open(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.advanced.c.a r0 = r2.j
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
            int r0 = r2.h     // Catch: java.lang.Throwable -> L14
            r1 = -1
            if (r0 != r1) goto L1c
            if (r3 == 0) goto L9
            r3 = 2
            goto La
        L9:
            r3 = 1
        La:
            com.mbridge.msdk.advanced.c.a r0 = r2.j     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L1c
            com.mbridge.msdk.advanced.c.a r0 = r2.j     // Catch: java.lang.Throwable -> L14
            r0.a(r3)     // Catch: java.lang.Throwable -> L14
            goto L1c
        L14:
            r3 = move-exception
            java.lang.String r0 = r2.b
            java.lang.String r1 = "useCustomClose"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
        L1c:
            return
    }
}
