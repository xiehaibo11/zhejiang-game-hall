package com.tkay.expressad.splash.js;

public class SplashJSBridgeImpl implements com.tkay.expressad.splash.js.ISplashBridge {
    private java.lang.String a;
    private java.lang.ref.WeakReference<android.content.Context> b;
    private java.util.List<com.tkay.expressad.foundation.d.c> c;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private int g;
    private int h;
    private int i;
    private com.tkay.expressad.splash.d.a j;
    private com.tkay.expressad.splash.js.SplashExpandDialog k;

    public SplashJSBridgeImpl(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
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

    @Override
    public void cai(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "exception: "
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto Le
            java.lang.String r7 = "params is null"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r7)
            return
        Le:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto La0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            java.lang.String r7 = "packageName"
            java.lang.String r7 = r1.optString(r7)     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            if (r1 == 0) goto L2a
            java.lang.String r1 = "packageName is empty"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r1)     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
        L2a:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            boolean r7 = com.tkay.expressad.foundation.h.t.a(r1, r7)     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r1 = 2
            if (r7 == 0) goto L3b
            r7 = 1
            goto L3c
        L3b:
            r7 = r1
        L3c:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r2.<init>()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            java.lang.String r3 = "code"
            int r4 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.b     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r3.<init>()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            java.lang.String r4 = "result"
            r3.put(r4, r7)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            java.lang.String r7 = "data"
            r2.put(r7, r3)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            java.lang.String r1 = android.util.Base64.encodeToString(r2, r1)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r7.a(r6, r1)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L77 org.json.JSONException -> L8c
            return
        L6b:
            r7 = move-exception
            java.lang.String r1 = r7.getMessage()     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r1)     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            r7.getMessage()     // Catch: java.lang.Throwable -> L77 org.json.JSONException -> L8c
            return
        L77:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r7 = r7.getLocalizedMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r7)
            goto La0
        L8c:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r7 = r7.getLocalizedMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r7)
        La0:
            return
    }

    @Override
    public void close() {
            r1 = this;
            com.tkay.expressad.splash.d.a r0 = r1.j     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.splash.d.a r0 = r1.j     // Catch: java.lang.Throwable -> L9
            r0.c()     // Catch: java.lang.Throwable -> L9
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
            java.lang.ref.WeakReference<android.content.Context> r3 = r2.b     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4f
            java.lang.ref.WeakReference<android.content.Context> r3 = r2.b     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4f
            com.tkay.expressad.splash.js.SplashExpandDialog r3 = r2.k     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L28
            com.tkay.expressad.splash.js.SplashExpandDialog r3 = r2.k     // Catch: java.lang.Throwable -> L4f
            boolean r3 = r3.isShowing()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L28
            return
        L28:
            com.tkay.expressad.splash.js.SplashExpandDialog r3 = new com.tkay.expressad.splash.js.SplashExpandDialog     // Catch: java.lang.Throwable -> L4f
            java.lang.ref.WeakReference<android.content.Context> r4 = r2.b     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Throwable -> L4f
            android.content.Context r4 = (android.content.Context) r4     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.splash.d.a r1 = r2.j     // Catch: java.lang.Throwable -> L4f
            r3.<init>(r4, r0, r1)     // Catch: java.lang.Throwable -> L4f
            r2.k = r3     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = r2.d     // Catch: java.lang.Throwable -> L4f
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.c     // Catch: java.lang.Throwable -> L4f
            r3.setCampaignList(r4, r0)     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.splash.js.SplashExpandDialog r3 = r2.k     // Catch: java.lang.Throwable -> L4f
            r3.show()     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.splash.d.a r3 = r2.j     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4f
            com.tkay.expressad.splash.d.a r3 = r2.j     // Catch: java.lang.Throwable -> L4f
            r4 = 1
            r3.a(r4)     // Catch: java.lang.Throwable -> L4f
        L4f:
            return
    }

    @Override
    public com.tkay.expressad.foundation.d.c getMraidCampaign() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.c
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.c
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            return r0
        L14:
            r0 = 0
            return r0
    }

    public com.tkay.expressad.splash.d.a getSplashBridgeListener() {
            r1 = this;
            com.tkay.expressad.splash.d.a r0 = r1.j
            return r0
    }

    public java.util.List<com.tkay.expressad.foundation.d.c> getmCampaignList() {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.c
            return r0
    }

    @Override
    public void gial(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            r5.<init>()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            java.lang.String r0 = "code"
            int r1 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.b     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            r5.put(r0, r1)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            java.lang.String r2 = "packageNameList"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            java.lang.String r1 = "data"
            r5.put(r1, r0)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            r1 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            r0.a(r4, r5)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L41
            return
        L35:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r4, r0)
            r5.getMessage()
            return
        L41:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r4, r0)
            r5.getMessage()
            return
    }

    @Override
    public void handlerH5Exception(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void init(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbd
            r6.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.splash.a.a r0 = new com.tkay.expressad.splash.a.a     // Catch: java.lang.Throwable -> Lbd
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbd
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Lbd
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lbd
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbd
            r1.<init>()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r2 = "dev_close_state"
            int r3 = r4.f     // Catch: java.lang.Throwable -> Lbd
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r2 = "sdkSetting"
            r6.put(r2, r1)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = "device"
            org.json.JSONObject r0 = r0.a()     // Catch: java.lang.Throwable -> Lbd
            r6.put(r1, r0)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r0 = "campaignList"
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.c     // Catch: java.lang.Throwable -> Lbd
            org.json.JSONArray r1 = com.tkay.expressad.foundation.d.c.b(r1)     // Catch: java.lang.Throwable -> Lbd
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = r4.d     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.c(r0, r1)     // Catch: java.lang.Throwable -> Lbd
            if (r0 != 0) goto L50
            java.lang.String r0 = r4.d     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.c(r0)     // Catch: java.lang.Throwable -> Lbd
        L50:
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> Lbd
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lbd
            if (r1 != 0) goto L5d
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> Lbd
            r0.e(r1)     // Catch: java.lang.Throwable -> Lbd
        L5d:
            java.lang.String r1 = r4.d     // Catch: java.lang.Throwable -> Lbd
            r0.a(r1)     // Catch: java.lang.Throwable -> Lbd
            int r1 = r4.h     // Catch: java.lang.Throwable -> Lbd
            r0.b(r1)     // Catch: java.lang.Throwable -> Lbd
            int r1 = r4.g     // Catch: java.lang.Throwable -> Lbd
            r0.a(r1)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = "unitSetting"
            org.json.JSONObject r0 = r0.s()     // Catch: java.lang.Throwable -> Lbd
            r6.put(r1, r0)     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r0 = com.tkay.expressad.d.b.a(r0)     // Catch: java.lang.Throwable -> Lbd
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lbd
            if (r1 != 0) goto L94
            java.lang.String r1 = "appSetting"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbd
            r2.<init>(r0)     // Catch: java.lang.Throwable -> Lbd
            r6.put(r1, r2)     // Catch: java.lang.Throwable -> Lbd
        L94:
            java.lang.String r0 = "sdk_info"
            java.lang.String r1 = com.tkay.expressad.atsignalcommon.base.d.a     // Catch: java.lang.Throwable -> Lbd
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> Lbd
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = "init"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> Lbd
            r0.append(r1)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lbd
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Throwable -> Lbd
            r0 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r0)     // Catch: java.lang.Throwable -> Lbd
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> Lbd
            r0.a(r5, r6)     // Catch: java.lang.Throwable -> Lbd
        Lbd:
            return
    }

    @Override
    public void install(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.c     // Catch: java.lang.Throwable -> L64
            if (r5 != 0) goto L5
            return
        L5:
            r5 = 0
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.c     // Catch: java.lang.Throwable -> L64
            if (r0 == 0) goto L1b
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.c     // Catch: java.lang.Throwable -> L64
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L64
            if (r0 <= 0) goto L1b
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.c     // Catch: java.lang.Throwable -> L64
            r0 = 0
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L64
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Throwable -> L64
        L1b:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L64
            if (r0 != 0) goto L64
            org.json.JSONObject r0 = com.tkay.expressad.foundation.d.c.a(r5)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            r1.<init>(r6)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            java.util.Iterator r6 = r1.keys()     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
        L2e:
            boolean r2 = r6.hasNext()     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            if (r2 == 0) goto L42
            java.lang.Object r2 = r6.next()     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            java.lang.String r3 = r1.getString(r2)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            goto L2e
        L42:
            com.tkay.expressad.foundation.d.c r6 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            java.lang.String r1 = "unitId"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
            if (r1 != 0) goto L55
            r6.l(r0)     // Catch: org.json.JSONException -> L57 java.lang.Throwable -> L64
        L55:
            r5 = r6
            goto L5b
        L57:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L64
        L5b:
            com.tkay.expressad.splash.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L64
            if (r6 == 0) goto L64
            com.tkay.expressad.splash.d.a r6 = r4.j     // Catch: java.lang.Throwable -> L64
            r6.a(r5)     // Catch: java.lang.Throwable -> L64
        L64:
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
            com.tkay.expressad.splash.d.a r0 = r1.j
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    @Override
    public void openURL(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lc
            java.lang.String r4 = "params is null"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r3, r4)
            return
        Lc:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L5b
            if (r0 != 0) goto L30
            boolean r1 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.a     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto L30
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L30
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Exception -> L2c
            r0 = r3
            goto L30
        L2c:
            r3 = move-exception
            r3.getMessage()
        L30:
            if (r0 != 0) goto L33
            return
        L33:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L52 org.json.JSONException -> L57
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L52 org.json.JSONException -> L57
            java.lang.String r4 = "url"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L52 org.json.JSONException -> L57
            java.lang.String r1 = "type"
            int r3 = r3.optInt(r1)     // Catch: java.lang.Throwable -> L52 org.json.JSONException -> L57
            r1 = 1
            if (r3 != r1) goto L4b
            com.tkay.core.common.l.l.a(r4)     // Catch: java.lang.Throwable -> L52 org.json.JSONException -> L57
            return
        L4b:
            r1 = 2
            if (r3 != r1) goto L51
            com.tkay.core.common.l.l.a(r0, r4)     // Catch: java.lang.Throwable -> L52 org.json.JSONException -> L57
        L51:
            return
        L52:
            r3 = move-exception
            r3.getMessage()
            goto L5b
        L57:
            r3 = move-exception
            r3.getMessage()
        L5b:
            return
    }

    @Override
    public void pauseCountDown(java.lang.Object r4, java.lang.String r5) {
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
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L38
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L38
            r1 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L38
            r0.a(r4, r5)     // Catch: java.lang.Exception -> L38
            goto L3c
        L38:
            r4 = move-exception
            r4.getMessage()
        L3c:
            com.tkay.expressad.splash.d.a r4 = r3.j
            if (r4 == 0) goto L45
            r5 = 1
            r0 = -1
            r4.a(r5, r0)
        L45:
            return
    }

    @Override
    public void readyStatus(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void release() {
            r1 = this;
            com.tkay.expressad.splash.d.a r0 = r1.j
            if (r0 == 0) goto L7
            r0 = 0
            r1.j = r0
        L7:
            return
    }

    @Override
    public void reportUrls(java.lang.Object r13, java.lang.String r14) {
            r12 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r14)
            if (r0 == 0) goto Lc
            java.lang.String r14 = "params is null"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r13, r14)
            return
        Lc:
            boolean r0 = android.text.TextUtils.isEmpty(r14)
            if (r0 != 0) goto L6d
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L6d
            r0.<init>(r14)     // Catch: java.lang.Throwable -> L6d
            r14 = 0
            r1 = r14
        L19:
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L6d
            if (r1 >= r2) goto L62
            org.json.JSONObject r2 = r0.getJSONObject(r1)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = "type"
            int r3 = r2.optInt(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = "url"
            java.lang.String r8 = r2.optString(r4)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = "report"
            int r11 = r2.optInt(r4)     // Catch: java.lang.Throwable -> L6d
            r2 = 1
            if (r11 != 0) goto L4b
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6d
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> L6d
            r5 = 0
            java.lang.String r6 = ""
            if (r3 == 0) goto L46
            goto L47
        L46:
            r2 = r14
        L47:
            com.tkay.expressad.a.a.a(r4, r5, r6, r8, r2)     // Catch: java.lang.Throwable -> L6d
            goto L5f
        L4b:
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6d
            android.content.Context r5 = r4.f()     // Catch: java.lang.Throwable -> L6d
            r6 = 0
            java.lang.String r7 = ""
            r9 = 0
            if (r3 == 0) goto L5b
            r10 = r2
            goto L5c
        L5b:
            r10 = r14
        L5c:
            com.tkay.expressad.a.a.a(r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L6d
        L5f:
            int r1 = r1 + 1
            goto L19
        L62:
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r14 = com.tkay.expressad.splash.js.SplashJsUtils.codeToJsonString(r14)     // Catch: java.lang.Throwable -> L6d
            r0.a(r13, r14)     // Catch: java.lang.Throwable -> L6d
        L6d:
            return
    }

    @Override
    public void resetCountdown(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L1b
            if (r1 != 0) goto L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1b
            r1.<init>(r2)     // Catch: org.json.JSONException -> L1b
            java.lang.String r2 = "countdown"
            int r1 = r1.getInt(r2)     // Catch: org.json.JSONException -> L1b
            com.tkay.expressad.splash.d.a r2 = r0.j     // Catch: org.json.JSONException -> L1b
            if (r2 == 0) goto L1a
            com.tkay.expressad.splash.d.a r2 = r0.j     // Catch: org.json.JSONException -> L1b
            r2.b(r1)     // Catch: org.json.JSONException -> L1b
        L1a:
            return
        L1b:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    @Override
    public void resumeCountDown(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L26
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L22
            r0.<init>(r4)     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = "countdown"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = com.tkay.expressad.splash.js.SplashJsUtils.codeToJsonString(r1)     // Catch: java.lang.Exception -> L1f
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L1f
            r1 = r4
            goto L26
        L1f:
            r3 = move-exception
            r1 = r4
            goto L23
        L22:
            r3 = move-exception
        L23:
            r3.getMessage()
        L26:
            com.tkay.expressad.splash.d.a r3 = r2.j
            if (r3 == 0) goto L2e
            r4 = 2
            r3.a(r4, r1)
        L2e:
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
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r6.c     // Catch: java.lang.Throwable -> L45
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L45
            if (r3 == 0) goto L42
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L45
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = r3.aZ()     // Catch: java.lang.Throwable -> L45
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Throwable -> L45
            if (r4 == 0) goto L21
            java.lang.String r4 = r6.d     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = "splash"
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
            r0.g = r1
            return
    }

    public void setCampaignList(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setCountdownS(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setDevCloseBtnStatus(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setSplashBridgeListener(com.tkay.expressad.splash.d.a r1) {
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
            com.tkay.expressad.splash.d.a r2 = r0.j     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.tkay.expressad.splash.d.a r2 = r0.j     // Catch: java.lang.Throwable -> L1a
            r2.a(r1)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.splash.d.a r1 = r0.j
            if (r1 == 0) goto L7
            r1.a()
        L7:
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
            r1.b = r0
            return
    }

    public void updateCountDown(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public void useCustomClose(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L4
            r2 = 2
            goto L5
        L4:
            r2 = 1
        L5:
            com.tkay.expressad.splash.d.a r0 = r1.j     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Le
            com.tkay.expressad.splash.d.a r0 = r1.j     // Catch: java.lang.Throwable -> Le
            r0.a(r2)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }
}
