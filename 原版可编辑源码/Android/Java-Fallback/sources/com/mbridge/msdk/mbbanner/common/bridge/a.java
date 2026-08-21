package com.mbridge.msdk.mbbanner.common.bridge;

public final class a extends com.mbridge.msdk.mbjscommon.bridge.a {
    private java.lang.ref.WeakReference<android.content.Context> b;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> c;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private com.mbridge.msdk.mbbanner.common.b.a g;
    private com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog h;
    private boolean i;


    public a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.i = r0
            r1.d = r3
            r1.e = r4
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            r1.b = r3
            return
    }

    private static void a(java.lang.Object r19, org.json.JSONObject r20) {
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
            java.lang.String r10 = "BannerJSBridgeImpl"
            if (r0 != 0) goto L3e
            r5.put(r7, r9)     // Catch: org.json.JSONException -> L35
            java.lang.String r0 = "params is null"
            r5.put(r6, r0)     // Catch: org.json.JSONException -> L35
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L35
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L35
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L35
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r8)     // Catch: org.json.JSONException -> L35
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L35
            goto L3d
        L35:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)
        L3d:
            return
        L3e:
            r11 = 0
            r5.put(r7, r11)     // Catch: java.lang.Throwable -> L228
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L228
            org.json.JSONArray r12 = r0.getJSONArray(r2)     // Catch: java.lang.Throwable -> L228
            if (r12 == 0) goto L1ef
            int r0 = r12.length()     // Catch: java.lang.Throwable -> L228
            if (r0 <= 0) goto L1ef
            org.json.JSONArray r13 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L228
            r13.<init>()     // Catch: java.lang.Throwable -> L228
            int r14 = r12.length()     // Catch: java.lang.Throwable -> L228
            r15 = r11
        L5b:
            if (r15 >= r14) goto L1cc
            org.json.JSONObject r0 = r12.getJSONObject(r15)     // Catch: java.lang.Throwable -> L228
            java.lang.String r8 = "ref"
            java.lang.String r8 = r0.optString(r8, r4)     // Catch: java.lang.Throwable -> L228
            int r0 = r0.getInt(r3)     // Catch: java.lang.Throwable -> L228
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L228
            r11.<init>()     // Catch: java.lang.Throwable -> L228
            r20 = r12
            java.lang.String r12 = "path"
            if (r0 != r9) goto Lff
            boolean r16 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L228
            if (r16 != 0) goto Lff
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L228
            r0.<init>()     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.controller.a r16 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L228
            android.content.Context r16 = r16.j()     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.db.i r16 = com.mbridge.msdk.foundation.db.i.a(r16)     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.db.s r9 = com.mbridge.msdk.foundation.db.s.a(r16)     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.entity.o r9 = r9.a(r8)     // Catch: java.lang.Throwable -> L228
            if (r9 == 0) goto Lf1
            r16 = r14
            java.lang.String r14 = "VideoBean not null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r14)     // Catch: java.lang.Throwable -> L228
            r14 = 1
            r0.put(r3, r14)     // Catch: java.lang.Throwable -> L228
            java.lang.String r14 = "videoDataLength"
            r17 = r6
            int r6 = r9.c()     // Catch: java.lang.Throwable -> Led
            r0.put(r14, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r6 = r9.e()     // Catch: java.lang.Throwable -> Led
            boolean r14 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Led
            r18 = r7
            java.lang.String r7 = "path4Web"
            if (r14 == 0) goto Lc7
            java.lang.String r6 = "VideoPath null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r6)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r12, r4)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r7, r4)     // Catch: java.lang.Throwable -> L1e9
            goto Ld2
        Lc7:
            java.lang.String r14 = "VideoPath not null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r14)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r12, r6)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r7, r6)     // Catch: java.lang.Throwable -> L1e9
        Ld2:
            int r6 = r9.d()     // Catch: java.lang.Throwable -> L1e9
            r7 = 5
            java.lang.String r9 = "downloaded"
            if (r6 != r7) goto Le1
            r6 = 1
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L1e9
            r6 = 0
            goto Le5
        Le1:
            r6 = 0
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L1e9
        Le5:
            r11.put(r8, r0)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        Led:
            r0 = move-exception
            r2 = r7
            goto L218
        Lf1:
            r17 = r6
            r18 = r7
            r16 = r14
            r6 = 0
            java.lang.String r0 = "VideoBean null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        Lff:
            r17 = r6
            r18 = r7
            r16 = r14
            r6 = 0
            r7 = 2
            if (r0 != r7) goto L136
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r9 != 0) goto L136
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e9
            r0.<init>()     // Catch: java.lang.Throwable -> L1e9
            r0.put(r3, r7)     // Catch: java.lang.Throwable -> L1e9
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r7 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r7 = r7.getResAddress(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r7 != 0) goto L123
            r7 = r4
            goto L12b
        L123:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r7 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r7 = r7.getH5ResAddress(r8)     // Catch: java.lang.Throwable -> L1e9
        L12b:
            r0.put(r12, r7)     // Catch: java.lang.Throwable -> L1e9
            r11.put(r8, r0)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        L136:
            r7 = 3
            if (r0 != r7) goto L197
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r9 != 0) goto L197
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L17c
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L17c
            boolean r9 = r0.exists()     // Catch: java.lang.Throwable -> L17c
            if (r9 == 0) goto L184
            boolean r9 = r0.isFile()     // Catch: java.lang.Throwable -> L17c
            if (r9 == 0) goto L184
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L17c
            if (r0 == 0) goto L184
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r0.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = "getFileInfo Mraid file "
            r0.append(r9)     // Catch: java.lang.Throwable -> L17c
            r0.append(r8)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17c
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r0.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = "file:////"
            r0.append(r9)     // Catch: java.lang.Throwable -> L17c
            r0.append(r8)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17c
            goto L185
        L17c:
            r0 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L1e9
            if (r9 == 0) goto L184
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1e9
        L184:
            r0 = r4
        L185:
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e9
            r9.<init>()     // Catch: java.lang.Throwable -> L1e9
            r9.put(r3, r7)     // Catch: java.lang.Throwable -> L1e9
            r9.put(r12, r0)     // Catch: java.lang.Throwable -> L1e9
            r11.put(r8, r9)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        L197:
            r7 = 4
            if (r0 != r7) goto L1bd
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r0 != 0) goto L1bd
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e9
            r0.<init>()     // Catch: java.lang.Throwable -> L1e9
            r0.put(r3, r7)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.ad.a(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r7 != 0) goto L1b0
            r7 = r4
            goto L1b4
        L1b0:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.ad.a(r8)     // Catch: java.lang.Throwable -> L1e9
        L1b4:
            r0.put(r12, r7)     // Catch: java.lang.Throwable -> L1e9
            r11.put(r8, r0)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
        L1bd:
            int r15 = r15 + 1
            r12 = r20
            r11 = r6
            r14 = r16
            r6 = r17
            r7 = r18
            r8 = 2
            r9 = 1
            goto L5b
        L1cc:
            r17 = r6
            r18 = r7
            r5.put(r2, r13)     // Catch: java.lang.Throwable -> L1e9
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L1e9
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L1e9
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L1e9
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1e9
            goto L253
        L1e9:
            r0 = move-exception
            r3 = r17
            r2 = r18
            goto L22b
        L1ef:
            r17 = r6
            r18 = r7
            r2 = r18
            r3 = 1
            r5.put(r2, r3)     // Catch: java.lang.Throwable -> L217 org.json.JSONException -> L21b
            java.lang.String r0 = "resource is null"
            r3 = r17
            r5.put(r3, r0)     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            java.lang.String r4 = r5.toString()     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            byte[] r4 = r4.getBytes()     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            r6 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r6)     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            r0.a(r1, r4)     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            goto L253
        L215:
            r0 = move-exception
            goto L21e
        L217:
            r0 = move-exception
        L218:
            r3 = r17
            goto L22b
        L21b:
            r0 = move-exception
            r3 = r17
        L21e:
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L226
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Throwable -> L226
            goto L253
        L226:
            r0 = move-exception
            goto L22b
        L228:
            r0 = move-exception
            r3 = r6
            r2 = r7
        L22b:
            r4 = 1
            r5.put(r2, r4)     // Catch: org.json.JSONException -> L24b
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: org.json.JSONException -> L24b
            r5.put(r3, r0)     // Catch: org.json.JSONException -> L24b
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L24b
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L24b
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L24b
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: org.json.JSONException -> L24b
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L24b
            goto L253
        L24b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)
        L253:
            return
    }

    public final void a() {
            r2 = this;
            com.mbridge.msdk.mbbanner.common.b.a r0 = r2.g
            r1 = 0
            if (r0 == 0) goto L7
            r2.g = r1
        L7:
            com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog r0 = r2.h
            if (r0 == 0) goto Ld
            r2.h = r1
        Ld:
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void a(com.mbridge.msdk.mbbanner.common.b.a r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.g = r1
        L4:
            return
    }

    @Override
    public final void a(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r7 = "BannerJSBridgeImpl"
            java.lang.String r0 = "BANNER INIT INVOKE"
            com.mbridge.msdk.foundation.tools.z.d(r7, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La3
            r0.<init>()     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.foundation.tools.d r1 = new com.mbridge.msdk.foundation.tools.d     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La3
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> La3
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La3
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La3
            r2.<init>()     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = "dev_close_state"
            int r4 = r5.f     // Catch: java.lang.Throwable -> La3
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = "sdkSetting"
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> La3
            java.lang.String r2 = "device"
            org.json.JSONObject r1 = r1.a()     // Catch: java.lang.Throwable -> La3
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> La3
            java.lang.String r1 = "campaignList"
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r5.c     // Catch: java.lang.Throwable -> La3
            org.json.JSONArray r2 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r2)     // Catch: java.lang.Throwable -> La3
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La3
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = r5.e     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.c.d r1 = r1.e(r2, r3)     // Catch: java.lang.Throwable -> La3
            if (r1 != 0) goto L58
            java.lang.String r1 = r5.e     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.d(r1)     // Catch: java.lang.Throwable -> La3
        L58:
            java.lang.String r2 = r5.d     // Catch: java.lang.Throwable -> La3
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La3
            if (r2 != 0) goto L65
            java.lang.String r2 = r5.d     // Catch: java.lang.Throwable -> La3
            r1.g(r2)     // Catch: java.lang.Throwable -> La3
        L65:
            java.lang.String r2 = "unitSetting"
            org.json.JSONObject r1 = r1.t()     // Catch: java.lang.Throwable -> La3
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La3
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> La3
            java.lang.String r1 = r1.c(r2)     // Catch: java.lang.Throwable -> La3
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La3
            if (r2 != 0) goto L8e
            java.lang.String r2 = "appSetting"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La3
            r3.<init>(r1)     // Catch: java.lang.Throwable -> La3
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> La3
        L8e:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La3
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> La3
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> La3
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> La3
            r1.a(r6, r0)     // Catch: java.lang.Throwable -> La3
            goto La9
        La3:
            r6 = move-exception
            java.lang.String r0 = "init"
            com.mbridge.msdk.foundation.tools.z.c(r7, r0, r6)
        La9:
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public final void b(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r7 = "click"
            java.lang.String r0 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r6.c     // Catch: java.lang.Throwable -> L72
            if (r1 != 0) goto Lc
            return
        Lc:
            r1 = 0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r6.c     // Catch: java.lang.Throwable -> L72
            if (r2 == 0) goto L22
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r6.c     // Catch: java.lang.Throwable -> L72
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L72
            if (r2 <= 0) goto L22
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r6.c     // Catch: java.lang.Throwable -> L72
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> L72
        L22:
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L72
            if (r2 != 0) goto L76
            org.json.JSONObject r2 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r1)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            r3.<init>(r8)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            java.lang.String r8 = "pt"
            org.json.JSONObject r8 = r3.getJSONObject(r8)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            java.util.Iterator r3 = r8.keys()     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
        L3b:
            boolean r4 = r3.hasNext()     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            if (r4 == 0) goto L4f
            java.lang.Object r4 = r3.next()     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            java.lang.String r5 = r8.getString(r4)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            r2.put(r4, r5)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            goto L3b
        L4f:
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r2)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            java.lang.String r3 = "unitId"
            java.lang.String r2 = r2.optString(r3)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
            if (r3 != 0) goto L62
            r8.setCampaignUnitId(r2)     // Catch: org.json.JSONException -> L64 java.lang.Throwable -> L72
        L62:
            r1 = r8
            goto L68
        L64:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L72
        L68:
            com.mbridge.msdk.mbbanner.common.b.a r8 = r6.g     // Catch: java.lang.Throwable -> L72
            if (r8 == 0) goto L76
            com.mbridge.msdk.mbbanner.common.b.a r8 = r6.g     // Catch: java.lang.Throwable -> L72
            r8.a(r1)     // Catch: java.lang.Throwable -> L72
            goto L76
        L72:
            r8 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r8)
        L76:
            return
    }

    @Override
    public final void c(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L2c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L24
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L24
            r1 = 0
            java.lang.String r1 = com.mbridge.msdk.mbjscommon.bridge.b.a(r1)     // Catch: java.lang.Throwable -> L24
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.mbbanner.common.b.a r3 = r2.g     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L2c
            com.mbridge.msdk.mbbanner.common.b.a r3 = r2.g     // Catch: java.lang.Throwable -> L24
            r3.b(r4)     // Catch: java.lang.Throwable -> L24
            goto L2c
        L24:
            r3 = move-exception
            java.lang.String r4 = "BannerJSBridgeImpl"
            java.lang.String r0 = "readyStatus"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L2c:
            return
    }

    @Override
    public final void close() {
            r3 = this;
            java.lang.String r0 = "close"
            java.lang.String r1 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.mbbanner.common.b.a r2 = r3.g     // Catch: java.lang.Throwable -> L11
            if (r2 == 0) goto L15
            com.mbridge.msdk.mbbanner.common.b.a r2 = r3.g     // Catch: java.lang.Throwable -> L11
            r2.a()     // Catch: java.lang.Throwable -> L11
            goto L15
        L11:
            r2 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r2)
        L15:
            return
    }

    @Override
    public final void d(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = "toggleCloseBtn"
            java.lang.String r0 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L26
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = "state"
            int r4 = r1.optInt(r4)     // Catch: java.lang.Throwable -> L22
            com.mbridge.msdk.mbbanner.common.b.a r1 = r2.g     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L26
            com.mbridge.msdk.mbbanner.common.b.a r1 = r2.g     // Catch: java.lang.Throwable -> L22
            r1.a(r4)     // Catch: java.lang.Throwable -> L22
            goto L26
        L22:
            r4 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r4)
        L26:
            return
    }

    @Override
    public final void e(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "triggerCloseBtn"
            java.lang.String r1 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2e
            if (r2 != 0) goto L3e
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2e
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = "state"
            java.lang.String r5 = r2.optString(r5)     // Catch: java.lang.Throwable -> L2e
            com.mbridge.msdk.mbbanner.common.b.a r2 = r3.g     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L21
            com.mbridge.msdk.mbbanner.common.b.a r2 = r3.g     // Catch: java.lang.Throwable -> L2e
            r2.a(r5)     // Catch: java.lang.Throwable -> L2e
        L21:
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L2e
            r2 = 0
            java.lang.String r2 = com.mbridge.msdk.mbjscommon.bridge.b.a(r2)     // Catch: java.lang.Throwable -> L2e
            r5.a(r4, r2)     // Catch: java.lang.Throwable -> L2e
            goto L3e
        L2e:
            r5 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r5)
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            r0 = -1
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)
            r5.a(r4, r0)
        L3e:
            return
    }

    @Override
    public final void expand(java.lang.String r5, boolean r6) {
            r4 = this;
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L38
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = r0.getBannerHtml()     // Catch: java.lang.Throwable -> L93
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L1f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = r0.getBannerUrl()     // Catch: java.lang.Throwable -> L93
            goto L38
        L1f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r0.<init>()     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = "file:////"
            r0.append(r1)     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = r1.getBannerHtml()     // Catch: java.lang.Throwable -> L93
            r0.append(r1)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L93
        L38:
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L93
            r1.<init>()     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = "url"
            boolean r3 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L93
            if (r3 == 0) goto L46
            goto L47
        L46:
            r0 = r5
        L47:
            r1.putString(r2, r0)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = "shouldUseCustomClose"
            r1.putBoolean(r0, r6)     // Catch: java.lang.Throwable -> L93
            java.lang.ref.WeakReference<android.content.Context> r6 = r4.b     // Catch: java.lang.Throwable -> L93
            if (r6 == 0) goto L7f
            java.lang.ref.WeakReference<android.content.Context> r6 = r4.b     // Catch: java.lang.Throwable -> L93
            java.lang.Object r6 = r6.get()     // Catch: java.lang.Throwable -> L93
            android.content.Context r6 = (android.content.Context) r6     // Catch: java.lang.Throwable -> L93
            if (r6 == 0) goto L7f
            com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog r0 = r4.h     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L6a
            com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog r0 = r4.h     // Catch: java.lang.Throwable -> L93
            boolean r0 = r0.isShowing()     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L6a
            return
        L6a:
            com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog r0 = new com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.mbbanner.common.b.a r2 = r4.g     // Catch: java.lang.Throwable -> L93
            r0.<init>(r6, r1, r2)     // Catch: java.lang.Throwable -> L93
            r4.h = r0     // Catch: java.lang.Throwable -> L93
            java.lang.String r6 = r4.e     // Catch: java.lang.Throwable -> L93
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r4.c     // Catch: java.lang.Throwable -> L93
            r0.setCampaignList(r6, r1)     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.mbbanner.common.bridge.BannerExpandDialog r6 = r4.h     // Catch: java.lang.Throwable -> L93
            r6.show()     // Catch: java.lang.Throwable -> L93
        L7f:
            com.mbridge.msdk.mbbanner.common.b.a r6 = r4.g     // Catch: java.lang.Throwable -> L93
            if (r6 == 0) goto L89
            com.mbridge.msdk.mbbanner.common.b.a r6 = r4.g     // Catch: java.lang.Throwable -> L93
            r0 = 1
            r6.a(r0)     // Catch: java.lang.Throwable -> L93
        L89:
            java.lang.String r6 = r4.e     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.mbbanner.common.d.a.a(r6, r0, r5)     // Catch: java.lang.Throwable -> L93
            goto L9b
        L93:
            r5 = move-exception
            java.lang.String r6 = "BannerJSBridgeImpl"
            java.lang.String r0 = "expand"
            com.mbridge.msdk.foundation.tools.z.c(r6, r0, r5)
        L9b:
            return
    }

    @Override
    public final com.mbridge.msdk.foundation.entity.CampaignEx getMraidCampaign() {
            r2 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.c
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r2.c
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final void i(java.lang.Object r8, java.lang.String r9) {
            r7 = this;
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "sendImpressions:"
            r8.append(r0)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r0 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
            boolean r8 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L69
            if (r8 != 0) goto L6f
            org.json.JSONArray r8 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L69
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L69
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L69
            r9.<init>()     // Catch: java.lang.Throwable -> L69
            r1 = 0
        L27:
            int r2 = r8.length()     // Catch: java.lang.Throwable -> L69
            if (r1 >= r2) goto L5b
            java.lang.String r2 = r8.getString(r1)     // Catch: java.lang.Throwable -> L69
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.c     // Catch: java.lang.Throwable -> L69
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L69
        L37:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L69
            if (r4 == 0) goto L58
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = r4.getId()     // Catch: java.lang.Throwable -> L69
            boolean r5 = r5.equals(r2)     // Catch: java.lang.Throwable -> L69
            if (r5 == 0) goto L37
            java.lang.String r5 = r7.e     // Catch: java.lang.Throwable -> L69
            java.lang.String r6 = "banner"
            com.mbridge.msdk.foundation.same.a.d.a(r5, r4, r6)     // Catch: java.lang.Throwable -> L69
            r9.add(r2)     // Catch: java.lang.Throwable -> L69
            goto L37
        L58:
            int r1 = r1 + 1
            goto L27
        L5b:
            java.lang.Thread r8 = new java.lang.Thread     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.mbbanner.common.bridge.a$1 r1 = new com.mbridge.msdk.mbbanner.common.bridge.a$1     // Catch: java.lang.Throwable -> L69
            r1.<init>(r7, r9)     // Catch: java.lang.Throwable -> L69
            r8.<init>(r1)     // Catch: java.lang.Throwable -> L69
            r8.start()     // Catch: java.lang.Throwable -> L69
            goto L6f
        L69:
            r8 = move-exception
            java.lang.String r9 = "sendImpressions"
            com.mbridge.msdk.foundation.tools.z.c(r0, r9, r8)
        L6f:
            return
    }

    @Override
    public final void j(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "params is empty"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r2, r3)
            return
        Lc:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L15
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L15
            a(r2, r0)     // Catch: java.lang.Throwable -> L15
            goto L1f
        L15:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
        L1f:
            return
    }

    @Override
    public final void open(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = "open"
            java.lang.String r1 = "BannerJSBridgeImpl"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)     // Catch: java.lang.Throwable -> L35
            r2 = 0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.c     // Catch: java.lang.Throwable -> L35
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L35
            r4 = 1
            if (r3 <= r4) goto L2b
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L35
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L35
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> L35
            java.lang.String r6 = "android.intent.action.VIEW"
            android.net.Uri r8 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L35
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> L35
            r3.startActivity(r5)     // Catch: java.lang.Throwable -> L35
            r8 = r2
        L2b:
            com.mbridge.msdk.mbbanner.common.b.a r2 = r7.g     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L39
            com.mbridge.msdk.mbbanner.common.b.a r2 = r7.g     // Catch: java.lang.Throwable -> L35
            r2.a(r4, r8)     // Catch: java.lang.Throwable -> L35
            goto L39
        L35:
            r8 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r8)
        L39:
            return
    }

    @Override
    public final void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public final void useCustomClose(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L4
            r3 = 2
            goto L5
        L4:
            r3 = 1
        L5:
            com.mbridge.msdk.mbbanner.common.b.a r0 = r2.g     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L17
            com.mbridge.msdk.mbbanner.common.b.a r0 = r2.g     // Catch: java.lang.Throwable -> Lf
            r0.a(r3)     // Catch: java.lang.Throwable -> Lf
            goto L17
        Lf:
            r3 = move-exception
            java.lang.String r0 = "BannerJSBridgeImpl"
            java.lang.String r1 = "useCustomClose"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
        L17:
            return
    }
}
