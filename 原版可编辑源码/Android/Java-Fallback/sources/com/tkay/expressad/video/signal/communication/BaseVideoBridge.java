package com.tkay.expressad.video.signal.communication;

public class BaseVideoBridge extends com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5 implements com.tkay.expressad.video.signal.communication.IVideoBridge {
    protected static final java.lang.String h = "JS-Video-Brigde";
    private static final int j = 1;
    private static final int k = 2;
    private static final java.lang.String l = "showTransparent";
    private static final java.lang.String m = "mute";
    private static final java.lang.String n = "closeType";
    private static final java.lang.String o = "orientationType";
    private static final java.lang.String p = "type";
    private static final java.lang.String q = "h5cbp";
    private static final java.lang.String r = "webfront";
    private static final java.lang.String s = "showAlertRole";
    protected com.tkay.expressad.video.signal.factory.IJSFactory i;

    public BaseVideoBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(int r0) {
            switch(r0) {
                case 1: goto L15;
                case 2: goto L12;
                case 3: goto Lf;
                case 4: goto Lc;
                case 5: goto L9;
                case 6: goto L6;
                default: goto L3;
            }
        L3:
            java.lang.String r0 = ""
            goto L17
        L6:
            java.lang.String r0 = "sdkSetting"
            goto L17
        L9:
            java.lang.String r0 = "device"
            goto L17
        Lc:
            java.lang.String r0 = "unitSetting"
            goto L17
        Lf:
            java.lang.String r0 = "appSetting"
            goto L17
        L12:
            java.lang.String r0 = "unit_id"
            goto L17
        L15:
            java.lang.String r0 = "sdk_info"
        L17:
            return r0
    }

    private static void a(java.lang.Object r2, java.lang.String r3) {
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2d
            if (r3 == 0) goto L2c
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r3.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "code"
            r1 = 1
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "message"
            java.lang.String r1 = "params is null"
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L2d
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Exception -> L2d
            r0.a(r2, r3)     // Catch: java.lang.Exception -> L2d
        L2c:
            return
        L2d:
            r2 = move-exception
            r2.getMessage()
            return
    }

