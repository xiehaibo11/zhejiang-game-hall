package com.tkay.expressad.mbbanner.a.a;

public final class a {
    private static final java.lang.String a = "BannerCallJS";

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.webkit.WebView r0) {
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.atsignalcommon.windvane.j.b(r0)
            return
    }

    public static void a(android.webkit.WebView r4, float r5, float r6) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L38
            r0.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = "startX"
            double r2 = (double) r5     // Catch: java.lang.Throwable -> L38
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = "startY"
            double r1 = (double) r6     // Catch: java.lang.Throwable -> L38
            r0.put(r5, r1)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = "scale"
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L38
            android.content.Context r6 = r6.f()     // Catch: java.lang.Throwable -> L38
            float r6 = com.tkay.expressad.foundation.h.t.c(r6)     // Catch: java.lang.Throwable -> L38
            double r1 = (double) r6     // Catch: java.lang.Throwable -> L38
            r0.put(r5, r1)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L38
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L38
            r6 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)     // Catch: java.lang.Throwable -> L38
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L38
            java.lang.String r6 = "webviewshow"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r4, r6, r5)     // Catch: java.lang.Throwable -> L38
        L38:
            return
    }

    private static void a(android.webkit.WebView r1, int r2, int r3) {
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L9
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L9
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L9
            r0.fireSizeChangeEvent(r1, r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public static void a(android.webkit.WebView r16, int r17, int r18, int r19, int r20) {
            r6 = r16
            java.lang.String r0 = "true"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> Ld2
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> Ld2
            int r1 = r1.orientation     // Catch: java.lang.Throwable -> Ld2
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld2
            r2.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "orientation"
            r4 = 2
            if (r1 != r4) goto L23
            java.lang.String r1 = "landscape"
            goto L2b
        L23:
            r4 = 1
            if (r1 != r4) goto L29
            java.lang.String r1 = "portrait"
            goto L2b
        L29:
            java.lang.String r1 = "undefined"
        L2b:
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "locked"
            r2.put(r1, r0)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            int r1 = com.tkay.expressad.foundation.h.k.e(r1)     // Catch: java.lang.Throwable -> Ld2
            float r7 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            int r1 = com.tkay.expressad.foundation.h.k.f(r1)     // Catch: java.lang.Throwable -> Ld2
            float r8 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            java.util.HashMap r1 = com.tkay.expressad.foundation.h.k.g(r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "width"
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> Ld2
            int r9 = r3.intValue()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "height"
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> Ld2
            int r10 = r1.intValue()     // Catch: java.lang.Throwable -> Ld2
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Throwable -> Ld2
            r11.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "placementType"
            java.lang.String r3 = "inline"
            r11.put(r1, r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "state"
            java.lang.String r3 = "default"
            r11.put(r1, r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "viewable"
            r11.put(r1, r0)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r0 = "currentAppOrientation"
            r11.put(r0, r2)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r1 = r17
            float r12 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r18
            float r13 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r19
            float r14 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r20
            float r15 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r16
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r0.fireSetDefaultPosition(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r1 = r16
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r0.fireSetCurrentPosition(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireSetScreenSize(r6, r7, r8)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            float r1 = (float) r9     // Catch: java.lang.Throwable -> Ld2
            float r2 = (float) r10     // Catch: java.lang.Throwable -> Ld2
            r0.fireSetMaxSize(r6, r1, r2)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireChangeEventForPropertys(r6, r11)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireReadyEvent(r6)     // Catch: java.lang.Throwable -> Ld2
        Ld2:
            return
    }

    public static void a(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1, boolean r2) {
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Le
            if (r2 == 0) goto L9
            java.lang.String r2 = "true"
            goto Lb
        L9:
            java.lang.String r2 = "false"
        Lb:
            r0.fireSetIsViewable(r1, r2)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }
}
