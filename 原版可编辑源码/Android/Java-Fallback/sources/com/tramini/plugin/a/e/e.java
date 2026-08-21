package com.tramini.plugin.a.e;

public final class e extends com.tramini.plugin.a.e.f {


    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r3, java.lang.String r4, java.lang.String r5, org.json.JSONObject r6, org.json.JSONArray r7, java.lang.String r8) {
            r0 = 0
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L52
            r1.<init>()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "0"
            boolean r8 = android.text.TextUtils.equals(r8, r2)     // Catch: java.lang.Throwable -> L52
            if (r8 != 0) goto L17
            com.tramini.plugin.a.e.e$1 r8 = new com.tramini.plugin.a.e.e$1     // Catch: java.lang.Throwable -> L52
            r8.<init>(r5)     // Catch: java.lang.Throwable -> L52
            java.lang.Object r3 = a(r3, r4, r1, r8)     // Catch: java.lang.Throwable -> L52
        L17:
            if (r3 != 0) goto L1a
            return r0
        L1a:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L52
            r4.<init>()     // Catch: java.lang.Throwable -> L52
            r5 = 0
        L20:
            int r8 = r7.length()     // Catch: java.lang.Throwable -> L52
            if (r5 >= r8) goto L44
            java.lang.String r8 = r7.optString(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r6.optString(r8)     // Catch: java.lang.Throwable -> L41
            java.lang.Object r1 = a(r3, r1)     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L41
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L41
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L41
            if (r2 != 0) goto L41
            r4.put(r8, r1)     // Catch: java.lang.Throwable -> L41
        L41:
            int r5 = r5 + 1
            goto L20
        L44:
            int r3 = r4.length()     // Catch: java.lang.Throwable -> L52
            if (r3 <= 0) goto L52
            com.tramini.plugin.a.c.a r3 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> L52
            r3.<init>()     // Catch: java.lang.Throwable -> L52
            r3.a = r4     // Catch: java.lang.Throwable -> L52
            return r3
        L52:
            return r0
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r7, com.tramini.plugin.a.c.c r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "pre"
            java.lang.String r2 = r7.optString(r0)
            java.lang.String r0 = "clna"
            java.lang.String r3 = r7.optString(r0)
            java.lang.String r0 = "in_na"
            java.lang.String r0 = r7.optString(r0)
            java.lang.Object r1 = a(r0, r9)
            org.json.JSONArray r5 = r8.e
            r4 = r7
            r6 = r10
            com.tramini.plugin.a.c.a r7 = a(r1, r2, r3, r4, r5, r6)
            return r7
    }
}
