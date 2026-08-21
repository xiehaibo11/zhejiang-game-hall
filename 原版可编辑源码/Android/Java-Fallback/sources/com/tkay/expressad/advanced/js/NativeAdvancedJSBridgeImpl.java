package com.tkay.expressad.advanced.js;

public class NativeAdvancedJSBridgeImpl extends com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp {
    private java.lang.String b;
    private java.lang.ref.WeakReference<android.content.Context> c;
    private java.util.List<com.tkay.expressad.foundation.d.c> d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private int h;
    private int i;
    private com.tkay.expressad.advanced.d.a j;
    private com.tkay.expressad.advanced.js.NativeAdvancedExpandDialog k;

    public NativeAdvancedJSBridgeImpl(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
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

    @Override
    public void click(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            r5 = 0
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L65
            if (r0 == 0) goto L16
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L65
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L65
            if (r0 <= 0) goto L16
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.d     // Catch: java.lang.Throwable -> L65
            r0 = 0
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L65
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Throwable -> L65
        L16:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L65
            if (r0 != 0) goto L65
            org.json.JSONObject r0 = com.tkay.expressad.foundation.d.c.a(r5)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            r1.<init>(r6)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r6 = "pt"
            org.json.JSONObject r6 = r1.getJSONObject(r6)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.util.Iterator r1 = r6.keys()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
        L2f:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            if (r2 == 0) goto L43
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r3 = r6.getString(r2)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            goto L2f
        L43:
            com.tkay.expressad.foundation.d.c r6 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r1 = "unitId"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            if (r1 != 0) goto L56
            r6.l(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
        L56:
            r5 = r6
            goto L5c
        L58:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L65
        L5c:
            com.tkay.expressad.advanced.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L65
            if (r6 == 0) goto L65
            com.tkay.expressad.advanced.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L65
            r6.a(r5)     // Catch: java.lang.Throwable -> L65
        L65:
            return
    }

    @Override
    public void close() {
            r1 = this;
            com.tkay.expressad.advanced.d.a r0 = r1.j     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.advanced.d.a r0 = r1.j     // Catch: java.lang.Throwable -> L9
            r0.e()     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    @Override
    public void expand(java.lang.String r3, boolean r4) {
            r2 = this;
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L4f
            r0.<init>()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = "url"
            r0.putString(r1, r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "shouldUseCustomClose"
            r0.putBoolean(r3, r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.ref.WeakReference<android.content.Context> r3 = r2.c     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4f
            java.lang.ref.WeakReference<android.content.Context> r3 = r2.c     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4f
            com.tkay.expressad.advanced.js.NativeAdvancedExpandDialog r3 = r2.k     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L28
            com.tkay.expressad.advanced.js.NativeAdvancedExpandDialog r3 = r2.k     // Catch: java.lang.Throwable -> L4f
            boolean r3 = r3.isShowing()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L28
            return
        L28:
            com.tkay.expressad.advanced.js.NativeAdvancedExpandDialog r3 = new com.tkay.expressad.advanced.js.NativeAdvancedExpandDialog     // Catch: java.lang.Throwable -> L4f
            java.lang.ref.WeakReference<android.content.Context> r4 = r2.c     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Throwable -> L4f
            android.content.Context r4 = (android.content.Context) r4     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.advanced.d.a r1 = r2.j     // Catch: java.lang.Throwable -> L4f
            r3.<init>(r4, r0, r1)     // Catch: java.lang.Throwable -> L4f
            r2.k = r3     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = r2.e     // Catch: java.lang.Throwable -> L4f
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.d     // Catch: java.lang.Throwable -> L4f
            r3.setCampaignList(r4, r0)     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.advanced.js.NativeAdvancedExpandDialog r3 = r2.k     // Catch: java.lang.Throwable -> L4f
            r3.show()     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.advanced.d.a r3 = r2.j     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4f
            com.tkay.expressad.advanced.d.a r3 = r2.j     // Catch: java.lang.Throwable -> L4f
            r4 = 1
            r3.a(r4)     // Catch: java.lang.Throwable -> L4f
        L4f:
            return
    }

    @Override
    public void getFileInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "params is empty"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r2, r3)
            return
        Lc:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L15
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L15
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.getFileInfo(r2, r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            r2.getMessage()
            return
    }

    @Override
    public com.tkay.expressad.foundation.d.c getMraidCampaign() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.d
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.d
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            return r0
        L14:
            r0 = 0
            return r0
    }

    public java.util.List<com.tkay.expressad.foundation.d.c> getmCampaignList() {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.d
            return r0
    }

    @Override
    public void init(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lac
            r6.<init>()     // Catch: java.lang.Throwable -> Lac
            com.tkay.expressad.advanced.a.a r0 = new com.tkay.expressad.advanced.a.a     // Catch: java.lang.Throwable -> Lac
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lac
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Lac
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lac
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lac
            r1.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "dev_close_state"
            int r3 = r4.g     // Catch: java.lang.Throwable -> Lac
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "customURLScheme"
            r3 = 1
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "sdkSetting"
            r6.put(r2, r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = "device"
            org.json.JSONObject r0 = r0.a()     // Catch: java.lang.Throwable -> Lac
            r6.put(r1, r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r0 = "campaignList"
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.d     // Catch: java.lang.Throwable -> Lac
            org.json.JSONArray r1 = com.tkay.expressad.foundation.d.c.b(r1)     // Catch: java.lang.Throwable -> Lac
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> Lac
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> Lac
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> Lac
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.d(r0, r1)     // Catch: java.lang.Throwable -> Lac
            if (r0 != 0) goto L54
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.y()     // Catch: java.lang.Throwable -> Lac
        L54:
            java.lang.String r1 = r4.f     // Catch: java.lang.Throwable -> Lac
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lac
            if (r1 != 0) goto L61
            java.lang.String r1 = r4.f     // Catch: java.lang.Throwable -> Lac
            r0.e(r1)     // Catch: java.lang.Throwable -> Lac
        L61:
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> Lac
            r0.a(r1)     // Catch: java.lang.Throwable -> Lac
            int r1 = r4.i     // Catch: java.lang.Throwable -> Lac
            r0.b(r1)     // Catch: java.lang.Throwable -> Lac
            int r1 = r4.h     // Catch: java.lang.Throwable -> Lac
            r0.a(r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = "unitSetting"
            org.json.JSONObject r0 = r0.s()     // Catch: java.lang.Throwable -> Lac
            r6.put(r1, r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r0 = "appSetting"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lac
            r1.<init>()     // Catch: java.lang.Throwable -> Lac
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r0 = "sdk_info"
            java.lang.String r1 = com.tkay.expressad.atsignalcommon.base.d.a     // Catch: java.lang.Throwable -> Lac
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = "init"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> Lac
            r0.append(r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lac
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Throwable -> Lac
            r0 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r0)     // Catch: java.lang.Throwable -> Lac
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> Lac
            r0.a(r5, r6)     // Catch: java.lang.Throwable -> Lac
        Lac:
            return
    }

    @Override
    public void install(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            r5 = 0
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L65
            if (r0 == 0) goto L16
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L65
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L65
            if (r0 <= 0) goto L16
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.d     // Catch: java.lang.Throwable -> L65
            r0 = 0
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L65
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Throwable -> L65
        L16:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L65
            if (r0 != 0) goto L65
            org.json.JSONObject r0 = com.tkay.expressad.foundation.d.c.a(r5)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            r1.<init>(r6)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r6 = "pt"
            org.json.JSONObject r6 = r1.getJSONObject(r6)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.util.Iterator r1 = r6.keys()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
        L2f:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            if (r2 == 0) goto L43
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r3 = r6.getString(r2)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            goto L2f
        L43:
            com.tkay.expressad.foundation.d.c r6 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            java.lang.String r1 = "unitId"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
            if (r1 != 0) goto L56
            r6.l(r0)     // Catch: org.json.JSONException -> L58 java.lang.Throwable -> L65
        L56:
            r5 = r6
            goto L5c
        L58:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L65
        L5c:
            com.tkay.expressad.advanced.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L65
            if (r6 == 0) goto L65
            com.tkay.expressad.advanced.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L65
            r6.a(r5)     // Catch: java.lang.Throwable -> L65
        L65:
            return
    }

    @Override
    public void onJSBridgeConnect(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r2 = r1 instanceof com.tkay.expressad.atsignalcommon.windvane.a     // Catch: java.lang.Throwable -> Le
            if (r2 == 0) goto Le
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> Le
            com.tkay.expressad.atsignalcommon.windvane.a r1 = (com.tkay.expressad.atsignalcommon.windvane.a) r1     // Catch: java.lang.Throwable -> Le
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Throwable -> Le
            com.tkay.expressad.atsignalcommon.windvane.j.b(r1)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }

    @Override
    public void open(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.advanced.d.a r0 = r1.j
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.a     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L25
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L26
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L25
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            r0.<init>(r4)     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            com.tkay.expressad.atsignalcommon.windvane.e r4 = r3.getWebViewListener()     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            java.lang.String r1 = "isReady"
            int r0 = r0.getInt(r1)     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            r4.readyState(r3, r0)     // Catch: java.lang.Exception -> L1d java.lang.Throwable -> L26
            return
        L1d:
            com.tkay.expressad.atsignalcommon.windvane.e r4 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L26
            r0 = 2
            r4.readyState(r3, r0)     // Catch: java.lang.Throwable -> L26
        L25:
            return
        L26:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public void release() {
            r1 = this;
            com.tkay.expressad.advanced.d.a r0 = r1.j
            if (r0 == 0) goto L7
            r0 = 0
            r1.j = r0
        L7:
            return
    }

    @Override
    public void resetCountdown(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L1a
            if (r1 != 0) goto L19
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r1.<init>(r2)     // Catch: org.json.JSONException -> L1a
            java.lang.String r2 = "countdown"
            r1.getInt(r2)     // Catch: org.json.JSONException -> L1a
            com.tkay.expressad.advanced.d.a r1 = r0.j     // Catch: org.json.JSONException -> L1a
            if (r1 == 0) goto L19
            com.tkay.expressad.advanced.d.a r1 = r0.j     // Catch: org.json.JSONException -> L1a
            r1.c()     // Catch: org.json.JSONException -> L1a
        L19:
            return
        L1a:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    @Override
    public void sendImpressions(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            boolean r7 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L45
            if (r7 != 0) goto L45
            org.json.JSONArray r7 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L45
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L45
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L45
            r8.<init>()     // Catch: java.lang.Throwable -> L45
            r0 = 0
        L11:
            int r1 = r7.length()     // Catch: java.lang.Throwable -> L45
            if (r0 >= r1) goto L45
            java.lang.String r1 = r7.getString(r0)     // Catch: java.lang.Throwable -> L45
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r6.d     // Catch: java.lang.Throwable -> L45
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L45
            if (r3 == 0) goto L42
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L45
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = r3.aZ()     // Catch: java.lang.Throwable -> L45
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Throwable -> L45
            if (r4 == 0) goto L21
            java.lang.String r4 = r6.e     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = "h5_native"
            com.tkay.expressad.foundation.g.a.f.a(r4, r3, r5)     // Catch: java.lang.Throwable -> L45
            r8.add(r1)     // Catch: java.lang.Throwable -> L45
            goto L21
        L42:
            int r0 = r0 + 1
            goto L11
        L45:
            return
    }

    public void setAllowSkip(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setCampaignList(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setCountdownS(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setDevCloseBtnStatus(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setNativeAdvancedBridgeListener(com.tkay.expressad.advanced.d.a r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.j = r1
        L4:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = "state"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1a
            com.tkay.expressad.advanced.d.a r2 = r0.j     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.tkay.expressad.advanced.d.a r2 = r0.j     // Catch: java.lang.Throwable -> L1a
            r2.a(r1)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.advanced.d.a r2 = r0.j
            if (r2 == 0) goto Lc
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.callbackSuccess(r1)
            com.tkay.expressad.advanced.d.a r1 = r0.j
            r1.a()
        Lc:
            return
    }

    @Override
    public void unload() {
            r0 = this;
            r0.close()
            return
    }

    public void updateContext(android.content.Context r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.c = r0
            return
    }

    @Override
    public void useCustomClose(boolean r3) {
            r2 = this;
            int r0 = r2.h     // Catch: java.lang.Throwable -> L13
            r1 = -1
            if (r0 != r1) goto L13
            if (r3 == 0) goto L9
            r3 = 2
            goto La
        L9:
            r3 = 1
        La:
            com.tkay.expressad.advanced.d.a r0 = r2.j     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L13
            com.tkay.expressad.advanced.d.a r0 = r2.j     // Catch: java.lang.Throwable -> L13
            r0.a(r3)     // Catch: java.lang.Throwable -> L13
        L13:
            return
    }
}
