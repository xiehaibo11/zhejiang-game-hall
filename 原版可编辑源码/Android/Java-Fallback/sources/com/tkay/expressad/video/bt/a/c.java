package com.tkay.expressad.video.bt.a;

public final class c {
    public static final int a = -999;
    private static final java.lang.String b = "OperateViews";
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> c;
    private static java.util.LinkedHashMap<java.lang.String, java.lang.String> d;
    private static java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.foundation.d.c> e;
    private static java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> f;
    private static java.util.LinkedHashMap<java.lang.String, java.lang.String> g;
    private static java.util.LinkedHashMap<java.lang.String, java.lang.Integer> h;
    private static java.util.LinkedHashMap<java.lang.String, android.app.Activity> i;
    private static volatile int j;
    private static int k;
    private static int l;
    private static java.lang.String m;
    private static int n;
    private static int o;
    private static int p;
    private static int q;
    private static int r;



    private static class a {
        private static com.tkay.expressad.video.bt.a.c a;

        static {
                com.tkay.expressad.video.bt.a.c r0 = new com.tkay.expressad.video.bt.a.c
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.video.bt.a.c.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.video.bt.a.c a() {
                com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a.a
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.c = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.d = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.e = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.f = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.g = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.h = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.c.i = r0
            r0 = 10000(0x2710, float:1.4013E-41)
            com.tkay.expressad.video.bt.a.c.j = r0
            r0 = 0
            com.tkay.expressad.video.bt.a.c.k = r0
            r0 = 1
            com.tkay.expressad.video.bt.a.c.l = r0
            java.lang.String r0 = ""
            com.tkay.expressad.video.bt.a.c.m = r0
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static void E(java.lang.Object r1, org.json.JSONObject r2) {
            java.lang.String r0 = "unitId"
            r2.optString(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = "data"
            org.json.JSONObject r2 = r2.optJSONObject(r0)     // Catch: java.lang.Throwable -> L13
            if (r2 != 0) goto L12
            java.lang.String r2 = "data is empty"
            c(r1, r2)     // Catch: java.lang.Throwable -> L13
        L12:
            return
        L13:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            c(r1, r2)
            return
    }

    public static void I(java.lang.Object r1, org.json.JSONObject r2) {
            java.lang.String r0 = "unitId"
            r2.optString(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = "data"
            org.json.JSONObject r2 = r2.optJSONObject(r0)     // Catch: java.lang.Throwable -> L13
            if (r2 != 0) goto L12
            java.lang.String r2 = "data is empty"
            c(r1, r2)     // Catch: java.lang.Throwable -> L13
        L12:
            return
        L13:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            c(r1, r2)
            return
    }

    public static void J(java.lang.Object r1, org.json.JSONObject r2) {
            java.lang.String r0 = "unitId"
            r2.optString(r0)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r0 = "id"
            r2.optString(r0)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r0 = "data"
            org.json.JSONObject r2 = r2.optJSONObject(r0)     // Catch: java.lang.Throwable -> L1e
            if (r2 != 0) goto L18
            java.lang.String r2 = "data is empty"
            c(r1, r2)     // Catch: java.lang.Throwable -> L1e
            return
        L18:
            java.lang.String r2 = "android mediaPlayer not support setScaleType"
            c(r1, r2)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            c(r1, r2)
            return
    }

    public static void P(java.lang.Object r19, org.json.JSONObject r20) {
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
            java.lang.String r4 = r4.c(r15)     // Catch: java.lang.Throwable -> L171
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

    private static android.view.ViewGroup.LayoutParams a(android.view.ViewGroup.LayoutParams r4, android.graphics.Rect r5, int r6, int r7) {
            r0 = -999(0xfffffffffffffc19, float:NaN)
            if (r5 != 0) goto L9
            android.graphics.Rect r5 = new android.graphics.Rect
            r5.<init>(r0, r0, r0, r0)
        L9:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            if (r1 != 0) goto L14
            return r4
        L14:
            boolean r2 = r4 instanceof android.widget.FrameLayout.LayoutParams
            r3 = -1
            if (r2 == 0) goto L65
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            r4.<init>(r3, r3)
            int r2 = r5.left
            if (r2 == r0) goto L2b
            int r2 = r5.left
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.leftMargin = r2
        L2b:
            int r2 = r5.top
            if (r2 == r0) goto L38
            int r2 = r5.top
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.topMargin = r2
        L38:
            int r2 = r5.right
            if (r2 == r0) goto L45
            int r2 = r5.right
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.rightMargin = r2
        L45:
            int r2 = r5.bottom
            if (r2 == r0) goto L52
            int r5 = r5.bottom
            float r5 = (float) r5
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.bottomMargin = r5
        L52:
            if (r6 <= 0) goto L5b
            float r5 = (float) r6
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.width = r5
        L5b:
            if (r7 <= 0) goto L64
            float r5 = (float) r7
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.height = r5
        L64:
            return r4
        L65:
            boolean r2 = r4 instanceof android.widget.RelativeLayout.LayoutParams
            if (r2 == 0) goto Lb5
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r3, r3)
            int r2 = r5.left
            if (r2 == r0) goto L7b
            int r2 = r5.left
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.leftMargin = r2
        L7b:
            int r2 = r5.top
            if (r2 == r0) goto L88
            int r2 = r5.top
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.topMargin = r2
        L88:
            int r2 = r5.right
            if (r2 == r0) goto L95
            int r2 = r5.right
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.rightMargin = r2
        L95:
            int r2 = r5.bottom
            if (r2 == r0) goto La2
            int r5 = r5.bottom
            float r5 = (float) r5
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.bottomMargin = r5
        La2:
            if (r6 <= 0) goto Lab
            float r5 = (float) r6
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.width = r5
        Lab:
            if (r7 <= 0) goto Lb4
            float r5 = (float) r7
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.height = r5
        Lb4:
            return r4
        Lb5:
            boolean r2 = r4 instanceof android.widget.LinearLayout.LayoutParams
            if (r2 == 0) goto L104
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r4.<init>(r3, r3)
            int r2 = r5.left
            if (r2 == r0) goto Lcb
            int r2 = r5.left
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.leftMargin = r2
        Lcb:
            int r2 = r5.top
            if (r2 == r0) goto Ld8
            int r2 = r5.top
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.topMargin = r2
        Ld8:
            int r2 = r5.right
            if (r2 == r0) goto Le5
            int r2 = r5.right
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r4.rightMargin = r2
        Le5:
            int r2 = r5.bottom
            if (r2 == r0) goto Lf2
            int r5 = r5.bottom
            float r5 = (float) r5
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.bottomMargin = r5
        Lf2:
            if (r6 <= 0) goto Lfb
            float r5 = (float) r6
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.width = r5
        Lfb:
            if (r7 <= 0) goto L104
            float r5 = (float) r7
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r4.height = r5
        L104:
            return r4
    }

    public static com.tkay.expressad.foundation.d.c a(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.foundation.d.c> r0 = com.tkay.expressad.video.bt.a.c.e
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.foundation.d.c> r0 = com.tkay.expressad.video.bt.a.c.e
            java.lang.Object r1 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static com.tkay.expressad.video.bt.a.c a() {
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a.a()
            return r0
    }

    public static void a(int r4, int r5, int r6, int r7, int r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "OperateViews setNotchString = "
            r0.<init>(r1)
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)
            r3 = 0
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r5)
            r3 = 1
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r6)
            r3 = 2
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)
            r3 = 3
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r8)
            r3 = 4
            r1[r3] = r2
            java.lang.String r2 = "%1$s-%2$s-%3$s-%4$s-%5$s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.h.h.a(r4, r5, r6, r7, r8)
            com.tkay.expressad.video.bt.a.c.m = r0
            com.tkay.expressad.video.bt.a.c.n = r4
            com.tkay.expressad.video.bt.a.c.o = r5
            com.tkay.expressad.video.bt.a.c.p = r6
            com.tkay.expressad.video.bt.a.c.q = r7
            com.tkay.expressad.video.bt.a.c.r = r8
            return
    }

    public static void a(android.webkit.WebView r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.video.bt.a.c.l     // Catch: java.lang.Exception -> L30
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

    public static void a(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            r0.<init>()     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.video.bt.a.c.k     // Catch: java.lang.Exception -> L2f
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            r1.<init>()     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "id"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L2f
            java.lang.String r5 = "data"
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2f
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L2f
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L2f
            r0 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.atsignalcommon.windvane.j.a(r3, r4, r5)     // Catch: java.lang.Exception -> L2f
            return
        L2f:
            r4 = move-exception
            java.lang.String r5 = r4.getMessage()
            a(r3, r5)
            r4.getMessage()
            return
    }

    public static void a(java.lang.Object r1) {
            java.lang.String r0 = ""
            a(r1, r0)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            c(r1, r0)
            return
    }

    public static void a(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.video.bt.a.c.k     // Catch: java.lang.Exception -> L30
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
            c(r3, r0)
            r4.getMessage()
            return
    }

    private static void a(java.lang.Object r3, java.lang.String r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.video.bt.a.c.k     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "id"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "data"
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L30
            com.tkay.expressad.atsignalcommon.windvane.j r5 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r3, r4, r0)     // Catch: java.lang.Exception -> L30
            return
        L30:
            r4 = move-exception
            java.lang.String r5 = r4.getMessage()
            c(r3, r5)
            r4.getMessage()
            return
    }

    public static void a(java.lang.String r1, int r2) {
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.video.bt.a.c.h
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r1, r2)
            return
    }

    public static void a(java.lang.String r1, android.app.Activity r2) {
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.tkay.expressad.video.bt.a.c.i
            r0.put(r1, r2)
            return
    }

    private static void a(java.lang.String r1, com.tkay.expressad.foundation.d.c r2) {
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.k
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.aZ()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "reward"
            com.tkay.expressad.foundation.g.a.f.a(r1, r2, r0)
        L13:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.d
            r0.put(r1, r2)
            return
    }

