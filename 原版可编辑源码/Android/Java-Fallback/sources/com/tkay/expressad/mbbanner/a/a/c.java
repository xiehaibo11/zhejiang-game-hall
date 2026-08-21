package com.tkay.expressad.mbbanner.a.a;

public final class c extends com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp {
    private static final java.lang.String b = "BannerJSBridgeImpl";
    private java.lang.ref.WeakReference<android.content.Context> c;
    private java.util.List<com.tkay.expressad.foundation.d.c> d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private com.tkay.expressad.mbbanner.a.c.a h;
    private com.tkay.expressad.mbbanner.a.a.b i;
    private boolean j;

    public c(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.j = r0
            r1.e = r3
            r1.f = r4
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            r1.c = r3
            return
    }

    private static void a(java.lang.Object r19, org.json.JSONObject r20) {
            r1 = r19
            java.lang.String r2 = "resource"
            java.lang.String r3 = "message"
            java.lang.String r4 = "code"
            java.lang.String r5 = "type"
            java.lang.String r6 = ""
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
            r9 = 1
            r10 = 0
            r7.put(r4, r10)     // Catch: java.lang.Throwable -> L1ac
            r7.put(r3, r6)     // Catch: java.lang.Throwable -> L1ac
            r0 = r20
            org.json.JSONArray r11 = r0.getJSONArray(r2)     // Catch: java.lang.Throwable -> L1ac
            if (r11 == 0) goto L177
            int r0 = r11.length()     // Catch: java.lang.Throwable -> L1ac
            if (r0 <= 0) goto L177
            org.json.JSONArray r12 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L1ac
            r12.<init>()     // Catch: java.lang.Throwable -> L1ac
            int r13 = r11.length()     // Catch: java.lang.Throwable -> L1ac
            r14 = r10
        L31:
            if (r14 >= r13) goto L155
            org.json.JSONObject r0 = r11.getJSONObject(r14)     // Catch: java.lang.Throwable -> L1ac
            java.lang.String r15 = "ref"
            java.lang.String r15 = r0.optString(r15, r6)     // Catch: java.lang.Throwable -> L1ac
            int r0 = r0.getInt(r5)     // Catch: java.lang.Throwable -> L1ac
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1ac
            r8.<init>()     // Catch: java.lang.Throwable -> L1ac
            java.lang.String r10 = "path"
            if (r0 != r9) goto Laa
            boolean r16 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L1ac
            if (r16 != 0) goto Laa
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1ac
            r0.<init>()     // Catch: java.lang.Throwable -> L1ac
            com.tkay.expressad.videocommon.b.l.a()     // Catch: java.lang.Throwable -> L1ac
            com.tkay.core.common.a.i r16 = com.tkay.expressad.videocommon.b.l.b(r15)     // Catch: java.lang.Throwable -> L1ac
            if (r16 == 0) goto La3
            r0.put(r5, r9)     // Catch: java.lang.Throwable -> L1ac
            java.lang.String r9 = "videoDataLength"
            r17 = r3
            r18 = r4
            long r3 = r16.d()     // Catch: java.lang.Throwable -> L171
            r0.put(r9, r3)     // Catch: java.lang.Throwable -> L171
            java.lang.String r3 = r16.b()     // Catch: java.lang.Throwable -> L171
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L171
            java.lang.String r9 = "path4Web"
            if (r4 == 0) goto L81
            r0.put(r10, r6)     // Catch: java.lang.Throwable -> L171
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L171
            goto L87
        L81:
            r0.put(r10, r3)     // Catch: java.lang.Throwable -> L171
            r0.put(r9, r3)     // Catch: java.lang.Throwable -> L171
        L87:
            int r3 = r16.c()     // Catch: java.lang.Throwable -> L171
            r4 = 100
            java.lang.String r9 = "downloaded"
            if (r3 != r4) goto L97
            r3 = 1
            r0.put(r9, r3)     // Catch: java.lang.Throwable -> L171
            r3 = 0
            goto L9b
        L97:
            r3 = 0
            r0.put(r9, r3)     // Catch: java.lang.Throwable -> L171
        L9b:
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L171
            r12.put(r8)     // Catch: java.lang.Throwable -> L171
            goto L14b
        La3:
            r17 = r3
            r18 = r4
            r3 = 0
            goto L14b
        Laa:
            r17 = r3
            r18 = r4
            r3 = 0
            r4 = 2
            if (r0 != r4) goto Ldf
            boolean r9 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L171
            if (r9 != 0) goto Ldf
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L171
            r0.<init>()     // Catch: java.lang.Throwable -> L171
            r0.put(r5, r4)     // Catch: java.lang.Throwable -> L171
            com.tkay.expressad.videocommon.b.g r4 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Throwable -> L171
            java.lang.String r4 = r4.a(r15)     // Catch: java.lang.Throwable -> L171
            if (r4 != 0) goto Lcc
            r4 = r6
            goto Ld4
        Lcc:
            com.tkay.expressad.videocommon.b.g r4 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Throwable -> L171
            java.lang.String r4 = r4.c(r15)     // Catch: java.lang.Throwable -> L171
        Ld4:
            r0.put(r10, r4)     // Catch: java.lang.Throwable -> L171
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L171
            r12.put(r8)     // Catch: java.lang.Throwable -> L171
            goto L14b
        Ldf:
            r4 = 3
            if (r0 != r4) goto L125
            boolean r9 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L171
            if (r9 != 0) goto L125
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L10a
            r0.<init>(r15)     // Catch: java.lang.Throwable -> L10a
            boolean r9 = r0.exists()     // Catch: java.lang.Throwable -> L10a
            if (r9 == 0) goto L112
            boolean r9 = r0.isFile()     // Catch: java.lang.Throwable -> L10a
            if (r9 == 0) goto L112
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L10a
            if (r0 == 0) goto L112
            java.lang.String r0 = "file:////"
            java.lang.String r9 = java.lang.String.valueOf(r15)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r0 = r0.concat(r9)     // Catch: java.lang.Throwable -> L10a
            goto L113
        L10a:
            r0 = move-exception
            boolean r9 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L171
            if (r9 == 0) goto L112
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L171
        L112:
            r0 = r6
        L113:
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L171
            r9.<init>()     // Catch: java.lang.Throwable -> L171
            r9.put(r5, r4)     // Catch: java.lang.Throwable -> L171
            r9.put(r10, r0)     // Catch: java.lang.Throwable -> L171
            r8.put(r15, r9)     // Catch: java.lang.Throwable -> L171
            r12.put(r8)     // Catch: java.lang.Throwable -> L171
            goto L14b
        L125:
            r4 = 4
            if (r0 != r4) goto L14b
            boolean r0 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L171
            if (r0 != 0) goto L14b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L171
            r0.<init>()     // Catch: java.lang.Throwable -> L171
            r0.put(r5, r4)     // Catch: java.lang.Throwable -> L171
            java.lang.String r4 = com.tkay.expressad.foundation.h.s.a(r15)     // Catch: java.lang.Throwable -> L171
            if (r4 != 0) goto L13e
            r4 = r6
            goto L142
        L13e:
            java.lang.String r4 = com.tkay.expressad.foundation.h.s.a(r15)     // Catch: java.lang.Throwable -> L171
        L142:
            r0.put(r10, r4)     // Catch: java.lang.Throwable -> L171
            r8.put(r15, r0)     // Catch: java.lang.Throwable -> L171
            r12.put(r8)     // Catch: java.lang.Throwable -> L171
        L14b:
            int r14 = r14 + 1
            r10 = r3
            r3 = r17
            r4 = r18
            r9 = 1
            goto L31
        L155:
            r17 = r3
            r18 = r4
            r7.put(r2, r12)     // Catch: java.lang.Throwable -> L171
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L171
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> L171
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L171
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L171
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L171
            return
        L171:
            r0 = move-exception
            r3 = r17
            r2 = r18
            goto L1ae
        L177:
            r17 = r3
            r18 = r4
            r2 = r18
            r3 = 1
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> L19f org.json.JSONException -> L1a3
            java.lang.String r0 = "resource is null"
            r3 = r17
            r7.put(r3, r0)     // Catch: org.json.JSONException -> L19d java.lang.Throwable -> L1aa
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L19d java.lang.Throwable -> L1aa
            java.lang.String r4 = r7.toString()     // Catch: org.json.JSONException -> L19d java.lang.Throwable -> L1aa
            byte[] r4 = r4.getBytes()     // Catch: org.json.JSONException -> L19d java.lang.Throwable -> L1aa
            r5 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r5)     // Catch: org.json.JSONException -> L19d java.lang.Throwable -> L1aa
            r0.a(r1, r4)     // Catch: org.json.JSONException -> L19d java.lang.Throwable -> L1aa
            return
        L19d:
            r0 = move-exception
            goto L1a6
        L19f:
            r0 = move-exception
            r3 = r17
            goto L1ae
        L1a3:
            r0 = move-exception
            r3 = r17
        L1a6:
            r0.getMessage()     // Catch: java.lang.Throwable -> L1aa
            return
        L1aa:
            r0 = move-exception
            goto L1ae
        L1ac:
            r0 = move-exception
            r2 = r4
        L1ae:
            r4 = 1
            r7.put(r2, r4)     // Catch: org.json.JSONException -> L1ce
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: org.json.JSONException -> L1ce
            r7.put(r3, r0)     // Catch: org.json.JSONException -> L1ce
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L1ce
            java.lang.String r2 = r7.toString()     // Catch: org.json.JSONException -> L1ce
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L1ce
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: org.json.JSONException -> L1ce
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L1ce
            return
        L1ce:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public final void a() {
            r2 = this;
            com.tkay.expressad.mbbanner.a.c.a r0 = r2.h
            r1 = 0
            if (r0 == 0) goto L7
            r2.h = r1
        L7:
            com.tkay.expressad.mbbanner.a.a.b r0 = r2.i
            if (r0 == 0) goto Ld
            r2.i = r1
        Ld:
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.tkay.expressad.mbbanner.a.c.a r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.h = r1
        L4:
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public final void click(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.d     // Catch: java.lang.Throwable -> L6a
            if (r5 != 0) goto L5
            return
        L5:
            r5 = 0
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L1b
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L6a
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L6a
            if (r0 <= 0) goto L1b
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r4.d     // Catch: java.lang.Throwable -> L6a
            r0 = 0
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L6a
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Throwable -> L6a
        L1b:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L6a
            org.json.JSONObject r0 = com.tkay.expressad.foundation.d.c.a(r5)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            r1.<init>(r6)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            java.lang.String r6 = "pt"
            org.json.JSONObject r6 = r1.getJSONObject(r6)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            java.util.Iterator r1 = r6.keys()     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
        L34:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            java.lang.String r3 = r6.getString(r2)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            goto L34
        L48:
            com.tkay.expressad.foundation.d.c r6 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            java.lang.String r1 = "unitId"
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
            if (r1 != 0) goto L5b
            r6.l(r0)     // Catch: org.json.JSONException -> L5d java.lang.Throwable -> L6a
        L5b:
            r5 = r6
            goto L61
        L5d:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L6a
        L61:
            com.tkay.expressad.mbbanner.a.c.a r6 = r4.h     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L6a
            com.tkay.expressad.mbbanner.a.c.a r6 = r4.h     // Catch: java.lang.Throwable -> L6a
            r6.a(r5)     // Catch: java.lang.Throwable -> L6a
        L6a:
            return
    }

    @Override
    public final void close() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.a r0 = r1.h     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.mbbanner.a.c.a r0 = r1.h     // Catch: java.lang.Throwable -> L9
            r0.b()     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    @Override
    public final void expand(java.lang.String r5, boolean r6) {
            r4 = this;
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.d.c r1 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L35
            com.tkay.expressad.foundation.d.c r0 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L85
            java.lang.String r0 = r0.q()     // Catch: java.lang.Throwable -> L85
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L85
            if (r0 == 0) goto L1f
            com.tkay.expressad.foundation.d.c r0 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L85
            java.lang.String r0 = r0.p()     // Catch: java.lang.Throwable -> L85
            goto L35
        L1f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = "file:////"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L85
            com.tkay.expressad.foundation.d.c r1 = r4.getMraidCampaign()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = r1.q()     // Catch: java.lang.Throwable -> L85
            r0.append(r1)     // Catch: java.lang.Throwable -> L85
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L85
        L35:
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L85
            r1.<init>()     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = "url"
            boolean r3 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L43
            r5 = r0
        L43:
            r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L85
            java.lang.String r5 = "shouldUseCustomClose"
            r1.putBoolean(r5, r6)     // Catch: java.lang.Throwable -> L85
            java.lang.ref.WeakReference<android.content.Context> r5 = r4.c     // Catch: java.lang.Throwable -> L85
            if (r5 == 0) goto L7b
            java.lang.ref.WeakReference<android.content.Context> r5 = r4.c     // Catch: java.lang.Throwable -> L85
            java.lang.Object r5 = r5.get()     // Catch: java.lang.Throwable -> L85
            android.content.Context r5 = (android.content.Context) r5     // Catch: java.lang.Throwable -> L85
            if (r5 == 0) goto L7b
            com.tkay.expressad.mbbanner.a.a.b r6 = r4.i     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L66
            com.tkay.expressad.mbbanner.a.a.b r6 = r4.i     // Catch: java.lang.Throwable -> L85
            boolean r6 = r6.isShowing()     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L66
            return
        L66:
            com.tkay.expressad.mbbanner.a.a.b r6 = new com.tkay.expressad.mbbanner.a.a.b     // Catch: java.lang.Throwable -> L85
            com.tkay.expressad.mbbanner.a.c.a r0 = r4.h     // Catch: java.lang.Throwable -> L85
            r6.<init>(r5, r1, r0)     // Catch: java.lang.Throwable -> L85
            r4.i = r6     // Catch: java.lang.Throwable -> L85
            java.lang.String r5 = r4.f     // Catch: java.lang.Throwable -> L85
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d     // Catch: java.lang.Throwable -> L85
            r6.a(r5, r0)     // Catch: java.lang.Throwable -> L85
            com.tkay.expressad.mbbanner.a.a.b r5 = r4.i     // Catch: java.lang.Throwable -> L85
            r5.show()     // Catch: java.lang.Throwable -> L85
        L7b:
            com.tkay.expressad.mbbanner.a.c.a r5 = r4.h     // Catch: java.lang.Throwable -> L85
            if (r5 == 0) goto L85
            com.tkay.expressad.mbbanner.a.c.a r5 = r4.h     // Catch: java.lang.Throwable -> L85
            r6 = 1
            r5.a(r6)     // Catch: java.lang.Throwable -> L85
        L85:
            return
    }

    @Override
    public final void getFileInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "params is empty"
            com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.callbackExcep(r2, r3)
            return
        Lc:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L15
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L15
            a(r2, r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            r2.getMessage()
            return
    }

    @Override
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.d
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.d
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final void init(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L92
            r6.<init>()     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.foundation.h.c r0 = new com.tkay.expressad.foundation.h.c     // Catch: java.lang.Throwable -> L92
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L92
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L92
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L92
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "dev_close_state"
            int r3 = r4.g     // Catch: java.lang.Throwable -> L92
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "sdkSetting"
            r6.put(r2, r1)     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = "device"
            org.json.JSONObject r0 = r0.a()     // Catch: java.lang.Throwable -> L92
            r6.put(r1, r0)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = "campaignList"
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.d     // Catch: java.lang.Throwable -> L92
            org.json.JSONArray r1 = com.tkay.expressad.foundation.d.c.b(r1)     // Catch: java.lang.Throwable -> L92
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = r4.f     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.c(r0, r1)     // Catch: java.lang.Throwable -> L92
            if (r0 != 0) goto L50
            java.lang.String r0 = r4.f     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.c(r0)     // Catch: java.lang.Throwable -> L92
        L50:
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> L92
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L92
            if (r1 != 0) goto L5d
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> L92
            r0.e(r1)     // Catch: java.lang.Throwable -> L92
        L5d:
            java.lang.String r1 = "unitSetting"
            org.json.JSONObject r0 = r0.s()     // Catch: java.lang.Throwable -> L92
            r6.put(r1, r0)     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.d.b.a(r0)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = "appSetting"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> L92
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L92
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Throwable -> L92
            r0 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r0)     // Catch: java.lang.Throwable -> L92
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L92
            r0.a(r5, r6)     // Catch: java.lang.Throwable -> L92
        L92:
            return
    }

