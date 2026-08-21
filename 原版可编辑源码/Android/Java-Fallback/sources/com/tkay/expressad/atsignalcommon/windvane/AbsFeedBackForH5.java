package com.tkay.expressad.atsignalcommon.windvane;

public abstract class AbsFeedBackForH5 extends com.tkay.expressad.atsignalcommon.windvane.l {
    public static final java.lang.String a = "onFeedbackAlertStatusNotify";
    public static final java.lang.String b = "status";
    public static final int c = 1;
    public static final int d = 2;
    private static int i = 0;
    private static int j = 1;
    private java.lang.String h;

    static {
            return
    }

    public AbsFeedBackForH5() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "AbsFeedBackForH5"
            r1.h = r0
            return
    }

    public void callbackExcep(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5.j     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L30
            com.tkay.expressad.atsignalcommon.windvane.j r5 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L30
            return
        L30:
            r4 = move-exception
            r4.getMessage()
            return
    }

    public void callbackSuccess(java.lang.Object r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L32
            r0.<init>()     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5.i     // Catch: java.lang.Exception -> L32
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "message"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "data"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L32
            r2.<init>()     // Catch: java.lang.Exception -> L32
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L32
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L32
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L32
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L32
            r2 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)     // Catch: java.lang.Exception -> L32
            r1.a(r4, r0)     // Catch: java.lang.Exception -> L32
            return
        L32:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            r3.callbackExcep(r4, r1)
            r0.getMessage()
            return
    }

    public void callbackSuccessWithData(java.lang.Object r4, org.json.JSONObject r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5.i     // Catch: java.lang.Exception -> L2d
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "message"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "data"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L2d
            com.tkay.expressad.atsignalcommon.windvane.j r5 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L2d
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L2d
            return
        L2d:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            r3.callbackExcep(r4, r0)
            r5.getMessage()
            return
    }

    public void feedbackLayoutOperate(java.lang.Object r20, java.lang.String r21) {
            r19 = this;
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r21)     // Catch: java.lang.Throwable -> L7d
            if (r1 != 0) goto L79
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7d
            r2 = r21
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r2 = "width"
            r3 = -1
            int r2 = r1.optInt(r2, r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = "height"
            int r4 = r1.optInt(r4, r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r5 = "radius"
            r6 = 20
            int r5 = r1.optInt(r5, r6)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r6 = "left"
            int r6 = r1.optInt(r6, r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r7 = "top"
            int r3 = r1.optInt(r7, r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r7 = "opacity"
            r8 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r7 = r1.optDouble(r7, r8)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r9 = "fontColor"
            java.lang.String r17 = r1.optString(r9, r0)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r9 = "bgColor"
            java.lang.String r18 = r1.optString(r9, r0)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r9 = "key"
            java.lang.String r0 = r1.optString(r9, r0)     // Catch: java.lang.Throwable -> L7d
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L7d
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L7d
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L7d
            float r7 = (float) r7     // Catch: java.lang.Throwable -> L7d
            com.tkay.expressad.foundation.f.a.a r10 = r1.a(r0)     // Catch: java.lang.Throwable -> L7d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L7d
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L7d
            int r11 = com.tkay.expressad.foundation.h.t.b(r0, r6)     // Catch: java.lang.Throwable -> L7d
            int r12 = com.tkay.expressad.foundation.h.t.b(r0, r3)     // Catch: java.lang.Throwable -> L7d
            float r1 = (float) r2     // Catch: java.lang.Throwable -> L7d
            int r13 = com.tkay.expressad.foundation.h.t.b(r0, r1)     // Catch: java.lang.Throwable -> L7d
            float r1 = (float) r4     // Catch: java.lang.Throwable -> L7d
            int r14 = com.tkay.expressad.foundation.h.t.b(r0, r1)     // Catch: java.lang.Throwable -> L7d
            float r1 = (float) r5     // Catch: java.lang.Throwable -> L7d
            int r15 = com.tkay.expressad.foundation.h.t.b(r0, r1)     // Catch: java.lang.Throwable -> L7d
            r16 = r7
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L7d
        L79:
            r19.callbackSuccess(r20)     // Catch: java.lang.Throwable -> L7d
            return
        L7d:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            r2 = r19
            r3 = r20
            r2.callbackExcep(r3, r1)
            r0.printStackTrace()
            return
    }

    public void feedbackOperate(java.lang.Object r12, java.lang.String r13) {
            r11 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L49
            if (r0 != 0) goto L45
            r0 = r12
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L49
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L49
            r1.<init>(r13)     // Catch: java.lang.Throwable -> L49
            java.lang.String r13 = "view_visible"
            r2 = 1
            int r13 = r1.optInt(r13, r2)     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "key"
            java.lang.String r4 = ""
            java.lang.String r6 = r1.optString(r3, r4)     // Catch: java.lang.Throwable -> L49
            com.tkay.expressad.foundation.f.b r5 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L49
            if (r13 != r2) goto L26
            r13 = 8
            goto L27
        L26:
            r13 = 0
        L27:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8 = r0.a     // Catch: java.lang.Throwable -> L49
            com.tkay.expressad.foundation.f.a.a r0 = r5.a(r6)     // Catch: java.lang.Throwable -> L49
            com.tkay.expressad.widget.FeedBackButton r1 = r0.c()     // Catch: java.lang.Throwable -> L49
            if (r1 == 0) goto L45
            r0.a(r13)     // Catch: java.lang.Throwable -> L49
            if (r13 != 0) goto L45
            com.tkay.core.common.b.m r13 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L49
            android.content.Context r7 = r13.f()     // Catch: java.lang.Throwable -> L49
            r9 = 0
            r10 = 0
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L49
        L45:
            r11.callbackSuccess(r12)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r13 = move-exception
            java.lang.String r0 = r13.getMessage()
            r11.callbackExcep(r12, r0)
            r13.printStackTrace()
            return
    }

    public void feedbackPopupOperate(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L2b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2f
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r6 = "view_visible"
            r1 = 1
            int r6 = r0.optInt(r6, r1)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = "key"
            java.lang.String r3 = ""
            java.lang.String r0 = r0.optString(r2, r3)     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.foundation.f.b r2 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.foundation.f.a.a r0 = r2.a(r0)     // Catch: java.lang.Throwable -> L2f
            if (r6 != r1) goto L28
            r0.b()     // Catch: java.lang.Throwable -> L2f
            goto L2b
        L28:
            r0.a()     // Catch: java.lang.Throwable -> L2f
        L2b:
            r4.callbackSuccess(r5)     // Catch: java.lang.Throwable -> L2f
            return
        L2f:
            r6 = move-exception
            java.lang.String r0 = r6.getMessage()
            r4.callbackExcep(r5, r0)
            r6.printStackTrace()
            return
    }

    public void getCacheKey(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.c.a r3 = com.tkay.expressad.atsignalcommon.c.a.a()     // Catch: java.lang.Throwable -> L8
            r3.a(r2)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            r1.callbackExcep(r2, r0)
            r3.printStackTrace()
            return
    }

    public void startShake(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L2b
            r1 = r5
            com.tkay.expressad.atsignalcommon.windvane.a r1 = (com.tkay.expressad.atsignalcommon.windvane.a) r1     // Catch: java.lang.Throwable -> L2f
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r6 = "deviceMotionUpdateInterval"
            r3 = 1
            r2.optInt(r6, r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r6 = "oldCache"
            java.lang.String r6 = r2.optString(r6, r0)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = "cache"
            java.lang.String r0 = r2.optString(r3, r0)     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.atsignalcommon.c.a r2 = com.tkay.expressad.atsignalcommon.c.a.a()     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Throwable -> L2f
            r2.a(r5, r1, r6, r0)     // Catch: java.lang.Throwable -> L2f
        L2b:
            r4.callbackSuccess(r5)     // Catch: java.lang.Throwable -> L2f
            return
        L2f:
            r6 = move-exception
            java.lang.String r0 = r6.getMessage()
            r4.callbackExcep(r5, r0)
            r6.printStackTrace()
            return
    }

    public void stopShake(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L1f
            r0 = r4
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L23
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L23
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L23
            java.lang.String r5 = "cache"
            java.lang.String r2 = ""
            java.lang.String r5 = r1.optString(r5, r2)     // Catch: java.lang.Throwable -> L23
            com.tkay.expressad.atsignalcommon.c.a r1 = com.tkay.expressad.atsignalcommon.c.a.a()     // Catch: java.lang.Throwable -> L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L23
            r1.a(r4, r0, r5)     // Catch: java.lang.Throwable -> L23
        L1f:
            r3.callbackSuccess(r4)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            r3.callbackExcep(r4, r0)
            r5.printStackTrace()
            return
    }
}
