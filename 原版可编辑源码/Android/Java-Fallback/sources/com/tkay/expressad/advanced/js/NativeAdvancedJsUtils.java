package com.tkay.expressad.advanced.js;

public class NativeAdvancedJsUtils {
    public static final java.lang.String a = "onViewDisappeared";
    public static final java.lang.String b = "onViewAppeared";
    public static final java.lang.String c = "onSystemDestory";
    public static final java.lang.String d = "setStyleList";
    public static final java.lang.String e = "params";
    public static final java.lang.String f = "showCloseButton";
    public static final java.lang.String g = "hideCloseButton";
    public static final java.lang.String h = "setVolume";
    public static final java.lang.String i = "mute";
    public static final java.lang.String j = "setVideoPlayMode";
    public static final java.lang.String k = "autoPlay";
    public static final java.lang.String l = "onNetstatChanged";
    public static final java.lang.String m = "netstat";
    public static final java.lang.String n = "sq";
    public static final java.lang.String o = "thirdPartyCalled";
    public static final java.lang.String p = "action";
    public static final java.lang.String q = "params";
    private static java.lang.String r = "NativeAdvancedJsUtils";

    static {
            return
    }

    public NativeAdvancedJsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void callbackSuccess(java.lang.Object r3) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L21
            r0.<init>()     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.b     // Catch: java.lang.Exception -> L21
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L21
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L21
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L21
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L21
            r2 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)     // Catch: java.lang.Exception -> L21
            r1.a(r3, r0)     // Catch: java.lang.Exception -> L21
            return
        L21:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public static void fireOnJSBridgeConnected(android.webkit.WebView r0) {
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.atsignalcommon.windvane.j.b(r0)
            return
    }

    public static void getFileInfo(java.lang.Object r19, org.json.JSONObject r20) {
            r1 = r19
            r0 = r20
            java.lang.String r2 = "resource"
            java.lang.String r3 = "type"
            java.lang.String r4 = ""
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r6 = "message"
            java.lang.String r7 = "code"
            r8 = 2
            r9 = 1
            if (r0 != 0) goto L38
            r5.put(r7, r9)     // Catch: org.json.JSONException -> L33
            java.lang.String r0 = "params is null"
            r5.put(r6, r0)     // Catch: org.json.JSONException -> L33
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L33
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L33
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L33
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r8)     // Catch: org.json.JSONException -> L33
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L33
            return
        L33:
            r0 = move-exception
            r0.getMessage()
            return
        L38:
            r10 = 0
            r5.put(r7, r10)     // Catch: java.lang.Throwable -> L1cf
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L1cf
            org.json.JSONArray r11 = r0.getJSONArray(r2)     // Catch: java.lang.Throwable -> L1cf
            if (r11 == 0) goto L19a
            int r0 = r11.length()     // Catch: java.lang.Throwable -> L1cf
            if (r0 <= 0) goto L19a
            org.json.JSONArray r12 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L1cf
            r12.<init>()     // Catch: java.lang.Throwable -> L1cf
            int r13 = r11.length()     // Catch: java.lang.Throwable -> L1cf
            r14 = r10
        L55:
            if (r14 >= r13) goto L17a
            org.json.JSONObject r0 = r11.getJSONObject(r14)     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r15 = "ref"
            java.lang.String r15 = r0.optString(r15, r4)     // Catch: java.lang.Throwable -> L1cf
            int r0 = r0.getInt(r3)     // Catch: java.lang.Throwable -> L1cf
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1cf
            r8.<init>()     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r10 = "path"
            if (r0 != r9) goto Lce
            boolean r16 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L1cf
            if (r16 != 0) goto Lce
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1cf
            r0.<init>()     // Catch: java.lang.Throwable -> L1cf
            com.tkay.expressad.videocommon.b.l.a()     // Catch: java.lang.Throwable -> L1cf
            com.tkay.core.common.a.i r16 = com.tkay.expressad.videocommon.b.l.b(r15)     // Catch: java.lang.Throwable -> L1cf
            if (r16 == 0) goto Lc7
            r0.put(r3, r9)     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r9 = "videoDataLength"
            r18 = r6
            r17 = r7
            long r6 = r16.d()     // Catch: java.lang.Throwable -> L196
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L196
            java.lang.String r6 = r16.b()     // Catch: java.lang.Throwable -> L196
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L196
            java.lang.String r9 = "path4Web"
            if (r7 == 0) goto La5
            r0.put(r10, r4)     // Catch: java.lang.Throwable -> L196
            r0.put(r9, r4)     // Catch: java.lang.Throwable -> L196
            goto Lab
        La5:
            r0.put(r10, r6)     // Catch: java.lang.Throwable -> L196
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L196
        Lab:
            int r6 = r16.c()     // Catch: java.lang.Throwable -> L196
            r7 = 100
            java.lang.String r9 = "downloaded"
            if (r6 != r7) goto Lbb
            r6 = 1
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L196
            r6 = 0
            goto Lbf
        Lbb:
            r6 = 0
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L196
        Lbf:
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L196
            r12.put(r8)     // Catch: java.lang.Throwable -> L196
            goto L16f
        Lc7:
            r18 = r6
            r17 = r7
            r6 = 0
            goto L16f
        Lce:
            r18 = r6
            r17 = r7
            r6 = 0
            r7 = 2
            if (r0 != r7) goto L103
            boolean r9 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L196
            if (r9 != 0) goto L103
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L196
            r0.<init>()     // Catch: java.lang.Throwable -> L196
            r0.put(r3, r7)     // Catch: java.lang.Throwable -> L196
            com.tkay.expressad.videocommon.b.g r7 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Throwable -> L196
            java.lang.String r7 = r7.c(r15)     // Catch: java.lang.Throwable -> L196
            if (r7 != 0) goto Lf0
            r7 = r4
            goto Lf8
        Lf0:
            com.tkay.expressad.videocommon.b.g r7 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Throwable -> L196
            java.lang.String r7 = r7.c(r15)     // Catch: java.lang.Throwable -> L196
        Lf8:
            r0.put(r10, r7)     // Catch: java.lang.Throwable -> L196
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L196
            r12.put(r8)     // Catch: java.lang.Throwable -> L196
            goto L16f
        L103:
            r7 = 3
            if (r0 != r7) goto L149
            boolean r9 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L196
            if (r9 != 0) goto L149
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L12e
            r0.<init>(r15)     // Catch: java.lang.Throwable -> L12e
            boolean r9 = r0.exists()     // Catch: java.lang.Throwable -> L12e
            if (r9 == 0) goto L136
            boolean r9 = r0.isFile()     // Catch: java.lang.Throwable -> L12e
            if (r9 == 0) goto L136
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L12e
            if (r0 == 0) goto L136
            java.lang.String r0 = "file:////"
            java.lang.String r9 = java.lang.String.valueOf(r15)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r0 = r0.concat(r9)     // Catch: java.lang.Throwable -> L12e
            goto L137
        L12e:
            r0 = move-exception
            boolean r9 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L196
            if (r9 == 0) goto L136
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L196
        L136:
            r0 = r4
        L137:
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L196
            r9.<init>()     // Catch: java.lang.Throwable -> L196
            r9.put(r3, r7)     // Catch: java.lang.Throwable -> L196
            r9.put(r10, r0)     // Catch: java.lang.Throwable -> L196
            r8.put(r15, r9)     // Catch: java.lang.Throwable -> L196
            r12.put(r8)     // Catch: java.lang.Throwable -> L196
            goto L16f
        L149:
            r7 = 4
            if (r0 != r7) goto L16f
            boolean r0 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L196
            if (r0 != 0) goto L16f
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L196
            r0.<init>()     // Catch: java.lang.Throwable -> L196
            r0.put(r3, r7)     // Catch: java.lang.Throwable -> L196
            java.lang.String r7 = com.tkay.expressad.foundation.h.s.a(r15)     // Catch: java.lang.Throwable -> L196
            if (r7 != 0) goto L162
            r7 = r4
            goto L166
        L162:
            java.lang.String r7 = com.tkay.expressad.foundation.h.s.a(r15)     // Catch: java.lang.Throwable -> L196
        L166:
            r0.put(r10, r7)     // Catch: java.lang.Throwable -> L196
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L196
            r12.put(r8)     // Catch: java.lang.Throwable -> L196
        L16f:
            int r14 = r14 + 1
            r10 = r6
            r7 = r17
            r6 = r18
            r8 = 2
            r9 = 1
            goto L55
        L17a:
            r18 = r6
            r17 = r7
            r5.put(r2, r12)     // Catch: java.lang.Throwable -> L196
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L196
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L196
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L196
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L196
            return
        L196:
            r0 = move-exception
            r2 = r17
            goto L1c3
        L19a:
            r18 = r6
            r17 = r7
            r2 = r17
            r3 = 1
            r5.put(r2, r3)     // Catch: java.lang.Throwable -> L1c2 org.json.JSONException -> L1c6
            java.lang.String r0 = "resource is null"
            r3 = r18
            r5.put(r3, r0)     // Catch: org.json.JSONException -> L1c0 java.lang.Throwable -> L1cd
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L1c0 java.lang.Throwable -> L1cd
            java.lang.String r4 = r5.toString()     // Catch: org.json.JSONException -> L1c0 java.lang.Throwable -> L1cd
            byte[] r4 = r4.getBytes()     // Catch: org.json.JSONException -> L1c0 java.lang.Throwable -> L1cd
            r6 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r6)     // Catch: org.json.JSONException -> L1c0 java.lang.Throwable -> L1cd
            r0.a(r1, r4)     // Catch: org.json.JSONException -> L1c0 java.lang.Throwable -> L1cd
            return
        L1c0:
            r0 = move-exception
            goto L1c9
        L1c2:
            r0 = move-exception
        L1c3:
            r3 = r18
            goto L1d2
        L1c6:
            r0 = move-exception
            r3 = r18
        L1c9:
            r0.getMessage()     // Catch: java.lang.Throwable -> L1cd
            return
        L1cd:
            r0 = move-exception
            goto L1d2
        L1cf:
            r0 = move-exception
            r3 = r6
            r2 = r7
        L1d2:
            r4 = 1
            r5.put(r2, r4)     // Catch: org.json.JSONException -> L1f2
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: org.json.JSONException -> L1f2
            r5.put(r3, r0)     // Catch: org.json.JSONException -> L1f2
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L1f2
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L1f2
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L1f2
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: org.json.JSONException -> L1f2
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L1f2
            return
        L1f2:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public static void sendEventToH5(android.webkit.WebView r0, java.lang.String r1, java.lang.String r2) {
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
            return
    }

    public static void sendThirdToH5(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5, java.lang.Object r6) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L44
            r0.<init>()     // Catch: org.json.JSONException -> L44
            java.lang.String r1 = "sq"
            r2 = 1
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L44
            java.lang.String r1 = "action"
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L44
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: org.json.JSONException -> L44
            java.lang.String r1 = "params"
            if (r4 != 0) goto L23
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L44
            r4.<init>()     // Catch: org.json.JSONException -> L44
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L44
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L44
        L23:
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: org.json.JSONException -> L44
            if (r4 == 0) goto L2e
            if (r6 == 0) goto L2e
            r0.put(r1, r6)     // Catch: org.json.JSONException -> L44
        L2e:
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L44
            java.lang.String r4 = "thirdPartyCalled"
            java.lang.String r5 = r0.toString()     // Catch: org.json.JSONException -> L44
            byte[] r5 = r5.getBytes()     // Catch: org.json.JSONException -> L44
            r6 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)     // Catch: org.json.JSONException -> L44
            com.tkay.expressad.atsignalcommon.windvane.j.a(r3, r4, r5)     // Catch: org.json.JSONException -> L44
            return
        L44:
            r3 = move-exception
            r3.printStackTrace()
            return
    }
}
