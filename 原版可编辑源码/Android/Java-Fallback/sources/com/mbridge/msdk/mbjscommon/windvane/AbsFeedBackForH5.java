package com.mbridge.msdk.mbjscommon.windvane;

public abstract class AbsFeedBackForH5 extends com.mbridge.msdk.mbjscommon.windvane.j {
    private static int FAILED = 1;
    private static int SUCCESS = 0;
    public static final java.lang.String WEBVIEW_EVENT_DIALOG_METHOD_NAME = "onFeedbackAlertStatusNotify";
    public static final java.lang.String WEBVIEW_EVENT_DIALOG_PARAMS_KEY_STATUS = "status";
    public static final int WEBVIEW_EVENT_METHOD_DIALOG_STATUS_DISMISS = 2;
    public static final int WEBVIEW_EVENT_METHOD_DIALOG_STATUS_SHOWED = 1;
    private java.lang.String TAG;

    static {
            return
    }

    public AbsFeedBackForH5() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "AbsFeedBackForH5"
            r1.TAG = r0
            return
    }

    public void callbackExcep(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.windvane.AbsFeedBackForH5.FAILED     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L30
            goto L3a
        L30:
            r4 = move-exception
            java.lang.String r5 = r3.TAG
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L3a:
            return
    }

    public void callbackSuccess(java.lang.Object r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L32
            r0.<init>()     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.windvane.AbsFeedBackForH5.SUCCESS     // Catch: java.lang.Exception -> L32
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "message"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "data"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L32
            r2.<init>()     // Catch: java.lang.Exception -> L32
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L32
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L32
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L32
            r2 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)     // Catch: java.lang.Exception -> L32
            r1.a(r4, r0)     // Catch: java.lang.Exception -> L32
            goto L43
        L32:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            r3.callbackExcep(r4, r1)
            java.lang.String r4 = r3.TAG
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
        L43:
            return
    }

    public void callbackSuccessWithData(java.lang.Object r4, org.json.JSONObject r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.windvane.AbsFeedBackForH5.SUCCESS     // Catch: java.lang.Exception -> L2d
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "message"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "data"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L2d
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L2d
            goto L3e
        L2d:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            r3.callbackExcep(r4, r0)
            java.lang.String r4 = r3.TAG
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)
        L3e:
            return
    }

    public void feedbackLayoutOperate(java.lang.Object r18, java.lang.String r19) {
            r17 = this;
            r1 = r18
            java.lang.String r0 = ""
            boolean r2 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Throwable -> L72
            if (r2 != 0) goto L6c
            r2 = r1
            com.mbridge.msdk.mbjscommon.windvane.a r2 = (com.mbridge.msdk.mbjscommon.windvane.a) r2     // Catch: java.lang.Throwable -> L72
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L72
            r3 = r19
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = "width"
            r4 = -1
            int r7 = r2.optInt(r3, r4)     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = "height"
            int r8 = r2.optInt(r3, r4)     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = "radius"
            r5 = 20
            int r9 = r2.optInt(r3, r5)     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = "left"
            int r3 = r2.optInt(r3, r4)     // Catch: java.lang.Throwable -> L72
            java.lang.String r5 = "top"
            int r4 = r2.optInt(r5, r4)     // Catch: java.lang.Throwable -> L72
            java.lang.String r5 = "opacity"
            r10 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r5 = r2.optDouble(r5, r10)     // Catch: java.lang.Throwable -> L72
            java.lang.String r10 = "fontSize"
            r11 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            double r10 = r2.optDouble(r10, r11)     // Catch: java.lang.Throwable -> L72
            java.lang.String r12 = "padding"
            org.json.JSONArray r16 = r2.optJSONArray(r12)     // Catch: java.lang.Throwable -> L72
            java.lang.String r12 = "fontColor"
            java.lang.String r13 = r2.optString(r12, r0)     // Catch: java.lang.Throwable -> L72
            java.lang.String r12 = "bgColor"
            java.lang.String r14 = r2.optString(r12, r0)     // Catch: java.lang.Throwable -> L72
            java.lang.String r12 = "key"
            java.lang.String r0 = r2.optString(r12, r0)     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.foundation.b.b r2 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L72
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L72
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L72
            float r12 = (float) r5     // Catch: java.lang.Throwable -> L72
            float r15 = (float) r10     // Catch: java.lang.Throwable -> L72
            r5 = r2
            r6 = r0
            r10 = r3
            r11 = r4
            r5.a(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Throwable -> L72
        L6c:
            r17.callbackSuccess(r18)     // Catch: java.lang.Throwable -> L72
            r3 = r17
            goto L7f
        L72:
            r0 = move-exception
            java.lang.String r2 = r0.getMessage()
            r3 = r17
            r3.callbackExcep(r1, r2)
            r0.printStackTrace()
        L7f:
            return
    }

    public void feedbackOperate(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L2c
            r0 = r6
            com.mbridge.msdk.mbjscommon.windvane.a r0 = (com.mbridge.msdk.mbjscommon.windvane.a) r0     // Catch: java.lang.Throwable -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L30
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L30
            java.lang.String r7 = "view_visible"
            r2 = 1
            int r7 = r1.optInt(r7, r2)     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "key"
            java.lang.String r4 = ""
            java.lang.String r1 = r1.optString(r3, r4)     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.b.b r3 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L30
            if (r7 != r2) goto L26
            r7 = 8
            goto L27
        L26:
            r7 = 0
        L27:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L30
            r3.a(r1, r7, r0)     // Catch: java.lang.Throwable -> L30
        L2c:
            r5.callbackSuccess(r6)     // Catch: java.lang.Throwable -> L30
            goto L3b
        L30:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            r5.callbackExcep(r6, r0)
            r7.printStackTrace()
        L3b:
            return
    }

    public void feedbackPopupOperate(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L24
            r0 = r4
            com.mbridge.msdk.mbjscommon.windvane.a r0 = (com.mbridge.msdk.mbjscommon.windvane.a) r0     // Catch: java.lang.Throwable -> L28
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L28
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = "view_visible"
            r1 = 1
            int r5 = r0.optInt(r5, r1)     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = "key"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.optString(r1, r2)     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L28
            r1.a(r0, r5)     // Catch: java.lang.Throwable -> L28
        L24:
            r3.callbackSuccess(r4)     // Catch: java.lang.Throwable -> L28
            goto L33
        L28:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            r3.callbackExcep(r4, r0)
            r5.printStackTrace()
        L33:
            return
    }

    public void getCacheKey(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.d.a r3 = com.mbridge.msdk.mbjscommon.d.a.a()     // Catch: java.lang.Throwable -> L8
            r3.a(r2)     // Catch: java.lang.Throwable -> L8
            goto L13
        L8:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            r1.callbackExcep(r2, r0)
            r3.printStackTrace()
        L13:
            return
    }

    public void startShake(java.lang.Object r11, java.lang.String r12) {
            r10 = this;
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L2d
            r1 = r11
            com.mbridge.msdk.mbjscommon.windvane.a r1 = (com.mbridge.msdk.mbjscommon.windvane.a) r1     // Catch: java.lang.Throwable -> L31
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L31
            r2.<init>(r12)     // Catch: java.lang.Throwable -> L31
            java.lang.String r12 = "deviceMotionUpdateInterval"
            r3 = 1
            int r9 = r2.optInt(r12, r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r12 = "oldCache"
            java.lang.String r7 = r2.optString(r12, r0)     // Catch: java.lang.Throwable -> L31
            java.lang.String r12 = "cache"
            java.lang.String r8 = r2.optString(r12, r0)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.mbjscommon.d.a r4 = com.mbridge.msdk.mbjscommon.d.a.a()     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r1.a     // Catch: java.lang.Throwable -> L31
            r5 = r11
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L31
        L2d:
            r10.callbackSuccess(r11)     // Catch: java.lang.Throwable -> L31
            goto L3c
        L31:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            r10.callbackExcep(r11, r0)
            r12.printStackTrace()
        L3c:
            return
    }

    public void stopShake(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L1f
            r0 = r4
            com.mbridge.msdk.mbjscommon.windvane.a r0 = (com.mbridge.msdk.mbjscommon.windvane.a) r0     // Catch: java.lang.Throwable -> L23
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L23
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L23
            java.lang.String r5 = "cache"
            java.lang.String r2 = ""
            java.lang.String r5 = r1.optString(r5, r2)     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.mbjscommon.d.a r1 = com.mbridge.msdk.mbjscommon.d.a.a()     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L23
            r1.a(r4, r0, r5)     // Catch: java.lang.Throwable -> L23
        L1f:
            r3.callbackSuccess(r4)     // Catch: java.lang.Throwable -> L23
            goto L2e
        L23:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            r3.callbackExcep(r4, r0)
            r5.printStackTrace()
        L2e:
            return
    }
}
