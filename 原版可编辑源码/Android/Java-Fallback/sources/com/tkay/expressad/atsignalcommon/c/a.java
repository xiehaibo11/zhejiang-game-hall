package com.tkay.expressad.atsignalcommon.c;

public final class a {
    private static int b = 0;
    private static int c = 1;
    private java.lang.String a;
    private java.lang.String d;
    private java.lang.String e;
    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView f;

    static class 1 {
    }

    private static class a {
        static com.tkay.expressad.atsignalcommon.c.a a;

        static {
                com.tkay.expressad.atsignalcommon.c.a r0 = new com.tkay.expressad.atsignalcommon.c.a
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.atsignalcommon.c.a.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ShakeCacheManager"
            r1.a = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.atsignalcommon.c.a a() {
            com.tkay.expressad.atsignalcommon.c.a r0 = com.tkay.expressad.atsignalcommon.c.a.a.a
            return r0
    }

    private static void a(java.lang.Object r1, android.webkit.WebView r2, java.lang.String r3, java.lang.String r4) {
            if (r2 == 0) goto L14
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r2.<init>()     // Catch: org.json.JSONException -> L10
            java.lang.String r0 = "currentCache"
            r2.put(r0, r3)     // Catch: org.json.JSONException -> L10
            a(r1, r4, r2)     // Catch: org.json.JSONException -> L10
            return
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            return
    }

    private static void a(java.lang.Object r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3) {
            if (r3 == 0) goto Ld
            com.tkay.expressad.atsignalcommon.windvane.j r3 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r0 = "releaseShake"
            java.lang.String r1 = ""
            r3.a(r2, r0, r1)
        Ld:
            return
    }

    private void a(java.lang.Object r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r5)
            r0.append(r6)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = r1.d
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L1d
            a(r2, r3)
        L1d:
            return
    }

    private static void a(java.lang.Object r3, java.lang.String r4, org.json.JSONObject r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2b
            r0.<init>()     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.c.a.c     // Catch: java.lang.Exception -> L2b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "message"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L2b
            java.lang.String r4 = "data"
            r0.put(r4, r5)     // Catch: java.lang.Exception -> L2b
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2b
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L2b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L2b
            r0 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Exception -> L2b
            r4.a(r3, r5)     // Catch: java.lang.Exception -> L2b
            return
        L2b:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private static void a(java.lang.Object r3, org.json.JSONObject r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.c.a.b     // Catch: java.lang.Exception -> L2d
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "message"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "data"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L2d
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L2d
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L2d
            return
        L2d:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            a(r3, r0, r1)
            r4.getMessage()
            return
    }

    private static void b(java.lang.Object r1) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            a(r1, r0)
            return
    }

    public final void a(java.lang.Object r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>()     // Catch: org.json.JSONException -> L10
            java.lang.String r1 = "cache"
            java.lang.String r2 = r3.e     // Catch: org.json.JSONException -> L10
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L10
            a(r4, r0)     // Catch: org.json.JSONException -> L10
            return
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            a(r4, r0, r1)
            return
    }

    public final void a(java.lang.Object r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.e
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L23
            java.lang.String r4 = ""
            r1.e = r4
            r4 = 0
            r1.f = r4
            a(r2, r3)
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            a(r2, r3)
            return
        L23:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L35
            r3.<init>()     // Catch: org.json.JSONException -> L35
            java.lang.String r4 = "currentCache"
            java.lang.String r0 = r1.e     // Catch: org.json.JSONException -> L35
            r3.put(r4, r0)     // Catch: org.json.JSONException -> L35
            java.lang.String r4 = "cache is exception"
            a(r2, r4, r3)     // Catch: org.json.JSONException -> L35
            return
        L35:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public final void a(java.lang.Object r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            java.lang.String r0 = r1.e
            boolean r0 = r0.equals(r4)
            if (r0 != 0) goto L1e
        L10:
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L43
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L43
        L1e:
            r1.e = r5
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 != 0) goto L38
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L34
            r4.<init>(r5)     // Catch: org.json.JSONException -> L34
            java.lang.String r5 = "sid"
            java.lang.String r4 = r4.optString(r5)     // Catch: org.json.JSONException -> L34
            r1.d = r4     // Catch: org.json.JSONException -> L34
            goto L38
        L34:
            r4 = move-exception
            r4.printStackTrace()
        L38:
            r1.f = r3
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            a(r2, r3)
            return
        L43:
            java.lang.String r4 = r1.e
            java.lang.String r5 = "cache had changed"
            if (r3 == 0) goto L5b
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L57
            r3.<init>()     // Catch: org.json.JSONException -> L57
            java.lang.String r0 = "currentCache"
            r3.put(r0, r4)     // Catch: org.json.JSONException -> L57
            a(r2, r5, r3)     // Catch: org.json.JSONException -> L57
            return
        L57:
            r2 = move-exception
            r2.printStackTrace()
        L5b:
            return
    }
}
