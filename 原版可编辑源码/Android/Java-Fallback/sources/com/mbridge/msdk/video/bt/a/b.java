package com.mbridge.msdk.video.bt.a;

public final class b {
    int a;
    int b;
    private java.lang.String c;

    static class 1 {
    }

    private static final class a {
        private static com.mbridge.msdk.video.bt.a.b a;

        static {
                com.mbridge.msdk.video.bt.a.b r0 = new com.mbridge.msdk.video.bt.a.b
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.video.bt.a.b.a.a = r0
                return
        }

        static com.mbridge.msdk.video.bt.a.b a() {
                com.mbridge.msdk.video.bt.a.b r0 = com.mbridge.msdk.video.bt.a.b.a.a
                return r0
        }
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "handlerNativeResult"
            r1.c = r0
            r0 = 0
            r1.a = r0
            r0 = 1
            r1.b = r0
            return
    }

    b(com.mbridge.msdk.video.bt.a.b.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.video.bt.a.b a() {
            com.mbridge.msdk.video.bt.a.b r0 = com.mbridge.msdk.video.bt.a.b.a.a()
            return r0
    }

    private void a(int r4, java.lang.String r5, java.lang.Object r6) {
            r3 = this;
            java.lang.String r0 = "HandlerH5MessageManager"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            r1.<init>()     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            java.lang.String r2 = "code"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            java.lang.String r4 = "message"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            r1 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            r4.a(r6, r5)     // Catch: java.lang.Throwable -> L26 org.json.JSONException -> L2f
            goto L37
        L26:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
            goto L37
        L2f:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L37:
            return
    }

    public final void a(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "HandlerH5MessageManager"
            if (r8 == 0) goto L76
            java.lang.String r1 = r8.toString()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            if (r1 == 0) goto Lf
            goto L76
        Lf:
            java.lang.String r1 = "uniqueIdentifier"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            java.lang.String r2 = "name"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            if (r3 != 0) goto L6e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            if (r3 == 0) goto L28
            goto L6e
        L28:
            java.lang.String r3 = "parameters"
            org.json.JSONArray r3 = r8.optJSONArray(r3)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            java.lang.String r4 = "result"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            r4 = 0
            if (r8 == 0) goto L47
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            if (r5 != 0) goto L47
            java.lang.String r5 = "type"
            int r4 = r8.optInt(r5, r4)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
        L47:
            int r8 = r6.a     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            java.lang.String r5 = "receivedMessage"
            r6.a(r8, r5, r7)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            java.lang.String r8 = "reporter"
            boolean r8 = r1.equalsIgnoreCase(r8)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            if (r8 == 0) goto L5e
            com.mbridge.msdk.mbjscommon.a.a r8 = com.mbridge.msdk.mbjscommon.a.a.a()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            r8.a(r7, r2, r3, r4)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            goto La1
        L5e:
            java.lang.String r8 = "MediaPlayer"
            boolean r8 = r1.equalsIgnoreCase(r8)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            if (r8 == 0) goto La1
            com.mbridge.msdk.video.bt.a.a r8 = com.mbridge.msdk.video.bt.a.a.a()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            r8.a(r7, r2, r3, r4)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            goto La1
        L6e:
            int r8 = r6.b     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            java.lang.String r1 = "module or method is null"
            r6.a(r8, r1, r7)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            return
        L76:
            int r8 = r6.b     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            java.lang.String r1 = "params is null"
            r6.a(r8, r1, r7)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L90
            return
        L7e:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            int r0 = r6.b
            java.lang.String r8 = r8.getMessage()
            r6.a(r0, r8, r7)
            goto La1
        L90:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            int r0 = r6.b
            java.lang.String r8 = r8.getMessage()
            r6.a(r0, r8, r7)
        La1:
            return
    }
}
