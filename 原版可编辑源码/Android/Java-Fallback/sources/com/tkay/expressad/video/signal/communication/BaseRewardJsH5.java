package com.tkay.expressad.video.signal.communication;

public class BaseRewardJsH5 implements com.tkay.expressad.video.signal.communication.IRewardBridge {
    protected static final java.lang.String a = "JS-Reward-Brigde";
    protected com.tkay.expressad.video.signal.factory.IJSFactory b;

    public BaseRewardJsH5() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(int r3) {
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
    public void getEndScreenInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r1.b     // Catch: java.lang.Throwable -> L27
            if (r3 == 0) goto L27
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r1.b     // Catch: java.lang.Throwable -> L27
            com.tkay.expressad.video.signal.i r3 = r3.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L27
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto L1e
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L27
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)     // Catch: java.lang.Throwable -> L27
            goto L20
        L1e:
            java.lang.String r3 = ""
        L20:
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L27
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L27
        L27:
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
    public void handlerPlayableException(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.b     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "msg"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.b     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.i r2 = r2.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L1e
            r2.handlerPlayableException(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    public void initialize(android.content.Context r1, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2) {
            r0 = this;
            boolean r2 = r1 instanceof com.tkay.expressad.video.signal.factory.IJSFactory
            if (r2 == 0) goto L8
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = (com.tkay.expressad.video.signal.factory.IJSFactory) r1
            r0.b = r1
        L8:
            return
    }

    public void initialize(java.lang.Object r1, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2) {
            r0 = this;
            boolean r2 = r1 instanceof com.tkay.expressad.video.signal.factory.IJSFactory
            if (r2 == 0) goto L8
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = (com.tkay.expressad.video.signal.factory.IJSFactory) r1
            r0.b = r1
        L8:
            return
    }

    @Override
    public void install(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.b     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L4e
            if (r3 == 0) goto L2d
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L4e
            boolean r0 = r0 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L2d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L2d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L4e
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Throwable -> L4e
            if (r3 == 0) goto L2d
            android.content.Context r1 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L4e
            if (r3 == r1) goto L2d
            r0.a(r3)     // Catch: java.lang.Throwable -> L4e
        L2d:
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.b     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.video.signal.e r3 = r3.getJSContainerModule()     // Catch: java.lang.Throwable -> L4e
            boolean r3 = r3.endCardShowing()     // Catch: java.lang.Throwable -> L4e
            if (r3 == 0) goto L44
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.b     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.video.signal.c r3 = r3.getJSCommon()     // Catch: java.lang.Throwable -> L4e
            r0 = 3
            r3.click(r0, r4)     // Catch: java.lang.Throwable -> L4e
            return
        L44:
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r2.b     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.video.signal.c r3 = r3.getJSCommon()     // Catch: java.lang.Throwable -> L4e
            r0 = 1
            r3.click(r0, r4)     // Catch: java.lang.Throwable -> L4e
        L4e:
            return
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.b     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "state"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.b     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.i r2 = r2.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L1e
            r2.notifyCloseBtn(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void openURL(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L4f
            if (r0 != 0) goto L24
            boolean r1 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.a     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L24
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Exception -> L20
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Exception -> L20
            if (r3 == 0) goto L24
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Exception -> L20
            r0 = r3
            goto L24
        L20:
            r3 = move-exception
            r3.getMessage()
        L24:
            if (r0 != 0) goto L27
            return
        L27:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L46 org.json.JSONException -> L4b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L46 org.json.JSONException -> L4b
            java.lang.String r4 = "url"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L46 org.json.JSONException -> L4b
            java.lang.String r1 = "type"
            int r3 = r3.optInt(r1)     // Catch: java.lang.Throwable -> L46 org.json.JSONException -> L4b
            r1 = 1
            if (r3 != r1) goto L3f
            com.tkay.core.common.l.l.a(r4)     // Catch: java.lang.Throwable -> L46 org.json.JSONException -> L4b
            return
        L3f:
            r1 = 2
            if (r3 != r1) goto L45
            com.tkay.core.common.l.l.a(r0, r4)     // Catch: java.lang.Throwable -> L46 org.json.JSONException -> L4b
        L45:
            return
        L46:
            r3 = move-exception
            r3.getMessage()
            goto L4f
        L4b:
            r3 = move-exception
            r3.getMessage()
        L4f:
            return
    }

    @Override
    public void setOrientation(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.b     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "state"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.b     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.i r2 = r2.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L1e
            r2.b(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r0.b     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "state"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r0.b     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.video.signal.i r2 = r2.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L1e
            r2.toggleCloseBtn(r1)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.b     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L2a
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L2b
            r1 = 0
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L2b
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L2b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r4 = "state"
            java.lang.String r4 = r0.optString(r4)     // Catch: java.lang.Throwable -> L2b
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r2.b     // Catch: java.lang.Throwable -> L2b
            com.tkay.expressad.video.signal.i r0 = r0.getIJSRewardVideoV1()     // Catch: java.lang.Throwable -> L2b
            r0.a(r4)     // Catch: java.lang.Throwable -> L2b
        L2a:
            return
        L2b:
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            r0 = -1
            java.lang.String r0 = a(r0)
            r4.a(r3, r0)
            return
    }
}
