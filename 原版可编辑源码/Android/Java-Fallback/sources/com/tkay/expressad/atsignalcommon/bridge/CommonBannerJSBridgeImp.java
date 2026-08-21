package com.tkay.expressad.atsignalcommon.bridge;

public abstract class CommonBannerJSBridgeImp implements com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge {
    public static final java.lang.String a = null;

    static {
            java.lang.Class<com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp> r0 = com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp.a = r0
            return
    }

    public CommonBannerJSBridgeImp() {
            r0 = this;
            r0.<init>()
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
    public void click(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void getFileInfo(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void getNetstat(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Lc
            java.lang.String r5 = "params is null"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r4, r5)
            return
        Lc:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L78
            if (r0 != 0) goto L31
            boolean r5 = r4 instanceof com.tkay.expressad.atsignalcommon.windvane.a     // Catch: java.lang.Exception -> L2d
            if (r5 == 0) goto L31
            r5 = r4
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5     // Catch: java.lang.Exception -> L2d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r5.a     // Catch: java.lang.Exception -> L2d
            if (r5 == 0) goto L31
            android.content.Context r5 = r5.getContext()     // Catch: java.lang.Exception -> L2d
            r0 = r5
            goto L31
        L2d:
            r5 = move-exception
            r5.getMessage()
        L31:
            r5 = 1
            if (r0 != 0) goto L40
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r5 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.codeToJsonString(r5)
            r0.a(r4, r5)
            return
        L40:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L69
            r0.<init>()     // Catch: java.lang.Throwable -> L69
            int r1 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Throwable -> L69
            java.lang.String r2 = "netstat"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L69
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L69
            if (r1 != 0) goto L61
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L69
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L69
        L61:
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L69
            r1.a(r4, r0)     // Catch: java.lang.Throwable -> L69
            return
        L69:
            r0 = move-exception
            r0.getMessage()
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r5 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.codeToJsonString(r5)
            r0.a(r4, r5)
        L78:
            return
    }

    @Override
    public void gial(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            r4.<init>()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            java.lang.String r0 = "code"
            int r1 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.b     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            r0.<init>()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            java.lang.String r1 = "data"
            r4.put(r1, r0)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L37
            return
        L2b:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r3, r0)
            r4.getMessage()
            return
        L37:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r3, r0)
            r4.getMessage()
            return
    }

    @Override
    public void handlerH5Exception(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void increaseOfferFrequence(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "params is null"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r2, r3)
            return
        Lc:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1a
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.increaseOfferFrequence(r2, r0)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    @Override
    public void init(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void install(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
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
    public void readyStatus(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
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
            java.lang.String r14 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.codeToJsonString(r14)     // Catch: java.lang.Throwable -> L6d
            r0.a(r13, r14)     // Catch: java.lang.Throwable -> L6d
        L6d:
            return
    }

    @Override
    public void resetCountdown(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void sendImpressions(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }
}
