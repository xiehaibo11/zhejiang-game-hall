package com.tkay.expressad.video.bt.a;

public final class b {
    private static final java.lang.String c = "HandlerH5MessageManager";
    int a;
    int b;
    private java.lang.String d;

    static class 1 {
    }

    private static final class a {
        private static com.tkay.expressad.video.bt.a.b a;

        static {
                com.tkay.expressad.video.bt.a.b r0 = new com.tkay.expressad.video.bt.a.b
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.video.bt.a.b.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.video.bt.a.b a() {
                com.tkay.expressad.video.bt.a.b r0 = com.tkay.expressad.video.bt.a.b.a.a
                return r0
        }
    }

    private b() {
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

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.video.bt.a.b a() {
            com.tkay.expressad.video.bt.a.b r0 = com.tkay.expressad.video.bt.a.b.a.a()
            return r0
    }

    private static void a(int r2, java.lang.String r3, java.lang.Object r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            java.lang.String r1 = "code"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            java.lang.String r2 = "message"
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            com.tkay.expressad.atsignalcommon.windvane.j r2 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            r2.a(r4, r3)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            return
        L24:
            r2 = move-exception
            r2.getMessage()
            return
        L29:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public final void a(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r0 == 0) goto L12
            int r7 = r5.b     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            java.lang.String r0 = "params is null"
            a(r7, r0, r6)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            return
        L12:
            java.lang.String r0 = "uniqueIdentifier"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            java.lang.String r1 = "name"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r2 != 0) goto L68
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r2 == 0) goto L2b
            goto L68
        L2b:
            java.lang.String r2 = "parameters"
            org.json.JSONArray r2 = r7.optJSONArray(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            java.lang.String r3 = "result"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r7 == 0) goto L49
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r3 != 0) goto L49
            java.lang.String r3 = "type"
            r4 = 0
            r7.optInt(r3, r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
        L49:
            int r7 = r5.a     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            java.lang.String r3 = "receivedMessage"
            a(r7, r3, r6)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            java.lang.String r7 = "reporter"
            boolean r7 = r0.equalsIgnoreCase(r7)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r7 != 0) goto L67
            java.lang.String r7 = "MediaPlayer"
            boolean r7 = r0.equalsIgnoreCase(r7)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            if (r7 == 0) goto L67
            com.tkay.expressad.video.bt.a.a r7 = com.tkay.expressad.video.bt.a.a.a()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            r7.a(r6, r1, r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
        L67:
            return
        L68:
            int r7 = r5.b     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            java.lang.String r0 = "module or method is null"
            a(r7, r0, r6)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L7e
            return
        L70:
            r7 = move-exception
            r7.getMessage()
            int r0 = r5.b
            java.lang.String r7 = r7.getMessage()
            a(r0, r7, r6)
            return
        L7e:
            r7 = move-exception
            r7.getMessage()
            int r0 = r5.b
            java.lang.String r7 = r7.getMessage()
            a(r0, r7, r6)
            return
    }
}
