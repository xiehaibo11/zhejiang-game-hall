package com.xiaomi.push;

class ee implements java.lang.Runnable {
    final android.content.Context a;
    final com.xiaomi.push.ed a;
    final java.lang.String a;
    final java.lang.String b;
    final java.lang.String c;

    ee(com.xiaomi.push.ed r1, java.lang.String r2, android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.a = r3
            r0.b = r4
            r0.c = r5
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r9 = this;
            java.lang.String r0 = r9.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1008(0x3f0, float:1.413E-42)
            if (r0 != 0) goto L113
            android.content.Context r0 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.String r2 = r9.a     // Catch: org.json.JSONException -> L108
            r3 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r4 = "get message"
            com.xiaomi.push.dz.a(r0, r2, r3, r4)     // Catch: org.json.JSONException -> L108
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L108
            java.lang.String r2 = r9.a     // Catch: org.json.JSONException -> L108
            r0.<init>(r2)     // Catch: org.json.JSONException -> L108
            java.lang.String r2 = "action"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L108
            java.lang.String r3 = "awakened_app_packagename"
            java.lang.String r3 = r0.optString(r3)     // Catch: org.json.JSONException -> L108
            java.lang.String r4 = "awake_app_packagename"
            java.lang.String r4 = r0.optString(r4)     // Catch: org.json.JSONException -> L108
            java.lang.String r5 = "awake_app"
            java.lang.String r5 = r0.optString(r5)     // Catch: org.json.JSONException -> L108
            java.lang.String r6 = "awake_type"
            java.lang.String r6 = r0.optString(r6)     // Catch: org.json.JSONException -> L108
            java.lang.String r7 = "awake_foreground"
            r8 = 0
            int r0 = r0.optInt(r7, r8)     // Catch: org.json.JSONException -> L108
            java.lang.String r7 = r9.b     // Catch: org.json.JSONException -> L108
            boolean r7 = r7.equals(r4)     // Catch: org.json.JSONException -> L108
            if (r7 == 0) goto Lef
            java.lang.String r7 = r9.c     // Catch: org.json.JSONException -> L108
            boolean r7 = r7.equals(r5)     // Catch: org.json.JSONException -> L108
            if (r7 != 0) goto L53
            goto Lef
        L53:
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: org.json.JSONException -> L108
            if (r7 != 0) goto Le8
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L108
            if (r7 != 0) goto Le8
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: org.json.JSONException -> L108
            if (r7 != 0) goto Le8
            boolean r7 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L108
            if (r7 != 0) goto Le8
            com.xiaomi.push.ed r7 = r9.a     // Catch: org.json.JSONException -> L108
            r7.b(r4)     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ed r4 = r9.a     // Catch: org.json.JSONException -> L108
            r4.a(r5)     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ec r4 = new com.xiaomi.push.ec     // Catch: org.json.JSONException -> L108
            r4.<init>()     // Catch: org.json.JSONException -> L108
            r4.b(r2)     // Catch: org.json.JSONException -> L108
            r4.a(r3)     // Catch: org.json.JSONException -> L108
            r4.a(r0)     // Catch: org.json.JSONException -> L108
            java.lang.String r0 = r9.a     // Catch: org.json.JSONException -> L108
            r4.d(r0)     // Catch: org.json.JSONException -> L108
            java.lang.String r0 = "service"
            boolean r0 = r0.equals(r6)     // Catch: org.json.JSONException -> L108
            if (r0 == 0) goto Lad
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L108
            if (r0 != 0) goto La1
            com.xiaomi.push.ed r0 = r9.a     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ef r2 = com.xiaomi.push.ef.b     // Catch: org.json.JSONException -> L108
            android.content.Context r3 = r9.a     // Catch: org.json.JSONException -> L108
        L9c:
            com.xiaomi.push.ed.a(r0, r2, r3, r4)     // Catch: org.json.JSONException -> L108
            goto L11c
        La1:
            java.lang.String r0 = "com.xiaomi.mipush.sdk.PushMessageHandler"
            r4.c(r0)     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ed r0 = r9.a     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ef r2 = com.xiaomi.push.ef.c     // Catch: org.json.JSONException -> L108
            android.content.Context r3 = r9.a     // Catch: org.json.JSONException -> L108
            goto L9c
        Lad:
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.a     // Catch: org.json.JSONException -> L108
            java.lang.String r0 = r0.a     // Catch: org.json.JSONException -> L108
            boolean r0 = r0.equals(r6)     // Catch: org.json.JSONException -> L108
            if (r0 == 0) goto Lbe
            com.xiaomi.push.ed r0 = r9.a     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ef r2 = com.xiaomi.push.ef.a     // Catch: org.json.JSONException -> L108
            android.content.Context r3 = r9.a     // Catch: org.json.JSONException -> L108
            goto L9c
        Lbe:
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.d     // Catch: org.json.JSONException -> L108
            java.lang.String r0 = r0.a     // Catch: org.json.JSONException -> L108
            boolean r0 = r0.equals(r6)     // Catch: org.json.JSONException -> L108
            if (r0 == 0) goto Lcf
            com.xiaomi.push.ed r0 = r9.a     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.ef r2 = com.xiaomi.push.ef.d     // Catch: org.json.JSONException -> L108
            android.content.Context r3 = r9.a     // Catch: org.json.JSONException -> L108
            goto L9c
        Lcf:
            android.content.Context r0 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.String r2 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L108
            r3.<init>()     // Catch: org.json.JSONException -> L108
            java.lang.String r4 = "A receive a incorrect message with unknown type "
            r3.append(r4)     // Catch: org.json.JSONException -> L108
            r3.append(r6)     // Catch: org.json.JSONException -> L108
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L108
        Le4:
            com.xiaomi.push.dz.a(r0, r2, r1, r3)     // Catch: org.json.JSONException -> L108
            goto L11c
        Le8:
            android.content.Context r0 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.String r2 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.String r3 = "A receive a incorrect message with empty type"
            goto Le4
        Lef:
            android.content.Context r0 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.String r2 = r9.a     // Catch: org.json.JSONException -> L108
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L108
            r3.<init>()     // Catch: org.json.JSONException -> L108
            java.lang.String r5 = "A receive a incorrect message with incorrect package info"
            r3.append(r5)     // Catch: org.json.JSONException -> L108
            r3.append(r4)     // Catch: org.json.JSONException -> L108
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L108
            com.xiaomi.push.dz.a(r0, r2, r1, r3)     // Catch: org.json.JSONException -> L108
            return
        L108:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            android.content.Context r0 = r9.a
            java.lang.String r2 = r9.a
            java.lang.String r3 = "A meet a exception when receive the message"
            goto L119
        L113:
            android.content.Context r0 = r9.a
            java.lang.String r2 = "null"
            java.lang.String r3 = "A receive a incorrect message with empty info"
        L119:
            com.xiaomi.push.dz.a(r0, r2, r1, r3)
        L11c:
            return
    }
}
