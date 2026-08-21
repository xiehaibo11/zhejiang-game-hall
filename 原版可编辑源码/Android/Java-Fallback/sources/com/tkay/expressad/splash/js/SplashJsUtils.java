package com.tkay.expressad.splash.js;

public class SplashJsUtils {
    public static final java.lang.String a = "onSystemPause";
    public static final java.lang.String b = "onSystemResume";
    public static final java.lang.String c = "onSystemDestory";
    private static java.lang.String d = "SplashJsUtils";
    private static int e = 0;
    private static int f = 1;


    static {
            return
    }

    public SplashJsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.splash.js.SplashJsUtils.d
            return r0
    }

    static void a(java.lang.String r1, com.tkay.expressad.foundation.d.c r2) {
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.o
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.aZ()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "splash"
            com.tkay.expressad.foundation.g.a.f.a(r1, r2, r0)
        L13:
            return
    }

    private static void b(java.lang.String r1, com.tkay.expressad.foundation.d.c r2) {
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.o
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.aZ()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "splash"
            com.tkay.expressad.foundation.g.a.f.a(r1, r2, r0)
        L13:
            return
    }

    public static void callbackExcep(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.splash.js.SplashJsUtils.f     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L30
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L30
            return
        L30:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public static void callbackSuccess(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.splash.js.SplashJsUtils.e     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "id"
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "data"
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L30
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L30
            return
        L30:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            callbackExcep(r3, r0)
            r4.getMessage()
            return
    }

    public static java.lang.String codeToJsonString(int r3) {
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

    public static void increaseOfferFrequence(java.lang.Object r1, org.json.JSONObject r2) {
            java.lang.String r0 = "data"
            org.json.JSONObject r2 = r2.optJSONObject(r0)     // Catch: java.lang.Throwable -> L23
            if (r2 != 0) goto Le
            java.lang.String r2 = "data is empty"
            callbackExcep(r1, r2)     // Catch: java.lang.Throwable -> L23
            return
        Le:
            com.tkay.expressad.foundation.d.c r2 = com.tkay.expressad.foundation.d.c.b(r2)     // Catch: java.lang.Throwable -> L23
            if (r2 != 0) goto L1a
            java.lang.String r2 = "data camapign is empty"
            callbackExcep(r1, r2)     // Catch: java.lang.Throwable -> L23
            return
        L1a:
            updateFrequence(r2)     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = ""
            callbackSuccess(r1, r2)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            callbackExcep(r1, r2)
            return
    }

    public static void sendEventToH5(android.webkit.WebView r0, java.lang.String r1, java.lang.String r2) {
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
            return
    }

    public static void updateFrequence(com.tkay.expressad.foundation.d.c r2) {
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.expressad.splash.js.SplashJsUtils$1 r1 = new com.tkay.expressad.splash.js.SplashJsUtils$1
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
            return
    }
}