    @Override
    public final void open(java.lang.String r6) {
            r5 = this;
            r0 = 0
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r5.d     // Catch: java.lang.Throwable -> L2a
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L2a
            r2 = 1
            if (r1 <= r2) goto L21
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2a
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L2a
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L2a
            java.lang.String r4 = "android.intent.action.VIEW"
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L2a
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L2a
            r1.startActivity(r3)     // Catch: java.lang.Throwable -> L2a
            r6 = r0
        L21:
            com.tkay.expressad.mbbanner.a.c.a r0 = r5.h     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L2a
            com.tkay.expressad.mbbanner.a.c.a r0 = r5.h     // Catch: java.lang.Throwable -> L2a
            r0.a(r2, r6)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    @Override
    public final void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L24
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L24
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L24
            r1 = 0
            java.lang.String r1 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.codeToJsonString(r1)     // Catch: java.lang.Throwable -> L24
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.mbbanner.a.c.a r3 = r2.h     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L24
            com.tkay.expressad.mbbanner.a.c.a r3 = r2.h     // Catch: java.lang.Throwable -> L24
            r3.b(r4)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    @Override
    public final void sendImpressions(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            boolean r7 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L45
            if (r7 != 0) goto L45
            org.json.JSONArray r7 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L45
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L45
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L45
            r8.<init>()     // Catch: java.lang.Throwable -> L45
            r0 = 0
        L11:
            int r1 = r7.length()     // Catch: java.lang.Throwable -> L45
            if (r0 >= r1) goto L45
            java.lang.String r1 = r7.getString(r0)     // Catch: java.lang.Throwable -> L45
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r6.d     // Catch: java.lang.Throwable -> L45
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L45
            if (r3 == 0) goto L42
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L45
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = r3.aZ()     // Catch: java.lang.Throwable -> L45
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Throwable -> L45
            if (r4 == 0) goto L21
            java.lang.String r4 = r6.f     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = "banner"
            com.tkay.expressad.foundation.g.a.f.a(r4, r3, r5)     // Catch: java.lang.Throwable -> L45
            r8.add(r1)     // Catch: java.lang.Throwable -> L45
            goto L21
        L42:
            int r0 = r0 + 1
            goto L11
        L45:
            return
    }

    @Override
    public final void toggleCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = "state"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L1a
            com.tkay.expressad.mbbanner.a.c.a r2 = r0.h     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.tkay.expressad.mbbanner.a.c.a r2 = r0.h     // Catch: java.lang.Throwable -> L1a
            r2.a(r1)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    @Override
    public final void triggerCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L25
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L26
            java.lang.String r3 = "state"
            r0.optString(r3)     // Catch: java.lang.Throwable -> L26
            com.tkay.expressad.mbbanner.a.c.a r3 = r1.h     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L19
            com.tkay.expressad.mbbanner.a.c.a r3 = r1.h     // Catch: java.lang.Throwable -> L26
            r3.a()     // Catch: java.lang.Throwable -> L26
        L19:
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L26
            r0 = 0
            java.lang.String r0 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.codeToJsonString(r0)     // Catch: java.lang.Throwable -> L26
            r3.a(r2, r0)     // Catch: java.lang.Throwable -> L26
        L25:
            return
        L26:
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            r0 = -1
            java.lang.String r0 = com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.codeToJsonString(r0)
            r3.a(r2, r0)
            return
    }

    @Override
    public final void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public final void useCustomClose(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L4
            r2 = 2
            goto L5
        L4:
            r2 = 1
        L5:
            com.tkay.expressad.mbbanner.a.c.a r0 = r1.h     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Le
            com.tkay.expressad.mbbanner.a.c.a r0 = r1.h     // Catch: java.lang.Throwable -> Le
            r0.a(r2)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }
}
