package com.tramini.plugin.a.e;

public final class c extends com.tramini.plugin.a.e.f {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r11, java.lang.String r12, java.lang.String r13, org.json.JSONObject r14, org.json.JSONArray r15) {
            if (r11 == 0) goto Lc3
            java.lang.Class r0 = r11.getClass()
            java.lang.String r0 = r0.getName()
            boolean r0 = r0.startsWith(r13)
            if (r0 == 0) goto Lc3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r12)
            java.lang.Class r12 = r11.getClass()
            java.lang.String r12 = r12.getName()
            r0.append(r12)
            java.lang.String r12 = ","
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lbf
            r0.<init>()     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r1 = r11.getClass()     // Catch: java.lang.Throwable -> Lbf
            a(r1, r0)     // Catch: java.lang.Throwable -> Lbf
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lbf
            java.lang.reflect.Field[] r2 = new java.lang.reflect.Field[r1]     // Catch: java.lang.Throwable -> Lbf
            r0.toArray(r2)     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto Lc3
            r0 = 0
            r3 = r0
        L45:
            if (r3 >= r1) goto Lc3
            r4 = r2[r3]     // Catch: java.lang.Throwable -> Lbf
            r5 = 1
            r4.setAccessible(r5)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Object r4 = r4.get(r11)     // Catch: java.lang.Throwable -> Lbf
            if (r4 == 0) goto La5
            boolean r5 = r4 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> Lbf
            if (r5 == 0) goto La5
            java.lang.String r5 = ""
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbc
            r6.<init>()     // Catch: java.lang.Throwable -> Lbc
            r7 = r0
        L5f:
            int r8 = r15.length()     // Catch: java.lang.Throwable -> Lbc
            if (r7 >= r8) goto L8a
            java.lang.String r8 = r15.optString(r7)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r9 = r14.optString(r8)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r10 = "all"
            boolean r10 = android.text.TextUtils.equals(r9, r10)     // Catch: java.lang.Throwable -> Lbc
            if (r10 == 0) goto L77
            r5 = r8
            goto L87
        L77:
            r10 = r4
            org.json.JSONObject r10 = (org.json.JSONObject) r10     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r9 = a(r9, r10)     // Catch: java.lang.Throwable -> Lbc
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lbc
            if (r10 != 0) goto L87
            r6.put(r8, r9)     // Catch: java.lang.Throwable -> Lbc
        L87:
            int r7 = r7 + 1
            goto L5f
        L8a:
            int r7 = r6.length()     // Catch: java.lang.Throwable -> Lbc
            if (r7 == 0) goto Lbc
            com.tramini.plugin.a.c.a r7 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> Lbc
            r7.<init>()     // Catch: java.lang.Throwable -> Lbc
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lbc
            if (r8 != 0) goto La2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lbc
            r6.put(r5, r4)     // Catch: java.lang.Throwable -> Lbc
        La2:
            r7.a = r6     // Catch: java.lang.Throwable -> Lbc
            return r7
        La5:
            if (r4 == 0) goto Lbc
            java.lang.Class r5 = r4.getClass()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> Lbf
            boolean r5 = r12.contains(r5)     // Catch: java.lang.Throwable -> Lbf
            if (r5 != 0) goto Lbc
            com.tramini.plugin.a.c.a r4 = a(r4, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> Lbf
            if (r4 == 0) goto Lbc
            return r4
        Lbc:
            int r3 = r3 + 1
            goto L45
        Lbf:
            r11 = move-exception
            r11.printStackTrace()
        Lc3:
            r11 = 0
            return r11
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r2, com.tramini.plugin.a.c.c r3, java.lang.String r4) {
            java.lang.String r0 = "pre"
            java.lang.String r0 = r2.optString(r0)
            java.lang.String r1 = "in_na"
            java.lang.String r1 = r2.optString(r1)
            java.lang.Object r4 = a(r1, r4)
            org.json.JSONArray r3 = r3.e
            java.lang.String r1 = ""
            com.tramini.plugin.a.c.a r2 = a(r4, r1, r0, r2, r3)
            return r2
    }

    private static java.lang.String a(java.lang.String r3, org.json.JSONObject r4) {
            java.lang.String r0 = ":"
            java.lang.String[] r3 = r3.split(r0)     // Catch: java.lang.Throwable -> L1e
            r0 = 0
        L7:
            int r1 = r3.length     // Catch: java.lang.Throwable -> L1e
            if (r0 >= r1) goto L1e
            int r1 = r0 + 1
            int r2 = r3.length     // Catch: java.lang.Throwable -> L1e
            if (r1 != r2) goto L16
            r3 = r3[r0]     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = r4.optString(r3)     // Catch: java.lang.Throwable -> L1e
            return r3
        L16:
            r0 = r3[r0]     // Catch: java.lang.Throwable -> L1e
            org.json.JSONObject r4 = r4.optJSONObject(r0)     // Catch: java.lang.Throwable -> L1e
            r0 = r1
            goto L7
        L1e:
            java.lang.String r3 = ""
            return r3
    }
}
