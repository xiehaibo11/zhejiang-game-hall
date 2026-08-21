package com.xiaomi.push;

public class dy {
    public static android.net.Uri a(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "content://"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            android.net.Uri$Builder r2 = r2.buildUpon()
            android.net.Uri$Builder r2 = r2.appendPath(r3)
            android.net.Uri r2 = r2.build()
            return r2
    }

    public static java.lang.String a(java.lang.String r1) {
            byte[] r1 = com.xiaomi.push.bp.a(r1)
            r0 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
    }

    public static java.lang.String a(java.util.HashMap<java.lang.String, java.lang.String> r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Set r1 = r4.keySet()
            java.util.Iterator r1 = r1.iterator()     // Catch: org.json.JSONException -> L26
        L12:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L26
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L26
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L26
            java.lang.Object r3 = r4.get(r2)     // Catch: org.json.JSONException -> L26
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L26
            goto L12
        L26:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L2a:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String b(java.lang.String r1) {
            r0 = 2
            byte[] r1 = android.util.Base64.decode(r1, r0)
            java.lang.String r1 = com.xiaomi.push.bp.b(r1)
            return r1
    }

    public static java.lang.String b(java.util.HashMap<java.lang.String, java.lang.String> r9) {
            java.lang.String r0 = "msg_id"
            java.lang.String r1 = "jobkey"
            java.lang.String r2 = "flow_id"
            java.lang.String r3 = "__planId__"
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            if (r9 == 0) goto Lb6
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "event_type"
            java.lang.Object r7 = r9.get(r6)
            java.lang.String r7 = (java.lang.String) r7
            r5.append(r7)
            java.lang.String r7 = ""
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            r4.put(r6, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "description"
            java.lang.Object r8 = r9.get(r6)
            java.lang.String r8 = (java.lang.String) r8
            r5.append(r8)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            r4.put(r6, r5)
            java.lang.String r5 = "awake_info"
            java.lang.Object r9 = r9.get(r5)
            java.lang.String r9 = (java.lang.String) r9
            boolean r5 = android.text.TextUtils.isEmpty(r9)
            if (r5 != 0) goto Lb6
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lb2
            r5.<init>(r9)     // Catch: org.json.JSONException -> Lb2
            java.lang.Object r9 = r5.opt(r3)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: org.json.JSONException -> Lb2
            r4.put(r3, r9)     // Catch: org.json.JSONException -> Lb2
            java.lang.Object r9 = r5.opt(r2)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: org.json.JSONException -> Lb2
            r4.put(r2, r9)     // Catch: org.json.JSONException -> Lb2
            java.lang.Object r9 = r5.opt(r1)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: org.json.JSONException -> Lb2
            r4.put(r1, r9)     // Catch: org.json.JSONException -> Lb2
            java.lang.Object r9 = r5.opt(r0)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: org.json.JSONException -> Lb2
            r4.put(r0, r9)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = "A"
            java.lang.String r0 = "awake_app"
            java.lang.Object r0 = r5.opt(r0)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: org.json.JSONException -> Lb2
            r4.put(r9, r0)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = "B"
            java.lang.String r0 = "awakened_app"
            java.lang.Object r0 = r5.opt(r0)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: org.json.JSONException -> Lb2
            r4.put(r9, r0)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r9 = "module"
            java.lang.String r0 = "awake_type"
            java.lang.Object r0 = r5.opt(r0)     // Catch: org.json.JSONException -> Lb2
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: org.json.JSONException -> Lb2
            r4.put(r9, r0)     // Catch: org.json.JSONException -> Lb2
            goto Lb6
        Lb2:
            r9 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r9)
        Lb6:
            java.lang.String r9 = a(r4)
            return r9
    }
}
