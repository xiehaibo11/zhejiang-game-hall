package com.mbridge.msdk.mbjscommon.d;

public final class a {
    private static int b = 0;
    private static int c = 1;
    private java.lang.String a;
    private java.lang.String d;
    private java.lang.String e;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView f;

    static class 1 {
    }

    private static class a {
        static com.mbridge.msdk.mbjscommon.d.a a;

        static {
                com.mbridge.msdk.mbjscommon.d.a r0 = new com.mbridge.msdk.mbjscommon.d.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.mbjscommon.d.a.a.a = r0
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

    a(com.mbridge.msdk.mbjscommon.d.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.mbjscommon.d.a a() {
            com.mbridge.msdk.mbjscommon.d.a r0 = com.mbridge.msdk.mbjscommon.d.a.a.a
            return r0
    }

    private void a(java.lang.Object r4, java.lang.String r5, org.json.JSONObject r6) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2b
            r0.<init>()     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.d.a.c     // Catch: java.lang.Exception -> L2b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = "message"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L2b
            java.lang.String r5 = "data"
            r0.put(r5, r6)     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L2b
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L2b
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L2b
            r0 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r0)     // Catch: java.lang.Exception -> L2b
            r5.a(r4, r6)     // Catch: java.lang.Exception -> L2b
            goto L35
        L2b:
            r4 = move-exception
            java.lang.String r5 = r3.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L35:
            return
    }

    private void a(java.lang.Object r4, org.json.JSONObject r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.d.a.b     // Catch: java.lang.Exception -> L2d
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "message"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "data"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L2d
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L2d
            goto L43
        L2d:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r3.a(r4, r0, r1)
            java.lang.String r4 = r3.a
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)
        L43:
            return
    }

    public final void a(java.lang.Object r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>()     // Catch: org.json.JSONException -> L10
            java.lang.String r1 = "cache"
            java.lang.String r2 = r3.e     // Catch: org.json.JSONException -> L10
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L10
            r3.a(r4, r0)     // Catch: org.json.JSONException -> L10
            goto L1d
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r3.a(r4, r0, r1)
        L1d:
            return
    }

    public final void a(java.lang.Object r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r1.e
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L2b
            java.lang.String r4 = ""
            r1.e = r4
            r0 = 0
            r1.f = r0
            if (r3 == 0) goto L22
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r0 = "releaseShake"
            r3.a(r2, r0, r4)
        L22:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            r1.a(r2, r3)
            goto L41
        L2b:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3d
            r3.<init>()     // Catch: org.json.JSONException -> L3d
            java.lang.String r4 = "currentCache"
            java.lang.String r0 = r1.e     // Catch: org.json.JSONException -> L3d
            r3.put(r4, r0)     // Catch: org.json.JSONException -> L3d
            java.lang.String r4 = "cache is exception"
            r1.a(r2, r4, r3)     // Catch: org.json.JSONException -> L3d
            goto L41
        L3d:
            r2 = move-exception
            r2.printStackTrace()
        L41:
            return
    }

    public final void a(java.lang.Object r1, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2, java.lang.String r3, java.lang.String r4, int r5) {
            r0 = this;
            java.lang.String r5 = r0.e
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L10
            java.lang.String r5 = r0.e
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto L1e
        L10:
            java.lang.String r5 = r0.e
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L43
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L43
        L1e:
            r0.e = r4
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L38
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L34
            r3.<init>(r4)     // Catch: org.json.JSONException -> L34
            java.lang.String r4 = "sid"
            java.lang.String r3 = r3.optString(r4)     // Catch: org.json.JSONException -> L34
            r0.d = r3     // Catch: org.json.JSONException -> L34
            goto L38
        L34:
            r3 = move-exception
            r3.printStackTrace()
        L38:
            r0.f = r2
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            r0.a(r1, r2)
            goto L5b
        L43:
            java.lang.String r3 = r0.e
            java.lang.String r4 = "cache had changed"
            if (r2 == 0) goto L5b
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L57
            r2.<init>()     // Catch: org.json.JSONException -> L57
            java.lang.String r5 = "currentCache"
            r2.put(r5, r3)     // Catch: org.json.JSONException -> L57
            r0.a(r1, r4, r2)     // Catch: org.json.JSONException -> L57
            goto L5b
        L57:
            r1 = move-exception
            r1.printStackTrace()
        L5b:
            return
    }
}
