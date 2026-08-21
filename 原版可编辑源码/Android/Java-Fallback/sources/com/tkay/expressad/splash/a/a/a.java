package com.tkay.expressad.splash.a.a;

public class a {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.tkay.expressad.splash.a.a.a> r0 = com.tkay.expressad.splash.a.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.splash.a.a.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.foundation.d.c a(java.lang.String r7, com.tkay.expressad.foundation.d.c r8) {
            java.lang.String r0 = "deep_link"
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L9
            return r8
        L9:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L15
            if (r8 == 0) goto L12
            goto L15
        L12:
            r8 = 0
            goto L13d
        L15:
            java.lang.String r1 = "notice"
            boolean r1 = r7.contains(r1)
            java.lang.String r2 = "unitId"
            if (r1 != 0) goto Lfa
            org.json.JSONObject r0 = com.tkay.expressad.foundation.d.c.a(r8)     // Catch: java.lang.Throwable -> L13d
            com.tkay.expressad.foundation.d.c r1 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: java.lang.Throwable -> L13d
            if (r1 != 0) goto L2a
            r1 = r8
        L2a:
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L13d
            if (r3 != 0) goto Lf8
            java.lang.String r0 = r0.optString(r2)     // Catch: java.lang.Throwable -> L13d
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L13d
            if (r2 != 0) goto L3d
            r1.l(r0)     // Catch: java.lang.Throwable -> L13d
        L3d:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13d
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = com.tkay.expressad.foundation.g.a.ce     // Catch: java.lang.Throwable -> L13d
            org.json.JSONObject r7 = r0.optJSONObject(r7)     // Catch: java.lang.Throwable -> L13d
            if (r7 == 0) goto L86
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L13d
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Throwable -> L13d
            java.lang.String r2 = r7.getString(r2)     // Catch: java.lang.Throwable -> L13d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L13d
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L13d
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L13d
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r2)     // Catch: java.lang.Throwable -> L13d
            java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L13d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L13d
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Throwable -> L13d
            java.lang.String r2 = r7.getString(r2)     // Catch: java.lang.Throwable -> L13d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L13d
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L13d
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L13d
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r2)     // Catch: java.lang.Throwable -> L13d
            java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L13d
        L86:
            java.lang.String r0 = r1.ad()     // Catch: java.lang.Throwable -> L13d
            r1.p(r0)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r0 = r1.ah()     // Catch: java.lang.Throwable -> L13d
            if (r7 == 0) goto Lf8
            java.util.Iterator r2 = r7.keys()     // Catch: java.lang.Throwable -> L13d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r3.<init>()     // Catch: java.lang.Throwable -> L13d
        L9c:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L13d
            if (r4 == 0) goto Le6
            java.lang.String r4 = "&"
            r3.append(r4)     // Catch: java.lang.Throwable -> L13d
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = r7.optString(r4)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r6 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Throwable -> L13d
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> L13d
            if (r6 != 0) goto Lc1
            java.lang.String r6 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Throwable -> L13d
            boolean r6 = r6.equals(r4)     // Catch: java.lang.Throwable -> L13d
            if (r6 == 0) goto Lda
        Lc1:
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L13d
            android.content.Context r6 = r6.f()     // Catch: java.lang.Throwable -> L13d
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L13d
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> L13d
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L13d
            int r5 = com.tkay.expressad.foundation.h.t.b(r6, r5)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L13d
        Lda:
            r3.append(r4)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r4 = "="
            r3.append(r4)     // Catch: java.lang.Throwable -> L13d
            r3.append(r5)     // Catch: java.lang.Throwable -> L13d
            goto L9c
        Le6:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r7.<init>()     // Catch: java.lang.Throwable -> L13d
            r7.append(r0)     // Catch: java.lang.Throwable -> L13d
            r7.append(r3)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L13d
            r1.q(r7)     // Catch: java.lang.Throwable -> L13d
        Lf8:
            r8 = r1
            goto L13d
        Lfa:
            org.json.JSONObject r1 = com.tkay.expressad.foundation.d.c.a(r8)     // Catch: org.json.JSONException -> L139
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L139
            r3.<init>(r7)     // Catch: org.json.JSONException -> L139
            boolean r7 = r3.has(r0)     // Catch: java.lang.Exception -> L10e org.json.JSONException -> L139
            if (r7 != 0) goto L10e
            java.lang.String r7 = ""
            r1.put(r0, r7)     // Catch: java.lang.Exception -> L10e org.json.JSONException -> L139
        L10e:
            java.util.Iterator r7 = r3.keys()     // Catch: org.json.JSONException -> L139
        L112:
            boolean r0 = r7.hasNext()     // Catch: org.json.JSONException -> L139
            if (r0 == 0) goto L126
            java.lang.Object r0 = r7.next()     // Catch: org.json.JSONException -> L139
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L139
            java.lang.String r4 = r3.getString(r0)     // Catch: org.json.JSONException -> L139
            r1.put(r0, r4)     // Catch: org.json.JSONException -> L139
            goto L112
        L126:
            com.tkay.expressad.foundation.d.c r7 = com.tkay.expressad.foundation.d.c.b(r1)     // Catch: org.json.JSONException -> L139
            java.lang.String r0 = r1.optString(r2)     // Catch: org.json.JSONException -> L139
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L139
            if (r1 != 0) goto L137
            r7.l(r0)     // Catch: org.json.JSONException -> L139
        L137:
            r8 = r7
            goto L13d
        L139:
            r7 = move-exception
            r7.printStackTrace()
        L13d:
            return r8
    }

    private static java.lang.String a() {
            java.lang.String r0 = ""
            return r0
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

    public static java.lang.String a(int r4, float r5, float r6) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L70
            r1.<init>()     // Catch: java.lang.Exception -> L70
            r2 = 4
            if (r4 != r2) goto L1a
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Exception -> L70
            r6 = -999(0xfffffffffffffc19, float:NaN)
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Exception -> L70
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L70
            goto L3c
        L1a:
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Exception -> L70
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L70
            android.content.Context r3 = r3.f()     // Catch: java.lang.Exception -> L70
            int r5 = com.tkay.expressad.foundation.h.t.a(r3, r5)     // Catch: java.lang.Exception -> L70
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Exception -> L70
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L70
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L70
            int r6 = com.tkay.expressad.foundation.h.t.a(r2, r6)     // Catch: java.lang.Exception -> L70
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L70
        L3c:
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cf     // Catch: java.lang.Exception -> L70
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L70
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L70
            android.content.Context r4 = r4.f()     // Catch: java.lang.Exception -> L70
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L70
            android.content.res.Configuration r4 = r4.getConfiguration()     // Catch: java.lang.Exception -> L70
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cg     // Catch: java.lang.Exception -> L70
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = com.tkay.expressad.foundation.g.a.ch     // Catch: java.lang.Exception -> L70
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L70
            android.content.Context r5 = r5.f()     // Catch: java.lang.Exception -> L70
            float r5 = com.tkay.expressad.foundation.h.t.c(r5)     // Catch: java.lang.Exception -> L70
            double r5 = (double) r5     // Catch: java.lang.Exception -> L70
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = com.tkay.expressad.foundation.g.a.ce     // Catch: java.lang.Exception -> L70
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L70
            goto L74
        L70:
            r4 = move-exception
            r4.printStackTrace()
        L74:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private static java.lang.String a(java.lang.String r8) {
            java.lang.String r0 = ""
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.i     // Catch: java.lang.Exception -> L56
            if (r1 == 0) goto L5a
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.i     // Catch: java.lang.Exception -> L56
            boolean r2 = com.tkay.expressad.foundation.h.w.b(r8)     // Catch: java.lang.Exception -> L56
            if (r2 == 0) goto L5a
            boolean r2 = r1.containsKey(r8)     // Catch: java.lang.Exception -> L56
            if (r2 == 0) goto L5a
            java.lang.Object r8 = r1.get(r8)     // Catch: java.lang.Exception -> L56
            java.util.List r8 = (java.util.List) r8     // Catch: java.lang.Exception -> L56
            if (r8 == 0) goto L5a
            int r1 = r8.size()     // Catch: java.lang.Exception -> L56
            if (r1 <= 0) goto L5a
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L56
            r1.<init>()     // Catch: java.lang.Exception -> L56
            r2 = 0
        L28:
            int r3 = r8.size()     // Catch: java.lang.Exception -> L56
            if (r2 >= r3) goto L51
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L56
            r3.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.Object r4 = r8.get(r2)     // Catch: java.lang.Exception -> L56
            com.tkay.expressad.foundation.g.e.a r4 = (com.tkay.expressad.foundation.g.e.a) r4     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = "cid"
            java.lang.String r6 = r4.a()     // Catch: java.lang.Exception -> L56
            r3.put(r5, r6)     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = "crid"
            long r6 = r4.c()     // Catch: java.lang.Exception -> L56
            r3.put(r5, r6)     // Catch: java.lang.Exception -> L56
            r1.put(r3)     // Catch: java.lang.Exception -> L56
            int r2 = r2 + 1
            goto L28
        L51:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r8 = move-exception
            r8.printStackTrace()
        L5a:
            return r0
    }

    private static synchronized java.util.List<com.tkay.expressad.foundation.g.e.a> a(java.util.List<com.tkay.expressad.foundation.g.e.a> r6, java.util.List<com.tkay.expressad.foundation.d.c> r7) {
            java.lang.Class<com.tkay.expressad.splash.a.a.a> r0 = com.tkay.expressad.splash.a.a.a.class
            monitor-enter(r0)
            if (r7 == 0) goto L44
            int r1 = r7.size()     // Catch: java.lang.Throwable -> L41
            if (r1 <= 0) goto L44
            if (r6 != 0) goto L12
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L41
            r6.<init>()     // Catch: java.lang.Throwable -> L41
        L12:
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L41
        L16:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L44
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> L41
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L16
            com.tkay.expressad.foundation.g.e.a r2 = new com.tkay.expressad.foundation.g.e.a     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = r1.aZ()     // Catch: java.lang.Throwable -> L41
            long r4 = r1.r()     // Catch: java.lang.Throwable -> L41
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L41
            int r1 = r6.size()     // Catch: java.lang.Throwable -> L41
            r3 = 20
            if (r1 < r3) goto L3d
            r1 = 0
            r6.remove(r1)     // Catch: java.lang.Throwable -> L41
        L3d:
            r6.add(r2)     // Catch: java.lang.Throwable -> L41
            goto L16
        L41:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
        L44:
            monitor-exit(r0)
            return r6
    }

    private static void a(android.content.Context r2, java.util.List<com.tkay.expressad.foundation.d.c> r3) {
            if (r2 == 0) goto L24
            if (r3 == 0) goto L24
            int r0 = r3.size()
            if (r0 != 0) goto Lb
            goto L24
        Lb:
            r0 = 0
        Lc:
            int r1 = r3.size()
            if (r0 >= r1) goto L24
            java.lang.Object r1 = r3.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            if (r1 == 0) goto L21
            java.lang.String r1 = r1.ba()
            com.tkay.expressad.foundation.h.t.a(r2, r1)
        L21:
            int r0 = r0 + 1
            goto Lc
        L24:
            return
    }

    private static void a(java.lang.String r2, java.util.List<com.tkay.expressad.foundation.d.c> r3) {
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.i
            if (r0 == 0) goto L34
            if (r3 == 0) goto L34
            int r1 = r3.size()
            if (r1 <= 0) goto L34
            boolean r1 = com.tkay.expressad.foundation.h.w.b(r2)
            if (r1 == 0) goto L32
            boolean r1 = r0.containsKey(r2)
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.get(r2)
            java.util.List r1 = (java.util.List) r1
            java.util.List r3 = a(r1, r3)
            r0.put(r2, r3)
            goto L32
        L26:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.List r3 = a(r1, r3)
            r0.put(r2, r3)
        L32:
            com.tkay.expressad.foundation.g.a.f.i = r0
        L34:
            return
    }

    private static java.lang.String b() {
            java.lang.String r0 = ""
            return r0
    }
}