    private static java.lang.String b(int r3) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "code"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L20
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L20
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L20
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L20
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Throwable -> L20
            r0 = r3
        L20:
            return r0
    }

    @Override
    public void appendSubView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.i(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "appendSubView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void appendViewTo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.j(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "appendViewTo error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void bringViewToFront(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.m(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "bringViewToFront error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void broadcast(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.M(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "broadcast error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void cai(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "exception: "
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L94
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            java.lang.String r7 = "packageName"
            java.lang.String r7 = r1.optString(r7)     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            if (r1 == 0) goto L1e
            java.lang.String r1 = "packageName is empty"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r1)     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
        L1e:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            boolean r7 = com.tkay.expressad.foundation.h.t.a(r1, r7)     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            r1 = 2
            if (r7 == 0) goto L2f
            r7 = 1
            goto L30
        L2f:
            r7 = r1
        L30:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            r2.<init>()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            java.lang.String r3 = "code"
            int r4 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.b     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            r3.<init>()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            java.lang.String r4 = "result"
            r3.put(r4, r7)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            java.lang.String r7 = "data"
            r2.put(r7, r3)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            java.lang.String r1 = android.util.Base64.encodeToString(r2, r1)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            r7.a(r6, r1)     // Catch: java.lang.Exception -> L5f java.lang.Throwable -> L6b org.json.JSONException -> L80
            return
        L5f:
            r7 = move-exception
            java.lang.String r1 = r7.getMessage()     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r1)     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            r7.getMessage()     // Catch: java.lang.Throwable -> L6b org.json.JSONException -> L80
            return
        L6b:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r7 = r7.getLocalizedMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r7)
            goto L94
        L80:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r7 = r7.getLocalizedMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r6, r7)
        L94:
            return
    }

    @Override
    public void clearAllCache(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L42
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = "tkay_h5_cachesp"
            r1 = 0
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L42
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L42
            android.content.SharedPreferences$Editor r4 = r4.clear()     // Catch: java.lang.Throwable -> L42
            r4.apply()     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto L41
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42
            r4.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = "code"
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = "message"
            java.lang.String r1 = "Success"
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L42
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L42
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L42
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L42
        L41:
            return
        L42:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "getAllCache error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void click(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L4a
            if (r0 != 0) goto L4a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L18 java.lang.Throwable -> L4a
            r0.<init>(r4)     // Catch: org.json.JSONException -> L18 java.lang.Throwable -> L4a
            java.lang.String r4 = "type"
            int r4 = r0.optInt(r4)     // Catch: org.json.JSONException -> L18 java.lang.Throwable -> L4a
            java.lang.String r1 = "pt"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L18 java.lang.Throwable -> L4a
            goto L21
        L18:
            r4 = move-exception
            r0 = 1
            java.lang.String r1 = ""
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L4a
            r4 = r0
            r0 = r1
        L21:
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r2.i     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L2f
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.i     // Catch: java.lang.Throwable -> L4a
            com.tkay.expressad.video.signal.c r3 = r3.getJSCommon()     // Catch: java.lang.Throwable -> L4a
            r3.click(r4, r0)     // Catch: java.lang.Throwable -> L4a
            return
        L2f:
            if (r3 == 0) goto L4a
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L4a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r3.a     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r1 = r1.getObject()     // Catch: java.lang.Throwable -> L4a
            boolean r1 = r1 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L4a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r3 = r3.getObject()     // Catch: java.lang.Throwable -> L4a
            com.tkay.expressad.video.signal.a.j r3 = (com.tkay.expressad.video.signal.a.j) r3     // Catch: java.lang.Throwable -> L4a
            if (r3 == 0) goto L4a
            r3.click(r4, r0)     // Catch: java.lang.Throwable -> L4a
        L4a:
            return
    }

    @Override
    public void closeAd(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.L(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "closeAd error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void closeVideoOperte(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r3.i     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L42
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L42
            if (r0 != 0) goto L42
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "close"
            int r5 = r0.optInt(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "view_visible"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "closeVideoOperte,close:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L42
            r1.append(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = ",viewVisible:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L42
            r1.append(r0)     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r3.i     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.video.signal.j r1 = r1.getJSVideoModule()     // Catch: java.lang.Throwable -> L42
            r1.closeVideoOperate(r5, r0)     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.atsignalcommon.windvane.j r5 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L42
            r0 = 0
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L42
            r5.a(r4, r0)     // Catch: java.lang.Throwable -> L42
        L42:
            return
    }

    @Override
    public void closeWeb(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L7
            return
        L7:
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L2e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L2e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "status"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.i     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()     // Catch: java.lang.Throwable -> L2e
            r2.hideAlertWebview()     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.i     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L2e
            r2.hideAlertView(r1)     // Catch: java.lang.Throwable -> L2e
        L2e:
            return
    }

    @Override
    public void createNativeEC(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.Q(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "createNativeEC error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void createPlayerView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.c(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "createPlayerView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void createSubPlayTemplateView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.d(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "createSubPlayTemplateView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void createView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "createWebview error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void createWebview(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.b(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "createWebview error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void destroyComponent(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.e(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "destroyComponent error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void getAllCache(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r7 = "getAllCache error "
            r0 = 0
            r1 = 0
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L42
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = "tkay_h5_cachesp"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r0)     // Catch: java.lang.Throwable -> L42
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42
            r3.<init>()     // Catch: java.lang.Throwable -> L42
            java.util.Map r1 = r2.getAll()     // Catch: java.lang.Throwable -> L40
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L40
        L23:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L40
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L40
            java.lang.Object r4 = r2.getKey()     // Catch: java.lang.Throwable -> L40
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L40
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L40
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L40
            goto L23
        L3d:
            java.lang.String r1 = "getAllCache Success"
            goto L5f
        L40:
            r1 = move-exception
            goto L45
        L42:
            r2 = move-exception
            r3 = r1
            r1 = r2
        L45:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r7)
            r2.append(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r4 = "getAllCache Error, reason is : "
            r2.<init>(r4)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L5f:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L92
            r2.<init>()     // Catch: java.lang.Throwable -> L92
            java.lang.String r4 = "code"
            r2.put(r4, r0)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = "message"
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = "data"
            if (r3 == 0) goto L76
            r2.put(r0, r3)     // Catch: java.lang.Throwable -> L92
            goto L7b
        L76:
            java.lang.String r1 = "{}"
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L92
        L7b:
            if (r6 == 0) goto L91
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L92
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L92
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Throwable -> L92
            r0.a(r6, r1)     // Catch: java.lang.Throwable -> L92
        L91:
            return
        L92:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r7)
            r0.append(r6)
            return
    }

    @Override
    public void getAppSetting(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7c
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = "appid"
            java.lang.String r1 = ""
            java.lang.String r8 = r0.optString(r8, r1)     // Catch: java.lang.Throwable -> L7c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7c
            r0.<init>()     // Catch: java.lang.Throwable -> L7c
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L7c
            r2 = 1
            java.lang.String r3 = "message"
            java.lang.String r4 = "code"
            if (r1 != 0) goto L5f
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = com.tkay.expressad.d.b.a(r8)     // Catch: java.lang.Throwable -> L7c
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L7c
            r5 = 0
            if (r1 == 0) goto L3c
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L7c
            com.tkay.expressad.d.a r8 = com.tkay.expressad.d.b.c()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = r8.R()     // Catch: java.lang.Throwable -> L7c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7c
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L7c
            goto L46
        L3c:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7c
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = "isDefault"
            r1.put(r8, r5)     // Catch: java.lang.Throwable -> L7c
        L46:
            if (r7 == 0) goto L56
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = "Success"
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = "data"
            r0.put(r8, r1)     // Catch: java.lang.Throwable -> L7c
            goto L67
        L56:
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = "Get App Setting error, plz try again later."
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L7c
            goto L67
        L5f:
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = "Get App Setting error, because must give a appId."
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L7c
        L67:
            com.tkay.expressad.atsignalcommon.windvane.j r8 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7c
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L7c
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L7c
            r8.a(r7, r0)     // Catch: java.lang.Throwable -> L7c
            return
        L7c:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "getAppSetting error : "
            r8.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            return
    }

    @Override
    public void getComponentOptions(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            a(r2, r3)
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Lf
            com.tkay.expressad.video.bt.a.c.f(r2, r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "getComponentOptions error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void getCurrentProgress(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r1.i     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L24
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r1.i     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.video.signal.j r3 = r3.getJSVideoModule()     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = r3.getCurrentProgress()     // Catch: java.lang.Throwable -> L24
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L1d
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L24
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)     // Catch: java.lang.Throwable -> L24
        L1d:
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L24
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    @Override
    public void getCutout(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r5 = r3.i     // Catch: java.lang.Throwable -> L49
            com.tkay.expressad.video.signal.c r5 = r5.getJSCommon()     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = r5.o()     // Catch: java.lang.Throwable -> L49
            r0 = 2
            if (r4 == 0) goto L23
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L49
            if (r1 != 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L49
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Throwable -> L49
            r1.a(r4, r5)     // Catch: java.lang.Throwable -> L49
            return
        L23:
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L49
            r5.<init>()     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = "code"
            r2 = 1
            r5.put(r1, r2)     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = "message"
            java.lang.String r2 = "No notch data, plz try again later."
            r5.put(r1, r2)     // Catch: java.lang.Throwable -> L49
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Throwable -> L49
            r1.b(r4, r5)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r0 = "getCutout error : "
            r5.<init>(r0)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            return
    }

    @Override
    public void getEncryptPrice(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void getFileInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            a(r2, r3)
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Le
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Le
            com.tkay.expressad.video.bt.a.c.P(r2, r0)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }

    @Override
    public void getRewardSetting(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            com.tkay.expressad.videocommon.e.c r6 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L44
            com.tkay.expressad.videocommon.e.a r6 = r6.b()     // Catch: java.lang.Throwable -> L44
            org.json.JSONObject r6 = r6.k()     // Catch: java.lang.Throwable -> L44
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L44
            r0.<init>()     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = "message"
            java.lang.String r2 = "code"
            if (r5 == 0) goto L26
            r3 = 0
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "Success"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = "data"
            r0.put(r1, r6)     // Catch: java.lang.Throwable -> L44
            goto L2f
        L26:
            r6 = 1
            r0.put(r2, r6)     // Catch: java.lang.Throwable -> L44
            java.lang.String r6 = "Get Reward Setting error, plz try again later."
            r0.put(r1, r6)     // Catch: java.lang.Throwable -> L44
        L2f:
            com.tkay.expressad.atsignalcommon.windvane.j r6 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L44
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L44
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L44
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L44
            r6.a(r5, r0)     // Catch: java.lang.Throwable -> L44
            return
        L44:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "getRewardSetting error : "
            r6.<init>(r0)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            return
    }

    @Override
    public void getRewardUnitSetting(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6c
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r8 = "appid"
            java.lang.String r8 = r1.optString(r8, r0)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "unitid"
            java.lang.String r0 = r1.optString(r2, r0)     // Catch: java.lang.Throwable -> L6c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6c
            r1.<init>()     // Catch: java.lang.Throwable -> L6c
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L6c
            r3 = 1
            java.lang.String r4 = "message"
            java.lang.String r5 = "code"
            if (r2 != 0) goto L4f
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L6c
            if (r2 != 0) goto L4f
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L6c
            com.tkay.expressad.videocommon.e.d r8 = r2.a(r8, r0)     // Catch: java.lang.Throwable -> L6c
            org.json.JSONObject r8 = r8.R()     // Catch: java.lang.Throwable -> L6c
            if (r7 == 0) goto L46
            r0 = 0
            r1.put(r5, r0)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = "Success"
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = "data"
            r1.put(r0, r8)     // Catch: java.lang.Throwable -> L6c
            goto L57
        L46:
            r1.put(r5, r3)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r8 = "Get Reward Unit Setting error, plz try again later."
            r1.put(r4, r8)     // Catch: java.lang.Throwable -> L6c
            goto L57
        L4f:
            r1.put(r5, r3)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r8 = "Get reward unit Setting error, because must give appId and unitId."
            r1.put(r4, r8)     // Catch: java.lang.Throwable -> L6c
        L57:
            com.tkay.expressad.atsignalcommon.windvane.j r8 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L6c
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L6c
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L6c
            r8.a(r7, r0)     // Catch: java.lang.Throwable -> L6c
            return
        L6c:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "getRewardUnitSetting error : "
            r8.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            return
    }

    @Override
    public void getSDKInfo(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L87
            if (r0 != 0) goto L7d
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L87
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L87
            java.lang.String r7 = "type"
            org.json.JSONArray r7 = r0.getJSONArray(r7)     // Catch: java.lang.Throwable -> L87
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L87
            r0.<init>()     // Catch: java.lang.Throwable -> L87
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r5.i     // Catch: java.lang.Throwable -> L87
            r2 = 0
            if (r1 == 0) goto L39
        L1b:
            int r1 = r7.length()     // Catch: java.lang.Throwable -> L87
            if (r2 >= r1) goto L68
            int r1 = r7.getInt(r2)     // Catch: java.lang.Throwable -> L87
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r5.i     // Catch: java.lang.Throwable -> L87
            com.tkay.expressad.video.signal.c r3 = r3.getJSCommon()     // Catch: java.lang.Throwable -> L87
            java.lang.String r3 = r3.h(r1)     // Catch: java.lang.Throwable -> L87
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L87
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L87
            int r2 = r2 + 1
            goto L1b
        L39:
            if (r6 == 0) goto L68
        L3b:
            int r1 = r7.length()     // Catch: java.lang.Throwable -> L87
            if (r2 >= r1) goto L68
            int r1 = r7.getInt(r2)     // Catch: java.lang.Throwable -> L87
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L87
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L87
            java.lang.Object r4 = r4.getObject()     // Catch: java.lang.Throwable -> L87
            boolean r4 = r4 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L87
            if (r4 == 0) goto L65
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L87
            java.lang.Object r3 = r3.getObject()     // Catch: java.lang.Throwable -> L87
            com.tkay.expressad.video.signal.a.j r3 = (com.tkay.expressad.video.signal.a.j) r3     // Catch: java.lang.Throwable -> L87
            java.lang.String r4 = a(r1)     // Catch: java.lang.Throwable -> L87
            java.lang.String r1 = r3.h(r1)     // Catch: java.lang.Throwable -> L87
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> L87
        L65:
            int r2 = r2 + 1
            goto L3b
        L68:
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L87
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L87
            r0 = 2
            java.lang.String r7 = android.util.Base64.encodeToString(r7, r0)     // Catch: java.lang.Throwable -> L87
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L87
            r0.a(r6, r7)     // Catch: java.lang.Throwable -> L87
            return
        L7d:
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L87
            java.lang.String r0 = "params is null"
            r7.b(r6, r0)     // Catch: java.lang.Throwable -> L87
            return
        L87:
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r0 = "exception"
            r7.b(r6, r0)
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
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L27
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L27
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L27
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L27
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L27
            return
        L27:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "getUnitSetting error : "
            r4.<init>(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            return
    }

    @Override
    public void gial(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            r5.<init>()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            java.lang.String r0 = "code"
            int r1 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.b     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            r5.put(r0, r1)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            java.lang.String r1 = "packageNameList"
            java.lang.String r2 = "[]"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            java.lang.String r1 = "data"
            r5.put(r1, r0)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            r1 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            r0.a(r4, r5)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L3e
            return
        L32:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r4, r0)
            r5.getMessage()
            return
        L3e:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r4, r0)
            r5.getMessage()
            return
    }

    @Override
    public void handleNativeObject(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.b r0 = com.tkay.expressad.video.bt.a.b.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "handleNativeObject error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void handlerH5Exception(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.i     // Catch: java.lang.Throwable -> L28
            if (r3 == 0) goto L28
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L28
            if (r3 != 0) goto L28
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L28
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = "code"
            r0 = -999(0xfffffffffffffc19, float:NaN)
            int r4 = r3.optInt(r4, r0)     // Catch: java.lang.Throwable -> L28
            java.lang.String r0 = "message"
            java.lang.String r1 = "h5 error"
            java.lang.String r3 = r3.optString(r0, r1)     // Catch: java.lang.Throwable -> L28
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.i     // Catch: java.lang.Throwable -> L28
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()     // Catch: java.lang.Throwable -> L28
            r0.handlerH5Exception(r4, r3)     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    @Override
    public void hideView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.n(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "hideView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void increaseOfferFrequence(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            a(r2, r3)
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Lf
            com.tkay.expressad.video.bt.a.c.a(r2)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "increaseOfferFrequence error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void init(java.lang.Object r14, java.lang.String r15) {
            r13 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r13.i     // Catch: java.lang.Throwable -> L118
            r1 = 0
            java.lang.String r2 = "showAlertRole"
            java.lang.String r3 = "webfront"
            java.lang.String r4 = "h5cbp"
            java.lang.String r5 = "orientationType"
            java.lang.String r6 = "closeType"
            java.lang.String r7 = "mute"
            java.lang.String r8 = "showTransparent"
            r9 = 2
            r10 = 1
            if (r0 == 0) goto Lab
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()     // Catch: java.lang.Throwable -> L118
            java.lang.String r0 = r0.i()     // Catch: java.lang.Throwable -> L118
            boolean r11 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L118
            if (r11 != 0) goto L2d
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L118
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r9)     // Catch: java.lang.Throwable -> L118
        L2d:
            com.tkay.expressad.atsignalcommon.windvane.j r9 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L118
            r9.a(r14, r0)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r14 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r14 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L118
            r14.h()     // Catch: java.lang.Throwable -> L118
            boolean r14 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L118
            if (r14 != 0) goto Laa
            org.json.JSONObject r14 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L118
            r14.<init>(r15)     // Catch: java.lang.Throwable -> L118
            int r15 = r14.optInt(r8)     // Catch: java.lang.Throwable -> L118
            int r0 = r14.optInt(r7)     // Catch: java.lang.Throwable -> L118
            int r6 = r14.optInt(r6)     // Catch: java.lang.Throwable -> L118
            int r5 = r14.optInt(r5)     // Catch: java.lang.Throwable -> L118
            int r4 = r14.optInt(r4)     // Catch: java.lang.Throwable -> L118
            int r3 = r14.optInt(r3)     // Catch: java.lang.Throwable -> L118
            int r14 = r14.optInt(r2)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L118
            if (r15 != r10) goto L6d
            r1 = r10
        L6d:
            r2.a(r1)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r15 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r15 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L118
            r15.b(r0)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r15 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r15 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L118
            r15.c(r6)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r15 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r15 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L118
            r15.d(r5)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r15 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r15 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L118
            r15.e(r4)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r15 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r15 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L118
            r15.f(r3)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.factory.IJSFactory r15 = r13.i     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.c r15 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L118
            if (r14 != 0) goto La6
            goto La7
        La6:
            r10 = r14
        La7:
            r15.i(r10)     // Catch: java.lang.Throwable -> L118
        Laa:
            return
        Lab:
            if (r14 == 0) goto L118
            r0 = r14
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r0.a     // Catch: java.lang.Throwable -> L118
            java.lang.Object r11 = r11.getObject()     // Catch: java.lang.Throwable -> L118
            boolean r11 = r11 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L118
            if (r11 == 0) goto L118
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L118
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0     // Catch: java.lang.Throwable -> L118
            java.lang.String r11 = r0.i()     // Catch: java.lang.Throwable -> L118
            boolean r12 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L118
            if (r12 != 0) goto L109
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L118
            r12.<init>(r15)     // Catch: java.lang.Throwable -> L118
            int r15 = r12.optInt(r8)     // Catch: java.lang.Throwable -> L118
            int r7 = r12.optInt(r7)     // Catch: java.lang.Throwable -> L118
            int r6 = r12.optInt(r6)     // Catch: java.lang.Throwable -> L118
            int r5 = r12.optInt(r5)     // Catch: java.lang.Throwable -> L118
            int r4 = r12.optInt(r4)     // Catch: java.lang.Throwable -> L118
            int r3 = r12.optInt(r3)     // Catch: java.lang.Throwable -> L118
            int r2 = r12.optInt(r2)     // Catch: java.lang.Throwable -> L118
            if (r15 != r10) goto Lf0
            r1 = r10
        Lf0:
            r0.a(r1)     // Catch: java.lang.Throwable -> L118
            r0.b(r7)     // Catch: java.lang.Throwable -> L118
            r0.c(r6)     // Catch: java.lang.Throwable -> L118
            r0.d(r5)     // Catch: java.lang.Throwable -> L118
            r0.e(r4)     // Catch: java.lang.Throwable -> L118
            r0.f(r3)     // Catch: java.lang.Throwable -> L118
            if (r2 != 0) goto L105
            goto L106
        L105:
            r10 = r2
        L106:
            r0.i(r10)     // Catch: java.lang.Throwable -> L118
        L109:
            byte[] r15 = r11.getBytes()     // Catch: java.lang.Throwable -> L118
            java.lang.String r15 = android.util.Base64.encodeToString(r15, r9)     // Catch: java.lang.Throwable -> L118
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L118
            r0.a(r14, r15)     // Catch: java.lang.Throwable -> L118
        L118:
            return
    }

    @Override
    public void initialize(java.lang.Object r1, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2) {
            r0 = this;
            super.initialize(r1, r2)
            boolean r2 = r1 instanceof com.tkay.expressad.video.signal.factory.IJSFactory
            if (r2 == 0) goto Lb
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = (com.tkay.expressad.video.signal.factory.IJSFactory) r1
            r0.i = r1
        Lb:
            return
    }

    @Override
    public void insertViewAbove(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.s(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewAbove error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void insertViewBelow(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.t(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewBelow error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void isSystemResume(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r1.i     // Catch: java.lang.Throwable -> L19
            if (r3 == 0) goto L19
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r1.i     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.video.signal.a r3 = r3.getActivityProxy()     // Catch: java.lang.Throwable -> L19
            int r3 = r3.h()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L19
            java.lang.String r3 = b(r3)     // Catch: java.lang.Throwable -> L19
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L19
        L19:
            return
    }

    @Override
    public void ivRewardAdsWithoutVideo(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L7
            return
        L7:
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L1a
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L1a
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L1a
            com.tkay.expressad.video.signal.e r1 = r1.getJSContainerModule()     // Catch: java.lang.Throwable -> L1a
            r1.ivRewardAdsWithoutVideo(r2)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    @Override
    public void loadads(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            r0 = 1
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L62
            if (r1 != 0) goto L23
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L62
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L62
            java.lang.String r7 = "unitId"
            java.lang.String r7 = r1.optString(r7)     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = "type"
            int r2 = r1.optInt(r2, r0)     // Catch: java.lang.Throwable -> L62
            r3 = 2
            if (r2 <= r3) goto L1c
            r2 = r0
        L1c:
            java.lang.String r3 = "adtype"
            int r1 = r1.optInt(r3, r0)     // Catch: java.lang.Throwable -> L62
            goto L27
        L23:
            java.lang.String r7 = ""
            r1 = r0
            r2 = r1
        L27:
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L62
            if (r3 == 0) goto L39
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L62
            java.lang.String r1 = b(r0)     // Catch: java.lang.Throwable -> L62
            r7.a(r6, r1)     // Catch: java.lang.Throwable -> L62
            return
        L39:
            if (r6 == 0) goto L55
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L62
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L62
            boolean r4 = r4 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L62
            if (r4 == 0) goto L55
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L62
            com.tkay.expressad.atsignalcommon.windvane.e r4 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L62
            if (r4 == 0) goto L55
            com.tkay.expressad.atsignalcommon.windvane.e r3 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L62
            com.tkay.expressad.atsignalcommon.a.a r3 = (com.tkay.expressad.atsignalcommon.a.a) r3     // Catch: java.lang.Throwable -> L62
            r3.a(r7, r2, r1)     // Catch: java.lang.Throwable -> L62
        L55:
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L62
            r1 = 0
            java.lang.String r1 = b(r1)     // Catch: java.lang.Throwable -> L62
            r7.a(r6, r1)     // Catch: java.lang.Throwable -> L62
            return
        L62:
            com.tkay.expressad.atsignalcommon.windvane.j r7 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r0 = b(r0)
            r7.a(r6, r0)
            return
    }

    @Override
    public void loadingResourceStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            if (r3 == 0) goto L32
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L27
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L27
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L27
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L32
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L27
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L32
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L27
            r0.loadingResourceStatus(r3, r4)     // Catch: java.lang.Throwable -> L27
            goto L32
        L27:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "loadingResourceStatus error "
            r4.<init>(r0)
            r4.append(r3)
        L32:
            return
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "state"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.i     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L1e
            r2.notifyCloseBtn(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void onlyAppendSubView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.k(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "appendSubView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void onlyAppendViewTo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.l(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "appendViewTo error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void onlyInsertViewAbove(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.u(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewAbove error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void onlyInsertViewBelow(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.v(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewBelow error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void openURL(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L30
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
            java.lang.String r3 = "url"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
            java.lang.String r0 = "type"
            int r2 = r2.optInt(r0)     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
            r0 = 1
            if (r2 != r0) goto L1e
            com.tkay.core.common.l.l.a(r3)     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
            return
        L1e:
            r0 = 2
            if (r2 != r0) goto L26
            android.content.Context r2 = r1.e     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
            com.tkay.core.common.l.l.a(r2, r3)     // Catch: java.lang.Throwable -> L27 org.json.JSONException -> L2c
        L26:
            return
        L27:
            r2 = move-exception
            r2.getMessage()
            goto L30
        L2c:
            r2 = move-exception
            r2.getMessage()
        L30:
            return
    }

    @Override
    public void playVideoFinishOperate(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L7
            return
        L7:
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L25
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L25
            if (r1 != 0) goto L25
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L25
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = "type"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L25
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.i     // Catch: java.lang.Throwable -> L25
            com.tkay.expressad.video.signal.c r2 = r2.getJSCommon()     // Catch: java.lang.Throwable -> L25
            r2.g(r1)     // Catch: java.lang.Throwable -> L25
        L25:
            return
    }

    @Override
    public void playerGetMuteState(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.H(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerGetMuteState error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerMute(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.F(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerMute error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerPause(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.B(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerPause error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerPlay(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.A(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerPlay error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerResume(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.C(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerResume error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerSetRenderType(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            a(r2, r3)
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Lf
            com.tkay.expressad.video.bt.a.c.J(r2, r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "playerSetRenderType error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void playerSetSource(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            a(r2, r3)
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Lf
            com.tkay.expressad.video.bt.a.c.I(r2, r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "playerSetSource error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void playerStop(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.D(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerStop error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerUnmute(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.G(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "playerUnmute error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void playerUpdateFrame(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            a(r2, r3)
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Lf
            com.tkay.expressad.video.bt.a.c.E(r2, r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "playerUpdateFrame error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void preloadSubPlayTemplateView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.i     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L14
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L2f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2f
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L2f
            r0.K(r3, r1)     // Catch: java.lang.Throwable -> L2f
            return
        L14:
            r0 = r3
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r0.a     // Catch: java.lang.Throwable -> L2f
            boolean r1 = r1 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L2e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.atsignalcommon.windvane.e r1 = r0.getWebViewListener()     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L2e
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r0.getWebViewListener()     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.atsignalcommon.a.a r0 = (com.tkay.expressad.atsignalcommon.a.a) r0     // Catch: java.lang.Throwable -> L2f
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L2f
        L2e:
            return
        L2f:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "preloadSubPlayTemplateView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void progressBarOperate(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L2a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2a
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = "view_visible"
            int r3 = r0.optInt(r3)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L2a
            r0.progressBarOperate(r3)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L2a
            r0 = 0
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L2a
            r3.a(r2, r0)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    @Override
    public void progressOperate(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r3.i     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L42
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L42
            if (r0 != 0) goto L42
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "progress"
            int r5 = r0.optInt(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "view_visible"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "progressOperate,progress:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L42
            r1.append(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = ",viewVisible:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L42
            r1.append(r0)     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r3.i     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.video.signal.j r1 = r1.getJSVideoModule()     // Catch: java.lang.Throwable -> L42
            r1.progressOperate(r5, r0)     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.atsignalcommon.windvane.j r5 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L42
            r0 = 0
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L42
            r5.a(r4, r0)     // Catch: java.lang.Throwable -> L42
        L42:
            return
    }

    @Override
    public void reactDeveloper(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L14
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r0 != 0) goto L14
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.video.signal.b r0 = r0.getJSBTModule()     // Catch: java.lang.Throwable -> L21
            r0.reactDeveloper(r2, r3)     // Catch: java.lang.Throwable -> L21
            return
        L14:
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L21
            r0 = 1
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L21
            r3.b(r2, r0)     // Catch: java.lang.Throwable -> L21
            return
        L21:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "reactDeveloper error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L39
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L39
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L39
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L39
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L39
            boolean r0 = r0 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L25
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L39
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0     // Catch: java.lang.Throwable -> L39
            r0.j(r4)     // Catch: java.lang.Throwable -> L39
        L25:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L39
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L39
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L39
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L39
            r0.readyState(r3, r4)     // Catch: java.lang.Throwable -> L39
        L39:
            return
    }

    @Override
    public void removeCacheItem(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            r0 = 1
            r1 = 0
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L39
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = "tkay_h5_cachesp"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L39
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L39
            if (r3 != 0) goto L36
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L39
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L39
            java.lang.String r7 = "key"
            java.lang.String r7 = r3.getString(r7)     // Catch: java.lang.Throwable -> L39
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L39
            if (r3 != 0) goto L32
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L39
            android.content.SharedPreferences$Editor r7 = r2.remove(r7)     // Catch: java.lang.Throwable -> L39
            r7.apply()     // Catch: java.lang.Throwable -> L39
        L32:
            java.lang.String r7 = "Delete Success"
            r2 = r0
            goto L57
        L36:
            java.lang.String r7 = ""
            goto L56
        L39:
            r7 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "removeCacheItem error "
            r2.<init>(r3)
            r2.append(r7)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Delete Error, reason is : "
            r2.<init>(r3)
            java.lang.String r7 = r7.getMessage()
            r2.append(r7)
            java.lang.String r7 = r2.toString()
        L56:
            r2 = r1
        L57:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L95
            r3.<init>()     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = "code"
            if (r2 == 0) goto L61
            r0 = r1
        L61:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = "message"
            r3.put(r0, r7)     // Catch: java.lang.Throwable -> L95
            r7 = 2
            if (r6 == 0) goto L82
            if (r2 == 0) goto L82
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L95
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L95
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L95
            java.lang.String r7 = android.util.Base64.encodeToString(r1, r7)     // Catch: java.lang.Throwable -> L95
            r0.a(r6, r7)     // Catch: java.lang.Throwable -> L95
            return
        L82:
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L95
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L95
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L95
            java.lang.String r7 = android.util.Base64.encodeToString(r1, r7)     // Catch: java.lang.Throwable -> L95
            r0.b(r6, r7)     // Catch: java.lang.Throwable -> L95
        L95:
            return
    }

    @Override
    public void removeFromSuperView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.h(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "removeFromSuperView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void reportUrls(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto Ld
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L1a
            com.tkay.expressad.video.bt.a.c.b(r2, r3)     // Catch: java.lang.Throwable -> L1a
            return
        Ld:
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L1a
            r0 = 1
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L1a
            r3.b(r2, r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "reportUrls error "
            r3.<init>(r0)
            r3.append(r2)
            return
    }

    @Override
    public void setCacheItem(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            r0 = 1
            r1 = 0
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L45
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = "tkay_h5_cachesp"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L45
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L45
            if (r3 != 0) goto L42
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L45
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L45
            java.lang.String r7 = "key"
            java.lang.String r7 = r3.getString(r7)     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = "value"
            java.lang.String r3 = r3.getString(r4)     // Catch: java.lang.Throwable -> L45
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L45
            if (r4 != 0) goto L3e
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L45
            if (r4 != 0) goto L3e
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L45
            android.content.SharedPreferences$Editor r7 = r2.putString(r7, r3)     // Catch: java.lang.Throwable -> L45
            r7.apply()     // Catch: java.lang.Throwable -> L45
        L3e:
            java.lang.String r7 = "Save Success"
            r2 = r0
            goto L63
        L42:
            java.lang.String r7 = ""
            goto L62
        L45:
            r7 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "setCacheItem error "
            r2.<init>(r3)
            r2.append(r7)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Save Error, reason is : "
            r2.<init>(r3)
            java.lang.String r7 = r7.getMessage()
            r2.append(r7)
            java.lang.String r7 = r2.toString()
        L62:
            r2 = r1
        L63:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La1
            r3.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r4 = "code"
            if (r2 == 0) goto L6d
            r0 = r1
        L6d:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = "message"
            r3.put(r0, r7)     // Catch: java.lang.Throwable -> La1
            r7 = 2
            if (r6 == 0) goto L8e
            if (r2 == 0) goto L8e
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> La1
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = android.util.Base64.encodeToString(r1, r7)     // Catch: java.lang.Throwable -> La1
            r0.a(r6, r7)     // Catch: java.lang.Throwable -> La1
            return
        L8e:
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> La1
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = android.util.Base64.encodeToString(r1, r7)     // Catch: java.lang.Throwable -> La1
            r0.b(r6, r7)     // Catch: java.lang.Throwable -> La1
        La1:
            return
    }

    @Override
    public void setScaleFitXY(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "fitxy"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.i     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L1e
            r2.setScaleFitXY(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void setSubPlayTemplateInfo(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.N(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "setSubPlayTemplateInfo error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void setViewAlpha(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.q(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewAlpha error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void setViewBgColor(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.p(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewBgColor error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void setViewRect(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.g(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewRect error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void setViewScale(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.r(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewScale error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void showAlertView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.i     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L1e
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.i     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L1e
            r0.showIVRewardAlertView(r4)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r0 = "showAlertView"
            java.lang.String r1 = ""
            r4.a(r3, r0, r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void showVideoClickView(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.i     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "type"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.i     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()     // Catch: java.lang.Throwable -> L1e
            r2.showVideoClickView(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void showVideoLocation(java.lang.Object r12, java.lang.String r13) {
            r11 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r12 = r11.i     // Catch: java.lang.Throwable -> La2
            if (r12 == 0) goto La2
            boolean r12 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> La2
            if (r12 != 0) goto La2
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La2
            r12.<init>(r13)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "margin_top"
            r0 = 0
            int r2 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "margin_left"
            int r3 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "view_width"
            int r4 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "view_height"
            int r5 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "radius"
            int r6 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "border_top"
            int r7 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "border_left"
            int r8 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "border_width"
            int r9 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "border_height"
            int r10 = r12.optInt(r13, r0)     // Catch: java.lang.Throwable -> La2
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = "showVideoLocation,margin_top:"
            r12.<init>(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",marginLeft:"
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r3)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",viewWidth:"
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r4)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",viewHeight:"
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r5)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",radius:"
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r6)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",borderTop: "
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r7)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",borderLeft: "
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r8)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",borderWidth: "
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r9)     // Catch: java.lang.Throwable -> La2
            java.lang.String r13 = ",borderHeight: "
            r12.append(r13)     // Catch: java.lang.Throwable -> La2
            r12.append(r10)     // Catch: java.lang.Throwable -> La2
            com.tkay.expressad.video.signal.factory.IJSFactory r12 = r11.i     // Catch: java.lang.Throwable -> La2
            com.tkay.expressad.video.signal.j r1 = r12.getJSVideoModule()     // Catch: java.lang.Throwable -> La2
            r1.showVideoLocation(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> La2
            com.tkay.expressad.video.signal.factory.IJSFactory r12 = r11.i     // Catch: java.lang.Throwable -> La2
            com.tkay.expressad.video.signal.c r12 = r12.getJSCommon()     // Catch: java.lang.Throwable -> La2
            r12.l()     // Catch: java.lang.Throwable -> La2
        La2:
            return
    }

    @Override
    public void showView(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.o(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "showView error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void soundOperate(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.i     // Catch: java.lang.Throwable -> L62
            if (r0 == 0) goto L62
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L62
            if (r0 != 0) goto L62
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L62
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L62
            java.lang.String r6 = "mute"
            int r6 = r0.optInt(r6)     // Catch: java.lang.Throwable -> L62
            java.lang.String r1 = "view_visible"
            int r1 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = "pt"
            java.lang.String r3 = ""
            java.lang.String r0 = r0.optString(r2, r3)     // Catch: java.lang.Throwable -> L62
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L62
            java.lang.String r3 = "soundOperate,mute:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L62
            r2.append(r6)     // Catch: java.lang.Throwable -> L62
            java.lang.String r3 = ",viewVisible:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L62
            r2.append(r1)     // Catch: java.lang.Throwable -> L62
            java.lang.String r3 = ",pt:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L62
            r2.append(r0)     // Catch: java.lang.Throwable -> L62
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L4d
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.i     // Catch: java.lang.Throwable -> L62
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L62
            r0.soundOperate(r6, r1)     // Catch: java.lang.Throwable -> L62
            goto L56
        L4d:
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r4.i     // Catch: java.lang.Throwable -> L62
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L62
            r2.soundOperate(r6, r1, r0)     // Catch: java.lang.Throwable -> L62
        L56:
            com.tkay.expressad.atsignalcommon.windvane.j r6 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L62
            r0 = 0
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L62
            r6.a(r5, r0)     // Catch: java.lang.Throwable -> L62
        L62:
            return
    }

    @Override
    public void statistics(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r1.i     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L24
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L24
            if (r2 != 0) goto L24
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = "type"
            int r3 = r2.optInt(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r0 = "data"
            java.lang.String r2 = r2.optString(r0)     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()     // Catch: java.lang.Throwable -> L24
            r0.a(r3, r2)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.i     // Catch: java.lang.Throwable -> L29
            if (r3 == 0) goto L29
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L29
            if (r3 != 0) goto L29
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L29
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r4 = "state"
            int r3 = r3.optInt(r4)     // Catch: java.lang.Throwable -> L29
            r4 = 0
            r0 = 2
            r1 = 1
            if (r3 != r1) goto L1b
            goto L20
        L1b:
            if (r3 != r0) goto L1f
            r0 = r1
            goto L20
        L1f:
            r0 = r4
        L20:
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.i     // Catch: java.lang.Throwable -> L29
            com.tkay.expressad.video.signal.j r3 = r3.getJSVideoModule()     // Catch: java.lang.Throwable -> L29
            r3.closeVideoOperate(r4, r0)     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.i     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L34
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L34
            if (r0 != 0) goto L34
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L34
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L34
            java.lang.String r4 = "state"
            java.lang.String r4 = r0.optString(r4)     // Catch: java.lang.Throwable -> L34
            java.lang.String r0 = "click"
            boolean r4 = r4.equals(r0)     // Catch: java.lang.Throwable -> L34
            if (r4 == 0) goto L34
            com.tkay.expressad.video.signal.factory.IJSFactory r4 = r2.i     // Catch: java.lang.Throwable -> L34
            com.tkay.expressad.video.signal.j r4 = r4.getJSVideoModule()     // Catch: java.lang.Throwable -> L34
            r0 = 1
            r1 = -1
            r4.closeVideoOperate(r0, r1)     // Catch: java.lang.Throwable -> L34
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L34
            r0 = 0
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L34
            r4.a(r3, r0)     // Catch: java.lang.Throwable -> L34
        L34:
            return
    }

    @Override
    public void videoOperate(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L2a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2a
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = "pause_or_resume"
            int r3 = r0.optInt(r3)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.i     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()     // Catch: java.lang.Throwable -> L2a
            r0.videoOperate(r3)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L2a
            r0 = 0
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L2a
            r3.a(r2, r0)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    @Override
    public void webviewFireEvent(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.O(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "setSubPlayTemplateInfo error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void webviewGoBack(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.y(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewGoBack error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void webviewGoForward(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.z(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewGoForward error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void webviewLoad(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.w(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewLoad error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }

    @Override
    public void webviewReload(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            a(r3, r4)
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10
            r0.x(r3, r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewReload error "
            r4.<init>(r0)
            r4.append(r3)
            return
    }
}
