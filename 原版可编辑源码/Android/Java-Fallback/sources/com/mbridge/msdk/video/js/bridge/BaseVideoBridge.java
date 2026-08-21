package com.mbridge.msdk.video.js.bridge;

public class BaseVideoBridge extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload implements com.mbridge.msdk.video.js.bridge.IVideoBridge {
    protected com.mbridge.msdk.video.js.factory.IJSFactory a;
    private com.mbridge.msdk.foundation.tools.FastKV b;


    public BaseVideoBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(int r1) {
            r0 = this;
            switch(r1) {
                case 1: goto L15;
                case 2: goto L12;
                case 3: goto Lf;
                case 4: goto Lc;
                case 5: goto L9;
                case 6: goto L6;
                default: goto L3;
            }
        L3:
            java.lang.String r1 = ""
            goto L17
        L6:
            java.lang.String r1 = "sdkSetting"
            goto L17
        L9:
            java.lang.String r1 = "device"
            goto L17
        Lc:
            java.lang.String r1 = "unitSetting"
            goto L17
        Lf:
            java.lang.String r1 = "appSetting"
            goto L17
        L12:
            java.lang.String r1 = "unit_id"
            goto L17
        L15:
            java.lang.String r1 = "sdk_info"
        L17:
            return r1
    }

    private void a(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2d
            if (r4 == 0) goto L37
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r4.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "code"
            r1 = 1
            r4.put(r0, r1)     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "message"
            java.lang.String r1 = "params is null"
            r4.put(r0, r1)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L2d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Exception -> L2d
            r0.a(r3, r4)     // Catch: java.lang.Exception -> L2d
            return
        L2d:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L37:
            return
    }

