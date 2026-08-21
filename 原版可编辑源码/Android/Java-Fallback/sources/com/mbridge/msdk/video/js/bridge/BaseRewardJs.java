package com.mbridge.msdk.video.js.bridge;

public class BaseRewardJs extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload implements com.mbridge.msdk.video.js.bridge.IRewardBridge {
    protected com.mbridge.msdk.video.js.bridge.IRewardBridge a;

    public BaseRewardJs() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(int r4) {
            r3 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "code"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L21
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L28
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L21
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L21
            r0 = r4
            goto L28
        L21:
            java.lang.String r4 = "JS-Reward-Brigde"
            java.lang.String r1 = "code to string is error"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)
        L28:
            return r0
    }

    @Override
    public void cai(java.lang.Object r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "cai"
            java.lang.String r1 = "exception: "
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cai:"
            r2.append(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "JS-Reward-Brigde"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            if (r2 == 0) goto L26
            java.lang.String r9 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r9)
            return
        L26:
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            if (r2 != 0) goto Lc8
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r2.<init>(r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r9 = "packageName"
            java.lang.String r9 = r2.optString(r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            if (r2 == 0) goto L42
            java.lang.String r2 = "packageName is empty"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r2)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
        L42:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            boolean r9 = com.mbridge.msdk.foundation.tools.ae.c(r2, r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r2 = 2
            if (r9 == 0) goto L53
            r9 = 1
            goto L54
        L53:
            r9 = r2
        L54:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r4.<init>()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r5 = "code"
            int r6 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r4.put(r5, r6)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r5.<init>()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r6 = "result"
            r5.put(r6, r9)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r9 = "data"
            r4.put(r9, r5)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            com.mbridge.msdk.mbjscommon.windvane.h r9 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r2 = android.util.Base64.encodeToString(r4, r2)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r9.a(r8, r2)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            goto Lc8
        L83:
            r9 = move-exception
            java.lang.String r2 = r9.getMessage()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r2)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            com.mbridge.msdk.foundation.tools.z.a(r3, r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            goto Lc8
        L93:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r9.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r9)
            goto Lc8
        Lae:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r9.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r9)
        Lc8:
            return
    }

    @Override
    public void getEndScreenInfo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.bridge.IRewardBridge r1 = r2.a     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L11
            com.mbridge.msdk.video.js.bridge.IRewardBridge r1 = r2.a     // Catch: java.lang.Throwable -> L33
            r1.getEndScreenInfo(r3, r4)     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = "getEndScreenInfo factory is true"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Throwable -> L33
            goto L39
        L11:
            java.lang.String r4 = "getEndScreenInfo factory is null"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L39
            r4 = r3
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.a     // Catch: java.lang.Throwable -> L33
            boolean r1 = r1 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L39
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.mbjscommon.windvane.d r1 = r4.getWebViewListener()     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L39
            com.mbridge.msdk.mbjscommon.windvane.d r4 = r4.getWebViewListener()     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.mbjscommon.c.a r4 = (com.mbridge.msdk.mbjscommon.c.a) r4     // Catch: java.lang.Throwable -> L33
            r4.a(r3)     // Catch: java.lang.Throwable -> L33
            goto L39
        L33:
            r3 = move-exception
            java.lang.String r4 = "getEndScreenInfo"
            com.mbridge.msdk.foundation.tools.z.c(r0, r4, r3)
        L39:
            return
    }

    @Override
    public void gial(java.lang.Object r8, java.lang.String r9) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "gial:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            java.lang.String r0 = "JS-Reward-Brigde"
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r9.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r9.put(r1, r2)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r1.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            if (r2 == 0) goto L47
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            if (r4 <= 0) goto L47
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r5 = 0
        L3b:
            if (r5 >= r4) goto L47
            java.lang.Object r6 = r2.get(r5)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r3.put(r6)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            int r5 = r5 + 1
            goto L3b
        L47:
            java.lang.String r2 = "packageNameList"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.lang.String r2 = "data"
            r9.put(r2, r1)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            byte[] r9 = r9.getBytes()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r2 = 2
            java.lang.String r9 = android.util.Base64.encodeToString(r9, r2)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r1.a(r8, r9)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            goto L85
        L66:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            java.lang.String r8 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
            goto L85
        L76:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            java.lang.String r8 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        L85:
            return
    }

    @Override
    public void handlerPlayableException(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            r0.handlerPlayableException(r2, r3)     // Catch: java.lang.Throwable -> L10
            goto L18
        L10:
            r2 = move-exception
            java.lang.String r3 = "JS-Reward-Brigde"
            java.lang.String r0 = "handlerPlayableException"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L18:
            return
    }

    @Override
    public void initialize(android.content.Context r8, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r9) {
            r7 = this;
            super.initialize(r8, r9)
            r0 = 0
            java.lang.String r1 = "com.mbridge.msdk.video.js.factory.IJSFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> Lf
            boolean r1 = r1.isInstance(r8)     // Catch: java.lang.ClassNotFoundException -> Lf
            goto L14
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = r0
        L14:
            if (r1 == 0) goto L42
            java.lang.String r1 = "com.mbridge.msdk.video.js.bridge.BaseRewardJsH5"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L59
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.js.bridge.IRewardBridge r2 = (com.mbridge.msdk.video.js.bridge.IRewardBridge) r2     // Catch: java.lang.Exception -> L59
            r7.a = r2     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "initialize"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L59
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r0] = r5     // Catch: java.lang.Exception -> L59
            java.lang.Class<com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView> r5 = com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView.class
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Exception -> L59
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.js.bridge.IRewardBridge r2 = r7.a     // Catch: java.lang.Exception -> L59
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L59
            r3[r0] = r8     // Catch: java.lang.Exception -> L59
            r3[r6] = r9     // Catch: java.lang.Exception -> L59
            r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L59
            goto L61
        L42:
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L61
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            boolean r8 = r8 instanceof com.mbridge.msdk.video.js.bridge.IRewardBridge     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L61
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.js.bridge.IRewardBridge r8 = (com.mbridge.msdk.video.js.bridge.IRewardBridge) r8     // Catch: java.lang.Exception -> L59
            r7.a = r8     // Catch: java.lang.Exception -> L59
            goto L61
        L59:
            r8 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r9 == 0) goto L61
            r8.printStackTrace()
        L61:
            return
    }

    @Override
    public void initialize(java.lang.Object r8, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r9) {
            r7 = this;
            super.initialize(r8, r9)
            r0 = 0
            java.lang.String r1 = "com.mbridge.msdk.video.js.factory.IJSFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> Lf
            boolean r1 = r1.isInstance(r8)     // Catch: java.lang.ClassNotFoundException -> Lf
            goto L14
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = r0
        L14:
            if (r1 == 0) goto L42
            java.lang.String r1 = "com.mbridge.msdk.video.js.bridge.BaseRewardJsH5"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L59
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.js.bridge.IRewardBridge r2 = (com.mbridge.msdk.video.js.bridge.IRewardBridge) r2     // Catch: java.lang.Exception -> L59
            r7.a = r2     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "initialize"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L59
            java.lang.Class<java.lang.Object> r5 = java.lang.Object.class
            r4[r0] = r5     // Catch: java.lang.Exception -> L59
            java.lang.Class<com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView> r5 = com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView.class
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Exception -> L59
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.js.bridge.IRewardBridge r2 = r7.a     // Catch: java.lang.Exception -> L59
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L59
            r3[r0] = r8     // Catch: java.lang.Exception -> L59
            r3[r6] = r9     // Catch: java.lang.Exception -> L59
            r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L59
            goto L61
        L42:
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L61
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            boolean r8 = r8 instanceof com.mbridge.msdk.video.js.bridge.IRewardBridge     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L61
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.js.bridge.IRewardBridge r8 = (com.mbridge.msdk.video.js.bridge.IRewardBridge) r8     // Catch: java.lang.Exception -> L59
            r7.a = r8     // Catch: java.lang.Exception -> L59
            goto L61
        L59:
            r8 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r9 == 0) goto L61
            r8.printStackTrace()
        L61:
            return
    }

    @Override
    public void install(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Reward-Brigde"
            java.lang.String r5 = r3.addDownloaderListener(r4, r5)
            com.mbridge.msdk.video.js.bridge.IRewardBridge r1 = r3.a     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L10
            com.mbridge.msdk.video.js.bridge.IRewardBridge r1 = r3.a     // Catch: java.lang.Throwable -> L4d
            r1.install(r4, r5)     // Catch: java.lang.Throwable -> L4d
            goto L53
        L10:
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L17
            return
        L17:
            if (r4 == 0) goto L47
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L4d
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.a     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r1 = r1.getObject()     // Catch: java.lang.Throwable -> L4d
            boolean r1 = r1 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L47
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.a     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r1 = r1.getObject()     // Catch: java.lang.Throwable -> L4d
            com.mbridge.msdk.video.js.a.j r1 = (com.mbridge.msdk.video.js.a.j) r1     // Catch: java.lang.Throwable -> L4d
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L4d
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L3e
            android.content.Context r2 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L4d
            if (r4 == r2) goto L3e
            r1.a(r4)     // Catch: java.lang.Throwable -> L4d
        L3e:
            r4 = 1
            r1.click(r4, r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = "JSCommon install jump success"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L4d
        L47:
            java.lang.String r4 = "JSCommon install failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L4d
            goto L53
        L4d:
            r4 = move-exception
            java.lang.String r5 = "install"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L53:
            return
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            r0.notifyCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> L10
            goto L18
        L10:
            r2 = move-exception
            java.lang.String r3 = "JS-Reward-Brigde"
            java.lang.String r0 = "notifyCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L18:
            return
    }

    @Override
    public void openURL(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "openURL:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "JS-Reward-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L22
            java.lang.String r4 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
            return
        L22:
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L5c
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            java.lang.String r4 = "url"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            java.lang.String r0 = "type"
            int r3 = r3.optInt(r0)     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            r0 = 1
            if (r3 != r0) goto L42
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            com.mbridge.msdk.click.c.a(r3, r4)     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            goto L5c
        L42:
            r0 = 2
            if (r3 != r0) goto L5c
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            com.mbridge.msdk.click.c.b(r3, r4)     // Catch: java.lang.Throwable -> L4b org.json.JSONException -> L54
            goto L5c
        L4b:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)
            goto L5c
        L54:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)
        L5c:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            r0.install(r1, r2)
            return
    }

    @Override
    public void setOrientation(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            r0.setOrientation(r2, r3)     // Catch: java.lang.Throwable -> L10
            goto L18
        L10:
            r2 = move-exception
            java.lang.String r3 = "JS-Reward-Brigde"
            java.lang.String r0 = "setOrientation"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L18:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r1.a     // Catch: java.lang.Throwable -> L10
            r0.toggleCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> L10
            goto L18
        L10:
            r2 = move-exception
            java.lang.String r3 = "JS-Reward-Brigde"
            java.lang.String r0 = "toggleCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L18:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r2.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto L24
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L24
            com.mbridge.msdk.video.js.bridge.IRewardBridge r0 = r2.a     // Catch: java.lang.Throwable -> L10
            r0.triggerCloseBtn(r3, r4)     // Catch: java.lang.Throwable -> L10
            goto L24
        L10:
            r4 = move-exception
            java.lang.String r0 = "JS-Reward-Brigde"
            java.lang.String r1 = "triggerCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r4)
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            r0 = -1
            java.lang.String r0 = r2.a(r0)
            r4.a(r3, r0)
        L24:
            return
    }
}
