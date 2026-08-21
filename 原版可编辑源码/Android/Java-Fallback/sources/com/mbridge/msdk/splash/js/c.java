package com.mbridge.msdk.splash.js;

public final class c {
    private static java.lang.String a = "SplashJsUtils";
    private static int b = 0;
    private static int c = 1;


    static {
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.splash.js.c.a
            return r0
    }

    public static java.lang.String a(int r3) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "code"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L21
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L28
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L21
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Throwable -> L21
            r0 = r3
            goto L28
        L21:
            java.lang.String r3 = com.mbridge.msdk.splash.js.c.a
            java.lang.String r1 = "code to string is error"
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)
        L28:
            return r0
    }

    public static void a(android.webkit.WebView r2) {
            java.lang.String r0 = com.mbridge.msdk.splash.js.c.a
            java.lang.String r1 = "fireOnJSBridgeConnected"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            r0.a(r2)
            return
    }

    public static void a(android.webkit.WebView r1, java.lang.String r2, java.lang.String r3) {
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            r0.a(r1, r2, r3)
            return
    }

    private static void a(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.splash.js.c.c     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L30
            goto L3a
        L30:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.c.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L3a:
            return
    }

    public static void a(java.lang.Object r19, org.json.JSONObject r20) {
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
            if (r0 != 0) goto L3e
            r5.put(r7, r9)     // Catch: org.json.JSONException -> L33
            java.lang.String r0 = "params is null"
            r5.put(r6, r0)     // Catch: org.json.JSONException -> L33
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L33
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L33
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L33
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r8)     // Catch: org.json.JSONException -> L33
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L33
            goto L3d
        L33:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.splash.js.c.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L3d:
            return
        L3e:
            r10 = 0
            r5.put(r7, r10)     // Catch: java.lang.Throwable -> L22c
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L22c
            org.json.JSONArray r11 = r0.getJSONArray(r2)     // Catch: java.lang.Throwable -> L22c
            if (r11 == 0) goto L1f5
            int r0 = r11.length()     // Catch: java.lang.Throwable -> L22c
            if (r0 <= 0) goto L1f5
            org.json.JSONArray r12 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L22c
            r12.<init>()     // Catch: java.lang.Throwable -> L22c
            int r13 = r11.length()     // Catch: java.lang.Throwable -> L22c
            r14 = r10
        L5b:
            if (r14 >= r13) goto L1db
            org.json.JSONObject r0 = r11.getJSONObject(r14)     // Catch: java.lang.Throwable -> L22c
            java.lang.String r15 = "ref"
            java.lang.String r15 = r0.optString(r15, r4)     // Catch: java.lang.Throwable -> L22c
            int r0 = r0.getInt(r3)     // Catch: java.lang.Throwable -> L22c
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22c
            r8.<init>()     // Catch: java.lang.Throwable -> L22c
            java.lang.String r10 = "path"
            if (r0 != r9) goto L107
            boolean r16 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L22c
            if (r16 != 0) goto L107
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22c
            r0.<init>()     // Catch: java.lang.Throwable -> L22c
            com.mbridge.msdk.foundation.controller.a r16 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L22c
            android.content.Context r16 = r16.j()     // Catch: java.lang.Throwable -> L22c
            com.mbridge.msdk.foundation.db.i r16 = com.mbridge.msdk.foundation.db.i.a(r16)     // Catch: java.lang.Throwable -> L22c
            com.mbridge.msdk.foundation.db.s r9 = com.mbridge.msdk.foundation.db.s.a(r16)     // Catch: java.lang.Throwable -> L22c
            com.mbridge.msdk.foundation.entity.o r9 = r9.a(r15)     // Catch: java.lang.Throwable -> L22c
            if (r9 == 0) goto Lf5
            r20 = r11
            java.lang.String r11 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L22c
            r16 = r13
            java.lang.String r13 = "VideoBean not null"
            com.mbridge.msdk.foundation.tools.z.a(r11, r13)     // Catch: java.lang.Throwable -> L22c
            r11 = 1
            r0.put(r3, r11)     // Catch: java.lang.Throwable -> L22c
            java.lang.String r11 = "videoDataLength"
            int r13 = r9.c()     // Catch: java.lang.Throwable -> L22c
            r0.put(r11, r13)     // Catch: java.lang.Throwable -> L22c
            java.lang.String r11 = r9.e()     // Catch: java.lang.Throwable -> L22c
            boolean r13 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L22c
            r17 = r6
            java.lang.String r6 = "path4Web"
            if (r13 == 0) goto Lcb
            java.lang.String r11 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L219
            java.lang.String r13 = "VideoPath null"
            com.mbridge.msdk.foundation.tools.z.a(r11, r13)     // Catch: java.lang.Throwable -> L219
            r0.put(r10, r4)     // Catch: java.lang.Throwable -> L219
            r0.put(r6, r4)     // Catch: java.lang.Throwable -> L219
            r18 = r4
            goto Lda
        Lcb:
            java.lang.String r13 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L219
            r18 = r4
            java.lang.String r4 = "VideoPath not null"
            com.mbridge.msdk.foundation.tools.z.a(r13, r4)     // Catch: java.lang.Throwable -> L219
            r0.put(r10, r11)     // Catch: java.lang.Throwable -> L219
            r0.put(r6, r11)     // Catch: java.lang.Throwable -> L219
        Lda:
            int r4 = r9.d()     // Catch: java.lang.Throwable -> L219
            r6 = 5
            java.lang.String r9 = "downloaded"
            if (r4 != r6) goto Le9
            r4 = 1
            r0.put(r9, r4)     // Catch: java.lang.Throwable -> L219
            r4 = 0
            goto Led
        Le9:
            r4 = 0
            r0.put(r9, r4)     // Catch: java.lang.Throwable -> L219
        Led:
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L219
            r12.put(r8)     // Catch: java.lang.Throwable -> L219
            goto L1cc
        Lf5:
            r18 = r4
            r17 = r6
            r20 = r11
            r16 = r13
            r4 = 0
            java.lang.String r0 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L219
            java.lang.String r6 = "VideoBean null"
            com.mbridge.msdk.foundation.tools.z.a(r0, r6)     // Catch: java.lang.Throwable -> L219
            goto L1cc
        L107:
            r18 = r4
            r17 = r6
            r20 = r11
            r16 = r13
            r4 = 0
            r6 = 2
            if (r0 != r6) goto L141
            boolean r9 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L219
            if (r9 != 0) goto L141
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L219
            r0.<init>()     // Catch: java.lang.Throwable -> L219
            r0.put(r3, r6)     // Catch: java.lang.Throwable -> L219
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r6 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Throwable -> L219
            java.lang.String r6 = r6.getH5ResAddress(r15)     // Catch: java.lang.Throwable -> L219
            if (r6 != 0) goto L12e
            r6 = r18
            goto L136
        L12e:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r6 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Throwable -> L219
            java.lang.String r6 = r6.getH5ResAddress(r15)     // Catch: java.lang.Throwable -> L219
        L136:
            r0.put(r10, r6)     // Catch: java.lang.Throwable -> L219
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L219
            r12.put(r8)     // Catch: java.lang.Throwable -> L219
            goto L1cc
        L141:
            r6 = 3
            if (r0 != r6) goto L1a5
            boolean r9 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L219
            if (r9 != 0) goto L1a5
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L189
            r0.<init>(r15)     // Catch: java.lang.Throwable -> L189
            boolean r9 = r0.exists()     // Catch: java.lang.Throwable -> L189
            if (r9 == 0) goto L191
            boolean r9 = r0.isFile()     // Catch: java.lang.Throwable -> L189
            if (r9 == 0) goto L191
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L189
            if (r0 == 0) goto L191
            java.lang.String r0 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L189
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L189
            r9.<init>()     // Catch: java.lang.Throwable -> L189
            java.lang.String r11 = "getFileInfo Mraid file "
            r9.append(r11)     // Catch: java.lang.Throwable -> L189
            r9.append(r15)     // Catch: java.lang.Throwable -> L189
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L189
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)     // Catch: java.lang.Throwable -> L189
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L189
            r0.<init>()     // Catch: java.lang.Throwable -> L189
            java.lang.String r9 = "file:////"
            r0.append(r9)     // Catch: java.lang.Throwable -> L189
            r0.append(r15)     // Catch: java.lang.Throwable -> L189
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L189
            goto L193
        L189:
            r0 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L219
            if (r9 == 0) goto L191
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L219
        L191:
            r0 = r18
        L193:
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L219
            r9.<init>()     // Catch: java.lang.Throwable -> L219
            r9.put(r3, r6)     // Catch: java.lang.Throwable -> L219
            r9.put(r10, r0)     // Catch: java.lang.Throwable -> L219
            r8.put(r15, r9)     // Catch: java.lang.Throwable -> L219
            r12.put(r8)     // Catch: java.lang.Throwable -> L219
            goto L1cc
        L1a5:
            r6 = 4
            if (r0 != r6) goto L1cc
            boolean r0 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L219
            if (r0 != 0) goto L1cc
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L219
            r0.<init>()     // Catch: java.lang.Throwable -> L219
            r0.put(r3, r6)     // Catch: java.lang.Throwable -> L219
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ad.a(r15)     // Catch: java.lang.Throwable -> L219
            if (r6 != 0) goto L1bf
            r6 = r18
            goto L1c3
        L1bf:
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ad.a(r15)     // Catch: java.lang.Throwable -> L219
        L1c3:
            r0.put(r10, r6)     // Catch: java.lang.Throwable -> L219
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L219
            r12.put(r8)     // Catch: java.lang.Throwable -> L219
        L1cc:
            int r14 = r14 + 1
            r11 = r20
            r10 = r4
            r13 = r16
            r6 = r17
            r4 = r18
            r8 = 2
            r9 = 1
            goto L5b
        L1db:
            r17 = r6
            r5.put(r2, r12)     // Catch: java.lang.Throwable -> L219
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L219
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L219
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L219
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L219
            goto L258
        L1f5:
            r17 = r6
            r2 = 1
            r5.put(r7, r2)     // Catch: java.lang.Throwable -> L219 org.json.JSONException -> L21d
            java.lang.String r0 = "resource is null"
            r2 = r17
            r5.put(r2, r0)     // Catch: org.json.JSONException -> L217 java.lang.Throwable -> L22a
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L217 java.lang.Throwable -> L22a
            java.lang.String r3 = r5.toString()     // Catch: org.json.JSONException -> L217 java.lang.Throwable -> L22a
            byte[] r3 = r3.getBytes()     // Catch: org.json.JSONException -> L217 java.lang.Throwable -> L22a
            r4 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: org.json.JSONException -> L217 java.lang.Throwable -> L22a
            r0.a(r1, r3)     // Catch: org.json.JSONException -> L217 java.lang.Throwable -> L22a
            goto L258
        L217:
            r0 = move-exception
            goto L220
        L219:
            r0 = move-exception
            r2 = r17
            goto L22e
        L21d:
            r0 = move-exception
            r2 = r17
        L220:
            java.lang.String r3 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L22a
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L22a
            com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L22a
            goto L258
        L22a:
            r0 = move-exception
            goto L22e
        L22c:
            r0 = move-exception
            r2 = r6
        L22e:
            r3 = 1
            r5.put(r7, r3)     // Catch: org.json.JSONException -> L24e
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: org.json.JSONException -> L24e
            r5.put(r2, r0)     // Catch: org.json.JSONException -> L24e
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L24e
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L24e
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L24e
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: org.json.JSONException -> L24e
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L24e
            goto L258
        L24e:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.splash.js.c.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L258:
            return
    }

    static void a(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r0 = com.mbridge.msdk.foundation.same.a.d.i
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.getId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "splash"
            com.mbridge.msdk.foundation.same.a.d.a(r1, r2, r0)
        L13:
            return
    }

    public static void b(java.lang.Object r4, org.json.JSONObject r5) {
            java.lang.String r0 = "data"
            org.json.JSONObject r5 = r5.optJSONObject(r0)     // Catch: java.lang.Throwable -> L69
            if (r5 != 0) goto Le
            java.lang.String r5 = "data is empty"
            a(r4, r5)     // Catch: java.lang.Throwable -> L69
            return
        Le:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r5)     // Catch: java.lang.Throwable -> L69
            if (r5 != 0) goto L1a
            java.lang.String r5 = "data camapign is empty"
            a(r4, r5)     // Catch: java.lang.Throwable -> L69
            return
        L1a:
            java.lang.Thread r1 = new java.lang.Thread     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.splash.js.c$1 r2 = new com.mbridge.msdk.splash.js.c$1     // Catch: java.lang.Throwable -> L69
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L69
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L69
            r1.start()     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1.<init>()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            java.lang.String r2 = "code"
            int r3 = com.mbridge.msdk.splash.js.c.b     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r2.<init>()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            java.lang.String r3 = "id"
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            goto L71
        L57:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()     // Catch: java.lang.Throwable -> L69
            a(r4, r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = com.mbridge.msdk.splash.js.c.a     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)     // Catch: java.lang.Throwable -> L69
            goto L71
        L69:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            a(r4, r5)
        L71:
            return
    }
}
