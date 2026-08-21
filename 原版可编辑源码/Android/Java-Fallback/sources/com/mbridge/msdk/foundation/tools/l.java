package com.mbridge.msdk.foundation.tools;

public class l {
    private static com.mbridge.msdk.foundation.tools.l b;
    private android.content.Context a;
    private android.content.SharedPreferences c;
    private boolean d;
    private com.mbridge.msdk.foundation.tools.FastKV e;

    static {
            return
    }

    private l(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r0 = 0
            r1.e = r0
            r1.a = r2
            com.mbridge.msdk.foundation.controller.b r2 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r2 = r2.d()
            r1.d = r2
            return
    }

    public static com.mbridge.msdk.foundation.tools.l a(android.content.Context r2) {
            com.mbridge.msdk.foundation.tools.l r0 = com.mbridge.msdk.foundation.tools.l.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.tools.l> r0 = com.mbridge.msdk.foundation.tools.l.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.tools.l r1 = com.mbridge.msdk.foundation.tools.l.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.tools.l r1 = new com.mbridge.msdk.foundation.tools.l     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.tools.l.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.tools.l r2 = com.mbridge.msdk.foundation.tools.l.b
            return r2
    }

    public final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> a(java.lang.String r11) {
            r10 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            boolean r1 = r10.d
            r2 = 0
            java.lang.String r3 = "installed"
            if (r1 == 0) goto L24
            com.mbridge.msdk.foundation.tools.FastKV r1 = r10.e
            if (r1 != 0) goto L24
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.same.b.c r4 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = com.mbridge.msdk.foundation.same.b.e.b(r4)     // Catch: java.lang.Exception -> L22
            r1.<init>(r4, r3)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L22
            r10.e = r1     // Catch: java.lang.Exception -> L22
            goto L24
        L22:
            r10.e = r2
        L24:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r10.e
            java.lang.String r4 = "packageName"
            java.lang.String r5 = "campaignId"
            java.lang.String r6 = ""
            java.lang.String r7 = "_"
            r8 = 0
            if (r1 == 0) goto L7c
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            r9.<init>()     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            r9.append(r11)     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            r9.append(r7)     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            r9.append(r3)     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            java.lang.String r11 = r9.toString()     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            java.lang.String r2 = r1.getString(r11, r6)     // Catch: org.json.JSONException -> L48 java.lang.Exception -> L4a
            goto L4a
        L48:
            r11 = move-exception
            goto L78
        L4a:
            boolean r11 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L48
            if (r11 != 0) goto Ld0
            org.json.JSONArray r11 = new org.json.JSONArray     // Catch: org.json.JSONException -> L48
            r11.<init>(r2)     // Catch: org.json.JSONException -> L48
        L55:
            int r1 = r11.length()     // Catch: org.json.JSONException -> L48
            if (r8 >= r1) goto Ld0
            com.mbridge.msdk.foundation.entity.i r1 = new com.mbridge.msdk.foundation.entity.i     // Catch: org.json.JSONException -> L48
            r1.<init>()     // Catch: org.json.JSONException -> L48
            org.json.JSONObject r2 = r11.getJSONObject(r8)     // Catch: org.json.JSONException -> L48
            java.lang.String r3 = r2.optString(r5)     // Catch: org.json.JSONException -> L48
            r1.a(r3)     // Catch: org.json.JSONException -> L48
            java.lang.String r2 = r2.optString(r4)     // Catch: org.json.JSONException -> L48
            r1.b(r2)     // Catch: org.json.JSONException -> L48
            r0.add(r1)     // Catch: org.json.JSONException -> L48
            int r8 = r8 + 1
            goto L55
        L78:
            r11.printStackTrace()
            goto Ld0
        L7c:
            android.content.Context r1 = r10.a
            if (r1 == 0) goto Ld0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r8)     // Catch: org.json.JSONException -> Lcc
            r10.c = r1     // Catch: org.json.JSONException -> Lcc
            if (r1 == 0) goto Ld0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lcc
            r2.<init>()     // Catch: org.json.JSONException -> Lcc
            r2.append(r11)     // Catch: org.json.JSONException -> Lcc
            r2.append(r7)     // Catch: org.json.JSONException -> Lcc
            r2.append(r3)     // Catch: org.json.JSONException -> Lcc
            java.lang.String r11 = r2.toString()     // Catch: org.json.JSONException -> Lcc
            java.lang.String r11 = r1.getString(r11, r6)     // Catch: org.json.JSONException -> Lcc
            boolean r1 = android.text.TextUtils.isEmpty(r11)     // Catch: org.json.JSONException -> Lcc
            if (r1 != 0) goto Ld0
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> Lcc
            r1.<init>(r11)     // Catch: org.json.JSONException -> Lcc
        La9:
            int r11 = r1.length()     // Catch: org.json.JSONException -> Lcc
            if (r8 >= r11) goto Ld0
            com.mbridge.msdk.foundation.entity.i r11 = new com.mbridge.msdk.foundation.entity.i     // Catch: org.json.JSONException -> Lcc
            r11.<init>()     // Catch: org.json.JSONException -> Lcc
            org.json.JSONObject r2 = r1.getJSONObject(r8)     // Catch: org.json.JSONException -> Lcc
            java.lang.String r3 = r2.optString(r5)     // Catch: org.json.JSONException -> Lcc
            r11.a(r3)     // Catch: org.json.JSONException -> Lcc
            java.lang.String r2 = r2.optString(r4)     // Catch: org.json.JSONException -> Lcc
            r11.b(r2)     // Catch: org.json.JSONException -> Lcc
            r0.add(r11)     // Catch: org.json.JSONException -> Lcc
            int r8 = r8 + 1
            goto La9
        Lcc:
            r11 = move-exception
            r11.printStackTrace()
        Ld0:
            return r0
    }

    public final void a(java.util.Set<com.mbridge.msdk.foundation.entity.i> r6) {
            r5 = this;
            if (r6 == 0) goto L94
            int r0 = r6.size()
            if (r0 < 0) goto L94
            boolean r0 = r5.d
            java.lang.String r1 = "installed"
            if (r0 == 0) goto L27
            com.mbridge.msdk.foundation.tools.FastKV r0 = r5.e
            if (r0 != 0) goto L27
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L24
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Exception -> L24
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L24
            r5.e = r0     // Catch: java.lang.Exception -> L24
            goto L27
        L24:
            r0 = 0
            r5.e = r0
        L27:
            com.mbridge.msdk.foundation.tools.FastKV r0 = r5.e
            java.lang.String r2 = "_"
            if (r0 == 0) goto L56
            java.lang.String r6 = com.mbridge.msdk.foundation.entity.i.a(r6)     // Catch: java.lang.Exception -> L51
            com.mbridge.msdk.foundation.tools.FastKV r0 = r5.e     // Catch: java.lang.Exception -> L94
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r3.<init>()     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L94
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> L94
            r3.append(r4)     // Catch: java.lang.Exception -> L94
            r3.append(r2)     // Catch: java.lang.Exception -> L94
            r3.append(r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L94
            r0.putString(r1, r6)     // Catch: java.lang.Exception -> L94
            goto L94
        L51:
            r6 = move-exception
            r6.printStackTrace()
            goto L94
        L56:
            java.lang.String r6 = com.mbridge.msdk.foundation.entity.i.a(r6)     // Catch: java.lang.Exception -> L90
            android.content.Context r0 = r5.a     // Catch: java.lang.Exception -> L90
            if (r0 == 0) goto L94
            android.content.Context r0 = r5.a     // Catch: java.lang.Exception -> L90
            r3 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r3)     // Catch: java.lang.Exception -> L90
            r5.c = r0     // Catch: java.lang.Exception -> L90
            if (r0 == 0) goto L94
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L90
            if (r0 == 0) goto L94
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L90
            r3.<init>()     // Catch: java.lang.Exception -> L90
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L90
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> L90
            r3.append(r4)     // Catch: java.lang.Exception -> L90
            r3.append(r2)     // Catch: java.lang.Exception -> L90
            r3.append(r1)     // Catch: java.lang.Exception -> L90
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L90
            r0.putString(r1, r6)     // Catch: java.lang.Exception -> L90
            r0.apply()     // Catch: java.lang.Exception -> L90
            goto L94
        L90:
            r6 = move-exception
            r6.printStackTrace()
        L94:
            return
    }
}
