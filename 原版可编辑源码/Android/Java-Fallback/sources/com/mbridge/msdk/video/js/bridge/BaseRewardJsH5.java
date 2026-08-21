package com.mbridge.msdk.video.js.bridge;

public class BaseRewardJsH5 implements com.mbridge.msdk.video.js.bridge.IRewardBridge {
    protected com.mbridge.msdk.video.js.factory.IJSFactory a;

    public BaseRewardJsH5() {
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
            if (r2 != 0) goto Lbc
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            r2.<init>(r9)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r9 = "packageName"
            java.lang.String r9 = r2.optString(r9)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            if (r2 == 0) goto L36
            java.lang.String r2 = "packageName is empty"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r2)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
        L36:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            boolean r9 = com.mbridge.msdk.foundation.tools.ae.c(r2, r9)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            r2 = 2
            if (r9 == 0) goto L47
            r9 = 1
            goto L48
        L47:
            r9 = r2
        L48:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            r4.<init>()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r5 = "code"
            int r6 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            r4.put(r5, r6)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            r5.<init>()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r6 = "result"
            r5.put(r6, r9)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r9 = "data"
            r4.put(r9, r5)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            com.mbridge.msdk.mbjscommon.windvane.h r9 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r2 = android.util.Base64.encodeToString(r4, r2)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            r9.a(r8, r2)     // Catch: java.lang.Exception -> L77 java.lang.Throwable -> L87 org.json.JSONException -> La2
            goto Lbc
        L77:
            r9 = move-exception
            java.lang.String r2 = r9.getMessage()     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r2)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            com.mbridge.msdk.foundation.tools.z.a(r3, r9)     // Catch: java.lang.Throwable -> L87 org.json.JSONException -> La2
            goto Lbc
        L87:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r9.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r9)
            goto Lbc
        La2:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r9.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r9)
        Lbc:
            return
    }

    @Override
    public void getEndScreenInfo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r4 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L3a
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.video.js.h r0 = r0.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L34
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L34
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L34
            if (r1 != 0) goto L25
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L34
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "getEndScreenInfo success"
            com.mbridge.msdk.foundation.tools.z.a(r4, r1)     // Catch: java.lang.Throwable -> L34
            goto L2c
        L25:
            java.lang.String r0 = ""
            java.lang.String r1 = "getEndScreenInfo failed"
            com.mbridge.msdk.foundation.tools.z.a(r4, r1)     // Catch: java.lang.Throwable -> L34
        L2c:
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L34
            r1.a(r3, r0)     // Catch: java.lang.Throwable -> L34
            goto L3a
        L34:
            r3 = move-exception
            java.lang.String r0 = "getEndScreenInfo"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L3a:
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
    public void handlerPlayableException(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "msg"
            java.lang.String r0 = r0.optString(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "handlerPlayableException,msg:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L35
            r1.append(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.h r5 = r5.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L35
            r5.c(r0)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r5 = move-exception
            java.lang.String r0 = "setOrientation"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r5)
        L3b:
            return
    }

    public void initialize(android.content.Context r1, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2) {
            r0 = this;
            boolean r2 = r1 instanceof com.mbridge.msdk.video.js.factory.IJSFactory
            if (r2 == 0) goto L8
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = (com.mbridge.msdk.video.js.factory.IJSFactory) r1
            r0.a = r1
        L8:
            return
    }

    public void initialize(java.lang.Object r1, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2) {
            r0 = this;
            boolean r2 = r1 instanceof com.mbridge.msdk.video.js.factory.IJSFactory
            if (r2 == 0) goto L8
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = (com.mbridge.msdk.video.js.factory.IJSFactory) r1
            r0.a = r1
        L8:
            return
    }

    @Override
    public void install(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L6b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L65
            r1.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r2 = "install:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L65
            r1.append(r5)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L43
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.a     // Catch: java.lang.Throwable -> L65
            java.lang.Object r1 = r1.getObject()     // Catch: java.lang.Throwable -> L65
            boolean r1 = r1 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L43
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.a     // Catch: java.lang.Throwable -> L65
            java.lang.Object r1 = r1.getObject()     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.video.js.a.j r1 = (com.mbridge.msdk.video.js.a.j) r1     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L43
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L65
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L43
            android.content.Context r2 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L65
            if (r4 == r2) goto L43
            r1.a(r4)     // Catch: java.lang.Throwable -> L65
        L43:
            com.mbridge.msdk.video.js.factory.IJSFactory r4 = r3.a     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.video.js.e r4 = r4.getJSContainerModule()     // Catch: java.lang.Throwable -> L65
            boolean r4 = r4.endCardShowing()     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L5a
            com.mbridge.msdk.video.js.factory.IJSFactory r4 = r3.a     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()     // Catch: java.lang.Throwable -> L65
            r1 = 3
            r4.click(r1, r5)     // Catch: java.lang.Throwable -> L65
            goto L6b
        L5a:
            com.mbridge.msdk.video.js.factory.IJSFactory r4 = r3.a     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()     // Catch: java.lang.Throwable -> L65
            r1 = 1
            r4.click(r1, r5)     // Catch: java.lang.Throwable -> L65
            goto L6b
        L65:
            r4 = move-exception
            java.lang.String r5 = "install"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L6b:
            return
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "state"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "notifyCloseBtn,state:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L35
            r1.append(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.h r5 = r5.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L35
            r5.notifyCloseBtn(r0)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r5 = move-exception
            java.lang.String r0 = "notifyCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r5)
        L3b:
            return
    }

    @Override
    public void openURL(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "openURL:"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "JS-Reward-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L71
            if (r0 != 0) goto L3e
            boolean r2 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L36
            if (r2 == 0) goto L3e
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Exception -> L36
            if (r4 == 0) goto L3e
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Exception -> L36
            r0 = r4
            goto L3e
        L36:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L3e:
            if (r0 != 0) goto L41
            return
        L41:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L60 org.json.JSONException -> L69
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L60 org.json.JSONException -> L69
            java.lang.String r5 = "url"
            java.lang.String r5 = r4.optString(r5)     // Catch: java.lang.Throwable -> L60 org.json.JSONException -> L69
            java.lang.String r2 = "type"
            int r4 = r4.optInt(r2)     // Catch: java.lang.Throwable -> L60 org.json.JSONException -> L69
            r2 = 1
            if (r4 != r2) goto L59
            com.mbridge.msdk.click.c.a(r0, r5)     // Catch: java.lang.Throwable -> L60 org.json.JSONException -> L69
            goto L71
        L59:
            r2 = 2
            if (r4 != r2) goto L71
            com.mbridge.msdk.click.c.b(r0, r5)     // Catch: java.lang.Throwable -> L60 org.json.JSONException -> L69
            goto L71
        L60:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
            goto L71
        L69:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L71:
            return
    }

    @Override
    public void setOrientation(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "state"
            java.lang.String r0 = r0.optString(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "setOrientation,state:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L35
            r1.append(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.h r5 = r5.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L35
            r5.b(r0)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r5 = move-exception
            java.lang.String r0 = "setOrientation"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r5)
        L3b:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "state"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "toggleCloseBtn,state:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L35
            r1.append(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.h r5 = r5.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L35
            r5.toggleCloseBtn(r0)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r5 = move-exception
            java.lang.String r0 = "toggleCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r5)
        L3b:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Reward-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L53
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L41
            if (r1 != 0) goto L53
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L41
            r2 = 0
            java.lang.String r2 = r3.a(r2)     // Catch: java.lang.Throwable -> L41
            r1.a(r4, r2)     // Catch: java.lang.Throwable -> L41
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L41
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "state"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r3.a     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.video.js.h r2 = r2.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L41
            r2.a(r1)     // Catch: java.lang.Throwable -> L41
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "triggerCloseBtn,state:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L41
            r1.append(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)     // Catch: java.lang.Throwable -> L41
            goto L53
        L41:
            r5 = move-exception
            java.lang.String r1 = "triggerCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r5)
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            r0 = -1
            java.lang.String r0 = r3.a(r0)
            r5.a(r4, r0)
        L53:
            return
    }
}
