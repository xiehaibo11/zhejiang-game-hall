package com.mbridge.msdk.mbjscommon.a;

public class a {
    private static final java.lang.String c = null;
    int a;
    int b;
    private java.lang.String d;


    private static final class a {
        private static com.mbridge.msdk.mbjscommon.a.a a;

        static {
                com.mbridge.msdk.mbjscommon.a.a r0 = new com.mbridge.msdk.mbjscommon.a.a
                r0.<init>()
                com.mbridge.msdk.mbjscommon.a.a.a.a = r0
                return
        }

        static com.mbridge.msdk.mbjscommon.a.a a() {
                com.mbridge.msdk.mbjscommon.a.a r0 = com.mbridge.msdk.mbjscommon.a.a.a.a
                return r0
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbjscommon.a.a> r0 = com.mbridge.msdk.mbjscommon.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbjscommon.a.a.c = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "handlerNativeResult"
            r1.d = r0
            r0 = 0
            r1.a = r0
            r0 = 1
            r1.b = r0
            return
    }

    public static com.mbridge.msdk.mbjscommon.a.a a() {
            com.mbridge.msdk.mbjscommon.a.a r0 = com.mbridge.msdk.mbjscommon.a.a.a.a()
            return r0
    }

    private void a(int r3, java.lang.String r4, java.lang.Object r5) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            r0.<init>()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            java.lang.String r1 = "code"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            java.lang.String r3 = "message"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            r0 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r0)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            r3.a(r5, r4)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            goto L39
        L24:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.mbjscommon.a.a.c
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            goto L39
        L2f:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.mbjscommon.a.a.c
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L39:
            return
    }

    static java.lang.String b() {
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.a.a.c
            return r0
    }

    public final void a(java.lang.Object r22, java.lang.String r23, org.json.JSONArray r24, int r25) {
            r21 = this;
            r1 = r21
            r2 = r22
            r0 = r23
            r3 = r24
            java.lang.String r4 = "called reporter failed, params empty"
            if (r3 != 0) goto L12
            int r0 = r1.b     // Catch: java.lang.Throwable -> L195
            r1.a(r0, r4, r2)     // Catch: java.lang.Throwable -> L195
            return
        L12:
            int r5 = r24.length()     // Catch: java.lang.Throwable -> L195
            if (r5 != 0) goto L1e
            int r0 = r1.b     // Catch: java.lang.Throwable -> L195
            r1.a(r0, r4, r2)     // Catch: java.lang.Throwable -> L195
            return
        L1e:
            java.lang.String r4 = "reportMessageR"
            boolean r4 = r4.equalsIgnoreCase(r0)     // Catch: java.lang.Throwable -> L195
            r6 = 0
            r7 = 1
            java.lang.String r8 = "value"
            if (r4 == 0) goto La7
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L195
            r0.<init>()     // Catch: java.lang.Throwable -> L195
            r4 = r6
        L30:
            int r9 = r5 + (-1)
            java.lang.String r10 = "="
            java.lang.String r11 = "key"
            if (r4 >= r9) goto L57
            org.json.JSONObject r9 = r3.optJSONObject(r4)     // Catch: java.lang.Throwable -> L195
            if (r9 == 0) goto L54
            java.lang.String r11 = r9.optString(r11)     // Catch: java.lang.Throwable -> L195
            r0.append(r11)     // Catch: java.lang.Throwable -> L195
            r0.append(r10)     // Catch: java.lang.Throwable -> L195
            java.lang.Object r9 = r9.opt(r8)     // Catch: java.lang.Throwable -> L195
            r0.append(r9)     // Catch: java.lang.Throwable -> L195
            java.lang.String r9 = "&"
            r0.append(r9)     // Catch: java.lang.Throwable -> L195
        L54:
            int r4 = r4 + 1
            goto L30
        L57:
            org.json.JSONObject r3 = r3.optJSONObject(r9)     // Catch: java.lang.Throwable -> L195
            if (r3 == 0) goto L6e
            java.lang.String r4 = r3.optString(r11)     // Catch: java.lang.Throwable -> L195
            r0.append(r4)     // Catch: java.lang.Throwable -> L195
            r0.append(r10)     // Catch: java.lang.Throwable -> L195
            java.lang.Object r3 = r3.opt(r8)     // Catch: java.lang.Throwable -> L195
            r0.append(r3)     // Catch: java.lang.Throwable -> L195
        L6e:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L195
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L195
            if (r3 == 0) goto L18d
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L195
            if (r4 != 0) goto L18d
            com.mbridge.msdk.foundation.same.report.d.a r4 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            r4.<init>(r3)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.same.net.g.d r0 = com.mbridge.msdk.foundation.same.report.e.a(r0, r3)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            java.lang.String r3 = r3.a     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            com.mbridge.msdk.mbjscommon.a.a$1 r5 = new com.mbridge.msdk.mbjscommon.a.a$1     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            r5.<init>(r1)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            r4.post(r6, r3, r0, r5)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> L195
            goto L18d
        L9b:
            r0 = move-exception
            java.lang.String r3 = com.mbridge.msdk.mbjscommon.a.a.c     // Catch: java.lang.Throwable -> L195
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)     // Catch: java.lang.Throwable -> L195
            goto L18d
        La7:
            java.lang.String r4 = "reportMessageD"
            boolean r0 = r4.equalsIgnoreCase(r0)     // Catch: java.lang.Throwable -> L195
            if (r0 == 0) goto L18d
            java.lang.String r0 = ""
            if (r5 <= 0) goto Lbf
            org.json.JSONObject r4 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r4 == 0) goto Lbf
            java.lang.String r4 = r4.getString(r8)     // Catch: java.lang.Throwable -> L195
            r10 = r4
            goto Lc0
        Lbf:
            r10 = r0
        Lc0:
            r4 = -1
            if (r5 <= r7) goto Lcf
            org.json.JSONObject r6 = r3.optJSONObject(r7)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto Lcf
            int r6 = r6.getInt(r8)     // Catch: java.lang.Throwable -> L195
            r11 = r6
            goto Ld0
        Lcf:
            r11 = r4
        Ld0:
            r6 = 2
            if (r5 <= r6) goto Ldf
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto Ldf
            int r6 = r6.getInt(r8)     // Catch: java.lang.Throwable -> L195
            r12 = r6
            goto Le0
        Ldf:
            r12 = r4
        Le0:
            r6 = 3
            if (r5 <= r6) goto Lef
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto Lef
            int r6 = r6.getInt(r8)     // Catch: java.lang.Throwable -> L195
            r13 = r6
            goto Lf0
        Lef:
            r13 = r4
        Lf0:
            r6 = 4
            if (r5 <= r6) goto Lff
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto Lff
            int r6 = r6.getInt(r8)     // Catch: java.lang.Throwable -> L195
            r14 = r6
            goto L100
        Lff:
            r14 = r4
        L100:
            r6 = 5
            if (r5 <= r6) goto L10f
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto L10f
            java.lang.String r6 = r6.getString(r8)     // Catch: java.lang.Throwable -> L195
            r15 = r6
            goto L110
        L10f:
            r15 = r0
        L110:
            r6 = 6
            if (r5 <= r6) goto L120
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto L120
            java.lang.String r6 = r6.getString(r8)     // Catch: java.lang.Throwable -> L195
            r16 = r6
            goto L122
        L120:
            r16 = r0
        L122:
            r6 = 7
            if (r5 <= r6) goto L132
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto L132
            int r6 = r6.getInt(r8)     // Catch: java.lang.Throwable -> L195
            r17 = r6
            goto L134
        L132:
            r17 = r4
        L134:
            r6 = 8
            if (r5 <= r6) goto L145
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto L145
            java.lang.String r6 = r6.getString(r8)     // Catch: java.lang.Throwable -> L195
            r18 = r6
            goto L147
        L145:
            r18 = r0
        L147:
            r6 = 9
            if (r5 <= r6) goto L155
            org.json.JSONObject r6 = r3.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto L155
            int r4 = r6.getInt(r8)     // Catch: java.lang.Throwable -> L195
        L155:
            r19 = r4
            r4 = 10
            if (r5 <= r4) goto L165
            org.json.JSONObject r3 = r3.optJSONObject(r4)     // Catch: java.lang.Throwable -> L195
            if (r3 == 0) goto L165
            java.lang.String r0 = r3.getString(r8)     // Catch: java.lang.Throwable -> L195
        L165:
            r20 = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L183
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L183
            if (r0 == 0) goto L18d
            com.mbridge.msdk.foundation.entity.p r3 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> L183
            r9 = r3
            r9.<init>(r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Throwable -> L183
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Throwable -> L183
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Throwable -> L183
            r0.a(r3)     // Catch: java.lang.Throwable -> L183
            goto L18d
        L183:
            r0 = move-exception
            java.lang.String r3 = com.mbridge.msdk.mbjscommon.a.a.c     // Catch: java.lang.Throwable -> L195
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L195
        L18d:
            int r0 = r1.a     // Catch: java.lang.Throwable -> L195
            java.lang.String r3 = "called reporter success"
            r1.a(r0, r3, r2)     // Catch: java.lang.Throwable -> L195
            goto L1b9
        L195:
            r0 = move-exception
            java.lang.String r3 = com.mbridge.msdk.mbjscommon.a.a.c
            java.lang.String r4 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r3, r4)
            int r3 = r1.b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "exception: "
            r4.append(r5)
            java.lang.String r0 = r0.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r1.a(r3, r0, r2)
        L1b9:
            return
    }
}
