package com.tramini.plugin.a.e;

public final class d extends com.tramini.plugin.a.e.f {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, org.json.JSONObject r20, org.json.JSONArray r21) {
            r0 = r16
            if (r0 == 0) goto Lf3
            java.lang.Class r1 = r16.getClass()
            java.lang.String r1 = r1.getName()
            r8 = r18
            boolean r1 = r1.startsWith(r8)
            if (r1 == 0) goto Lf3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = r17
            r1.append(r2)
            java.lang.Class r2 = r16.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ","
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lf3
            r2.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.Class r3 = r16.getClass()     // Catch: java.lang.Throwable -> Lf3
            a(r3, r2)     // Catch: java.lang.Throwable -> Lf3
            int r9 = r2.size()     // Catch: java.lang.Throwable -> Lf3
            java.lang.reflect.Field[] r10 = new java.lang.reflect.Field[r9]     // Catch: java.lang.Throwable -> Lf3
            r2.toArray(r10)     // Catch: java.lang.Throwable -> Lf3
            if (r9 == 0) goto Lf3
            r11 = 0
            r12 = r11
        L4b:
            if (r12 >= r9) goto Lf3
            r2 = r10[r12]     // Catch: java.lang.Throwable -> Lf3
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Throwable -> Lf3
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> Lf3
            r13 = r19
            java.lang.reflect.Method r4 = c(r2, r13)     // Catch: java.lang.Throwable -> Lf3
            if (r2 == 0) goto Lca
            if (r4 == 0) goto Lca
            r4.setAccessible(r3)     // Catch: java.lang.Throwable -> Lf3
            java.lang.Object[] r3 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> Lc5
            java.lang.Object r2 = r4.invoke(r2, r3)     // Catch: java.lang.Throwable -> Lc5
            boolean r3 = r2 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> Lc5
            if (r3 == 0) goto Lc5
            java.lang.String r3 = ""
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc5
            r4.<init>()     // Catch: java.lang.Throwable -> Lc5
            r5 = r11
        L76:
            int r6 = r21.length()     // Catch: java.lang.Throwable -> Lc5
            if (r5 >= r6) goto La6
            r14 = r21
            java.lang.String r6 = r14.optString(r5)     // Catch: java.lang.Throwable -> La0
            r15 = r20
            java.lang.String r7 = r15.optString(r6)     // Catch: java.lang.Throwable -> La2
            java.lang.String r11 = "all"
            boolean r11 = android.text.TextUtils.equals(r7, r11)     // Catch: java.lang.Throwable -> La2
            if (r11 == 0) goto L92
            r3 = r6
            goto La2
        L92:
            java.lang.String r7 = d(r2, r7)     // Catch: java.lang.Throwable -> La2
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> La2
            if (r11 != 0) goto La2
            r4.put(r6, r7)     // Catch: java.lang.Throwable -> La2
            goto La2
        La0:
            r15 = r20
        La2:
            int r5 = r5 + 1
            r11 = 0
            goto L76
        La6:
            r15 = r20
            r14 = r21
            int r5 = r4.length()     // Catch: java.lang.Throwable -> Lee
            if (r5 <= 0) goto Lee
            com.tramini.plugin.a.c.a r5 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> Lee
            r5.<init>()     // Catch: java.lang.Throwable -> Lee
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lee
            if (r6 != 0) goto Lc2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lee
            r4.put(r3, r2)     // Catch: java.lang.Throwable -> Lee
        Lc2:
            r5.a = r4     // Catch: java.lang.Throwable -> Lee
            return r5
        Lc5:
            r15 = r20
            r14 = r21
            goto Lee
        Lca:
            r15 = r20
            r14 = r21
            if (r2 == 0) goto Lee
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> Lf3
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> Lf3
            if (r3 != 0) goto Lee
            r3 = r1
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            com.tramini.plugin.a.c.a r2 = a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Lf3
            if (r2 == 0) goto Lee
            return r2
        Lee:
            int r12 = r12 + 1
            r11 = 0
            goto L4b
        Lf3:
            r0 = 0
            return r0
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r7, com.tramini.plugin.a.c.c r8, java.lang.String r9) {
            java.lang.String r0 = "pre"
            java.lang.String r3 = r7.optString(r0)
            java.lang.String r0 = "mena"
            java.lang.String r4 = r7.optString(r0)
            java.lang.String r0 = "in_na"
            java.lang.String r0 = r7.optString(r0)
            java.lang.Object r1 = a(r0, r9)
            org.json.JSONArray r6 = r8.e
            java.lang.String r2 = ""
            r5 = r7
            com.tramini.plugin.a.c.a r7 = a(r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static java.lang.reflect.Method c(java.lang.Object r2, java.lang.String r3) {
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L2b
            r0.<init>()     // Catch: java.lang.Exception -> L2b
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Exception -> L2b
            b(r2, r0)     // Catch: java.lang.Exception -> L2b
            java.util.Iterator r2 = r0.iterator()     // Catch: java.lang.Exception -> L2b
        L10:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L2b
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Exception -> L2b
            java.lang.reflect.Method r0 = (java.lang.reflect.Method) r0     // Catch: java.lang.Exception -> L2b
            java.lang.reflect.Type r1 = r0.getGenericReturnType()     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2b
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Exception -> L2b
            if (r1 == 0) goto L10
            return r0
        L2b:
            r2 = 0
            return r2
    }

    private static java.lang.String d(java.lang.Object r4, java.lang.String r5) {
            boolean r0 = r4 instanceof org.json.JSONObject
            if (r0 == 0) goto L39
            r0 = r4
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            java.util.Iterator r1 = r0.keys()
            boolean r2 = r0.has(r5)
            if (r2 == 0) goto L16
            java.lang.String r4 = r0.optString(r5)
            return r4
        L16:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r2 = r0.opt(r2)
            boolean r3 = r2 instanceof org.json.JSONObject
            if (r3 != 0) goto L2e
            boolean r3 = r2 instanceof org.json.JSONArray
            if (r3 == 0) goto L16
        L2e:
            java.lang.String r2 = d(r2, r5)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L16
            return r2
        L39:
            boolean r0 = r4 instanceof org.json.JSONArray
            if (r0 == 0) goto L61
            r0 = 0
        L3e:
            r1 = r4
            org.json.JSONArray r1 = (org.json.JSONArray) r1
            int r2 = r1.length()
            if (r0 >= r2) goto L61
            java.lang.Object r1 = r1.opt(r0)
            boolean r2 = r1 instanceof org.json.JSONObject
            if (r2 != 0) goto L53
            boolean r2 = r1 instanceof org.json.JSONArray
            if (r2 == 0) goto L5e
        L53:
            java.lang.String r1 = d(r1, r5)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L5e
            return r1
        L5e:
            int r0 = r0 + 1
            goto L3e
        L61:
            r4 = 0
            return r4
    }
}
