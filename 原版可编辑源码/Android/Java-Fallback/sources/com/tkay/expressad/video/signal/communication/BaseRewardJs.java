package com.tkay.expressad.video.signal.communication;

public class BaseRewardJs extends com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5 implements com.tkay.expressad.video.signal.communication.IRewardBridge {
    protected static final java.lang.String h = "JS-Reward-Brigde";
    protected com.tkay.expressad.video.signal.communication.IRewardBridge i;

    public BaseRewardJs() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a() {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "code"
            r3 = -1
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L20
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L20
            if (r2 != 0) goto L20
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L20
            r2 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Throwable -> L20
        L20:
            return r0
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
    public void getEndScreenInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto La
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> L26
            r0.getEndScreenInfo(r2, r3)     // Catch: java.lang.Throwable -> L26
            return
        La:
            if (r2 == 0) goto L26
            r3 = r2
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L26
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L26
            boolean r0 = r0 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L26
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L26
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L26
            com.tkay.expressad.atsignalcommon.windvane.e r3 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L26
            com.tkay.expressad.atsignalcommon.a.a r3 = (com.tkay.expressad.atsignalcommon.a.a) r3     // Catch: java.lang.Throwable -> L26
            r3.a(r2)     // Catch: java.lang.Throwable -> L26
        L26:
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
    public void handlerPlayableException(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lf
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            r0.handlerPlayableException(r2, r3)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    @Override
    public void initialize(android.content.Context r8, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r9) {
            r7 = this;
            super.initialize(r8, r9)
            r0 = 0
            java.lang.String r1 = "com.tkay.expressad.video.signal.factory.IJSFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> Lf
            boolean r1 = r1.isInstance(r8)     // Catch: java.lang.ClassNotFoundException -> Lf
            goto L14
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = r0
        L14:
            if (r1 == 0) goto L42
            java.lang.String r1 = "com.tkay.expressad.video.signal.communication.BaseRewardJsH5"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L59
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.signal.communication.IRewardBridge r2 = (com.tkay.expressad.video.signal.communication.IRewardBridge) r2     // Catch: java.lang.Exception -> L59
            r7.i = r2     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "initialize"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L59
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r0] = r5     // Catch: java.lang.Exception -> L59
            java.lang.Class<com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView> r5 = com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView.class
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Exception -> L59
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.signal.communication.IRewardBridge r2 = r7.i     // Catch: java.lang.Exception -> L59
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L59
            r3[r0] = r8     // Catch: java.lang.Exception -> L59
            r3[r6] = r9     // Catch: java.lang.Exception -> L59
            r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L59
            return
        L42:
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L58
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            boolean r8 = r8 instanceof com.tkay.expressad.video.signal.communication.IRewardBridge     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L58
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.signal.communication.IRewardBridge r8 = (com.tkay.expressad.video.signal.communication.IRewardBridge) r8     // Catch: java.lang.Exception -> L59
            r7.i = r8     // Catch: java.lang.Exception -> L59
        L58:
            return
        L59:
            r8 = move-exception
            boolean r9 = com.tkay.expressad.b.a
            if (r9 == 0) goto L61
            r8.printStackTrace()
        L61:
            return
    }

    @Override
    public void initialize(java.lang.Object r8, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r9) {
            r7 = this;
            super.initialize(r8, r9)
            r0 = 0
            java.lang.String r1 = "com.tkay.expressad.video.signal.factory.IJSFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> Lf
            boolean r1 = r1.isInstance(r8)     // Catch: java.lang.ClassNotFoundException -> Lf
            goto L14
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = r0
        L14:
            if (r1 == 0) goto L42
            java.lang.String r1 = "com.tkay.expressad.video.signal.communication.BaseRewardJsH5"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L59
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.signal.communication.IRewardBridge r2 = (com.tkay.expressad.video.signal.communication.IRewardBridge) r2     // Catch: java.lang.Exception -> L59
            r7.i = r2     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "initialize"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L59
            java.lang.Class<java.lang.Object> r5 = java.lang.Object.class
            r4[r0] = r5     // Catch: java.lang.Exception -> L59
            java.lang.Class<com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView> r5 = com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView.class
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Exception -> L59
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.signal.communication.IRewardBridge r2 = r7.i     // Catch: java.lang.Exception -> L59
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L59
            r3[r0] = r8     // Catch: java.lang.Exception -> L59
            r3[r6] = r9     // Catch: java.lang.Exception -> L59
            r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L59
            return
        L42:
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L58
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            boolean r8 = r8 instanceof com.tkay.expressad.video.signal.communication.IRewardBridge     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L58
            java.lang.Object r8 = r9.getObject()     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.signal.communication.IRewardBridge r8 = (com.tkay.expressad.video.signal.communication.IRewardBridge) r8     // Catch: java.lang.Exception -> L59
            r7.i = r8     // Catch: java.lang.Exception -> L59
        L58:
            return
        L59:
            r8 = move-exception
            boolean r9 = com.tkay.expressad.b.a
            if (r9 == 0) goto L61
            r8.printStackTrace()
        L61:
            return
    }

    @Override
    public void install(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r2.i     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto La
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r2.i     // Catch: java.lang.Throwable -> L3c
            r0.install(r3, r4)     // Catch: java.lang.Throwable -> L3c
            return
        La:
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L11
            return
        L11:
            if (r3 == 0) goto L3c
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L3c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L3c
            boolean r0 = r0 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L3c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L3c
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0     // Catch: java.lang.Throwable -> L3c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L3c
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L38
            android.content.Context r1 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L3c
            if (r3 == r1) goto L38
            r0.a(r3)     // Catch: java.lang.Throwable -> L3c
        L38:
            r3 = 1
            r0.click(r3, r4)     // Catch: java.lang.Throwable -> L3c
        L3c:
            return
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lf
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            r0.notifyCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    @Override
    public void openURL(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "params is null"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r2, r3)
            return
        Lc:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L3c
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
            java.lang.String r3 = "url"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
            java.lang.String r0 = "type"
            int r2 = r2.optInt(r0)     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
            r0 = 1
            if (r2 != r0) goto L2a
            com.tkay.core.common.l.l.a(r3)     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
            return
        L2a:
            r0 = 2
            if (r2 != r0) goto L32
            android.content.Context r2 = r1.e     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
            com.tkay.core.common.l.l.a(r2, r3)     // Catch: java.lang.Throwable -> L33 org.json.JSONException -> L38
        L32:
            return
        L33:
            r2 = move-exception
            r2.getMessage()
            goto L3c
        L38:
            r2 = move-exception
            r2.getMessage()
        L3c:
            return
    }

    @Override
    public void setOrientation(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lf
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            r0.setOrientation(r2, r3)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lf
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            r0.toggleCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto Lf
            com.tkay.expressad.video.signal.communication.IRewardBridge r0 = r1.i     // Catch: java.lang.Throwable -> L10
            r0.triggerCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> L10
        Lf:
            return
        L10:
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r0 = a()
            r3.a(r2, r0)
            return
    }
}