    private static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a.a()     // Catch: java.lang.Throwable -> L43
            java.util.LinkedHashMap r1 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L43
            if (r1 == 0) goto L42
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L43
            if (r2 <= 0) goto L42
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L43
        L18:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L42
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L43
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> L43
            boolean r0 = r2 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L2e
            com.tkay.expressad.video.bt.module.TYTempContainer r2 = (com.tkay.expressad.video.bt.module.TYTempContainer) r2     // Catch: java.lang.Throwable -> L43
            r2.notifyEvent(r3)     // Catch: java.lang.Throwable -> L43
            goto L18
        L2e:
            boolean r0 = r2 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L38
            com.tkay.expressad.video.bt.module.TkayBTWebView r2 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r2     // Catch: java.lang.Throwable -> L43
            r2.notifyEvent(r3)     // Catch: java.lang.Throwable -> L43
            goto L18
        L38:
            boolean r0 = r2 instanceof com.tkay.expressad.video.bt.module.TkayBTLayout     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L18
            com.tkay.expressad.video.bt.module.TkayBTLayout r2 = (com.tkay.expressad.video.bt.module.TkayBTLayout) r2     // Catch: java.lang.Throwable -> L43
            r2.notifyEvent(r3)     // Catch: java.lang.Throwable -> L43
            goto L18
        L42:
            return
        L43:
            r1 = move-exception
            r1.getMessage()
            return
    }

    public static com.tkay.expressad.videocommon.e.d b(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r0 = com.tkay.expressad.video.bt.a.c.f
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r0 = com.tkay.expressad.video.bt.a.c.f
            java.lang.Object r1 = r0.get(r1)
            com.tkay.expressad.videocommon.e.d r1 = (com.tkay.expressad.videocommon.e.d) r1
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static java.lang.String b() {
            int r0 = com.tkay.expressad.video.bt.a.c.j
            int r0 = r0 + 1
            com.tkay.expressad.video.bt.a.c.j = r0
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static void b(java.lang.Object r13, java.lang.String r14) {
            boolean r0 = android.text.TextUtils.isEmpty(r14)
            if (r0 != 0) goto L59
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L59
            r0.<init>(r14)     // Catch: java.lang.Throwable -> L59
            r14 = 0
            r1 = r14
        Ld:
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = ""
            if (r1 >= r2) goto L56
            org.json.JSONObject r2 = r0.getJSONObject(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.String r4 = "type"
            int r4 = r2.optInt(r4)     // Catch: java.lang.Throwable -> L59
            java.lang.String r5 = "url"
            java.lang.String r9 = r2.optString(r5)     // Catch: java.lang.Throwable -> L59
            java.lang.String r5 = "report"
            int r12 = r2.optInt(r5)     // Catch: java.lang.Throwable -> L59
            r2 = 1
            if (r12 != 0) goto L3f
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L59
            android.content.Context r5 = r5.f()     // Catch: java.lang.Throwable -> L59
            r6 = 0
            if (r4 == 0) goto L3a
            goto L3b
        L3a:
            r2 = r14
        L3b:
            com.tkay.expressad.a.a.a(r5, r6, r3, r9, r2)     // Catch: java.lang.Throwable -> L59
            goto L53
        L3f:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L59
            android.content.Context r6 = r3.f()     // Catch: java.lang.Throwable -> L59
            r7 = 0
            java.lang.String r8 = ""
            r10 = 0
            if (r4 == 0) goto L4f
            r11 = r2
            goto L50
        L4f:
            r11 = r14
        L50:
            com.tkay.expressad.a.a.a(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L59
        L53:
            int r1 = r1 + 1
            goto Ld
        L56:
            a(r13, r3)     // Catch: java.lang.Throwable -> L59
        L59:
            return
    }

    public static java.lang.String c(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.g
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.g
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L11:
            java.lang.String r1 = ""
            return r1
    }

    static java.util.LinkedHashMap c() {
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.d
            return r0
    }

    private static void c(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.video.bt.a.c.l     // Catch: java.lang.Exception -> L30
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

    public static void d(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.tkay.expressad.video.bt.a.c.i
            r0.remove(r1)
            return
    }

    public static int e(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.video.bt.a.c.h
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.video.bt.a.c.h
            java.lang.Object r1 = r0.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            return r1
        L15:
            r1 = 2
            return r1
    }

    public static void f(java.lang.Object r2, org.json.JSONObject r3) {
            java.lang.String r0 = "unitId"
            r3.optString(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = "id"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "data"
            org.json.JSONObject r3 = r3.optJSONObject(r1)     // Catch: java.lang.Throwable -> L1d
            if (r3 != 0) goto L19
            java.lang.String r3 = "data is empty"
            c(r2, r3)     // Catch: java.lang.Throwable -> L1d
            return
        L19:
            a(r2, r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            c(r2, r3)
            return
    }

    public static void f(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.g
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto Ld
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.g
            r0.remove(r1)
        Ld:
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r0 = com.tkay.expressad.video.bt.a.c.f
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1a
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r0 = com.tkay.expressad.video.bt.a.c.f
            r0.remove(r1)
        L1a:
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.foundation.d.c> r0 = com.tkay.expressad.video.bt.a.c.e
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L27
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.foundation.d.c> r0 = com.tkay.expressad.video.bt.a.c.e
            r0.remove(r1)
        L27:
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.d
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L34
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.d
            r0.remove(r1)
        L34:
            return
    }

    public static void g(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.video.bt.a.c.h
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto Ld
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.video.bt.a.c.h
            r0.remove(r1)
        Ld:
            return
    }

    private static java.lang.String h(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.d
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.video.bt.a.c.d
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L11:
            java.lang.String r1 = ""
            return r1
    }

    private static android.app.Activity i(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.tkay.expressad.video.bt.a.c.i
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.tkay.expressad.video.bt.a.c.i
            java.lang.Object r1 = r0.get(r1)
            android.app.Activity r1 = (android.app.Activity) r1
            return r1
        L11:
            r1 = 0
            return r1
    }

    public final void A(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5a
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L54
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5a
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L4e
            com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r7     // Catch: java.lang.Throwable -> L5a
            r7.play()     // Catch: java.lang.Throwable -> L5a
            a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            return
        L4e:
            java.lang.String r7 = "instanceId is not player"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L54:
            java.lang.String r7 = "instanceId not exit"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "playerPlay failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void B(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5a
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L54
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5a
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L4e
            com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r7     // Catch: java.lang.Throwable -> L5a
            r7.pause()     // Catch: java.lang.Throwable -> L5a
            a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            return
        L4e:
            java.lang.String r7 = "instanceId is not player"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L54:
            java.lang.String r7 = "instanceId not exit"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "playerPause failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void C(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5a
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L54
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5a
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L4e
            com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r7     // Catch: java.lang.Throwable -> L5a
            r7.resume()     // Catch: java.lang.Throwable -> L5a
            a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            return
        L4e:
            java.lang.String r7 = "instanceId is not player"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L54:
            java.lang.String r7 = "instanceId not exit"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "playerResume failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void D(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5a
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L54
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5a
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L4e
            com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r7     // Catch: java.lang.Throwable -> L5a
            r7.stop()     // Catch: java.lang.Throwable -> L5a
            a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            return
        L4e:
            java.lang.String r7 = "instanceId is not player"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L54:
            java.lang.String r7 = "instanceId not exit"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "playerStop failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void F(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L63
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L63
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L63
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L63
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L5d
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L63
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L57
            com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r7     // Catch: java.lang.Throwable -> L63
            boolean r7 = r7.playMute()     // Catch: java.lang.Throwable -> L63
            if (r7 == 0) goto L51
            a(r6, r1)     // Catch: java.lang.Throwable -> L63
            return
        L51:
            java.lang.String r7 = "set mute failed"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L57:
            java.lang.String r7 = "instanceId is not player"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L5d:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "playerMute failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void G(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L68
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L68
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L68
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L68
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L68
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L68
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L68
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L68
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L68
            if (r0 == 0) goto L62
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L68
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L68
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L68
            if (r0 == 0) goto L5c
            com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r7     // Catch: java.lang.Throwable -> L68
            boolean r7 = r7.playUnMute()     // Catch: java.lang.Throwable -> L68
            if (r7 == 0) goto L56
            a(r6, r1)     // Catch: java.lang.Throwable -> L68
            java.lang.String r7 = "onUnmute"
            a(r6, r7, r1)     // Catch: java.lang.Throwable -> L68
            return
        L56:
            java.lang.String r7 = "set unmute failed"
            a(r6, r7)     // Catch: java.lang.Throwable -> L68
            return
        L5c:
            java.lang.String r7 = "instanceId is not player"
            c(r6, r7)     // Catch: java.lang.Throwable -> L68
            return
        L62:
            java.lang.String r7 = "instanceId not exit"
            c(r6, r7)     // Catch: java.lang.Throwable -> L68
            return
        L68:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "playerUnmute failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void H(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r0 = "data"
            java.lang.String r1 = "id"
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r9.optString(r2)     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = r9.optString(r1)     // Catch: java.lang.Throwable -> L88
            java.lang.String r4 = h(r3)     // Catch: java.lang.Throwable -> L88
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L88
            if (r5 == 0) goto L25
            r5 = r8
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5     // Catch: java.lang.Throwable -> L88
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r5.a     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L25
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r5.a     // Catch: java.lang.Throwable -> L88
            java.lang.String r4 = r4.getRid()     // Catch: java.lang.Throwable -> L88
        L25:
            org.json.JSONObject r9 = r9.optJSONObject(r0)     // Catch: java.lang.Throwable -> L88
            if (r9 != 0) goto L31
            java.lang.String r9 = "data is empty"
            c(r8, r9)     // Catch: java.lang.Throwable -> L88
            return
        L31:
            java.util.LinkedHashMap r9 = r7.b(r2, r4)     // Catch: java.lang.Throwable -> L88
            boolean r2 = r9.containsKey(r3)     // Catch: java.lang.Throwable -> L88
            if (r2 == 0) goto L82
            java.lang.Object r9 = r9.get(r3)     // Catch: java.lang.Throwable -> L88
            android.view.View r9 = (android.view.View) r9     // Catch: java.lang.Throwable -> L88
            boolean r2 = r9 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L88
            if (r2 == 0) goto L7c
            com.tkay.expressad.video.bt.module.TkayBTVideoView r9 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r9     // Catch: java.lang.Throwable -> L88
            int r9 = r9.getMute()     // Catch: java.lang.Throwable -> L88
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L88
            java.lang.String r4 = "code"
            int r5 = com.tkay.expressad.video.bt.a.c.k     // Catch: java.lang.Throwable -> L88
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L88
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L88
            r4.<init>()     // Catch: java.lang.Throwable -> L88
            r4.put(r1, r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = "mute"
            r4.put(r1, r9)     // Catch: java.lang.Throwable -> L88
            r2.put(r0, r4)     // Catch: java.lang.Throwable -> L88
            com.tkay.expressad.atsignalcommon.windvane.j r9 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L88
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L88
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L88
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L88
            r9.a(r8, r0)     // Catch: java.lang.Throwable -> L88
            return
        L7c:
            java.lang.String r9 = "instanceId is not player"
            c(r8, r9)     // Catch: java.lang.Throwable -> L88
            return
        L82:
            java.lang.String r9 = "instanceId not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> L88
            return
        L88:
            r9 = move-exception
            java.lang.String r0 = r9.getMessage()
            c(r8, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "playerGetMuteState failed: "
            r8.<init>(r0)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            return
    }

    public final void K(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5a
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L54
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5a
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L4e
            com.tkay.expressad.video.bt.module.TYTempContainer r7 = (com.tkay.expressad.video.bt.module.TYTempContainer) r7     // Catch: java.lang.Throwable -> L5a
            r7.preload()     // Catch: java.lang.Throwable -> L5a
            a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            return
        L4e:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L54:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "preloadSubPlayTemplateView failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void L(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r9.optString(r0)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r1 = "id"
            java.lang.String r1 = r9.optString(r1)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> Lb9
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb9
            if (r3 == 0) goto L23
            r3 = r8
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> Lb9
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> Lb9
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> Lb9
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r9 = r9.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lb9
            if (r9 != 0) goto L31
            java.lang.String r9 = "data is empty"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lb9
            return
        L31:
            java.util.LinkedHashMap r9 = r7.b(r0, r2)     // Catch: java.lang.Throwable -> Lb9
            r3 = 0
            int r4 = r9.size()     // Catch: java.lang.Throwable -> Lb9
            if (r4 <= 0) goto Lb3
            java.util.Collection r4 = r9.values()     // Catch: java.lang.Throwable -> Lb9
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> Lb9
        L44:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lb9
            if (r5 == 0) goto L83
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lb9
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Throwable -> Lb9
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TkayBTContainer     // Catch: java.lang.Throwable -> Lb9
            if (r6 == 0) goto L58
            r3 = r5
            com.tkay.expressad.video.bt.module.TkayBTContainer r3 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r3     // Catch: java.lang.Throwable -> Lb9
            goto L44
        L58:
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> Lb9
            if (r6 == 0) goto L62
            com.tkay.expressad.video.bt.module.TkayBTWebView r5 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r5     // Catch: java.lang.Throwable -> Lb9
            r5.onDestory()     // Catch: java.lang.Throwable -> Lb9
            goto L44
        L62:
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> Lb9
            if (r6 == 0) goto L79
            r6 = r5
            com.tkay.expressad.video.bt.module.TkayBTVideoView r6 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r6     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r6 = r6.getInstanceId()     // Catch: java.lang.Throwable -> Lb9
            com.tkay.expressad.video.bt.a.a.a()     // Catch: java.lang.Throwable -> Lb9
            com.tkay.expressad.video.bt.a.a.a(r6)     // Catch: java.lang.Throwable -> Lb9
            com.tkay.expressad.video.bt.module.TkayBTVideoView r5 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r5     // Catch: java.lang.Throwable -> Lb9
            r5.onDestory()     // Catch: java.lang.Throwable -> Lb9
            goto L44
        L79:
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> Lb9
            if (r6 == 0) goto L44
            com.tkay.expressad.video.bt.module.TYTempContainer r5 = (com.tkay.expressad.video.bt.module.TYTempContainer) r5     // Catch: java.lang.Throwable -> Lb9
            r5.onDestroy()     // Catch: java.lang.Throwable -> Lb9
            goto L44
        L83:
            if (r3 == 0) goto Lad
            r3.onAdClose()     // Catch: java.lang.Throwable -> Lb9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r3 = com.tkay.expressad.video.bt.a.c.c     // Catch: java.lang.Throwable -> Lb9
            r3.remove(r9)     // Catch: java.lang.Throwable -> Lb9
            r9.clear()     // Catch: java.lang.Throwable -> Lb9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r9 = com.tkay.expressad.video.bt.a.c.c     // Catch: java.lang.Throwable -> Lb9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r3.<init>()     // Catch: java.lang.Throwable -> Lb9
            r3.append(r0)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r0 = "_"
            r3.append(r0)     // Catch: java.lang.Throwable -> Lb9
            r3.append(r2)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> Lb9
            r9.remove(r0)     // Catch: java.lang.Throwable -> Lb9
            a(r8, r1)     // Catch: java.lang.Throwable -> Lb9
            return
        Lad:
            java.lang.String r9 = "not found TkayBTContainer"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lb9
            return
        Lb3:
            java.lang.String r9 = "unitId or instanceId not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lb9
            return
        Lb9:
            r9 = move-exception
            java.lang.String r0 = r9.getMessage()
            c(r8, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "closeAd failed: "
            r8.<init>(r0)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            return
    }

    public final void M(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            r0 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r0.a     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = ""
            if (r1 == 0) goto L10
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r0.getRid()     // Catch: java.lang.Throwable -> L61
            goto L11
        L10:
            r0 = r2
        L11:
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L61
            java.lang.String r3 = "eventName"
            java.lang.String r3 = r7.optString(r3)     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r4)     // Catch: java.lang.Throwable -> L61
            java.util.LinkedHashMap r0 = r5.b(r1, r0)     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5b
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L61
            if (r1 <= 0) goto L5b
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L61
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L61
        L37:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L61
            if (r1 == 0) goto L57
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L61
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L61
            boolean r4 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L61
            if (r4 == 0) goto L4d
            r4 = r1
            com.tkay.expressad.video.bt.module.TkayBTWebView r4 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r4     // Catch: java.lang.Throwable -> L61
            r4.broadcast(r3, r7)     // Catch: java.lang.Throwable -> L61
        L4d:
            boolean r4 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTLayout     // Catch: java.lang.Throwable -> L61
            if (r4 == 0) goto L37
            com.tkay.expressad.video.bt.module.TkayBTLayout r1 = (com.tkay.expressad.video.bt.module.TkayBTLayout) r1     // Catch: java.lang.Throwable -> L61
            r1.broadcast(r3, r7)     // Catch: java.lang.Throwable -> L61
            goto L37
        L57:
            a(r6, r2)     // Catch: java.lang.Throwable -> L61
            return
        L5b:
            java.lang.String r7 = "unitId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L61
            return
        L61:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "broadcast failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void N(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "id"
            r1 = r11
            com.tkay.expressad.atsignalcommon.windvane.a r1 = (com.tkay.expressad.atsignalcommon.windvane.a) r1     // Catch: java.lang.Throwable -> L96
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.a     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = ""
            if (r2 == 0) goto L12
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = r1.getRid()     // Catch: java.lang.Throwable -> L96
            goto L13
        L12:
            r1 = r3
        L13:
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r12.optString(r2)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = r12.optString(r0)     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r5)     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = "userId"
            java.lang.String r5 = r12.optString(r5)     // Catch: java.lang.Throwable -> L96
            java.lang.String r6 = "expired"
            boolean r6 = r12.optBoolean(r6)     // Catch: java.lang.Throwable -> L96
            java.lang.String r7 = "reward"
            org.json.JSONObject r7 = r12.optJSONObject(r7)     // Catch: java.lang.Throwable -> L96
            java.lang.String r8 = "extra"
            java.lang.String r12 = r12.optString(r8)     // Catch: java.lang.Throwable -> L96
            r8 = 0
            if (r7 == 0) goto L53
            com.tkay.expressad.videocommon.c.c r8 = new com.tkay.expressad.videocommon.c.c     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = "name"
            java.lang.String r3 = r7.optString(r3)     // Catch: java.lang.Throwable -> L96
            java.lang.String r9 = "amount"
            int r9 = r7.optInt(r9)     // Catch: java.lang.Throwable -> L96
            r8.<init>(r3, r9)     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = r7.optString(r0)     // Catch: java.lang.Throwable -> L96
        L53:
            java.util.LinkedHashMap r0 = r10.b(r2, r1)     // Catch: java.lang.Throwable -> L96
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L96
            if (r1 <= 0) goto L90
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r1 = com.tkay.expressad.video.bt.a.c.g     // Catch: java.lang.Throwable -> L96
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L96
            if (r1 == 0) goto L90
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L96
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L96
            boolean r1 = r0 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L96
            if (r1 == 0) goto L8a
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = (com.tkay.expressad.video.bt.module.TYTempContainer) r0     // Catch: java.lang.Throwable -> L96
            r0.setReward(r8)     // Catch: java.lang.Throwable -> L96
            r0.setUserId(r5)     // Catch: java.lang.Throwable -> L96
            r0.setRewardId(r3)     // Catch: java.lang.Throwable -> L96
            r0.setCampaignExpired(r6)     // Catch: java.lang.Throwable -> L96
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L96
            if (r1 != 0) goto L86
            r0.setDeveloperExtraData(r12)     // Catch: java.lang.Throwable -> L96
        L86:
            a(r11, r4)     // Catch: java.lang.Throwable -> L96
            return
        L8a:
            java.lang.String r12 = "instanceId not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L96
            return
        L90:
            java.lang.String r12 = "unitId not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L96
            return
        L96:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            c(r11, r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = "setSubPlayTemplateInfo failed: "
            r11.<init>(r0)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            return
    }

    public final void O(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            r0 = r8
            com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = ""
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r0.a     // Catch: java.lang.Throwable -> L81
            if (r2 == 0) goto Lf
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = r0.getRid()     // Catch: java.lang.Throwable -> L81
        Lf:
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r9.optString(r0)     // Catch: java.lang.Throwable -> L81
            java.lang.String r2 = "id"
            java.lang.String r2 = r9.optString(r2)     // Catch: java.lang.Throwable -> L81
            java.lang.String r3 = "data"
            org.json.JSONObject r9 = r9.optJSONObject(r3)     // Catch: java.lang.Throwable -> L81
            java.lang.String r3 = "eventName"
            java.lang.String r3 = r9.optString(r3)     // Catch: java.lang.Throwable -> L81
            java.lang.String r4 = "eventData"
            org.json.JSONObject r9 = r9.optJSONObject(r4)     // Catch: java.lang.Throwable -> L81
            if (r9 != 0) goto L34
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L81
            r9.<init>()     // Catch: java.lang.Throwable -> L81
        L34:
            java.util.LinkedHashMap r0 = r7.b(r0, r1)     // Catch: java.lang.Throwable -> L81
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L81
            if (r1 <= 0) goto L7b
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L81
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L81
            boolean r1 = r0 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L81
            if (r1 == 0) goto L75
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L81
            int r1 = r0.getChildCount()     // Catch: java.lang.Throwable -> L81
            r4 = 0
        L4f:
            if (r4 >= r1) goto L75
            android.view.View r5 = r0.getChildAt(r4)     // Catch: java.lang.Throwable -> L81
            boolean r6 = r5 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L81
            if (r6 == 0) goto L72
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = (com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView) r5     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L81
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L81
            byte[] r9 = r9.getBytes()     // Catch: java.lang.Throwable -> L81
            r0 = 2
            java.lang.String r9 = android.util.Base64.encodeToString(r9, r0)     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r3, r9)     // Catch: java.lang.Throwable -> L81
            a(r8, r2)     // Catch: java.lang.Throwable -> L81
            return
        L72:
            int r4 = r4 + 1
            goto L4f
        L75:
            java.lang.String r9 = "instanceId not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> L81
            return
        L7b:
            java.lang.String r9 = "unitId not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> L81
            return
        L81:
            r9 = move-exception
            java.lang.String r0 = r9.getMessage()
            c(r8, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewFireEvent failed: "
            r8.<init>(r0)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            return
    }

    public final void Q(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "createNativeEC:"
            r0.<init>(r1)
            r0.append(r8)
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r8.optString(r0)     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r1)     // Catch: java.lang.Throwable -> La4
            if (r8 == 0) goto L9e
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto L20
            goto L9e
        L20:
            java.lang.String r1 = ""
            java.lang.String r2 = "campaign"
            org.json.JSONObject r2 = r8.optJSONObject(r2)     // Catch: java.lang.Throwable -> La4
            com.tkay.expressad.foundation.d.c r2 = com.tkay.expressad.foundation.d.c.b(r2)     // Catch: java.lang.Throwable -> La4
            if (r2 == 0) goto L3b
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La4
            if (r3 != 0) goto L3b
            r2.l(r0)     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = r2.Z()     // Catch: java.lang.Throwable -> La4
        L3b:
            java.lang.String r3 = "unitSetting"
            org.json.JSONObject r8 = r8.optJSONObject(r3)     // Catch: java.lang.Throwable -> La4
            com.tkay.expressad.videocommon.e.d r8 = com.tkay.expressad.videocommon.e.d.a(r8)     // Catch: java.lang.Throwable -> La4
            if (r8 == 0) goto L4a
            r8.a(r0)     // Catch: java.lang.Throwable -> La4
        L4a:
            com.tkay.expressad.video.bt.module.TkayBTNativeEC r3 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC     // Catch: java.lang.Throwable -> La4
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> La4
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> La4
            r3.<init>(r4)     // Catch: java.lang.Throwable -> La4
            r3.setCampaign(r2)     // Catch: java.lang.Throwable -> La4
            com.tkay.expressad.video.signal.a.j r4 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> La4
            r5 = 0
            r4.<init>(r5, r2)     // Catch: java.lang.Throwable -> La4
            r4.a(r0)     // Catch: java.lang.Throwable -> La4
            r3.setJSCommon(r4)     // Catch: java.lang.Throwable -> La4
            r3.setUnitId(r0)     // Catch: java.lang.Throwable -> La4
            r3.setRewardUnitSetting(r8)     // Catch: java.lang.Throwable -> La4
            r8 = r7
            com.tkay.expressad.atsignalcommon.windvane.a r8 = (com.tkay.expressad.atsignalcommon.windvane.a) r8     // Catch: java.lang.Throwable -> La4
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r8.a     // Catch: java.lang.Throwable -> La4
            if (r4 == 0) goto L7c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8 = r8.a     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = r8.getRid()     // Catch: java.lang.Throwable -> La4
            r3.setCreateWebView(r8)     // Catch: java.lang.Throwable -> La4
        L7c:
            java.util.LinkedHashMap r8 = r6.b(r0, r1)     // Catch: java.lang.Throwable -> La4
            java.lang.String r0 = b()     // Catch: java.lang.Throwable -> La4
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r4 = com.tkay.expressad.video.bt.a.c.d     // Catch: java.lang.Throwable -> La4
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> La4
            r3.setInstanceId(r0)     // Catch: java.lang.Throwable -> La4
            r8.put(r0, r3)     // Catch: java.lang.Throwable -> La4
            r3.preLoadData()     // Catch: java.lang.Throwable -> La4
            if (r2 != 0) goto L9a
            java.lang.String r8 = "campaign is null"
            c(r7, r8)     // Catch: java.lang.Throwable -> La4
            return
        L9a:
            a(r7, r0)     // Catch: java.lang.Throwable -> La4
            return
        L9e:
            java.lang.String r8 = "unitId or data is empty"
            c(r7, r8)     // Catch: java.lang.Throwable -> La4
            return
        La4:
            r8 = move-exception
            java.lang.String r0 = r8.getMessage()
            c(r7, r0)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r0 = "createNativeEC failed:"
            r7.<init>(r0)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            return
    }

    public final void a(java.lang.Object r9, org.json.JSONObject r10) {
            r8 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r4 = r10.optString(r0)     // Catch: java.lang.Throwable -> L74
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L74
            if (r0 == 0) goto L12
            java.lang.String r10 = "unitId is empty"
            c(r9, r10)     // Catch: java.lang.Throwable -> L74
            return
        L12:
            java.lang.String r0 = "data"
            org.json.JSONObject r10 = r10.optJSONObject(r0)     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = "delay"
            r1 = 0
            int r0 = r10.optInt(r0, r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "rect"
            org.json.JSONObject r10 = r10.optJSONObject(r2)     // Catch: java.lang.Throwable -> L74
            android.graphics.Rect r2 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L74
            r3 = -999(0xfffffffffffffc19, float:NaN)
            r2.<init>(r3, r3, r3, r3)     // Catch: java.lang.Throwable -> L74
            if (r10 == 0) goto L5b
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "left"
            int r2 = r10.optInt(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "top"
            int r5 = r10.optInt(r5, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "right"
            int r6 = r10.optInt(r6, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r7 = "bottom"
            int r3 = r10.optInt(r7, r3)     // Catch: java.lang.Throwable -> L74
            r1.<init>(r2, r5, r6, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "width"
            int r2 = r10.optInt(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "height"
            int r10 = r10.optInt(r3)     // Catch: java.lang.Throwable -> L74
            r7 = r10
            r5 = r1
            r6 = r2
            goto L5e
        L5b:
            r6 = r1
            r7 = r6
            r5 = r2
        L5e:
            com.tkay.expressad.video.bt.a.c$1 r10 = new com.tkay.expressad.video.bt.a.c$1     // Catch: java.lang.Throwable -> L74
            r1 = r10
            r2 = r8
            r3 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L74
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L74
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L74
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L74
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L74
            r1.postDelayed(r10, r2)     // Catch: java.lang.Throwable -> L74
            return
        L74:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            c(r9, r0)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r0 = "create view failed:"
            r9.<init>(r0)
            java.lang.String r10 = r10.getMessage()
            r9.append(r10)
            return
    }

    public final synchronized java.util.LinkedHashMap<java.lang.String, android.view.View> b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r0 = com.tkay.expressad.video.bt.a.c.c     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
            r1.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            r1.append(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5b
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L5b
            if (r0 == 0) goto L3b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r0 = com.tkay.expressad.video.bt.a.c.c     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
            r1.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "_"
            r1.append(r4)     // Catch: java.lang.Throwable -> L5b
            r1.append(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> L5b
            java.util.LinkedHashMap r4 = (java.util.LinkedHashMap) r4     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r3)
            return r4
        L3b:
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap     // Catch: java.lang.Throwable -> L5b
            r0.<init>()     // Catch: java.lang.Throwable -> L5b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r1 = com.tkay.expressad.video.bt.a.c.c     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r2.<init>()     // Catch: java.lang.Throwable -> L5b
            r2.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "_"
            r2.append(r4)     // Catch: java.lang.Throwable -> L5b
            r2.append(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L5b
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r3)
            return r0
        L5b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final void b(java.lang.Object r12, org.json.JSONObject r13) {
            r11 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r4 = r13.optString(r0)     // Catch: java.lang.Throwable -> L86
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L86
            if (r0 == 0) goto L12
            java.lang.String r13 = "unitId is empty"
            c(r12, r13)     // Catch: java.lang.Throwable -> L86
            return
        L12:
            java.lang.String r0 = "data"
            org.json.JSONObject r13 = r13.optJSONObject(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "delay"
            r1 = 0
            int r0 = r13.optInt(r0, r1)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "fileURL"
            java.lang.String r5 = r13.optString(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "filePath"
            java.lang.String r6 = r13.optString(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "html"
            java.lang.String r7 = r13.optString(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "rect"
            org.json.JSONObject r13 = r13.optJSONObject(r2)     // Catch: java.lang.Throwable -> L86
            android.graphics.Rect r2 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L86
            r3 = -999(0xfffffffffffffc19, float:NaN)
            r2.<init>(r3, r3, r3, r3)     // Catch: java.lang.Throwable -> L86
            if (r13 == 0) goto L6d
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "left"
            int r2 = r13.optInt(r2, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r8 = "top"
            int r8 = r13.optInt(r8, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r9 = "right"
            int r9 = r13.optInt(r9, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r10 = "bottom"
            int r3 = r13.optInt(r10, r3)     // Catch: java.lang.Throwable -> L86
            r1.<init>(r2, r8, r9, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "width"
            int r2 = r13.optInt(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = "height"
            int r13 = r13.optInt(r3)     // Catch: java.lang.Throwable -> L86
            r10 = r13
            r8 = r1
            r9 = r2
            goto L70
        L6d:
            r9 = r1
            r10 = r9
            r8 = r2
        L70:
            com.tkay.expressad.video.bt.a.c$2 r13 = new com.tkay.expressad.video.bt.a.c$2     // Catch: java.lang.Throwable -> L86
            r1 = r13
            r2 = r11
            r3 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L86
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L86
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L86
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L86
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L86
            r1.postDelayed(r13, r2)     // Catch: java.lang.Throwable -> L86
            return
        L86:
            r13 = move-exception
            java.lang.String r0 = r13.getMessage()
            c(r12, r0)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.String r0 = "createWebview failed:"
            r12.<init>(r0)
            java.lang.String r13 = r13.getMessage()
            r12.append(r13)
            return
    }

    public final void c(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r11.optString(r0)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r1)     // Catch: java.lang.Throwable -> Lb1
            if (r11 == 0) goto Lab
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb1
            if (r1 == 0) goto L16
            goto Lab
        L16:
            java.lang.String r1 = ""
            java.lang.String r2 = "campaign"
            org.json.JSONObject r2 = r11.optJSONObject(r2)     // Catch: java.lang.Throwable -> Lb1
            com.tkay.expressad.foundation.d.c r2 = com.tkay.expressad.foundation.d.c.b(r2)     // Catch: java.lang.Throwable -> Lb1
            if (r2 == 0) goto L31
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb1
            if (r3 != 0) goto L31
            r2.l(r0)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = r2.Z()     // Catch: java.lang.Throwable -> Lb1
        L31:
            java.lang.String r3 = "show_time"
            r4 = 0
            int r3 = r11.optInt(r3, r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r5 = "show_mute"
            int r5 = r11.optInt(r5, r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r6 = "show_close"
            int r6 = r11.optInt(r6, r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r7 = "orientation"
            r8 = 1
            int r7 = r11.optInt(r7, r8)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r8 = "show_pgb"
            int r11 = r11.optInt(r8, r4)     // Catch: java.lang.Throwable -> Lb1
            com.tkay.expressad.video.bt.module.TkayBTVideoView r4 = new com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lb1
            android.content.Context r8 = r8.f()     // Catch: java.lang.Throwable -> Lb1
            r4.<init>(r8)     // Catch: java.lang.Throwable -> Lb1
            r4.setCampaign(r2)     // Catch: java.lang.Throwable -> Lb1
            r4.setUnitId(r0)     // Catch: java.lang.Throwable -> Lb1
            r4.setShowMute(r5)     // Catch: java.lang.Throwable -> Lb1
            r4.setShowTime(r3)     // Catch: java.lang.Throwable -> Lb1
            r4.setShowClose(r6)     // Catch: java.lang.Throwable -> Lb1
            r4.setOrientation(r7)     // Catch: java.lang.Throwable -> Lb1
            r4.setProgressBarState(r11)     // Catch: java.lang.Throwable -> Lb1
            r11 = r10
            com.tkay.expressad.atsignalcommon.windvane.a r11 = (com.tkay.expressad.atsignalcommon.windvane.a) r11     // Catch: java.lang.Throwable -> Lb1
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r11.a     // Catch: java.lang.Throwable -> Lb1
            if (r3 == 0) goto L83
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r11.a     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = r11.getRid()     // Catch: java.lang.Throwable -> Lb1
            r4.setCreateWebView(r11)     // Catch: java.lang.Throwable -> Lb1
        L83:
            java.util.LinkedHashMap r11 = r9.b(r0, r1)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r0 = b()     // Catch: java.lang.Throwable -> Lb1
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = com.tkay.expressad.video.bt.a.c.d     // Catch: java.lang.Throwable -> Lb1
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> Lb1
            r4.setInstanceId(r0)     // Catch: java.lang.Throwable -> Lb1
            r11.put(r0, r4)     // Catch: java.lang.Throwable -> Lb1
            r4.preLoadData()     // Catch: java.lang.Throwable -> Lb1
            if (r2 != 0) goto La1
            java.lang.String r11 = "campaign is null"
            c(r10, r11)     // Catch: java.lang.Throwable -> Lb1
            goto La4
        La1:
            a(r10, r0)     // Catch: java.lang.Throwable -> Lb1
        La4:
            com.tkay.expressad.video.bt.a.a.a()     // Catch: java.lang.Throwable -> Lb1
            com.tkay.expressad.video.bt.a.a.a(r0, r4)     // Catch: java.lang.Throwable -> Lb1
            return
        Lab:
            java.lang.String r11 = "unitId or data is empty"
            c(r10, r11)     // Catch: java.lang.Throwable -> Lb1
            return
        Lb1:
            r11 = move-exception
            java.lang.String r0 = r11.getMessage()
            c(r10, r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "createPlayerView failed:"
            r10.<init>(r0)
            java.lang.String r11 = r11.getMessage()
            r10.append(r11)
            return
    }

    public final void d(java.lang.Object r13, org.json.JSONObject r14) {
            r12 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r14.optString(r0)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r1 = "data"
            org.json.JSONObject r14 = r14.optJSONObject(r1)     // Catch: java.lang.Throwable -> Lf5
            if (r14 == 0) goto Lef
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf5
            if (r1 == 0) goto L16
            goto Lef
        L16:
            java.lang.String r1 = "mute"
            int r1 = r14.optInt(r1)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r2 = ""
            java.lang.String r3 = "campaign"
            org.json.JSONObject r3 = r14.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lf5
            com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.foundation.d.c.b(r3)     // Catch: java.lang.Throwable -> Lf5
            if (r3 == 0) goto L37
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf5
            if (r4 != 0) goto L37
            r3.l(r0)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r2 = r3.Z()     // Catch: java.lang.Throwable -> Lf5
        L37:
            java.lang.String r4 = "unitSetting"
            org.json.JSONObject r4 = r14.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lf5
            com.tkay.expressad.videocommon.e.d r4 = com.tkay.expressad.videocommon.e.d.a(r4)     // Catch: java.lang.Throwable -> Lf5
            if (r4 == 0) goto L46
            r4.a(r0)     // Catch: java.lang.Throwable -> Lf5
        L46:
            java.lang.String r5 = "userId"
            java.lang.String r5 = r14.optString(r5)     // Catch: java.lang.Throwable -> Lf5
            boolean r6 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf5
            if (r6 == 0) goto L5f
            r6 = r13
            com.tkay.expressad.atsignalcommon.windvane.a r6 = (com.tkay.expressad.atsignalcommon.windvane.a) r6     // Catch: java.lang.Throwable -> Lf5
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r6.a     // Catch: java.lang.Throwable -> Lf5
            if (r7 == 0) goto L5f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r6.a     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> Lf5
        L5f:
            java.util.LinkedHashMap r6 = r12.b(r0, r2)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r7 = b()     // Catch: java.lang.Throwable -> Lf5
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r8 = com.tkay.expressad.video.bt.a.c.d     // Catch: java.lang.Throwable -> Lf5
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> Lf5
            com.tkay.expressad.video.bt.module.TYTempContainer r2 = new com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> Lf5
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lf5
            android.content.Context r8 = r8.f()     // Catch: java.lang.Throwable -> Lf5
            r2.<init>(r8)     // Catch: java.lang.Throwable -> Lf5
            r2.setInstanceId(r7)     // Catch: java.lang.Throwable -> Lf5
            r2.setUnitId(r0)     // Catch: java.lang.Throwable -> Lf5
            r2.setCampaign(r3)     // Catch: java.lang.Throwable -> Lf5
            r2.setRewardUnitSetting(r4)     // Catch: java.lang.Throwable -> Lf5
            r8 = 1
            r2.setBigOffer(r8)     // Catch: java.lang.Throwable -> Lf5
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lf5
            if (r8 != 0) goto L92
            r2.setUserId(r5)     // Catch: java.lang.Throwable -> Lf5
        L92:
            java.lang.String r5 = "reward"
            org.json.JSONObject r5 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> Lf5
            if (r5 == 0) goto Lc7
            java.lang.String r8 = "id"
            java.lang.String r8 = r5.optString(r8)     // Catch: java.lang.Throwable -> Lf5
            com.tkay.expressad.videocommon.c.c r9 = new com.tkay.expressad.videocommon.c.c     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r10 = "name"
            java.lang.String r10 = r5.optString(r10)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r11 = "amount"
            int r5 = r5.optInt(r11)     // Catch: java.lang.Throwable -> Lf5
            r9.<init>(r10, r5)     // Catch: java.lang.Throwable -> Lf5
            boolean r5 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lf5
            if (r5 != 0) goto Lba
            r2.setRewardId(r8)     // Catch: java.lang.Throwable -> Lf5
        Lba:
            java.lang.String r5 = r9.a()     // Catch: java.lang.Throwable -> Lf5
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lf5
            if (r5 != 0) goto Lc7
            r2.setReward(r9)     // Catch: java.lang.Throwable -> Lf5
        Lc7:
            java.lang.String r5 = "extra"
            java.lang.String r14 = r14.optString(r5)     // Catch: java.lang.Throwable -> Lf5
            boolean r5 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> Lf5
            if (r5 != 0) goto Ld6
            r2.setDeveloperExtraData(r14)     // Catch: java.lang.Throwable -> Lf5
        Ld6:
            r2.setMute(r1)     // Catch: java.lang.Throwable -> Lf5
            r6.put(r7, r2)     // Catch: java.lang.Throwable -> Lf5
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r14 = com.tkay.expressad.video.bt.a.c.g     // Catch: java.lang.Throwable -> Lf5
            r14.put(r7, r0)     // Catch: java.lang.Throwable -> Lf5
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.foundation.d.c> r14 = com.tkay.expressad.video.bt.a.c.e     // Catch: java.lang.Throwable -> Lf5
            r14.put(r7, r3)     // Catch: java.lang.Throwable -> Lf5
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r14 = com.tkay.expressad.video.bt.a.c.f     // Catch: java.lang.Throwable -> Lf5
            r14.put(r7, r4)     // Catch: java.lang.Throwable -> Lf5
            a(r13, r7)     // Catch: java.lang.Throwable -> Lf5
            return
        Lef:
            java.lang.String r14 = "unitId or data is empty"
            c(r13, r14)     // Catch: java.lang.Throwable -> Lf5
            return
        Lf5:
            r14 = move-exception
            java.lang.String r0 = r14.getMessage()
            c(r13, r0)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r0 = "createSubPlayTemplateView failed:"
            r13.<init>(r0)
            java.lang.String r14 = r14.getMessage()
            r13.append(r14)
            return
    }

    public final void e(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r9.optString(r0)     // Catch: java.lang.Throwable -> Le3
            java.lang.String r1 = "id"
            java.lang.String r1 = r9.optString(r1)     // Catch: java.lang.Throwable -> Le3
            java.lang.String r2 = "data"
            org.json.JSONObject r9 = r9.optJSONObject(r2)     // Catch: java.lang.Throwable -> Le3
            if (r9 == 0) goto Ldd
            boolean r9 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le3
            if (r9 == 0) goto L1c
            goto Ldd
        L1c:
            java.lang.String r9 = h(r1)     // Catch: java.lang.Throwable -> Le3
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Le3
            if (r2 == 0) goto L33
            r2 = r8
            com.tkay.expressad.atsignalcommon.windvane.a r2 = (com.tkay.expressad.atsignalcommon.windvane.a) r2     // Catch: java.lang.Throwable -> Le3
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r2.a     // Catch: java.lang.Throwable -> Le3
            if (r3 == 0) goto L33
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r9 = r2.a     // Catch: java.lang.Throwable -> Le3
            java.lang.String r9 = r9.getRid()     // Catch: java.lang.Throwable -> Le3
        L33:
            java.util.LinkedHashMap r9 = r7.b(r0, r9)     // Catch: java.lang.Throwable -> Le3
            if (r9 == 0) goto Ld7
            boolean r0 = r9.containsKey(r1)     // Catch: java.lang.Throwable -> Le3
            if (r0 == 0) goto Ld7
            java.lang.Object r0 = r9.get(r1)     // Catch: java.lang.Throwable -> Le3
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> Le3
            r9.remove(r1)     // Catch: java.lang.Throwable -> Le3
            if (r0 == 0) goto Lb1
            android.view.ViewParent r2 = r0.getParent()     // Catch: java.lang.Throwable -> Le3
            if (r2 == 0) goto Lb1
            android.view.ViewParent r2 = r0.getParent()     // Catch: java.lang.Throwable -> Le3
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Throwable -> Le3
            if (r2 == 0) goto L5b
            r2.removeView(r0)     // Catch: java.lang.Throwable -> Le3
        L5b:
            boolean r2 = r0 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> Le3
            if (r2 == 0) goto Lb1
            r2 = r0
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Throwable -> Le3
            int r3 = r2.getChildCount()     // Catch: java.lang.Throwable -> Le3
            if (r3 <= 0) goto Lb1
            int r3 = r2.getChildCount()     // Catch: java.lang.Throwable -> Le3
            r4 = 0
        L6d:
            if (r4 >= r3) goto Lb1
            android.view.View r5 = r2.getChildAt(r4)     // Catch: java.lang.Throwable -> Le3
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> Le3
            if (r6 == 0) goto L87
            r6 = r5
            com.tkay.expressad.video.bt.module.TkayBTWebView r6 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r6     // Catch: java.lang.Throwable -> Le3
            java.lang.String r6 = r6.getInstanceId()     // Catch: java.lang.Throwable -> Le3
            r9.remove(r6)     // Catch: java.lang.Throwable -> Le3
            com.tkay.expressad.video.bt.module.TkayBTWebView r5 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r5     // Catch: java.lang.Throwable -> Le3
            r5.onDestory()     // Catch: java.lang.Throwable -> Le3
            goto Lae
        L87:
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> Le3
            if (r6 == 0) goto L9b
            r6 = r5
            com.tkay.expressad.video.bt.module.TkayBTVideoView r6 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r6     // Catch: java.lang.Throwable -> Le3
            java.lang.String r6 = r6.getInstanceId()     // Catch: java.lang.Throwable -> Le3
            r9.remove(r6)     // Catch: java.lang.Throwable -> Le3
            com.tkay.expressad.video.bt.module.TkayBTVideoView r5 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r5     // Catch: java.lang.Throwable -> Le3
            r5.onDestory()     // Catch: java.lang.Throwable -> Le3
            goto Lae
        L9b:
            boolean r6 = r5 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> Le3
            if (r6 == 0) goto Lae
            r6 = r5
            com.tkay.expressad.video.bt.module.TYTempContainer r6 = (com.tkay.expressad.video.bt.module.TYTempContainer) r6     // Catch: java.lang.Throwable -> Le3
            java.lang.String r6 = r6.getInstanceId()     // Catch: java.lang.Throwable -> Le3
            r9.remove(r6)     // Catch: java.lang.Throwable -> Le3
            com.tkay.expressad.video.bt.module.TYTempContainer r5 = (com.tkay.expressad.video.bt.module.TYTempContainer) r5     // Catch: java.lang.Throwable -> Le3
            r5.onDestroy()     // Catch: java.lang.Throwable -> Le3
        Lae:
            int r4 = r4 + 1
            goto L6d
        Lb1:
            boolean r9 = r0 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> Le3
            if (r9 == 0) goto Lbb
            r9 = r0
            com.tkay.expressad.video.bt.module.TYTempContainer r9 = (com.tkay.expressad.video.bt.module.TYTempContainer) r9     // Catch: java.lang.Throwable -> Le3
            r9.onDestroy()     // Catch: java.lang.Throwable -> Le3
        Lbb:
            boolean r9 = r0 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> Le3
            if (r9 == 0) goto Lc5
            r9 = r0
            com.tkay.expressad.video.bt.module.TkayBTWebView r9 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r9     // Catch: java.lang.Throwable -> Le3
            r9.onDestory()     // Catch: java.lang.Throwable -> Le3
        Lc5:
            boolean r9 = r0 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> Le3
            if (r9 == 0) goto Lce
            com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r0     // Catch: java.lang.Throwable -> Le3
            r0.onDestory()     // Catch: java.lang.Throwable -> Le3
        Lce:
            a(r8, r1)     // Catch: java.lang.Throwable -> Le3
            java.lang.String r9 = "onComponentDestroy"
            a(r8, r9, r1)     // Catch: java.lang.Throwable -> Le3
            return
        Ld7:
            java.lang.String r9 = "unitId or instanceId not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> Le3
            return
        Ldd:
            java.lang.String r9 = "unidId or data is empty"
            c(r8, r9)     // Catch: java.lang.Throwable -> Le3
            return
        Le3:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            c(r8, r9)
            return
    }

    public final void g(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r9.optString(r0)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r1 = "id"
            java.lang.String r1 = r9.optString(r1)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> Lc5
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc5
            if (r3 == 0) goto L23
            r3 = r8
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> Lc5
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> Lc5
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r9 = r9.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lc5
            if (r9 != 0) goto L31
            java.lang.String r9 = "data is empty"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lc5
            return
        L31:
            java.lang.String r3 = "rect"
            org.json.JSONObject r9 = r9.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lc5
            if (r9 != 0) goto L3f
            java.lang.String r9 = "rect not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lc5
            return
        L3f:
            java.util.LinkedHashMap r0 = r7.b(r0, r2)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = "left"
            r3 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r9.optInt(r2, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r4 = "top"
            int r4 = r9.optInt(r4, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r5 = "right"
            int r5 = r9.optInt(r5, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r6 = "bottom"
            int r3 = r9.optInt(r6, r3)     // Catch: java.lang.Throwable -> Lc5
            android.graphics.Rect r6 = new android.graphics.Rect     // Catch: java.lang.Throwable -> Lc5
            r6.<init>(r2, r4, r5, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = "width"
            int r2 = r9.optInt(r2)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r3 = "height"
            int r9 = r9.optInt(r3)     // Catch: java.lang.Throwable -> Lc5
            boolean r3 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Lc5
            if (r3 == 0) goto Lbf
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Lc5
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> Lc5
            if (r0 == 0) goto Lb9
            android.view.ViewParent r3 = r0.getParent()     // Catch: java.lang.Throwable -> Lc5
            if (r3 == 0) goto L91
            android.view.ViewGroup$LayoutParams r3 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> Lc5
            android.view.ViewGroup$LayoutParams r9 = a(r3, r6, r2, r9)     // Catch: java.lang.Throwable -> Lc5
            r0.setLayoutParams(r9)     // Catch: java.lang.Throwable -> Lc5
            r0.requestLayout()     // Catch: java.lang.Throwable -> Lc5
            goto Lb0
        L91:
            boolean r3 = r0 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> Lc5
            if (r3 == 0) goto La1
            r3 = r0
            com.tkay.expressad.video.bt.module.TkayBTWebView r3 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r3     // Catch: java.lang.Throwable -> Lc5
            r3.setRect(r6)     // Catch: java.lang.Throwable -> Lc5
            r3 = r0
            com.tkay.expressad.video.bt.module.TkayBTWebView r3 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r3     // Catch: java.lang.Throwable -> Lc5
            r3.setLayout(r2, r9)     // Catch: java.lang.Throwable -> Lc5
        La1:
            boolean r3 = r0 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> Lc5
            if (r3 == 0) goto Lb0
            r3 = r0
            com.tkay.expressad.video.bt.module.TkayBTVideoView r3 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r3     // Catch: java.lang.Throwable -> Lc5
            r3.setRect(r6)     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r0     // Catch: java.lang.Throwable -> Lc5
            r0.setLayout(r2, r9)     // Catch: java.lang.Throwable -> Lc5
        Lb0:
            a(r8, r1)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r9 = "onViewRectChanged"
            a(r8, r9, r1)     // Catch: java.lang.Throwable -> Lc5
            return
        Lb9:
            java.lang.String r9 = "view is null"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lc5
            return
        Lbf:
            java.lang.String r9 = "instanceId not exist"
            c(r8, r9)     // Catch: java.lang.Throwable -> Lc5
            return
        Lc5:
            r9 = move-exception
            java.lang.String r0 = r9.getMessage()
            c(r8, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewRect failed: "
            r8.<init>(r0)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            return
    }

    public final void h(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L6f
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L6f
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L6f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L6f
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L6f
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L6f
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L6f
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L69
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L6f
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L6f
            if (r7 == 0) goto L63
            android.view.ViewParent r0 = r7.getParent()     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L63
            android.view.ViewParent r0 = r7.getParent()     // Catch: java.lang.Throwable -> L6f
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L5d
            r0.removeView(r7)     // Catch: java.lang.Throwable -> L6f
            a(r6, r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r7 = "onRemoveFromView"
            a(r6, r7, r1)     // Catch: java.lang.Throwable -> L6f
            return
        L5d:
            java.lang.String r7 = "parent is null"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L63:
            java.lang.String r7 = "view is null"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L69:
            java.lang.String r7 = "params not enough"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L6f:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "removeFromSuperView failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void i(java.lang.Object r13, org.json.JSONObject r14) {
            r12 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r14.optString(r1)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r2 = r14.optString(r0)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r3 = h(r2)     // Catch: java.lang.Throwable -> L17a
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L17a
            if (r4 == 0) goto L23
            r4 = r13
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4     // Catch: java.lang.Throwable -> L17a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L17a
            if (r5 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L17a
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L17a
        L23:
            java.lang.String r4 = "data"
            org.json.JSONObject r14 = r14.optJSONObject(r4)     // Catch: java.lang.Throwable -> L17a
            if (r14 != 0) goto L31
            java.lang.String r14 = "data is empty"
            c(r13, r14)     // Catch: java.lang.Throwable -> L17a
            return
        L31:
            java.lang.String r0 = r14.optString(r0)     // Catch: java.lang.Throwable -> L17a
            java.util.LinkedHashMap r1 = r12.b(r1, r3)     // Catch: java.lang.Throwable -> L17a
            boolean r3 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L17a
            if (r3 == 0) goto L174
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L17a
            if (r3 == 0) goto L174
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Throwable -> L17a
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L17a
            java.lang.Object r4 = r1.get(r0)     // Catch: java.lang.Throwable -> L17a
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L17a
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L17a
            if (r3 == 0) goto L16e
            if (r4 != 0) goto L5a
            goto L16e
        L5a:
            java.lang.String r5 = "rect"
            org.json.JSONObject r14 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> L17a
            boolean r5 = r4 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L17a
            r6 = 0
            if (r5 == 0) goto Ldb
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17a
            java.lang.String r5 = "OperateViews setNotchString = "
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r5 = "%1$s-%2$s-%3$s-%4$s-%5$s"
            r7 = 5
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L17a
            int r8 = com.tkay.expressad.video.bt.a.c.n     // Catch: java.lang.Throwable -> L17a
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L17a
            r7[r6] = r8     // Catch: java.lang.Throwable -> L17a
            r6 = 1
            int r8 = com.tkay.expressad.video.bt.a.c.o     // Catch: java.lang.Throwable -> L17a
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L17a
            r7[r6] = r8     // Catch: java.lang.Throwable -> L17a
            r6 = 2
            int r8 = com.tkay.expressad.video.bt.a.c.p     // Catch: java.lang.Throwable -> L17a
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L17a
            r7[r6] = r8     // Catch: java.lang.Throwable -> L17a
            r6 = 3
            int r8 = com.tkay.expressad.video.bt.a.c.q     // Catch: java.lang.Throwable -> L17a
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L17a
            r7[r6] = r8     // Catch: java.lang.Throwable -> L17a
            r6 = 4
            int r8 = com.tkay.expressad.video.bt.a.c.r     // Catch: java.lang.Throwable -> L17a
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L17a
            r7[r6] = r8     // Catch: java.lang.Throwable -> L17a
            java.lang.String r5 = java.lang.String.format(r5, r7)     // Catch: java.lang.Throwable -> L17a
            r3.append(r5)     // Catch: java.lang.Throwable -> L17a
            r6 = r4
            com.tkay.expressad.video.bt.module.TYTempContainer r6 = (com.tkay.expressad.video.bt.module.TYTempContainer) r6     // Catch: java.lang.Throwable -> L17a
            int r7 = com.tkay.expressad.video.bt.a.c.n     // Catch: java.lang.Throwable -> L17a
            int r8 = com.tkay.expressad.video.bt.a.c.o     // Catch: java.lang.Throwable -> L17a
            int r9 = com.tkay.expressad.video.bt.a.c.p     // Catch: java.lang.Throwable -> L17a
            int r10 = com.tkay.expressad.video.bt.a.c.q     // Catch: java.lang.Throwable -> L17a
            int r11 = com.tkay.expressad.video.bt.a.c.r     // Catch: java.lang.Throwable -> L17a
            r6.setNotchPadding(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L17a
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L17a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L17a
        Lbc:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L17a
            if (r3 == 0) goto L153
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L17a
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L17a
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTContainer     // Catch: java.lang.Throwable -> L17a
            if (r5 == 0) goto Lbc
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L17a
            r1 = r3
            com.tkay.expressad.video.bt.module.TkayBTContainer r1 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r1     // Catch: java.lang.Throwable -> L17a
            com.tkay.expressad.video.bt.module.TkayBTContainer r3 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r3     // Catch: java.lang.Throwable -> L17a
            com.tkay.expressad.video.bt.module.TYTempContainer r4 = (com.tkay.expressad.video.bt.module.TYTempContainer) r4     // Catch: java.lang.Throwable -> L17a
            r1.appendSubView(r3, r4, r14)     // Catch: java.lang.Throwable -> L17a
            goto L153
        Ldb:
            r1 = 0
            if (r14 != 0) goto Lfa
            boolean r14 = r4 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L17a
            if (r14 == 0) goto Lf8
            r14 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r14 = (com.tkay.expressad.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L17a
            android.graphics.Rect r1 = r14.getRect()     // Catch: java.lang.Throwable -> L17a
            r14 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r14 = (com.tkay.expressad.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L17a
            int r6 = r14.getViewWidth()     // Catch: java.lang.Throwable -> L17a
            r14 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r14 = (com.tkay.expressad.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L17a
            int r14 = r14.getViewHeight()     // Catch: java.lang.Throwable -> L17a
            goto L126
        Lf8:
            r14 = r6
            goto L126
        Lfa:
            java.lang.String r1 = "left"
            r5 = -999(0xfffffffffffffc19, float:NaN)
            int r1 = r14.optInt(r1, r5)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r6 = "top"
            int r6 = r14.optInt(r6, r5)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r7 = "right"
            int r7 = r14.optInt(r7, r5)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r8 = "bottom"
            int r5 = r14.optInt(r8, r5)     // Catch: java.lang.Throwable -> L17a
            android.graphics.Rect r8 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L17a
            r8.<init>(r1, r6, r7, r5)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r1 = "width"
            int r6 = r14.optInt(r1)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r1 = "height"
            int r14 = r14.optInt(r1)     // Catch: java.lang.Throwable -> L17a
            r1 = r8
        L126:
            android.view.ViewGroup$LayoutParams r5 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L17a
            r7 = -1
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L17a
            boolean r8 = r3 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L17a
            if (r8 == 0) goto L136
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L17a
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L17a
            goto L149
        L136:
            boolean r8 = r3 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L17a
            if (r8 == 0) goto L140
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L17a
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L17a
            goto L149
        L140:
            boolean r8 = r3 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L17a
            if (r8 == 0) goto L149
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L17a
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L17a
        L149:
            android.view.ViewGroup$LayoutParams r14 = a(r5, r1, r6, r14)     // Catch: java.lang.Throwable -> L17a
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L17a
            r3.addView(r4, r14)     // Catch: java.lang.Throwable -> L17a
        L153:
            a(r13, r2)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r14 = "onAppendView"
            a(r13, r14, r2)     // Catch: java.lang.Throwable -> L17a
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17a
            java.lang.String r1 = "appendSubView parentId = "
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L17a
            r14.append(r2)     // Catch: java.lang.Throwable -> L17a
            java.lang.String r1 = " childId = "
            r14.append(r1)     // Catch: java.lang.Throwable -> L17a
            r14.append(r0)     // Catch: java.lang.Throwable -> L17a
            return
        L16e:
            java.lang.String r14 = "view is not exist"
            c(r13, r14)     // Catch: java.lang.Throwable -> L17a
            return
        L174:
            java.lang.String r14 = "instanceId is not exist"
            c(r13, r14)     // Catch: java.lang.Throwable -> L17a
            return
        L17a:
            r14 = move-exception
            java.lang.String r0 = r14.getMessage()
            c(r13, r0)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r0 = "appendSubView failed: "
            r13.<init>(r0)
            java.lang.String r14 = r14.getMessage()
            r13.append(r14)
            return
    }

    public final void j(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r11.optString(r1)     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = r11.optString(r0)     // Catch: java.lang.Throwable -> L133
            java.lang.String r3 = h(r2)     // Catch: java.lang.Throwable -> L133
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L133
            if (r4 == 0) goto L23
            r4 = r10
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4     // Catch: java.lang.Throwable -> L133
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L133
            if (r5 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L133
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L133
        L23:
            java.lang.String r4 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r4)     // Catch: java.lang.Throwable -> L133
            if (r11 == 0) goto L12d
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L133
            if (r4 == 0) goto L33
            goto L12d
        L33:
            java.lang.String r0 = r11.optString(r0)     // Catch: java.lang.Throwable -> L133
            java.util.LinkedHashMap r1 = r9.b(r1, r3)     // Catch: java.lang.Throwable -> L133
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L133
            if (r3 == 0) goto L127
            boolean r3 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L133
            if (r3 == 0) goto L127
            java.lang.Object r3 = r1.get(r0)     // Catch: java.lang.Throwable -> L133
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L133
            java.lang.Object r4 = r1.get(r2)     // Catch: java.lang.Throwable -> L133
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L133
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L133
            if (r3 == 0) goto L121
            if (r4 != 0) goto L5c
            goto L121
        L5c:
            java.lang.String r5 = "rect"
            org.json.JSONObject r11 = r11.optJSONObject(r5)     // Catch: java.lang.Throwable -> L133
            boolean r5 = r4 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L133
            if (r5 == 0) goto L8d
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L133
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L133
        L6e:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L133
            if (r3 == 0) goto L106
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L133
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L133
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTContainer     // Catch: java.lang.Throwable -> L133
            if (r5 == 0) goto L6e
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L133
            r1 = r3
            com.tkay.expressad.video.bt.module.TkayBTContainer r1 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r1     // Catch: java.lang.Throwable -> L133
            com.tkay.expressad.video.bt.module.TkayBTContainer r3 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r3     // Catch: java.lang.Throwable -> L133
            com.tkay.expressad.video.bt.module.TYTempContainer r4 = (com.tkay.expressad.video.bt.module.TYTempContainer) r4     // Catch: java.lang.Throwable -> L133
            r1.appendSubView(r3, r4, r11)     // Catch: java.lang.Throwable -> L133
            goto L106
        L8d:
            r1 = 0
            r5 = 0
            if (r11 != 0) goto Lad
            boolean r11 = r4 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L133
            if (r11 == 0) goto Lab
            r11 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> L133
            android.graphics.Rect r1 = r11.getRect()     // Catch: java.lang.Throwable -> L133
            r11 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> L133
            int r5 = r11.getViewWidth()     // Catch: java.lang.Throwable -> L133
            r11 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> L133
            int r11 = r11.getViewHeight()     // Catch: java.lang.Throwable -> L133
            goto Ld9
        Lab:
            r11 = r5
            goto Ld9
        Lad:
            java.lang.String r1 = "left"
            r5 = -999(0xfffffffffffffc19, float:NaN)
            int r1 = r11.optInt(r1, r5)     // Catch: java.lang.Throwable -> L133
            java.lang.String r6 = "top"
            int r6 = r11.optInt(r6, r5)     // Catch: java.lang.Throwable -> L133
            java.lang.String r7 = "right"
            int r7 = r11.optInt(r7, r5)     // Catch: java.lang.Throwable -> L133
            java.lang.String r8 = "bottom"
            int r5 = r11.optInt(r8, r5)     // Catch: java.lang.Throwable -> L133
            android.graphics.Rect r8 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L133
            r8.<init>(r1, r6, r7, r5)     // Catch: java.lang.Throwable -> L133
            java.lang.String r1 = "width"
            int r5 = r11.optInt(r1)     // Catch: java.lang.Throwable -> L133
            java.lang.String r1 = "height"
            int r11 = r11.optInt(r1)     // Catch: java.lang.Throwable -> L133
            r1 = r8
        Ld9:
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L133
            r7 = -1
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L133
            boolean r8 = r3 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L133
            if (r8 == 0) goto Le9
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L133
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L133
            goto Lfc
        Le9:
            boolean r8 = r3 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L133
            if (r8 == 0) goto Lf3
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L133
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L133
            goto Lfc
        Lf3:
            boolean r8 = r3 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L133
            if (r8 == 0) goto Lfc
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L133
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L133
        Lfc:
            android.view.ViewGroup$LayoutParams r11 = a(r6, r1, r5, r11)     // Catch: java.lang.Throwable -> L133
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L133
            r3.addView(r4, r11)     // Catch: java.lang.Throwable -> L133
        L106:
            a(r10, r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r11 = "onAppendViewTo"
            a(r10, r11, r2)     // Catch: java.lang.Throwable -> L133
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L133
            java.lang.String r1 = "appendViewTo parentId = "
            r11.<init>(r1)     // Catch: java.lang.Throwable -> L133
            r11.append(r0)     // Catch: java.lang.Throwable -> L133
            java.lang.String r0 = " childId = "
            r11.append(r0)     // Catch: java.lang.Throwable -> L133
            r11.append(r2)     // Catch: java.lang.Throwable -> L133
            return
        L121:
            java.lang.String r11 = "view is not exist"
            c(r10, r11)     // Catch: java.lang.Throwable -> L133
            return
        L127:
            java.lang.String r11 = "instanceId is not exist"
            c(r10, r11)     // Catch: java.lang.Throwable -> L133
            return
        L12d:
            java.lang.String r11 = "unitId or data is empty"
            c(r10, r11)     // Catch: java.lang.Throwable -> L133
            return
        L133:
            r11 = move-exception
            java.lang.String r0 = r11.getMessage()
            c(r10, r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "appendViewTo failed: "
            r10.<init>(r0)
            java.lang.String r11 = r11.getMessage()
            r10.append(r11)
            return
    }

    public final void k(java.lang.Object r13, org.json.JSONObject r14) {
            r12 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r14.optString(r1)     // Catch: java.lang.Throwable -> L174
            java.lang.String r2 = r14.optString(r0)     // Catch: java.lang.Throwable -> L174
            java.lang.String r3 = h(r2)     // Catch: java.lang.Throwable -> L174
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L174
            if (r4 == 0) goto L23
            r4 = r13
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4     // Catch: java.lang.Throwable -> L174
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L174
            if (r5 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L174
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L174
        L23:
            java.lang.String r4 = "data"
            org.json.JSONObject r14 = r14.optJSONObject(r4)     // Catch: java.lang.Throwable -> L174
            if (r14 != 0) goto L31
            java.lang.String r14 = "data is empty"
            c(r13, r14)     // Catch: java.lang.Throwable -> L174
            return
        L31:
            java.lang.String r0 = r14.optString(r0)     // Catch: java.lang.Throwable -> L174
            java.util.LinkedHashMap r1 = r12.b(r1, r3)     // Catch: java.lang.Throwable -> L174
            boolean r3 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L174
            if (r3 == 0) goto L16e
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L174
            if (r3 == 0) goto L16e
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Throwable -> L174
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L174
            java.lang.Object r4 = r1.get(r0)     // Catch: java.lang.Throwable -> L174
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L174
            if (r3 == 0) goto L168
            if (r4 != 0) goto L57
            goto L168
        L57:
            java.lang.String r5 = "rect"
            org.json.JSONObject r14 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> L174
            boolean r5 = r4 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L174
            r6 = 0
            if (r5 == 0) goto Ld8
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L174
            java.lang.String r5 = "OperateViews setNotchString = "
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L174
            java.lang.String r5 = "%1$s-%2$s-%3$s-%4$s-%5$s"
            r7 = 5
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L174
            int r8 = com.tkay.expressad.video.bt.a.c.n     // Catch: java.lang.Throwable -> L174
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L174
            r7[r6] = r8     // Catch: java.lang.Throwable -> L174
            r6 = 1
            int r8 = com.tkay.expressad.video.bt.a.c.o     // Catch: java.lang.Throwable -> L174
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L174
            r7[r6] = r8     // Catch: java.lang.Throwable -> L174
            r6 = 2
            int r8 = com.tkay.expressad.video.bt.a.c.p     // Catch: java.lang.Throwable -> L174
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L174
            r7[r6] = r8     // Catch: java.lang.Throwable -> L174
            r6 = 3
            int r8 = com.tkay.expressad.video.bt.a.c.q     // Catch: java.lang.Throwable -> L174
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L174
            r7[r6] = r8     // Catch: java.lang.Throwable -> L174
            r6 = 4
            int r8 = com.tkay.expressad.video.bt.a.c.r     // Catch: java.lang.Throwable -> L174
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L174
            r7[r6] = r8     // Catch: java.lang.Throwable -> L174
            java.lang.String r5 = java.lang.String.format(r5, r7)     // Catch: java.lang.Throwable -> L174
            r3.append(r5)     // Catch: java.lang.Throwable -> L174
            r6 = r4
            com.tkay.expressad.video.bt.module.TYTempContainer r6 = (com.tkay.expressad.video.bt.module.TYTempContainer) r6     // Catch: java.lang.Throwable -> L174
            int r7 = com.tkay.expressad.video.bt.a.c.n     // Catch: java.lang.Throwable -> L174
            int r8 = com.tkay.expressad.video.bt.a.c.o     // Catch: java.lang.Throwable -> L174
            int r9 = com.tkay.expressad.video.bt.a.c.p     // Catch: java.lang.Throwable -> L174
            int r10 = com.tkay.expressad.video.bt.a.c.q     // Catch: java.lang.Throwable -> L174
            int r11 = com.tkay.expressad.video.bt.a.c.r     // Catch: java.lang.Throwable -> L174
            r6.setNotchPadding(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L174
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L174
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L174
        Lb9:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L174
            if (r3 == 0) goto L14d
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L174
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L174
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTContainer     // Catch: java.lang.Throwable -> L174
            if (r5 == 0) goto Lb9
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L174
            r1 = r3
            com.tkay.expressad.video.bt.module.TkayBTContainer r1 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r1     // Catch: java.lang.Throwable -> L174
            com.tkay.expressad.video.bt.module.TkayBTContainer r3 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r3     // Catch: java.lang.Throwable -> L174
            com.tkay.expressad.video.bt.module.TYTempContainer r4 = (com.tkay.expressad.video.bt.module.TYTempContainer) r4     // Catch: java.lang.Throwable -> L174
            r1.appendSubView(r3, r4, r14)     // Catch: java.lang.Throwable -> L174
            goto L14d
        Ld8:
            r1 = 0
            if (r14 != 0) goto Lf7
            boolean r14 = r4 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L174
            if (r14 == 0) goto Lf5
            r14 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r14 = (com.tkay.expressad.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L174
            android.graphics.Rect r1 = r14.getRect()     // Catch: java.lang.Throwable -> L174
            r14 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r14 = (com.tkay.expressad.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L174
            int r6 = r14.getViewWidth()     // Catch: java.lang.Throwable -> L174
            r14 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r14 = (com.tkay.expressad.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L174
            int r14 = r14.getViewHeight()     // Catch: java.lang.Throwable -> L174
            goto L123
        Lf5:
            r14 = r6
            goto L123
        Lf7:
            java.lang.String r1 = "left"
            r5 = -999(0xfffffffffffffc19, float:NaN)
            int r1 = r14.optInt(r1, r5)     // Catch: java.lang.Throwable -> L174
            java.lang.String r6 = "top"
            int r6 = r14.optInt(r6, r5)     // Catch: java.lang.Throwable -> L174
            java.lang.String r7 = "right"
            int r7 = r14.optInt(r7, r5)     // Catch: java.lang.Throwable -> L174
            java.lang.String r8 = "bottom"
            int r5 = r14.optInt(r8, r5)     // Catch: java.lang.Throwable -> L174
            android.graphics.Rect r8 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L174
            r8.<init>(r1, r6, r7, r5)     // Catch: java.lang.Throwable -> L174
            java.lang.String r1 = "width"
            int r6 = r14.optInt(r1)     // Catch: java.lang.Throwable -> L174
            java.lang.String r1 = "height"
            int r14 = r14.optInt(r1)     // Catch: java.lang.Throwable -> L174
            r1 = r8
        L123:
            android.view.ViewGroup$LayoutParams r5 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L174
            r7 = -1
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L174
            boolean r8 = r3 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L174
            if (r8 == 0) goto L133
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L174
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L174
            goto L146
        L133:
            boolean r8 = r3 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L174
            if (r8 == 0) goto L13d
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L174
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L174
            goto L146
        L13d:
            boolean r8 = r3 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L174
            if (r8 == 0) goto L146
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L174
            r5.<init>(r7, r7)     // Catch: java.lang.Throwable -> L174
        L146:
            android.view.ViewGroup$LayoutParams r14 = a(r5, r1, r6, r14)     // Catch: java.lang.Throwable -> L174
            r3.addView(r4, r14)     // Catch: java.lang.Throwable -> L174
        L14d:
            a(r13, r2)     // Catch: java.lang.Throwable -> L174
            java.lang.String r14 = "onAppendView"
            a(r13, r14, r2)     // Catch: java.lang.Throwable -> L174
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L174
            java.lang.String r1 = "appendSubView parentId = "
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L174
            r14.append(r2)     // Catch: java.lang.Throwable -> L174
            java.lang.String r1 = " childId = "
            r14.append(r1)     // Catch: java.lang.Throwable -> L174
            r14.append(r0)     // Catch: java.lang.Throwable -> L174
            return
        L168:
            java.lang.String r14 = "view is not exist"
            c(r13, r14)     // Catch: java.lang.Throwable -> L174
            return
        L16e:
            java.lang.String r14 = "instanceId is not exist"
            c(r13, r14)     // Catch: java.lang.Throwable -> L174
            return
        L174:
            r14 = move-exception
            java.lang.String r0 = r14.getMessage()
            c(r13, r0)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r0 = "appendSubView failed: "
            r13.<init>(r0)
            java.lang.String r14 = r14.getMessage()
            r13.append(r14)
            return
    }

    public final void l(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r11.optString(r1)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r2 = r11.optString(r0)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r3 = h(r2)     // Catch: java.lang.Throwable -> L12d
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L12d
            if (r4 == 0) goto L23
            r4 = r10
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4     // Catch: java.lang.Throwable -> L12d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L12d
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L12d
        L23:
            java.lang.String r4 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r4)     // Catch: java.lang.Throwable -> L12d
            if (r11 == 0) goto L127
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L12d
            if (r4 == 0) goto L33
            goto L127
        L33:
            java.lang.String r0 = r11.optString(r0)     // Catch: java.lang.Throwable -> L12d
            java.util.LinkedHashMap r1 = r9.b(r1, r3)     // Catch: java.lang.Throwable -> L12d
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L12d
            if (r3 == 0) goto L121
            boolean r3 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L12d
            if (r3 == 0) goto L121
            java.lang.Object r3 = r1.get(r0)     // Catch: java.lang.Throwable -> L12d
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L12d
            java.lang.Object r4 = r1.get(r2)     // Catch: java.lang.Throwable -> L12d
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L12d
            if (r3 == 0) goto L11b
            if (r4 != 0) goto L59
            goto L11b
        L59:
            java.lang.String r5 = "rect"
            org.json.JSONObject r11 = r11.optJSONObject(r5)     // Catch: java.lang.Throwable -> L12d
            boolean r5 = r4 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L8a
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L12d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L12d
        L6b:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L12d
            if (r3 == 0) goto L100
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L12d
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L12d
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTContainer     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L6b
            com.tkay.core.common.l.u.a(r4)     // Catch: java.lang.Throwable -> L12d
            r1 = r3
            com.tkay.expressad.video.bt.module.TkayBTContainer r1 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r1     // Catch: java.lang.Throwable -> L12d
            com.tkay.expressad.video.bt.module.TkayBTContainer r3 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r3     // Catch: java.lang.Throwable -> L12d
            com.tkay.expressad.video.bt.module.TYTempContainer r4 = (com.tkay.expressad.video.bt.module.TYTempContainer) r4     // Catch: java.lang.Throwable -> L12d
            r1.appendSubView(r3, r4, r11)     // Catch: java.lang.Throwable -> L12d
            goto L100
        L8a:
            r1 = 0
            r5 = 0
            if (r11 != 0) goto Laa
            boolean r11 = r4 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L12d
            if (r11 == 0) goto La8
            r11 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> L12d
            android.graphics.Rect r1 = r11.getRect()     // Catch: java.lang.Throwable -> L12d
            r11 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> L12d
            int r5 = r11.getViewWidth()     // Catch: java.lang.Throwable -> L12d
            r11 = r4
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> L12d
            int r11 = r11.getViewHeight()     // Catch: java.lang.Throwable -> L12d
            goto Ld6
        La8:
            r11 = r5
            goto Ld6
        Laa:
            java.lang.String r1 = "left"
            r5 = -999(0xfffffffffffffc19, float:NaN)
            int r1 = r11.optInt(r1, r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r6 = "top"
            int r6 = r11.optInt(r6, r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r7 = "right"
            int r7 = r11.optInt(r7, r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r8 = "bottom"
            int r5 = r11.optInt(r8, r5)     // Catch: java.lang.Throwable -> L12d
            android.graphics.Rect r8 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L12d
            r8.<init>(r1, r6, r7, r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "width"
            int r5 = r11.optInt(r1)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "height"
            int r11 = r11.optInt(r1)     // Catch: java.lang.Throwable -> L12d
            r1 = r8
        Ld6:
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L12d
            r7 = -1
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L12d
            boolean r8 = r3 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L12d
            if (r8 == 0) goto Le6
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L12d
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L12d
            goto Lf9
        Le6:
            boolean r8 = r3 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L12d
            if (r8 == 0) goto Lf0
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L12d
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L12d
            goto Lf9
        Lf0:
            boolean r8 = r3 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L12d
            if (r8 == 0) goto Lf9
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L12d
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> L12d
        Lf9:
            android.view.ViewGroup$LayoutParams r11 = a(r6, r1, r5, r11)     // Catch: java.lang.Throwable -> L12d
            r3.addView(r4, r11)     // Catch: java.lang.Throwable -> L12d
        L100:
            a(r10, r2)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r11 = "onAppendViewTo"
            a(r10, r11, r2)     // Catch: java.lang.Throwable -> L12d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "appendViewTo parentId = "
            r11.<init>(r1)     // Catch: java.lang.Throwable -> L12d
            r11.append(r0)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r0 = " childId = "
            r11.append(r0)     // Catch: java.lang.Throwable -> L12d
            r11.append(r2)     // Catch: java.lang.Throwable -> L12d
            return
        L11b:
            java.lang.String r11 = "view is not exist"
            c(r10, r11)     // Catch: java.lang.Throwable -> L12d
            return
        L121:
            java.lang.String r11 = "instanceId is not exist"
            c(r10, r11)     // Catch: java.lang.Throwable -> L12d
            return
        L127:
            java.lang.String r11 = "unitId or data is empty"
            c(r10, r11)     // Catch: java.lang.Throwable -> L12d
            return
        L12d:
            r11 = move-exception
            java.lang.String r0 = r11.getMessage()
            c(r10, r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "appendViewTo failed: "
            r10.<init>(r0)
            java.lang.String r11 = r11.getMessage()
            r10.append(r11)
            return
    }

    public final void m(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L6f
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L6f
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L6f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L6f
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L6f
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L6f
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L6f
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L69
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L6f
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L6f
            if (r7 == 0) goto L63
            android.view.ViewParent r0 = r7.getParent()     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L63
            android.view.ViewParent r0 = r7.getParent()     // Catch: java.lang.Throwable -> L6f
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L5d
            r0.bringChildToFront(r7)     // Catch: java.lang.Throwable -> L6f
            a(r6, r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r7 = "onBringViewToFront"
            a(r6, r7, r1)     // Catch: java.lang.Throwable -> L6f
            return
        L5d:
            java.lang.String r7 = "parent is null"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L63:
            java.lang.String r7 = "view is null"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L69:
            java.lang.String r7 = "instanceId is not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L6f
            return
        L6f:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "bringViewToFront failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void n(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5d
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5d
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5d
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5d
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5d
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5d
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5d
            if (r0 == 0) goto L57
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5d
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5d
            if (r7 == 0) goto L51
            r0 = 8
            r7.setVisibility(r0)     // Catch: java.lang.Throwable -> L5d
            a(r6, r1)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r7 = "onHideView"
            a(r6, r7, r1)     // Catch: java.lang.Throwable -> L5d
            return
        L51:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5d
            return
        L57:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5d
            return
        L5d:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "hideView failed: + "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void o(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L5c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5c
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5c
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5c
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5c
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5c
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5c
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L56
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5c
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5c
            if (r7 == 0) goto L50
            r0 = 0
            r7.setVisibility(r0)     // Catch: java.lang.Throwable -> L5c
            a(r6, r1)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r7 = "onShowView"
            a(r6, r7, r1)     // Catch: java.lang.Throwable -> L5c
            return
        L50:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5c
            return
        L56:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L5c
            return
        L5c:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "showView failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void p(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L71
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L71
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L71
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L71
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L71
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L71
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L71
            return
        L31:
            java.lang.String r3 = "color"
            java.lang.String r7 = r7.optString(r3)     // Catch: java.lang.Throwable -> L71
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L71
            if (r3 == 0) goto L43
            java.lang.String r7 = "color is not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L71
            return
        L43:
            java.util.LinkedHashMap r0 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L71
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L6b
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L71
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L71
            if (r0 == 0) goto L65
            a(r6, r1)     // Catch: java.lang.Throwable -> L71
            int r7 = android.graphics.Color.parseColor(r7)     // Catch: java.lang.Throwable -> L71
            r0.setBackgroundColor(r7)     // Catch: java.lang.Throwable -> L71
            java.lang.String r7 = "onViewBgColorChanged"
            a(r6, r7, r1)     // Catch: java.lang.Throwable -> L71
            return
        L65:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L71
            return
        L6b:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L71
            return
        L71:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewBgColor failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void q(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r8.optString(r0)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = "id"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L64
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L64
            if (r3 == 0) goto L23
            r3 = r7
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L64
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L64
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L64
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r3)     // Catch: java.lang.Throwable -> L64
            if (r8 != 0) goto L31
            java.lang.String r8 = "data is empty"
            c(r7, r8)     // Catch: java.lang.Throwable -> L64
            return
        L31:
            java.lang.String r3 = "alpha"
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r3 = r8.optDouble(r3, r4)     // Catch: java.lang.Throwable -> L64
            java.util.LinkedHashMap r8 = r6.b(r0, r2)     // Catch: java.lang.Throwable -> L64
            boolean r0 = r8.containsKey(r1)     // Catch: java.lang.Throwable -> L64
            if (r0 == 0) goto L5e
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L64
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L64
            if (r8 == 0) goto L58
            float r0 = (float) r3     // Catch: java.lang.Throwable -> L64
            r8.setAlpha(r0)     // Catch: java.lang.Throwable -> L64
            a(r7, r1)     // Catch: java.lang.Throwable -> L64
            java.lang.String r8 = "onViewAlphaChanged"
            a(r7, r8, r1)     // Catch: java.lang.Throwable -> L64
            return
        L58:
            java.lang.String r8 = "view not exist"
            c(r7, r8)     // Catch: java.lang.Throwable -> L64
            return
        L5e:
            java.lang.String r8 = "instanceId not exist"
            c(r7, r8)     // Catch: java.lang.Throwable -> L64
            return
        L64:
            r8 = move-exception
            java.lang.String r0 = r8.getMessage()
            c(r7, r0)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewAlpha failed: "
            r7.<init>(r0)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            return
    }

    public final void r(java.lang.Object r9, org.json.JSONObject r10) {
            r8 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r10.optString(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r1 = "id"
            java.lang.String r1 = r10.optString(r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L6e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L6e
            if (r3 == 0) goto L23
            r3 = r9
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L6e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L6e
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L6e
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L6e
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r10 = r10.optJSONObject(r3)     // Catch: java.lang.Throwable -> L6e
            if (r10 != 0) goto L31
            java.lang.String r10 = "data is empty"
            c(r9, r10)     // Catch: java.lang.Throwable -> L6e
            return
        L31:
            java.lang.String r3 = "vertical"
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r6 = r10.optDouble(r3, r4)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = "horizon"
            double r3 = r10.optDouble(r3, r4)     // Catch: java.lang.Throwable -> L6e
            java.util.LinkedHashMap r10 = r8.b(r0, r2)     // Catch: java.lang.Throwable -> L6e
            boolean r0 = r10.containsKey(r1)     // Catch: java.lang.Throwable -> L6e
            if (r0 == 0) goto L68
            java.lang.Object r10 = r10.get(r1)     // Catch: java.lang.Throwable -> L6e
            android.view.View r10 = (android.view.View) r10     // Catch: java.lang.Throwable -> L6e
            if (r10 == 0) goto L62
            float r0 = (float) r3     // Catch: java.lang.Throwable -> L6e
            r10.setScaleX(r0)     // Catch: java.lang.Throwable -> L6e
            float r0 = (float) r6     // Catch: java.lang.Throwable -> L6e
            r10.setScaleY(r0)     // Catch: java.lang.Throwable -> L6e
            a(r9, r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r10 = "onViewScaleChanged"
            a(r9, r10, r1)     // Catch: java.lang.Throwable -> L6e
            return
        L62:
            java.lang.String r10 = "view not exist"
            c(r9, r10)     // Catch: java.lang.Throwable -> L6e
            return
        L68:
            java.lang.String r10 = "instanceId not exist"
            c(r9, r10)     // Catch: java.lang.Throwable -> L6e
            return
        L6e:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            c(r9, r0)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r0 = "setViewScale failed: "
            r9.<init>(r0)
            java.lang.String r10 = r10.getMessage()
            r9.append(r10)
            return
    }

    public final void s(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r12.optString(r0)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r1 = "id"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L10d
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L10d
            if (r3 == 0) goto L23
            r3 = r11
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L10d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L10d
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L10d
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L10d
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r3)     // Catch: java.lang.Throwable -> L10d
            if (r12 != 0) goto L31
            java.lang.String r12 = "data is empty"
            c(r11, r12)     // Catch: java.lang.Throwable -> L10d
            return
        L31:
            java.lang.String r3 = "targetComponentId"
            java.lang.String r3 = r12.optString(r3)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r4 = "rect"
            org.json.JSONObject r12 = r12.optJSONObject(r4)     // Catch: java.lang.Throwable -> L10d
            java.util.LinkedHashMap r0 = r10.b(r0, r2)     // Catch: java.lang.Throwable -> L10d
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L10d
            if (r2 == 0) goto L107
            boolean r2 = r0.containsKey(r3)     // Catch: java.lang.Throwable -> L10d
            if (r2 == 0) goto L107
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Throwable -> L10d
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> L10d
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L10d
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L10d
            if (r0 == 0) goto L101
            android.view.ViewParent r4 = r0.getParent()     // Catch: java.lang.Throwable -> L10d
            if (r4 == 0) goto L101
            android.view.ViewParent r4 = r0.getParent()     // Catch: java.lang.Throwable -> L10d
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L10d
            int r0 = r4.indexOfChild(r0)     // Catch: java.lang.Throwable -> L10d
            r5 = 0
            r6 = 0
            if (r12 != 0) goto L8b
            boolean r12 = r2 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L10d
            if (r12 == 0) goto L89
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L10d
            android.graphics.Rect r5 = r12.getRect()     // Catch: java.lang.Throwable -> L10d
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L10d
            int r6 = r12.getViewWidth()     // Catch: java.lang.Throwable -> L10d
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L10d
            int r12 = r12.getViewHeight()     // Catch: java.lang.Throwable -> L10d
            goto Lb7
        L89:
            r12 = r6
            goto Lb7
        L8b:
            java.lang.String r5 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r5 = r12.optInt(r5, r6)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r7 = "top"
            int r7 = r12.optInt(r7, r6)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r8 = "right"
            int r8 = r12.optInt(r8, r6)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r9 = "bottom"
            int r6 = r12.optInt(r9, r6)     // Catch: java.lang.Throwable -> L10d
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L10d
            r9.<init>(r5, r7, r8, r6)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r5 = "width"
            int r6 = r12.optInt(r5)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r5 = "height"
            int r12 = r12.optInt(r5)     // Catch: java.lang.Throwable -> L10d
            r5 = r9
        Lb7:
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L10d
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10d
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L10d
            if (r9 == 0) goto Lc7
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L10d
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10d
            goto Lda
        Lc7:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L10d
            if (r9 == 0) goto Ld1
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L10d
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10d
            goto Lda
        Ld1:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L10d
            if (r9 == 0) goto Lda
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L10d
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10d
        Lda:
            android.view.ViewGroup$LayoutParams r12 = a(r7, r5, r6, r12)     // Catch: java.lang.Throwable -> L10d
            com.tkay.core.common.l.u.a(r2)     // Catch: java.lang.Throwable -> L10d
            int r0 = r0 + 1
            r4.addView(r2, r0, r12)     // Catch: java.lang.Throwable -> L10d
            a(r11, r1)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r12 = "onInsertViewAbove"
            a(r11, r12, r1)     // Catch: java.lang.Throwable -> L10d
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10d
            java.lang.String r0 = "insertViewAbove instanceId = "
            r12.<init>(r0)     // Catch: java.lang.Throwable -> L10d
            r12.append(r1)     // Catch: java.lang.Throwable -> L10d
            java.lang.String r0 = " brotherId = "
            r12.append(r0)     // Catch: java.lang.Throwable -> L10d
            r12.append(r3)     // Catch: java.lang.Throwable -> L10d
            return
        L101:
            java.lang.String r12 = "view not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L10d
            return
        L107:
            java.lang.String r12 = "instanceId not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L10d
            return
        L10d:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            c(r11, r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewAbove failed: "
            r11.<init>(r0)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            return
    }

    public final void t(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r12.optString(r0)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "id"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L100
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L100
            if (r3 == 0) goto L23
            r3 = r11
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L100
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L100
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L100
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r3)     // Catch: java.lang.Throwable -> L100
            if (r12 != 0) goto L31
            java.lang.String r12 = "data is empty"
            c(r11, r12)     // Catch: java.lang.Throwable -> L100
            return
        L31:
            java.lang.String r3 = "targetComponentId"
            java.lang.String r3 = r12.optString(r3)     // Catch: java.lang.Throwable -> L100
            java.lang.String r4 = "rect"
            org.json.JSONObject r12 = r12.optJSONObject(r4)     // Catch: java.lang.Throwable -> L100
            java.util.LinkedHashMap r0 = r10.b(r0, r2)     // Catch: java.lang.Throwable -> L100
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L100
            if (r2 == 0) goto Lfa
            boolean r2 = r0.containsKey(r3)     // Catch: java.lang.Throwable -> L100
            if (r2 == 0) goto Lfa
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Throwable -> L100
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> L100
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L100
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L100
            if (r0 == 0) goto Lf4
            android.view.ViewParent r3 = r0.getParent()     // Catch: java.lang.Throwable -> L100
            if (r3 == 0) goto Lf4
            android.view.ViewParent r3 = r0.getParent()     // Catch: java.lang.Throwable -> L100
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L100
            int r0 = r3.indexOfChild(r0)     // Catch: java.lang.Throwable -> L100
            r4 = 0
            r5 = 0
            if (r12 != 0) goto L8c
            boolean r12 = r2 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L100
            if (r12 == 0) goto L89
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L100
            android.graphics.Rect r4 = r12.getRect()     // Catch: java.lang.Throwable -> L100
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L100
            int r12 = r12.getViewWidth()     // Catch: java.lang.Throwable -> L100
            r6 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r6 = (com.tkay.expressad.video.bt.module.BTBaseView) r6     // Catch: java.lang.Throwable -> L100
            int r6 = r6.getViewHeight()     // Catch: java.lang.Throwable -> L100
            goto Lb9
        L89:
            r12 = r5
            r6 = r12
            goto Lb9
        L8c:
            java.lang.String r4 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r4 = r12.optInt(r4, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.String r7 = "top"
            int r7 = r12.optInt(r7, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.String r8 = "right"
            int r8 = r12.optInt(r8, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.String r9 = "bottom"
            int r6 = r12.optInt(r9, r6)     // Catch: java.lang.Throwable -> L100
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L100
            r9.<init>(r4, r7, r8, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.String r4 = "width"
            int r4 = r12.optInt(r4)     // Catch: java.lang.Throwable -> L100
            java.lang.String r6 = "height"
            int r6 = r12.optInt(r6)     // Catch: java.lang.Throwable -> L100
            r12 = r4
            r4 = r9
        Lb9:
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L100
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L100
            boolean r9 = r3 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L100
            if (r9 == 0) goto Lc9
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L100
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L100
            goto Ldc
        Lc9:
            boolean r9 = r3 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L100
            if (r9 == 0) goto Ld3
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L100
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L100
            goto Ldc
        Ld3:
            boolean r9 = r3 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L100
            if (r9 == 0) goto Ldc
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L100
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L100
        Ldc:
            android.view.ViewGroup$LayoutParams r12 = a(r7, r4, r12, r6)     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.l.u.a(r2)     // Catch: java.lang.Throwable -> L100
            int r0 = r0 + (-1)
            if (r0 < 0) goto Le8
            r5 = r0
        Le8:
            r3.addView(r2, r5, r12)     // Catch: java.lang.Throwable -> L100
            a(r11, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r12 = "onInsertViewBelow"
            a(r11, r12, r1)     // Catch: java.lang.Throwable -> L100
            return
        Lf4:
            java.lang.String r12 = "view not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L100
            return
        Lfa:
            java.lang.String r12 = "instanceId not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L100
            return
        L100:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            c(r11, r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewBelow failed: "
            r11.<init>(r0)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            return
    }

    public final void u(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r12.optString(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r1 = "id"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L10a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L10a
            if (r3 == 0) goto L23
            r3 = r11
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L10a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L10a
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L10a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r3)     // Catch: java.lang.Throwable -> L10a
            if (r12 != 0) goto L31
            java.lang.String r12 = "data is empty"
            c(r11, r12)     // Catch: java.lang.Throwable -> L10a
            return
        L31:
            java.lang.String r3 = "targetComponentId"
            java.lang.String r3 = r12.optString(r3)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "rect"
            org.json.JSONObject r12 = r12.optJSONObject(r4)     // Catch: java.lang.Throwable -> L10a
            java.util.LinkedHashMap r0 = r10.b(r0, r2)     // Catch: java.lang.Throwable -> L10a
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L10a
            if (r2 == 0) goto L104
            boolean r2 = r0.containsKey(r3)     // Catch: java.lang.Throwable -> L10a
            if (r2 == 0) goto L104
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Throwable -> L10a
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> L10a
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L10a
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> L10a
            if (r0 == 0) goto Lfe
            android.view.ViewParent r4 = r0.getParent()     // Catch: java.lang.Throwable -> L10a
            if (r4 == 0) goto Lfe
            android.view.ViewParent r4 = r0.getParent()     // Catch: java.lang.Throwable -> L10a
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L10a
            int r0 = r4.indexOfChild(r0)     // Catch: java.lang.Throwable -> L10a
            r5 = 0
            r6 = 0
            if (r12 != 0) goto L8b
            boolean r12 = r2 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L10a
            if (r12 == 0) goto L89
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L10a
            android.graphics.Rect r5 = r12.getRect()     // Catch: java.lang.Throwable -> L10a
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L10a
            int r6 = r12.getViewWidth()     // Catch: java.lang.Throwable -> L10a
            r12 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r12 = (com.tkay.expressad.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L10a
            int r12 = r12.getViewHeight()     // Catch: java.lang.Throwable -> L10a
            goto Lb7
        L89:
            r12 = r6
            goto Lb7
        L8b:
            java.lang.String r5 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r5 = r12.optInt(r5, r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r7 = "top"
            int r7 = r12.optInt(r7, r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "right"
            int r8 = r12.optInt(r8, r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r9 = "bottom"
            int r6 = r12.optInt(r9, r6)     // Catch: java.lang.Throwable -> L10a
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L10a
            r9.<init>(r5, r7, r8, r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = "width"
            int r6 = r12.optInt(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = "height"
            int r12 = r12.optInt(r5)     // Catch: java.lang.Throwable -> L10a
            r5 = r9
        Lb7:
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L10a
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10a
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L10a
            if (r9 == 0) goto Lc7
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L10a
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10a
            goto Lda
        Lc7:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L10a
            if (r9 == 0) goto Ld1
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L10a
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10a
            goto Lda
        Ld1:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L10a
            if (r9 == 0) goto Lda
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L10a
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L10a
        Lda:
            android.view.ViewGroup$LayoutParams r12 = a(r7, r5, r6, r12)     // Catch: java.lang.Throwable -> L10a
            int r0 = r0 + 1
            r4.addView(r2, r0, r12)     // Catch: java.lang.Throwable -> L10a
            a(r11, r1)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r12 = "onInsertViewAbove"
            a(r11, r12, r1)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            java.lang.String r0 = "insertViewAbove instanceId = "
            r12.<init>(r0)     // Catch: java.lang.Throwable -> L10a
            r12.append(r1)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r0 = " brotherId = "
            r12.append(r0)     // Catch: java.lang.Throwable -> L10a
            r12.append(r3)     // Catch: java.lang.Throwable -> L10a
            return
        Lfe:
            java.lang.String r12 = "view not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L10a
            return
        L104:
            java.lang.String r12 = "instanceId not exist"
            c(r11, r12)     // Catch: java.lang.Throwable -> L10a
            return
        L10a:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            c(r11, r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewAbove failed: "
            r11.<init>(r0)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            return
    }

    public final void v(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r11.optString(r0)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r1 = "id"
            java.lang.String r1 = r11.optString(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> Lf6
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf6
            if (r3 == 0) goto L23
            r3 = r10
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> Lf6
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> Lf6
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> Lf6
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lf6
            if (r11 != 0) goto L31
            java.lang.String r11 = "data is empty"
            c(r10, r11)     // Catch: java.lang.Throwable -> Lf6
            return
        L31:
            java.lang.String r3 = "targetComponentId"
            java.lang.String r3 = r11.optString(r3)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "rect"
            org.json.JSONObject r11 = r11.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lf6
            java.util.LinkedHashMap r0 = r9.b(r0, r2)     // Catch: java.lang.Throwable -> Lf6
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Lf6
            if (r2 == 0) goto Lf0
            boolean r2 = r0.containsKey(r3)     // Catch: java.lang.Throwable -> Lf6
            if (r2 == 0) goto Lf0
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Throwable -> Lf6
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> Lf6
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> Lf6
            if (r0 == 0) goto Lea
            android.view.ViewParent r3 = r0.getParent()     // Catch: java.lang.Throwable -> Lf6
            if (r3 == 0) goto Lea
            android.view.ViewParent r3 = r0.getParent()     // Catch: java.lang.Throwable -> Lf6
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> Lf6
            int r0 = r3.indexOfChild(r0)     // Catch: java.lang.Throwable -> Lf6
            r4 = 0
            r5 = 0
            if (r11 != 0) goto L8b
            boolean r11 = r2 instanceof com.tkay.expressad.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> Lf6
            if (r11 == 0) goto L89
            r11 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> Lf6
            android.graphics.Rect r4 = r11.getRect()     // Catch: java.lang.Throwable -> Lf6
            r11 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> Lf6
            int r5 = r11.getViewWidth()     // Catch: java.lang.Throwable -> Lf6
            r11 = r2
            com.tkay.expressad.video.bt.module.BTBaseView r11 = (com.tkay.expressad.video.bt.module.BTBaseView) r11     // Catch: java.lang.Throwable -> Lf6
            int r11 = r11.getViewHeight()     // Catch: java.lang.Throwable -> Lf6
            goto Lb7
        L89:
            r11 = r5
            goto Lb7
        L8b:
            java.lang.String r4 = "left"
            r5 = -999(0xfffffffffffffc19, float:NaN)
            int r4 = r11.optInt(r4, r5)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r6 = "top"
            int r6 = r11.optInt(r6, r5)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r7 = "right"
            int r7 = r11.optInt(r7, r5)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r8 = "bottom"
            int r5 = r11.optInt(r8, r5)     // Catch: java.lang.Throwable -> Lf6
            android.graphics.Rect r8 = new android.graphics.Rect     // Catch: java.lang.Throwable -> Lf6
            r8.<init>(r4, r6, r7, r5)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "width"
            int r5 = r11.optInt(r4)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "height"
            int r11 = r11.optInt(r4)     // Catch: java.lang.Throwable -> Lf6
            r4 = r8
        Lb7:
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> Lf6
            r7 = -1
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> Lf6
            boolean r8 = r3 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> Lf6
            if (r8 == 0) goto Lc7
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> Lf6
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> Lf6
            goto Lda
        Lc7:
            boolean r8 = r3 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> Lf6
            if (r8 == 0) goto Ld1
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> Lf6
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> Lf6
            goto Lda
        Ld1:
            boolean r8 = r3 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> Lf6
            if (r8 == 0) goto Lda
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> Lf6
            r6.<init>(r7, r7)     // Catch: java.lang.Throwable -> Lf6
        Lda:
            android.view.ViewGroup$LayoutParams r11 = a(r6, r4, r5, r11)     // Catch: java.lang.Throwable -> Lf6
            r3.addView(r2, r0, r11)     // Catch: java.lang.Throwable -> Lf6
            a(r10, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r11 = "onInsertViewBelow"
            a(r10, r11, r1)     // Catch: java.lang.Throwable -> Lf6
            return
        Lea:
            java.lang.String r11 = "view not exist"
            c(r10, r11)     // Catch: java.lang.Throwable -> Lf6
            return
        Lf0:
            java.lang.String r11 = "instanceId not exist"
            c(r10, r11)     // Catch: java.lang.Throwable -> Lf6
            return
        Lf6:
            r11 = move-exception
            java.lang.String r0 = r11.getMessage()
            c(r10, r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r0 = "insertViewBelow failed: "
            r10.<init>(r0)
            java.lang.String r11 = r11.getMessage()
            r10.append(r11)
            return
    }

    public final void w(java.lang.Object r17, org.json.JSONObject r18) {
            r16 = this;
            r1 = r17
            r0 = r18
            java.lang.String r2 = "unitId"
            java.lang.String r3 = r0.optString(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r4 = "id"
            java.lang.String r4 = r0.optString(r4)     // Catch: java.lang.Throwable -> L133
            java.lang.String r5 = h(r4)     // Catch: java.lang.Throwable -> L133
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L133
            if (r6 == 0) goto L27
            r6 = r1
            com.tkay.expressad.atsignalcommon.windvane.a r6 = (com.tkay.expressad.atsignalcommon.windvane.a) r6     // Catch: java.lang.Throwable -> L133
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r6.a     // Catch: java.lang.Throwable -> L133
            if (r7 == 0) goto L27
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r6.a     // Catch: java.lang.Throwable -> L133
            java.lang.String r5 = r5.getRid()     // Catch: java.lang.Throwable -> L133
        L27:
            java.lang.String r6 = "data"
            org.json.JSONObject r6 = r0.optJSONObject(r6)     // Catch: java.lang.Throwable -> L133
            if (r6 != 0) goto L35
            java.lang.String r0 = "data is empty"
            c(r1, r0)     // Catch: java.lang.Throwable -> L133
            return
        L35:
            java.lang.String r7 = "content"
            org.json.JSONObject r6 = r6.optJSONObject(r7)     // Catch: java.lang.Throwable -> L133
            if (r6 != 0) goto L43
            java.lang.String r0 = "content is empty"
            c(r1, r0)     // Catch: java.lang.Throwable -> L133
            return
        L43:
            java.lang.String r7 = "fileURL"
            java.lang.String r7 = r6.optString(r7)     // Catch: java.lang.Throwable -> L133
            java.lang.String r8 = "filePath"
            java.lang.String r8 = r6.optString(r8)     // Catch: java.lang.Throwable -> L133
            java.lang.String r9 = "html"
            java.lang.String r9 = r6.optString(r9)     // Catch: java.lang.Throwable -> L133
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L133
            if (r10 == 0) goto L6d
            boolean r10 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L133
            if (r10 == 0) goto L6d
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L133
            if (r10 == 0) goto L6d
            java.lang.String r0 = "url is empty"
            c(r1, r0)     // Catch: java.lang.Throwable -> L133
            return
        L6d:
            java.lang.String r10 = "campaigns"
            org.json.JSONArray r10 = r6.optJSONArray(r10)     // Catch: java.lang.Throwable -> L133
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L133
            r11.<init>()     // Catch: java.lang.Throwable -> L133
            if (r10 == 0) goto L9a
            int r13 = r10.length()     // Catch: java.lang.Throwable -> L133
            if (r13 <= 0) goto L9a
            int r13 = r10.length()     // Catch: java.lang.Throwable -> L133
            r14 = 0
        L85:
            if (r14 >= r13) goto L9a
            org.json.JSONObject r15 = r10.getJSONObject(r14)     // Catch: java.lang.Throwable -> L133
            com.tkay.expressad.foundation.d.c r15 = com.tkay.expressad.foundation.d.c.b(r15)     // Catch: java.lang.Throwable -> L133
            if (r15 == 0) goto L97
            r15.l(r3)     // Catch: java.lang.Throwable -> L133
            r11.add(r15)     // Catch: java.lang.Throwable -> L133
        L97:
            int r14 = r14 + 1
            goto L85
        L9a:
            java.lang.String r2 = r6.optString(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r10 = "unitSetting"
            org.json.JSONObject r10 = r6.optJSONObject(r10)     // Catch: java.lang.Throwable -> L133
            com.tkay.expressad.videocommon.e.d r10 = com.tkay.expressad.videocommon.e.d.a(r10)     // Catch: java.lang.Throwable -> L133
            if (r10 == 0) goto Lad
            r10.a(r2)     // Catch: java.lang.Throwable -> L133
        Lad:
            java.lang.String r2 = "rect"
            org.json.JSONObject r0 = r0.optJSONObject(r2)     // Catch: java.lang.Throwable -> L133
            android.graphics.Rect r2 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L133
            r13 = -999(0xfffffffffffffc19, float:NaN)
            r2.<init>(r13, r13, r13, r13)     // Catch: java.lang.Throwable -> L133
            if (r0 == 0) goto Le8
            java.lang.String r2 = "left"
            int r2 = r0.optInt(r2, r13)     // Catch: java.lang.Throwable -> L133
            java.lang.String r14 = "top"
            int r14 = r0.optInt(r14, r13)     // Catch: java.lang.Throwable -> L133
            java.lang.String r15 = "right"
            int r15 = r0.optInt(r15, r13)     // Catch: java.lang.Throwable -> L133
            java.lang.String r12 = "bottom"
            int r12 = r0.optInt(r12, r13)     // Catch: java.lang.Throwable -> L133
            android.graphics.Rect r13 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L133
            r13.<init>(r2, r14, r15, r12)     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = "width"
            int r2 = r0.optInt(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r12 = "height"
            int r0 = r0.optInt(r12)     // Catch: java.lang.Throwable -> L133
            r12 = r2
            r2 = r13
            goto Lea
        Le8:
            r0 = 0
            r12 = 0
        Lea:
            java.lang.String r13 = "refreshCache"
            r14 = 0
            int r6 = r6.optInt(r13, r14)     // Catch: java.lang.Throwable -> L133
            r13 = r16
            java.util.LinkedHashMap r3 = r13.b(r3, r5)     // Catch: java.lang.Throwable -> L131
            boolean r5 = r3.containsKey(r4)     // Catch: java.lang.Throwable -> L131
            if (r5 == 0) goto L12b
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L131
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L131
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L131
            if (r5 == 0) goto L125
            com.tkay.expressad.video.bt.module.TkayBTWebView r3 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r3     // Catch: java.lang.Throwable -> L131
            r3.setHtml(r9)     // Catch: java.lang.Throwable -> L131
            r3.setFilePath(r8)     // Catch: java.lang.Throwable -> L131
            r3.setFileURL(r7)     // Catch: java.lang.Throwable -> L131
            r3.setRect(r2)     // Catch: java.lang.Throwable -> L131
            r3.setLayout(r12, r0)     // Catch: java.lang.Throwable -> L131
            r3.setCampaigns(r11)     // Catch: java.lang.Throwable -> L131
            r3.setRewardUnitSetting(r10)     // Catch: java.lang.Throwable -> L131
            r3.webviewLoad(r6)     // Catch: java.lang.Throwable -> L131
            a(r1, r4)     // Catch: java.lang.Throwable -> L131
            return
        L125:
            java.lang.String r0 = "view not exist"
            c(r1, r0)     // Catch: java.lang.Throwable -> L131
            return
        L12b:
            java.lang.String r0 = "instanceId not exist"
            c(r1, r0)     // Catch: java.lang.Throwable -> L131
            return
        L131:
            r0 = move-exception
            goto L136
        L133:
            r0 = move-exception
            r13 = r16
        L136:
            java.lang.String r2 = r0.getMessage()
            c(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "webviewLoad failed: "
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            return
    }

    public final void x(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L63
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L63
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L63
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L63
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L5d
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L63
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L57
            com.tkay.expressad.video.bt.module.TkayBTWebView r7 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r7     // Catch: java.lang.Throwable -> L63
            boolean r7 = r7.webviewReload()     // Catch: java.lang.Throwable -> L63
            if (r7 == 0) goto L51
            a(r6, r1)     // Catch: java.lang.Throwable -> L63
            return
        L51:
            java.lang.String r7 = "reload failed"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L57:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L5d:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewReload failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void y(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L63
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L63
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L63
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L63
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L5d
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L63
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L57
            com.tkay.expressad.video.bt.module.TkayBTWebView r7 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r7     // Catch: java.lang.Throwable -> L63
            boolean r7 = r7.webviewGoBack()     // Catch: java.lang.Throwable -> L63
            if (r7 == 0) goto L51
            a(r6, r1)     // Catch: java.lang.Throwable -> L63
            return
        L51:
            java.lang.String r7 = "webviewGoBack failed"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L57:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L5d:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewGoBack failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }

    public final void z(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = h(r1)     // Catch: java.lang.Throwable -> L63
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L23
            r3 = r6
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L63
            if (r4 == 0) goto L23
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L63
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L63
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L5d
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L63
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L63
            boolean r0 = r7 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L57
            com.tkay.expressad.video.bt.module.TkayBTWebView r7 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r7     // Catch: java.lang.Throwable -> L63
            boolean r7 = r7.webviewGoForward()     // Catch: java.lang.Throwable -> L63
            if (r7 == 0) goto L51
            a(r6, r1)     // Catch: java.lang.Throwable -> L63
            return
        L51:
            java.lang.String r7 = "webviewGoForward failed"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L57:
            java.lang.String r7 = "view not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L5d:
            java.lang.String r7 = "instanceId not exist"
            c(r6, r7)     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "webviewGoForward failed: "
            r6.<init>(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            return
    }
}