    private java.lang.String b(int r4) {
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
            java.lang.String r4 = "JS-Video-Brigde"
            java.lang.String r1 = "code to string is error"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)
        L28:
            return r0
    }

    @Override
    public void appendSubView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.i(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "appendSubView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void appendViewTo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.j(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "appendViewTo error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void bringViewToFront(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.m(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "bringViewToFront error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void broadcast(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.K(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "broadcast error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
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
            java.lang.String r3 = "JS-Video-Brigde"
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
    public void clearAllCache(java.lang.Object r9, java.lang.String r10) {
            r8 = this;
            com.mbridge.msdk.foundation.controller.b r10 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r10 = r10.d()
            java.lang.String r0 = "MBridgeH5CacheSP"
            if (r10 == 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV r10 = r8.b
            if (r10 != 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV$Builder r10 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)     // Catch: java.lang.Exception -> L22
            r10.<init>(r1, r0)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.FastKV r10 = r10.build()     // Catch: java.lang.Exception -> L22
            r8.b = r10     // Catch: java.lang.Exception -> L22
            goto L25
        L22:
            r10 = 0
            r8.b = r10
        L25:
            com.mbridge.msdk.foundation.tools.FastKV r10 = r8.b
            r1 = 2
            java.lang.String r2 = "Success"
            java.lang.String r3 = "message"
            java.lang.String r4 = "code"
            java.lang.String r5 = "getAllCache error "
            java.lang.String r6 = "JS-Video-Brigde"
            r7 = 0
            if (r10 == 0) goto L6d
            r10.clear()     // Catch: java.lang.Throwable -> L59
            if (r9 == 0) goto Lb8
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L59
            r10.<init>()     // Catch: java.lang.Throwable -> L59
            r10.put(r4, r7)     // Catch: java.lang.Throwable -> L59
            r10.put(r3, r2)     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L59
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L59
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Throwable -> L59
            java.lang.String r10 = android.util.Base64.encodeToString(r10, r1)     // Catch: java.lang.Throwable -> L59
            r0.a(r9, r10)     // Catch: java.lang.Throwable -> L59
            goto Lb8
        L59:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r5)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.d(r6, r9)
            goto Lb8
        L6d:
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La5
            android.content.Context r10 = r10.j()     // Catch: java.lang.Throwable -> La5
            android.content.SharedPreferences r10 = r10.getSharedPreferences(r0, r7)     // Catch: java.lang.Throwable -> La5
            android.content.SharedPreferences$Editor r10 = r10.edit()     // Catch: java.lang.Throwable -> La5
            android.content.SharedPreferences$Editor r10 = r10.clear()     // Catch: java.lang.Throwable -> La5
            r10.apply()     // Catch: java.lang.Throwable -> La5
            if (r9 == 0) goto Lb8
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La5
            r10.<init>()     // Catch: java.lang.Throwable -> La5
            r10.put(r4, r7)     // Catch: java.lang.Throwable -> La5
            r10.put(r3, r2)     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> La5
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> La5
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Throwable -> La5
            java.lang.String r10 = android.util.Base64.encodeToString(r10, r1)     // Catch: java.lang.Throwable -> La5
            r0.a(r9, r10)     // Catch: java.lang.Throwable -> La5
            goto Lb8
        La5:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r5)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.d(r6, r9)
        Lb8:
            return
    }

    @Override
    public void click(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "click"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L9b
            if (r1 != 0) goto La1
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f java.lang.Throwable -> L9b
            r1.<init>(r7)     // Catch: org.json.JSONException -> L1f java.lang.Throwable -> L9b
            java.lang.String r7 = "type"
            int r7 = r1.optInt(r7)     // Catch: org.json.JSONException -> L1f java.lang.Throwable -> L9b
            java.lang.String r2 = "pt"
            java.lang.String r1 = r1.optString(r2)     // Catch: org.json.JSONException -> L1f java.lang.Throwable -> L9b
            goto L28
        L1f:
            r7 = move-exception
            r1 = 1
            java.lang.String r2 = ""
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L9b
            r7 = r1
            r1 = r2
        L28:
            com.mbridge.msdk.video.js.bridge.BaseVideoBridge$1 r2 = new com.mbridge.msdk.video.js.bridge.BaseVideoBridge$1     // Catch: java.lang.Throwable -> L9b
            r2.<init>(r5, r6)     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r5.a     // Catch: java.lang.Throwable -> L9b
            if (r3 == 0) goto L6b
            if (r6 == 0) goto L58
            com.mbridge.msdk.mbjscommon.windvane.a r6 = (com.mbridge.msdk.mbjscommon.windvane.a) r6     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r6.a     // Catch: java.lang.Throwable -> L9b
            if (r3 == 0) goto L58
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r6.a     // Catch: java.lang.Throwable -> L9b
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Throwable -> L9b
            if (r3 == 0) goto L58
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r6.a     // Catch: java.lang.Throwable -> L9b
            android.content.Context r6 = r6.getContext()     // Catch: java.lang.Throwable -> L9b
            if (r6 == 0) goto L58
            android.content.Context r3 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L9b
            if (r6 == r3) goto L58
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r5.a     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.video.js.c r3 = r3.getJSCommon()     // Catch: java.lang.Throwable -> L9b
            r3.a(r6)     // Catch: java.lang.Throwable -> L9b
        L58:
            com.mbridge.msdk.video.js.factory.IJSFactory r6 = r5.a     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.video.js.c r6 = r6.getJSCommon()     // Catch: java.lang.Throwable -> L9b
            r6.a(r2)     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.video.js.factory.IJSFactory r6 = r5.a     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.video.js.c r6 = r6.getJSCommon()     // Catch: java.lang.Throwable -> L9b
            r6.click(r7, r1)     // Catch: java.lang.Throwable -> L9b
            goto La1
        L6b:
            if (r6 == 0) goto La1
            com.mbridge.msdk.mbjscommon.windvane.a r6 = (com.mbridge.msdk.mbjscommon.windvane.a) r6     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r6.a     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r3 = r3.getObject()     // Catch: java.lang.Throwable -> L9b
            boolean r3 = r3 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L9b
            if (r3 == 0) goto La1
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r6.a     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r3 = r3.getObject()     // Catch: java.lang.Throwable -> L9b
            com.mbridge.msdk.video.js.a.j r3 = (com.mbridge.msdk.video.js.a.j) r3     // Catch: java.lang.Throwable -> L9b
            if (r3 == 0) goto La1
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r6.a     // Catch: java.lang.Throwable -> L9b
            android.content.Context r6 = r6.getContext()     // Catch: java.lang.Throwable -> L9b
            if (r6 == 0) goto L94
            android.content.Context r4 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L9b
            if (r6 == r4) goto L94
            r3.a(r6)     // Catch: java.lang.Throwable -> L9b
        L94:
            r3.a(r2)     // Catch: java.lang.Throwable -> L9b
            r3.click(r7, r1)     // Catch: java.lang.Throwable -> L9b
            goto La1
        L9b:
            r6 = move-exception
            java.lang.String r7 = "click error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r6)
        La1:
            return
    }

    @Override
    public void closeAd(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.J(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "closeAd error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void closeVideoOperte(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r4.a     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L55
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto L55
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4f
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r6 = "close"
            int r6 = r1.optInt(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = "view_visible"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L4f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4f
            r2.<init>()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "closeVideoOperte,close:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L4f
            r2.append(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = ",viewVisible:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L4f
            r2.append(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r4.a     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L4f
            r2.closeVideoOperate(r6, r1)     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L4f
            r1 = 0
            java.lang.String r1 = r4.b(r1)     // Catch: java.lang.Throwable -> L4f
            r6.a(r5, r1)     // Catch: java.lang.Throwable -> L4f
            goto L55
        L4f:
            r5 = move-exception
            java.lang.String r6 = "closeOperte error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r6, r5)
        L55:
            return
    }

    @Override
    public void closeWeb(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "type"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L1d
            return
        L1d:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L4b
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L45
            if (r2 != 0) goto L4b
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L45
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = "status"
            int r2 = r2.optInt(r3)     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r1.a     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.video.js.e r3 = r3.getJSContainerModule()     // Catch: java.lang.Throwable -> L45
            r3.hideAlertWebview()     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r1.a     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.video.js.i r3 = r3.getJSVideoModule()     // Catch: java.lang.Throwable -> L45
            r3.hideAlertView(r2)     // Catch: java.lang.Throwable -> L45
            goto L4b
        L45:
            r2 = move-exception
            java.lang.String r3 = "closeWeb"
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
        L4b:
            return
    }

    @Override
    public void createNativeEC(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.P(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "createNativeEC error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void createPlayerView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.c(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "createPlayerView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void createSubPlayTemplateView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.d(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "createSubPlayTemplateView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void createView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "createWebview error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void createWebview(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.b(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "createWebview error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void destroyComponent(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.e(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "destroyComponent error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void getAllCache(java.lang.Object r9, java.lang.String r10) {
            r8 = this;
            com.mbridge.msdk.foundation.controller.b r10 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r10 = r10.d()
            java.lang.String r0 = "MBridgeH5CacheSP"
            r1 = 0
            if (r10 == 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV r10 = r8.b
            if (r10 != 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV$Builder r10 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L23
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Exception -> L23
            r10.<init>(r2, r0)     // Catch: java.lang.Exception -> L23
            com.mbridge.msdk.foundation.tools.FastKV r10 = r10.build()     // Catch: java.lang.Exception -> L23
            r8.b = r10     // Catch: java.lang.Exception -> L23
            goto L25
        L23:
            r8.b = r1
        L25:
            com.mbridge.msdk.foundation.tools.FastKV r10 = r8.b
            java.lang.String r2 = "getAllCache Success"
            r3 = 0
            java.lang.String r4 = "getAllCache Error, reason is : "
            java.lang.String r5 = "getAllCache error "
            java.lang.String r6 = "JS-Video-Brigde"
            if (r10 == 0) goto L8c
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L65
            r10.<init>()     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.foundation.tools.FastKV r0 = r8.b     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            java.util.Map r1 = r0.getAll()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            goto L41
        L3e:
            r0 = move-exception
            r1 = r10
            goto L66
        L41:
            if (r1 == 0) goto Lef
            java.util.Set r0 = r1.entrySet()     // Catch: java.lang.Throwable -> L3e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3e
        L4b:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto Lef
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3e
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r7 = r1.getKey()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L3e
            r10.put(r7, r1)     // Catch: java.lang.Throwable -> L3e
            goto L4b
        L65:
            r0 = move-exception
        L66:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r5)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.d(r6, r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r4)
            java.lang.String r0 = r0.getMessage()
            r10.append(r0)
            java.lang.String r2 = r10.toString()
            goto Lee
        L8c:
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lc8
            android.content.Context r10 = r10.j()     // Catch: java.lang.Throwable -> Lc8
            android.content.SharedPreferences r10 = r10.getSharedPreferences(r0, r3)     // Catch: java.lang.Throwable -> Lc8
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc8
            r0.<init>()     // Catch: java.lang.Throwable -> Lc8
            java.util.Map r10 = r10.getAll()     // Catch: java.lang.Throwable -> Lc5
            java.util.Set r10 = r10.entrySet()     // Catch: java.lang.Throwable -> Lc5
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Throwable -> Lc5
        La9:
            boolean r1 = r10.hasNext()     // Catch: java.lang.Throwable -> Lc5
            if (r1 == 0) goto Lc3
            java.lang.Object r1 = r10.next()     // Catch: java.lang.Throwable -> Lc5
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> Lc5
            java.lang.Object r7 = r1.getKey()     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> Lc5
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> Lc5
            r0.put(r7, r1)     // Catch: java.lang.Throwable -> Lc5
            goto La9
        Lc3:
            r10 = r0
            goto Lef
        Lc5:
            r10 = move-exception
            r1 = r0
            goto Lc9
        Lc8:
            r10 = move-exception
        Lc9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r6, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r10 = r10.getMessage()
            r0.append(r10)
            java.lang.String r2 = r0.toString()
        Lee:
            r10 = r1
        Lef:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L122
            r0.<init>()     // Catch: java.lang.Throwable -> L122
            java.lang.String r1 = "code"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L122
            java.lang.String r1 = "message"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L122
            java.lang.String r1 = "data"
            if (r10 == 0) goto L106
            r0.put(r1, r10)     // Catch: java.lang.Throwable -> L122
            goto L10b
        L106:
            java.lang.String r10 = "{}"
            r0.put(r1, r10)     // Catch: java.lang.Throwable -> L122
        L10b:
            if (r9 == 0) goto L135
            com.mbridge.msdk.mbjscommon.windvane.h r10 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L122
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L122
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L122
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L122
            r10.a(r9, r0)     // Catch: java.lang.Throwable -> L122
            goto L135
        L122:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r5)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.d(r6, r9)
        L135:
            return
    }

    @Override
    public void getAppSetting(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7e
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "appid"
            java.lang.String r1 = ""
            java.lang.String r8 = r0.optString(r8, r1)     // Catch: java.lang.Throwable -> L7e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7e
            r0.<init>()     // Catch: java.lang.Throwable -> L7e
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L7e
            r2 = 1
            java.lang.String r3 = "message"
            java.lang.String r4 = "code"
            if (r1 != 0) goto L61
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = r1.c(r8)     // Catch: java.lang.Throwable -> L7e
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L7e
            r5 = 0
            if (r1 == 0) goto L3e
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L7e
            com.mbridge.msdk.c.a r8 = r8.b()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = r8.bd()     // Catch: java.lang.Throwable -> L7e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7e
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L7e
            goto L48
        L3e:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7e
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "isDefault"
            r1.put(r8, r5)     // Catch: java.lang.Throwable -> L7e
        L48:
            if (r7 == 0) goto L58
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "Success"
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "data"
            r0.put(r8, r1)     // Catch: java.lang.Throwable -> L7e
            goto L69
        L58:
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "Get App Setting error, plz try again later."
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
            goto L69
        L61:
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "Get App Setting error, because must give a appId."
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
        L69:
            com.mbridge.msdk.mbjscommon.windvane.h r8 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7e
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L7e
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L7e
            r8.a(r7, r0)     // Catch: java.lang.Throwable -> L7e
            goto L99
        L7e:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "getAppSetting error : "
            r8.append(r0)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            java.lang.String r8 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)
        L99:
            return
    }

    @Override
    public void getComponentOptions(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.f(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "getComponentOptions error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void getCurrentProgress(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r5 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L41
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L3b
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r0.getCurrentProgress()     // Catch: java.lang.Throwable -> L3b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b
            r1.<init>()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "getCurrentProgress:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3b
            r1.append(r0)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3b
            com.mbridge.msdk.foundation.tools.z.b(r5, r1)     // Catch: java.lang.Throwable -> L3b
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3b
            if (r1 != 0) goto L33
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L3b
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L3b
        L33:
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L3b
            r1.a(r4, r0)     // Catch: java.lang.Throwable -> L3b
            goto L41
        L3b:
            r4 = move-exception
            java.lang.String r0 = "getCurrentProgress error"
            com.mbridge.msdk.foundation.tools.z.c(r5, r0, r4)
        L41:
            return
    }

    @Override
    public void getCutout(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r6 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.a     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = r0.j()     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.foundation.tools.z.d(r6, r0)     // Catch: java.lang.Throwable -> L4e
            r1 = 2
            if (r5 == 0) goto L28
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L4e
            if (r2 != 0) goto L28
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L4e
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L4e
            r2.a(r5, r0)     // Catch: java.lang.Throwable -> L4e
            goto L67
        L28:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4e
            r0.<init>()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "code"
            r3 = 1
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "message"
            java.lang.String r3 = "No notch data, plz try again later."
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L4e
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L4e
            r2.b(r5, r0)     // Catch: java.lang.Throwable -> L4e
            goto L67
        L4e:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getCutout error : "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L67:
            return
    }

    @Override
    public void getEncryptPrice(java.lang.Object r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "not replaced"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7b
            r2.<init>()     // Catch: java.lang.Throwable -> L7b
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7b
            r3.<init>()     // Catch: java.lang.Throwable -> L7b
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L7b
            r5 = 1
            if (r4 == 0) goto L18
            java.lang.String r9 = "params is null"
            goto L57
        L18:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7b
            r4.<init>(r9)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r9 = "unitid"
            java.lang.String r9 = r4.optString(r9, r0)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r6 = "requestId"
            java.lang.String r0 = r4.optString(r6, r0)     // Catch: java.lang.Throwable -> L7b
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L7b
            if (r4 != 0) goto L55
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L7b
            if (r4 != 0) goto L55
            com.mbridge.msdk.foundation.entity.d r9 = com.mbridge.msdk.foundation.same.a.d.b(r9, r0)     // Catch: java.lang.Throwable -> L7b
            if (r9 == 0) goto L53
            int r0 = r9.d()     // Catch: java.lang.Throwable -> L7b
            if (r0 != r5) goto L53
            r0 = 0
            java.lang.String r1 = "success"
            java.lang.String r4 = "encrypt_p"
            java.lang.String r9 = r9.b()     // Catch: java.lang.Throwable -> L7b
            r3.put(r4, r9)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r9 = "irlfa"
            r3.put(r9, r5)     // Catch: java.lang.Throwable -> L7b
            r5 = r0
        L53:
            r9 = r1
            goto L57
        L55:
            java.lang.String r9 = "params parsing exception"
        L57:
            java.lang.String r0 = "code"
            r2.put(r0, r5)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "message"
            r2.put(r0, r9)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r9 = "data"
            r2.put(r9, r3)     // Catch: java.lang.Throwable -> L7b
            com.mbridge.msdk.mbjscommon.windvane.h r9 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L7b
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L7b
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L7b
            r9.a(r8, r0)     // Catch: java.lang.Throwable -> L7b
            goto L96
        L7b:
            r8 = move-exception
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "getEncryptPrice error : "
            r9.append(r0)
            java.lang.String r8 = r8.getMessage()
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            java.lang.String r9 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        L96:
            return
    }

    @Override
    public void getFileInfo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.O(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L18
        L10:
            r3 = move-exception
            java.lang.String r4 = "JS-Video-Brigde"
            java.lang.String r0 = "getFileInfo error"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L18:
            return
    }

    @Override
    public void getRewardSetting(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            com.mbridge.msdk.videocommon.d.b r6 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.videocommon.d.a r6 = r6.b()     // Catch: java.lang.Throwable -> L46
            org.json.JSONObject r6 = r6.k()     // Catch: java.lang.Throwable -> L46
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "message"
            java.lang.String r2 = "code"
            if (r5 == 0) goto L28
            if (r6 == 0) goto L28
            r3 = 0
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = "Success"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "data"
            r0.put(r1, r6)     // Catch: java.lang.Throwable -> L46
            goto L31
        L28:
            r6 = 1
            r0.put(r2, r6)     // Catch: java.lang.Throwable -> L46
            java.lang.String r6 = "Get Reward Setting error, plz try again later."
            r0.put(r1, r6)     // Catch: java.lang.Throwable -> L46
        L31:
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L46
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L46
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L46
            r6.a(r5, r0)     // Catch: java.lang.Throwable -> L46
            goto L61
        L46:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "getRewardSetting error : "
            r6.append(r0)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.String r6 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L61:
            return
    }

    @Override
    public void getRewardUnitSetting(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6e
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = "appid"
            java.lang.String r8 = r1.optString(r8, r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r2 = "unitid"
            java.lang.String r0 = r1.optString(r2, r0)     // Catch: java.lang.Throwable -> L6e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6e
            r1.<init>()     // Catch: java.lang.Throwable -> L6e
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L6e
            r3 = 1
            java.lang.String r4 = "message"
            java.lang.String r5 = "code"
            if (r2 != 0) goto L51
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L6e
            if (r2 != 0) goto L51
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L6e
            com.mbridge.msdk.videocommon.d.c r8 = r2.a(r8, r0)     // Catch: java.lang.Throwable -> L6e
            org.json.JSONObject r8 = r8.G()     // Catch: java.lang.Throwable -> L6e
            if (r7 == 0) goto L48
            if (r8 == 0) goto L48
            r0 = 0
            r1.put(r5, r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = "Success"
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = "data"
            r1.put(r0, r8)     // Catch: java.lang.Throwable -> L6e
            goto L59
        L48:
            r1.put(r5, r3)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = "Get Reward Unit Setting error, plz try again later."
            r1.put(r4, r8)     // Catch: java.lang.Throwable -> L6e
            goto L59
        L51:
            r1.put(r5, r3)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = "Get reward unit Setting error, because must give appId and unitId."
            r1.put(r4, r8)     // Catch: java.lang.Throwable -> L6e
        L59:
            com.mbridge.msdk.mbjscommon.windvane.h r8 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L6e
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L6e
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L6e
            r8.a(r7, r0)     // Catch: java.lang.Throwable -> L6e
            goto L89
        L6e:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "getRewardUnitSetting error : "
            r8.append(r0)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            java.lang.String r8 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)
        L89:
            return
    }

    @Override
    public void getSDKInfo(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "getSDKInfo"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L8e
            if (r1 != 0) goto L84
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8e
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r8 = "type"
            org.json.JSONArray r8 = r1.getJSONArray(r8)     // Catch: java.lang.Throwable -> L8e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8e
            r1.<init>()     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r6.a     // Catch: java.lang.Throwable -> L8e
            r3 = 0
            if (r2 == 0) goto L40
        L22:
            int r2 = r8.length()     // Catch: java.lang.Throwable -> L8e
            if (r3 >= r2) goto L6f
            int r2 = r8.getInt(r3)     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.video.js.factory.IJSFactory r4 = r6.a     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r4 = r4.h(r2)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r2 = r6.a(r2)     // Catch: java.lang.Throwable -> L8e
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L8e
            int r3 = r3 + 1
            goto L22
        L40:
            if (r7 == 0) goto L6f
        L42:
            int r2 = r8.length()     // Catch: java.lang.Throwable -> L8e
            if (r3 >= r2) goto L6f
            int r2 = r8.getInt(r3)     // Catch: java.lang.Throwable -> L8e
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L8e
            java.lang.Object r5 = r5.getObject()     // Catch: java.lang.Throwable -> L8e
            boolean r5 = r5 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L8e
            if (r5 == 0) goto L6c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L8e
            java.lang.Object r4 = r4.getObject()     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.video.js.a.j r4 = (com.mbridge.msdk.video.js.a.j) r4     // Catch: java.lang.Throwable -> L8e
            java.lang.String r5 = r6.a(r2)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r2 = r4.h(r2)     // Catch: java.lang.Throwable -> L8e
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L8e
        L6c:
            int r3 = r3 + 1
            goto L42
        L6f:
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L8e
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Throwable -> L8e
            r1 = 2
            java.lang.String r8 = android.util.Base64.encodeToString(r8, r1)     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L8e
            r1.a(r7, r8)     // Catch: java.lang.Throwable -> L8e
            goto L9d
        L84:
            com.mbridge.msdk.mbjscommon.windvane.h r8 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r1 = "params is null"
            r8.b(r7, r1)     // Catch: java.lang.Throwable -> L8e
            goto L9d
        L8e:
            r8 = move-exception
            java.lang.String r1 = "getSDKInfo error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r8)
            com.mbridge.msdk.mbjscommon.windvane.h r8 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r0 = "exception"
            r8.b(r7, r0)
        L9d:
            return
    }

    @Override
    public void getUnitSetting(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27
            r4.<init>()     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = "code"
            r1 = 1
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = "message"
            java.lang.String r1 = "Get Unit Setting error, RV/IV can not support this method."
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L27
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L27
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L27
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L27
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L27
            goto L42
        L27:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "getUnitSetting error : "
            r4.append(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L42:
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
            java.lang.String r0 = "JS-Video-Brigde"
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
    public void handleNativeObject(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.b r0 = com.mbridge.msdk.video.bt.a.b.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "handleNativeObject error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void handlerH5Exception(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L3f
            if (r0 == 0) goto L45
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3f
            if (r0 != 0) goto L45
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3f
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L3f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r1.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "handlerH5Exception,params:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3f
            r1.append(r5)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.foundation.tools.z.b(r4, r5)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r5 = "code"
            r1 = -999(0xfffffffffffffc19, float:NaN)
            int r5 = r0.optInt(r5, r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "message"
            java.lang.String r2 = "h5 error"
            java.lang.String r0 = r0.optString(r1, r2)     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.video.js.c r1 = r1.getJSCommon()     // Catch: java.lang.Throwable -> L3f
            r1.handlerH5Exception(r5, r0)     // Catch: java.lang.Throwable -> L3f
            goto L45
        L3f:
            r5 = move-exception
            java.lang.String r0 = "handlerH5Exception"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r5)
        L45:
            return
    }

    @Override
    public void hideView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.n(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "hideView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void increaseOfferFrequence(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.N(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "increaseOfferFrequence error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void init(java.lang.Object r18, java.lang.String r19) {
            r17 = this;
            r1 = r17
            r0 = r18
            r2 = r19
            java.lang.String r3 = "JS-Video-Brigde"
            java.lang.String r4 = "init"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)
            com.mbridge.msdk.video.js.factory.IJSFactory r4 = r1.a     // Catch: java.lang.Throwable -> L13e
            java.lang.String r6 = "showAlertRole"
            java.lang.String r7 = "webfront"
            java.lang.String r8 = "h5cbp"
            java.lang.String r9 = "orientationType"
            java.lang.String r10 = "closeType"
            java.lang.String r11 = "mute"
            java.lang.String r12 = "showTransparent"
            r13 = 2
            r14 = 1
            if (r4 == 0) goto Lba
            com.mbridge.msdk.video.js.factory.IJSFactory r4 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            java.lang.String r4 = r4.d()     // Catch: java.lang.Throwable -> L13e
            boolean r15 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L13e
            if (r15 != 0) goto L39
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L13e
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r13)     // Catch: java.lang.Throwable -> L13e
        L39:
            com.mbridge.msdk.mbjscommon.windvane.h r13 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L13e
            r13.a(r0, r4)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            r0.b(r14)     // Catch: java.lang.Throwable -> L13e
            boolean r0 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Throwable -> L13e
            if (r0 != 0) goto L144
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13e
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L13e
            int r2 = r0.optInt(r12)     // Catch: java.lang.Throwable -> L13e
            int r4 = r0.optInt(r11)     // Catch: java.lang.Throwable -> L13e
            int r10 = r0.optInt(r10)     // Catch: java.lang.Throwable -> L13e
            int r9 = r0.optInt(r9)     // Catch: java.lang.Throwable -> L13e
            int r8 = r0.optInt(r8)     // Catch: java.lang.Throwable -> L13e
            int r7 = r0.optInt(r7)     // Catch: java.lang.Throwable -> L13e
            int r0 = r0.optInt(r6)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r6 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r6 = r6.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            if (r2 != r14) goto L7a
            r5 = r14
            goto L7b
        L7a:
            r5 = 0
        L7b:
            r6.a(r5)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            r2.b(r4)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            r2.c(r10)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            r2.d(r9)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            r2.e(r8)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            r2.f(r7)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L13e
            if (r0 != 0) goto Lb4
            goto Lb5
        Lb4:
            r14 = r0
        Lb5:
            r2.i(r14)     // Catch: java.lang.Throwable -> L13e
            goto L144
        Lba:
            if (r0 == 0) goto L144
            r4 = r0
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r15 = r4.a     // Catch: java.lang.Throwable -> L13e
            java.lang.Object r15 = r15.getObject()     // Catch: java.lang.Throwable -> L13e
            boolean r15 = r15 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L13e
            if (r15 == 0) goto L144
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L13e
            java.lang.Object r4 = r4.getObject()     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.js.a.j r4 = (com.mbridge.msdk.video.js.a.j) r4     // Catch: java.lang.Throwable -> L13e
            java.lang.String r15 = r4.d()     // Catch: java.lang.Throwable -> L13e
            boolean r16 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Throwable -> L13e
            if (r16 != 0) goto L12e
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13e
            r5.<init>(r2)     // Catch: java.lang.Throwable -> L13e
            int r2 = r5.optInt(r12)     // Catch: java.lang.Throwable -> L13e
            int r11 = r5.optInt(r11)     // Catch: java.lang.Throwable -> L13e
            int r10 = r5.optInt(r10)     // Catch: java.lang.Throwable -> L13e
            int r9 = r5.optInt(r9)     // Catch: java.lang.Throwable -> L13e
            int r8 = r5.optInt(r8)     // Catch: java.lang.Throwable -> L13e
            int r7 = r5.optInt(r7)     // Catch: java.lang.Throwable -> L13e
            int r5 = r5.optInt(r6)     // Catch: java.lang.Throwable -> L13e
            if (r2 != r14) goto L100
            r6 = r14
            goto L101
        L100:
            r6 = 0
        L101:
            r4.a(r6)     // Catch: java.lang.Throwable -> L13e
            r4.b(r11)     // Catch: java.lang.Throwable -> L13e
            r4.c(r10)     // Catch: java.lang.Throwable -> L13e
            r4.d(r9)     // Catch: java.lang.Throwable -> L13e
            r4.e(r8)     // Catch: java.lang.Throwable -> L13e
            r4.f(r7)     // Catch: java.lang.Throwable -> L13e
            if (r5 != 0) goto L116
            goto L117
        L116:
            r14 = r5
        L117:
            r4.i(r14)     // Catch: java.lang.Throwable -> L13e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13e
            r4.<init>()     // Catch: java.lang.Throwable -> L13e
            java.lang.String r5 = "init jsCommon.setIsShowingTransparent = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L13e
            r4.append(r2)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Throwable -> L13e
        L12e:
            byte[] r2 = r15.getBytes()     // Catch: java.lang.Throwable -> L13e
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r13)     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L13e
            r4.a(r0, r2)     // Catch: java.lang.Throwable -> L13e
            goto L144
        L13e:
            r0 = move-exception
            java.lang.String r2 = "init error"
            com.mbridge.msdk.foundation.tools.z.c(r3, r2, r0)
        L144:
            return
    }

    @Override
    public void initialize(java.lang.Object r1, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2) {
            r0 = this;
            super.initialize(r1, r2)
            boolean r2 = r1 instanceof com.mbridge.msdk.video.js.factory.IJSFactory
            if (r2 == 0) goto Lb
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = (com.mbridge.msdk.video.js.factory.IJSFactory) r1
            r0.a = r1
        Lb:
            return
    }

    @Override
    public void insertViewAbove(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L11
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L11
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L11
            r4 = 1
            r0.a(r3, r1, r4)     // Catch: java.lang.Throwable -> L11
            goto L28
        L11:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "insertViewAbove error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L28:
            return
    }

    @Override
    public void insertViewBelow(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L11
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L11
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L11
            r4 = 1
            r0.b(r3, r1, r4)     // Catch: java.lang.Throwable -> L11
            goto L28
        L11:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "insertViewBelow error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L28:
            return
    }

    @Override
    public void isSystemResume(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L36
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            r1.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "isSystemResume,params:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L30
            r1.append(r5)     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.video.js.a r5 = r5.getActivityProxy()     // Catch: java.lang.Throwable -> L30
            int r5 = r5.h()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = r3.b(r5)     // Catch: java.lang.Throwable -> L30
            r1.a(r4, r5)     // Catch: java.lang.Throwable -> L30
            goto L36
        L30:
            r4 = move-exception
            java.lang.String r5 = "isSystemResume"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L36:
            return
    }

    @Override
    public void ivRewardAdsWithoutVideo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "ivRewardAdsWithoutVideo ： params"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L1d
            return
        L1d:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L37
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L31
            if (r2 != 0) goto L37
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r1.a     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.video.js.e r2 = r2.getJSContainerModule()     // Catch: java.lang.Throwable -> L31
            r2.ivRewardAdsWithoutVideo(r3)     // Catch: java.lang.Throwable -> L31
            goto L37
        L31:
            r2 = move-exception
            java.lang.String r3 = "ivRewardAdsWithoutVideo"
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
        L37:
            return
    }

    @Override
    public void loadads(java.lang.Object r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "loadads"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            r1 = 1
            boolean r2 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = ""
            if (r2 != 0) goto L36
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L76
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L76
            java.lang.String r10 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = r2.optString(r10)     // Catch: java.lang.Throwable -> L76
            java.lang.String r10 = "unitId"
            java.lang.String r10 = r2.optString(r10)     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "type"
            int r4 = r2.optInt(r4, r1)     // Catch: java.lang.Throwable -> L76
            r5 = 2
            if (r4 <= r5) goto L2b
            r4 = r1
        L2b:
            java.lang.String r5 = "adtype"
            int r2 = r2.optInt(r5, r1)     // Catch: java.lang.Throwable -> L76
            r5 = r10
            r7 = r2
            r6 = r4
            r4 = r3
            goto L3a
        L36:
            r6 = r1
            r7 = r6
            r4 = r3
            r5 = r4
        L3a:
            boolean r10 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L76
            if (r10 == 0) goto L4c
            com.mbridge.msdk.mbjscommon.windvane.h r10 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r8.b(r1)     // Catch: java.lang.Throwable -> L76
            r10.a(r9, r2)     // Catch: java.lang.Throwable -> L76
            return
        L4c:
            if (r9 == 0) goto L69
            r10 = r9
            com.mbridge.msdk.mbjscommon.windvane.a r10 = (com.mbridge.msdk.mbjscommon.windvane.a) r10     // Catch: java.lang.Throwable -> L76
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r10.a     // Catch: java.lang.Throwable -> L76
            boolean r2 = r2 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L76
            if (r2 == 0) goto L69
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r10.a     // Catch: java.lang.Throwable -> L76
            com.mbridge.msdk.mbjscommon.windvane.d r10 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L76
            if (r10 == 0) goto L69
            com.mbridge.msdk.mbjscommon.windvane.d r10 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L76
            r2 = r10
            com.mbridge.msdk.mbjscommon.c.a r2 = (com.mbridge.msdk.mbjscommon.c.a) r2     // Catch: java.lang.Throwable -> L76
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L76
        L69:
            com.mbridge.msdk.mbjscommon.windvane.h r10 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L76
            r2 = 0
            java.lang.String r2 = r8.b(r2)     // Catch: java.lang.Throwable -> L76
            r10.a(r9, r2)     // Catch: java.lang.Throwable -> L76
            goto L87
        L76:
            r10 = move-exception
            java.lang.String r2 = "loadads error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r10)
            com.mbridge.msdk.mbjscommon.windvane.h r10 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r0 = r8.b(r1)
            r10.a(r9, r0)
        L87:
            return
    }

    @Override
    public void loadingResourceStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            if (r3 == 0) goto L3e
            com.mbridge.msdk.mbjscommon.windvane.a r3 = (com.mbridge.msdk.mbjscommon.windvane.a) r3     // Catch: java.lang.Throwable -> L27
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L27
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L3e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L3e
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L27
            r0.c(r3, r4)     // Catch: java.lang.Throwable -> L27
            goto L3e
        L27:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "loadingResourceStatus error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L3e:
            return
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "state"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r0.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "notifyCloseBtn,result:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L35
            r0.append(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.b(r3, r0)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L35
            r0.notifyCloseBtn(r4)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r4 = move-exception
            java.lang.String r0 = "notifyCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r4)
        L3b:
            return
    }

    @Override
    public void onlyAppendSubView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.k(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "appendSubView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void onlyAppendViewTo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.l(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "appendViewTo error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void onlyInsertViewAbove(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.s(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "insertViewAbove error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void onlyInsertViewBelow(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.t(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "insertViewBelow error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void openURL(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "openURL:"
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L50
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            java.lang.String r4 = "url"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            java.lang.String r1 = "type"
            int r3 = r3.optInt(r1)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            r1 = 1
            if (r3 != r1) goto L36
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            com.mbridge.msdk.click.c.a(r3, r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            goto L50
        L36:
            r1 = 2
            if (r3 != r1) goto L50
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            com.mbridge.msdk.click.c.b(r3, r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L48
            goto L50
        L3f:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            goto L50
        L48:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L50:
            return
    }

    @Override
    public void playVideoFinishOperate(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = "JS-Video-Brigde"
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L9
            return
        L9:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L42
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L42
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3c
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = "type"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            r0.<init>()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "playVideoFinishOperate,type: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L3c
            r0.append(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.foundation.tools.z.b(r3, r0)     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()     // Catch: java.lang.Throwable -> L3c
            r0.g(r4)     // Catch: java.lang.Throwable -> L3c
            goto L42
        L3c:
            r4 = move-exception
            java.lang.String r0 = "playVideoFinishOperate error"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r4)
        L42:
            return
    }

    @Override
    public void playerGetMuteState(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.F(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerGetMuteState error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerMute(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.D(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerMute error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerPause(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.z(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerPause error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerPlay(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.y(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerPlay error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerResume(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.A(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerResume error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerSetRenderType(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.H(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerSetRenderType error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerSetSource(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.G(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerSetSource error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerStop(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.B(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerStop error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerUnmute(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.E(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerUnmute error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void playerUpdateFrame(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.C(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "playerUpdateFrame error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void preloadSubPlayTemplateView(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            r3.a(r4, r5)
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L16
            com.mbridge.msdk.video.bt.a.c r1 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L3c
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3c
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L3c
            r1.I(r4, r2)     // Catch: java.lang.Throwable -> L3c
            goto L51
        L16:
            r1 = r4
            com.mbridge.msdk.mbjscommon.windvane.a r1 = (com.mbridge.msdk.mbjscommon.windvane.a) r1     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.a     // Catch: java.lang.Throwable -> L3c
            boolean r2 = r2 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L51
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.mbjscommon.windvane.d r2 = r1.getWebViewListener()     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L36
            com.mbridge.msdk.mbjscommon.windvane.d r1 = r1.getWebViewListener()     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.mbjscommon.c.a r1 = (com.mbridge.msdk.mbjscommon.c.a) r1     // Catch: java.lang.Throwable -> L3c
            r1.a(r4, r5)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = "preloadSubPlayTemplateView: RVWebViewListener"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Throwable -> L3c
            goto L51
        L36:
            java.lang.String r4 = "preloadSubPlayTemplateView: failed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Throwable -> L3c
            goto L51
        L3c:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "preloadSubPlayTemplateView error "
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L51:
            return
    }

    @Override
    public void progressBarOperate(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.a     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L33
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L33
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "view_visible"
            int r3 = r0.optInt(r3)     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.a     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L2b
            r0.progressBarOperate(r3)     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L2b
            r0 = 0
            java.lang.String r0 = r1.b(r0)     // Catch: java.lang.Throwable -> L2b
            r3.a(r2, r0)     // Catch: java.lang.Throwable -> L2b
            goto L33
        L2b:
            r2 = move-exception
            java.lang.String r3 = "JS-Video-Brigde"
            java.lang.String r0 = "progressOperate error"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L33:
            return
    }

    @Override
    public void progressOperate(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r4.a     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L55
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto L55
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4f
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r6 = "progress"
            int r6 = r1.optInt(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = "view_visible"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L4f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4f
            r2.<init>()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "progressOperate,progress:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L4f
            r2.append(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = ",viewVisible:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L4f
            r2.append(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r4.a     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L4f
            r2.progressOperate(r6, r1)     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L4f
            r1 = 0
            java.lang.String r1 = r4.b(r1)     // Catch: java.lang.Throwable -> L4f
            r6.a(r5, r1)     // Catch: java.lang.Throwable -> L4f
            goto L55
        L4f:
            r5 = move-exception
            java.lang.String r6 = "progressOperate error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r6, r5)
        L55:
            return
    }

    @Override
    public void reactDeveloper(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "reactDeveloper"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r2.a     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L1b
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r2.a     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.video.js.b r1 = r1.getJSBTModule()     // Catch: java.lang.Throwable -> L28
            r1.reactDeveloper(r3, r4)     // Catch: java.lang.Throwable -> L28
            goto L3d
        L1b:
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L28
            r1 = 1
            java.lang.String r1 = r2.b(r1)     // Catch: java.lang.Throwable -> L28
            r4.b(r3, r1)     // Catch: java.lang.Throwable -> L28
            goto L3d
        L28:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "reactDeveloper error "
            r4.append(r1)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L3d:
            return
    }

    @Override
    public void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L41
            com.mbridge.msdk.mbjscommon.windvane.a r3 = (com.mbridge.msdk.mbjscommon.windvane.a) r3     // Catch: java.lang.Throwable -> L39
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L39
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L39
            boolean r0 = r0 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.video.js.a.j r0 = (com.mbridge.msdk.video.js.a.j) r0     // Catch: java.lang.Throwable -> L39
            r0.j(r4)     // Catch: java.lang.Throwable -> L39
        L25:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L41
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L41
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L39
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L39
            goto L41
        L39:
            r3 = move-exception
            java.lang.String r4 = "JS-Video-Brigde"
            java.lang.String r0 = "readyStatus"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L41:
            return
    }

    @Override
    public void removeCacheItem(java.lang.Object r11, java.lang.String r12) {
            r10 = this;
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            java.lang.String r1 = "MBridgeH5CacheSP"
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV r0 = r10.b
            if (r0 != 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Exception -> L22
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L22
            r10.b = r0     // Catch: java.lang.Exception -> L22
            goto L25
        L22:
            r0 = 0
            r10.b = r0
        L25:
            com.mbridge.msdk.foundation.tools.FastKV r0 = r10.b
            java.lang.String r2 = "Delete Success"
            java.lang.String r3 = "key"
            java.lang.String r4 = "Delete Error, reason is : "
            r5 = 1
            java.lang.String r6 = "removeCacheItem error "
            java.lang.String r7 = "JS-Video-Brigde"
            r8 = 0
            java.lang.String r9 = ""
            if (r0 == 0) goto L7f
            boolean r0 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L54
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L58
            r0.<init>(r12)     // Catch: java.lang.Throwable -> L58
            java.lang.String r12 = r0.getString(r3)     // Catch: java.lang.Throwable -> L58
            boolean r0 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L51
            com.mbridge.msdk.foundation.tools.FastKV r0 = r10.b     // Catch: java.lang.Throwable -> L58
            r0.remove(r12)     // Catch: java.lang.Throwable -> L58
        L51:
            r12 = r5
            goto Ld3
        L54:
            r12 = r8
            r2 = r9
            goto Ld3
        L58:
            r12 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r7, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r12 = r12.getMessage()
            r0.append(r12)
            java.lang.String r2 = r0.toString()
            goto Ld2
        L7f:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lac
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> Lac
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r8)     // Catch: java.lang.Throwable -> Lac
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Lac
            if (r1 != 0) goto L54
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lac
            r1.<init>(r12)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r12 = r1.getString(r3)     // Catch: java.lang.Throwable -> Lac
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Lac
            if (r1 != 0) goto L51
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> Lac
            android.content.SharedPreferences$Editor r12 = r0.remove(r12)     // Catch: java.lang.Throwable -> Lac
            r12.apply()     // Catch: java.lang.Throwable -> Lac
            goto L51
        Lac:
            r12 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r7, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r12 = r12.getMessage()
            r0.append(r12)
            java.lang.String r2 = r0.toString()
        Ld2:
            r12 = r8
        Ld3:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L112
            r0.<init>()     // Catch: java.lang.Throwable -> L112
            java.lang.String r1 = "code"
            if (r12 == 0) goto Ldd
            r5 = r8
        Ldd:
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L112
            java.lang.String r1 = "message"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L112
            r1 = 2
            if (r11 == 0) goto Lfe
            if (r12 == 0) goto Lfe
            com.mbridge.msdk.mbjscommon.windvane.h r12 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L112
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L112
            r12.a(r11, r0)     // Catch: java.lang.Throwable -> L112
            goto L115
        Lfe:
            com.mbridge.msdk.mbjscommon.windvane.h r12 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L112
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L112
            r12.b(r11, r0)     // Catch: java.lang.Throwable -> L112
            goto L115
        L112:
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)
        L115:
            return
    }

    @Override
    public void removeFromSuperView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.h(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "removeFromSuperView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void reportUrls(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "reportUrls"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L15
            com.mbridge.msdk.video.bt.a.c r1 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L22
            r1.b(r3, r4)     // Catch: java.lang.Throwable -> L22
            goto L37
        L15:
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L22
            r1 = 1
            java.lang.String r1 = r2.b(r1)     // Catch: java.lang.Throwable -> L22
            r4.b(r3, r1)     // Catch: java.lang.Throwable -> L22
            goto L37
        L22:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "reportUrls error "
            r4.append(r1)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L37:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{ \"type\":1,\"pt\":"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "}"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r2.click(r3, r4)
            return
    }

    @Override
    public void setCacheItem(java.lang.Object r12, java.lang.String r13) {
            r11 = this;
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            java.lang.String r1 = "MBridgeH5CacheSP"
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV r0 = r11.b
            if (r0 != 0) goto L25
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Exception -> L22
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L22
            r11.b = r0     // Catch: java.lang.Exception -> L22
            goto L25
        L22:
            r0 = 0
            r11.b = r0
        L25:
            com.mbridge.msdk.foundation.tools.FastKV r0 = r11.b
            java.lang.String r2 = "Save Success"
            java.lang.String r3 = "value"
            java.lang.String r4 = "key"
            java.lang.String r5 = "Save Error, reason is : "
            r6 = 1
            java.lang.String r7 = "setCacheItem error "
            java.lang.String r8 = "JS-Video-Brigde"
            r9 = 0
            java.lang.String r10 = ""
            if (r0 == 0) goto L8b
            boolean r0 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L64
            if (r0 != 0) goto L60
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L64
            r0.<init>(r13)     // Catch: java.lang.Throwable -> L64
            java.lang.String r13 = r0.getString(r4)     // Catch: java.lang.Throwable -> L64
            java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Throwable -> L64
            boolean r1 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L64
            if (r1 != 0) goto L5d
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L64
            if (r1 != 0) goto L5d
            com.mbridge.msdk.foundation.tools.FastKV r1 = r11.b     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L64
            r1.putString(r13, r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L64
        L5d:
            r13 = r6
            goto Le9
        L60:
            r13 = r9
            r2 = r10
            goto Le9
        L64:
            r13 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r8, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r2 = r0.toString()
            goto Le8
        L8b:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lc2
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> Lc2
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r9)     // Catch: java.lang.Throwable -> Lc2
            boolean r1 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> Lc2
            if (r1 != 0) goto L60
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc2
            r1.<init>(r13)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r13 = r1.getString(r4)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r1 = r1.getString(r3)     // Catch: java.lang.Throwable -> Lc2
            boolean r3 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> Lc2
            if (r3 != 0) goto L5d
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc2
            if (r3 != 0) goto L5d
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> Lc2
            android.content.SharedPreferences$Editor r13 = r0.putString(r13, r1)     // Catch: java.lang.Throwable -> Lc2
            r13.apply()     // Catch: java.lang.Throwable -> Lc2
            goto L5d
        Lc2:
            r13 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r8, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r2 = r0.toString()
        Le8:
            r13 = r9
        Le9:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L128
            r0.<init>()     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = "code"
            if (r13 == 0) goto Lf3
            r6 = r9
        Lf3:
            r0.put(r1, r6)     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = "message"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L128
            r1 = 2
            if (r12 == 0) goto L114
            if (r13 == 0) goto L114
            com.mbridge.msdk.mbjscommon.windvane.h r13 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L128
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L128
            r13.a(r12, r0)     // Catch: java.lang.Throwable -> L128
            goto L12b
        L114:
            com.mbridge.msdk.mbjscommon.windvane.h r13 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L128
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L128
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L128
            r13.b(r12, r0)     // Catch: java.lang.Throwable -> L128
            goto L12b
        L128:
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)
        L12b:
            return
    }

    @Override
    public void setScaleFitXY(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "fitxy"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r0.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "setScaleFitXY,type:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L35
            r0.append(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.b(r3, r0)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L35
            r0.setScaleFitXY(r4)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r4 = move-exception
            java.lang.String r0 = "showVideoClickView error"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r4)
        L3b:
            return
    }

    @Override
    public void setSubPlayTemplateInfo(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setSubPlayTemplateInfo : "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r3.a(r4, r5)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L26
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L26
            r0.L(r4, r2)     // Catch: java.lang.Throwable -> L26
            goto L3b
        L26:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "setSubPlayTemplateInfo error "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L3b:
            return
    }

    @Override
    public void setViewAlpha(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.q(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "setViewAlpha error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void setViewBgColor(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.p(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "setViewBgColor error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void setViewRect(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.g(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "setViewRect error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void setViewScale(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.r(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "setViewScale error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void showAlertView(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "showAlertView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r3.a     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L28
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L24
            if (r2 != 0) goto L28
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r3.a     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L24
            r2.showIVRewardAlertView(r5)     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = ""
            r5.a(r4, r1, r2)     // Catch: java.lang.Throwable -> L24
            goto L28
        L24:
            r4 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r4)
        L28:
            return
    }

    @Override
    public void showVideoClickView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "type"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r0.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "showVideoClickView,type:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L35
            r0.append(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.z.b(r3, r0)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r2.a     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()     // Catch: java.lang.Throwable -> L35
            r0.showVideoClickView(r4)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r4 = move-exception
            java.lang.String r0 = "showVideoClickView error"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r4)
        L3b:
            return
    }

    @Override
    public void showVideoLocation(java.lang.Object r13, java.lang.String r14) {
            r12 = this;
            java.lang.String r13 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r12.a     // Catch: java.lang.Throwable -> Laf
            if (r0 == 0) goto Lb5
            boolean r0 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> Laf
            if (r0 != 0) goto Lb5
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Laf
            r0.<init>(r14)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "margin_top"
            r1 = 0
            int r3 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "margin_left"
            int r4 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "view_width"
            int r5 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "view_height"
            int r6 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "radius"
            int r7 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "border_top"
            int r8 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "border_left"
            int r9 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "border_width"
            int r10 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = "border_height"
            int r11 = r0.optInt(r14, r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
            r14.<init>()     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = "showVideoLocation,margin_top:"
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r3)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",marginLeft:"
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r4)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",viewWidth:"
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r5)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",viewHeight:"
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r6)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",radius:"
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r7)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",borderTop: "
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r8)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",borderLeft: "
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r9)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",borderWidth: "
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r10)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = ",borderHeight: "
            r14.append(r0)     // Catch: java.lang.Throwable -> Laf
            r14.append(r11)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.foundation.tools.z.b(r13, r14)     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.video.js.factory.IJSFactory r14 = r12.a     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.video.js.i r2 = r14.getJSVideoModule()     // Catch: java.lang.Throwable -> Laf
            r2.showVideoLocation(r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.video.js.factory.IJSFactory r14 = r12.a     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.video.js.c r14 = r14.getJSCommon()     // Catch: java.lang.Throwable -> Laf
            r14.g()     // Catch: java.lang.Throwable -> Laf
            goto Lb5
        Laf:
            r14 = move-exception
            java.lang.String r0 = "showVideoLocation error"
            com.mbridge.msdk.foundation.tools.z.c(r13, r0, r14)
        Lb5:
            return
    }

    @Override
    public void showView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.o(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "showView error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void soundOperate(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r5.a     // Catch: java.lang.Throwable -> L6f
            if (r1 == 0) goto L75
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L6f
            if (r1 != 0) goto L75
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6f
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r7 = "mute"
            int r7 = r1.optInt(r7)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = "view_visible"
            int r2 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r3 = "pt"
            java.lang.String r4 = ""
            java.lang.String r1 = r1.optString(r3, r4)     // Catch: java.lang.Throwable -> L6f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r3.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r4 = "soundOperate,mute:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L6f
            r3.append(r7)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r4 = ",viewVisible:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L6f
            r3.append(r2)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r4 = ",pt:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L6f
            r3.append(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6f
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Throwable -> L6f
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L6f
            if (r3 == 0) goto L59
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r5.a     // Catch: java.lang.Throwable -> L6f
            com.mbridge.msdk.video.js.i r1 = r1.getJSVideoModule()     // Catch: java.lang.Throwable -> L6f
            r1.soundOperate(r7, r2)     // Catch: java.lang.Throwable -> L6f
            goto L62
        L59:
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r5.a     // Catch: java.lang.Throwable -> L6f
            com.mbridge.msdk.video.js.i r3 = r3.getJSVideoModule()     // Catch: java.lang.Throwable -> L6f
            r3.soundOperate(r7, r2, r1)     // Catch: java.lang.Throwable -> L6f
        L62:
            com.mbridge.msdk.mbjscommon.windvane.h r7 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L6f
            r1 = 0
            java.lang.String r1 = r5.b(r1)     // Catch: java.lang.Throwable -> L6f
            r7.a(r6, r1)     // Catch: java.lang.Throwable -> L6f
            goto L75
        L6f:
            r6 = move-exception
            java.lang.String r7 = "soundOperate error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r6)
        L75:
            return
    }

    @Override
    public void statistics(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "statistics,params:"
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r2.a     // Catch: java.lang.Throwable -> L3b
            if (r3 == 0) goto L41
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3b
            if (r3 != 0) goto L41
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r4 = "type"
            int r4 = r3.optInt(r4)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r1 = "data"
            java.lang.String r3 = r3.optString(r1)     // Catch: java.lang.Throwable -> L3b
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r2.a     // Catch: java.lang.Throwable -> L3b
            com.mbridge.msdk.video.js.c r1 = r1.getJSCommon()     // Catch: java.lang.Throwable -> L3b
            r1.a(r4, r3)     // Catch: java.lang.Throwable -> L3b
            goto L41
        L3b:
            r3 = move-exception
            java.lang.String r4 = "statistics error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r4, r3)
        L41:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r3.a     // Catch: java.lang.Throwable -> L40
            if (r0 == 0) goto L46
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L40
            if (r0 != 0) goto L46
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L40
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = "state"
            int r5 = r0.optInt(r5)     // Catch: java.lang.Throwable -> L40
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40
            r0.<init>()     // Catch: java.lang.Throwable -> L40
            java.lang.String r1 = "toggleCloseBtn,result:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L40
            r0.append(r5)     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L40
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Throwable -> L40
            r0 = 0
            r1 = 2
            r2 = 1
            if (r5 != r2) goto L31
            goto L36
        L31:
            if (r5 != r1) goto L35
            r1 = r2
            goto L36
        L35:
            r1 = r0
        L36:
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L40
            com.mbridge.msdk.video.js.i r5 = r5.getJSVideoModule()     // Catch: java.lang.Throwable -> L40
            r5.closeVideoOperate(r0, r1)     // Catch: java.lang.Throwable -> L40
            goto L46
        L40:
            r5 = move-exception
            java.lang.String r0 = "toggleCloseBtn"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r5)
        L46:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            java.lang.String r1 = "triggerCloseBtn"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L42
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L42
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3c
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r5 = "state"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "click"
            boolean r5 = r5.equals(r1)     // Catch: java.lang.Throwable -> L3c
            if (r5 == 0) goto L42
            com.mbridge.msdk.video.js.factory.IJSFactory r5 = r3.a     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.video.js.i r5 = r5.getJSVideoModule()     // Catch: java.lang.Throwable -> L3c
            r1 = 1
            r2 = -1
            r5.closeVideoOperate(r1, r2)     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L3c
            r1 = 0
            java.lang.String r1 = r3.b(r1)     // Catch: java.lang.Throwable -> L3c
            r5.a(r4, r1)     // Catch: java.lang.Throwable -> L3c
            goto L42
        L3c:
            r4 = move-exception
            java.lang.String r5 = "triggerCloseBtn error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L42:
            return
    }

    @Override
    public void videoOperate(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "JS-Video-Brigde"
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L47
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L41
            if (r1 != 0) goto L47
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L41
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r5 = "pause_or_resume"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "videoOperate,pauseOrResume:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L41
            r1.append(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r3.a     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.video.js.i r1 = r1.getJSVideoModule()     // Catch: java.lang.Throwable -> L41
            r1.videoOperate(r5)     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L41
            r1 = 0
            java.lang.String r1 = r3.b(r1)     // Catch: java.lang.Throwable -> L41
            r5.a(r4, r1)     // Catch: java.lang.Throwable -> L41
            goto L47
        L41:
            r4 = move-exception
            java.lang.String r5 = "videoOperate error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L47:
            return
    }

    @Override
    public void webviewFireEvent(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.M(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "setSubPlayTemplateInfo error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void webviewGoBack(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.w(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "webviewGoBack error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void webviewGoForward(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.x(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "webviewGoForward error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void webviewLoad(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.u(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "webviewLoad error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }

    @Override
    public void webviewReload(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.v(r3, r1)     // Catch: java.lang.Throwable -> L10
            goto L27
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "webviewReload error "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "JS-Video-Brigde"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L27:
            return
    }
}
