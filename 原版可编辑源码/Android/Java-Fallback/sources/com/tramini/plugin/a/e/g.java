package com.tramini.plugin.a.e;

public final class g extends com.tramini.plugin.a.e.f {
    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22, org.json.JSONObject r23, org.json.JSONArray r24) {
            r0 = r18
            if (r0 == 0) goto L12e
            java.lang.Class r1 = r18.getClass()
            java.lang.String r1 = r1.getName()
            r9 = r20
            boolean r1 = r1.startsWith(r9)
            if (r1 == 0) goto L12e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = r19
            r1.append(r2)
            java.lang.Class r2 = r18.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ","
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L12e
            r2.<init>()     // Catch: java.lang.Throwable -> L12e
            java.lang.Class r3 = r18.getClass()     // Catch: java.lang.Throwable -> L12e
            a(r3, r2)     // Catch: java.lang.Throwable -> L12e
            int r10 = r2.size()     // Catch: java.lang.Throwable -> L12e
            java.lang.reflect.Field[] r11 = new java.lang.reflect.Field[r10]     // Catch: java.lang.Throwable -> L12e
            r2.toArray(r11)     // Catch: java.lang.Throwable -> L12e
            if (r10 == 0) goto L12e
            r12 = 0
            r13 = r12
        L4b:
            if (r13 >= r10) goto L12e
            r2 = r11[r13]     // Catch: java.lang.Throwable -> L12e
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L12e
            r14 = r21
            java.lang.reflect.Method[] r4 = c(r2, r14)     // Catch: java.lang.Throwable -> L12e
            if (r2 == 0) goto Lfd
            if (r4 == 0) goto Lfd
            int r5 = r4.length     // Catch: java.lang.Throwable -> L12e
            r6 = r12
        L63:
            if (r6 >= r5) goto Lf6
            r7 = r4[r6]     // Catch: java.lang.Throwable -> L12e
            r7.setAccessible(r3)     // Catch: java.lang.Throwable -> L12e
            java.lang.Object[] r8 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> Lde
            java.lang.Object r7 = r7.invoke(r2, r8)     // Catch: java.lang.Throwable -> Lde
            boolean r8 = r7 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> Lde
            if (r8 == 0) goto Lde
            r8 = r7
            org.json.JSONObject r8 = (org.json.JSONObject) r8     // Catch: java.lang.Throwable -> Lde
            r15 = r22
            boolean r8 = r8.has(r15)     // Catch: java.lang.Throwable -> Le0
            if (r8 != 0) goto L80
            goto Le0
        L80:
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le0
            r8.<init>()     // Catch: java.lang.Throwable -> Le0
            r3 = r12
        L86:
            int r12 = r24.length()     // Catch: java.lang.Throwable -> Le0
            if (r3 >= r12) goto Lce
            r12 = r24
            java.lang.String r0 = r12.optString(r3)     // Catch: java.lang.Throwable -> Lbd
            r9 = r23
            r16 = r4
            java.lang.String r4 = r9.optString(r0)     // Catch: java.lang.Throwable -> Lc1
            r17 = r5
            java.lang.String r5 = "all"
            boolean r5 = android.text.TextUtils.equals(r4, r5)     // Catch: java.lang.Throwable -> Lc3
            if (r5 == 0) goto Lac
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Throwable -> Lc3
            r8.put(r0, r4)     // Catch: java.lang.Throwable -> Lc3
            goto Lc3
        Lac:
            r5 = r7
            org.json.JSONObject r5 = (org.json.JSONObject) r5     // Catch: java.lang.Throwable -> Lc3
            java.lang.String r4 = a(r4, r5)     // Catch: java.lang.Throwable -> Lc3
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc3
            if (r5 != 0) goto Lc3
            r8.put(r0, r4)     // Catch: java.lang.Throwable -> Lc3
            goto Lc3
        Lbd:
            r9 = r23
            r16 = r4
        Lc1:
            r17 = r5
        Lc3:
            int r3 = r3 + 1
            r0 = r18
            r9 = r20
            r4 = r16
            r5 = r17
            goto L86
        Lce:
            r9 = r23
            r12 = r24
            r16 = r4
            r17 = r5
            com.tramini.plugin.a.c.a r0 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> Le8
            r0.<init>()     // Catch: java.lang.Throwable -> Le8
            r0.a = r8     // Catch: java.lang.Throwable -> Le8
            return r0
        Lde:
            r15 = r22
        Le0:
            r9 = r23
            r12 = r24
            r16 = r4
            r17 = r5
        Le8:
            int r6 = r6 + 1
            r3 = 1
            r12 = 0
            r0 = r18
            r9 = r20
            r4 = r16
            r5 = r17
            goto L63
        Lf6:
            r15 = r22
            r9 = r23
            r12 = r24
            goto L125
        Lfd:
            r15 = r22
            r9 = r23
            r12 = r24
            if (r2 == 0) goto L125
            java.lang.Class r0 = r2.getClass()     // Catch: java.lang.Throwable -> L12e
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L12e
            boolean r0 = r1.contains(r0)     // Catch: java.lang.Throwable -> L12e
            if (r0 != 0) goto L125
            r3 = r1
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r23
            r8 = r24
            com.tramini.plugin.a.c.a r0 = a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L12e
            if (r0 == 0) goto L125
            return r0
        L125:
            int r13 = r13 + 1
            r12 = 0
            r0 = r18
            r9 = r20
            goto L4b
        L12e:
            r0 = 0
            return r0
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r8, com.tramini.plugin.a.c.c r9, java.lang.String r10) {
            java.lang.String r0 = "pre"
            java.lang.String r3 = r8.optString(r0)
            java.lang.String r0 = "mena"
            java.lang.String r4 = r8.optString(r0)
            java.lang.String r0 = "agu"
            java.lang.String r5 = r8.optString(r0)
            java.lang.String r0 = "in_na"
            java.lang.String r0 = r8.optString(r0)
            java.lang.Object r1 = a(r0, r10)
            org.json.JSONArray r7 = r9.e
            java.lang.String r2 = ""
            r6 = r8
            com.tramini.plugin.a.c.a r8 = a(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    private static java.lang.String a(java.lang.String r5, org.json.JSONObject r6) {
            java.lang.String r0 = ":"
            java.lang.String[] r5 = r5.split(r0)     // Catch: java.lang.Throwable -> L35
            r0 = 0
            r1 = r0
        L8:
            int r2 = r5.length     // Catch: java.lang.Throwable -> L35
            if (r1 >= r2) goto L35
            int r2 = r1 + 1
            int r3 = r5.length     // Catch: java.lang.Throwable -> L35
            if (r2 != r3) goto L17
            r5 = r5[r1]     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L35
            return r5
        L17:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L24 java.lang.Throwable -> L35
            r4 = r5[r1]     // Catch: org.json.JSONException -> L24 java.lang.Throwable -> L35
            java.lang.String r4 = r6.optString(r4)     // Catch: org.json.JSONException -> L24 java.lang.Throwable -> L35
            r3.<init>(r4)     // Catch: org.json.JSONException -> L24 java.lang.Throwable -> L35
            r6 = r3
            goto L33
        L24:
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L35
            r1 = r5[r1]     // Catch: java.lang.Throwable -> L35
            java.lang.String r6 = r6.optString(r1)     // Catch: java.lang.Throwable -> L35
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L35
            org.json.JSONObject r6 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L35
        L33:
            r1 = r2
            goto L8
        L35:
            java.lang.String r5 = ""
            return r5
    }

    private static java.lang.reflect.Method[] c(java.lang.Object r6, java.lang.String r7) {
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L31
            r0.<init>()     // Catch: java.lang.Exception -> L31
            java.lang.Class r6 = r6.getClass()     // Catch: java.lang.Exception -> L31
            java.lang.reflect.Method[] r6 = r6.getDeclaredMethods()     // Catch: java.lang.Exception -> L31
            int r1 = r6.length     // Catch: java.lang.Exception -> L31
            r2 = 0
            r3 = r2
        L10:
            if (r3 >= r1) goto L28
            r4 = r6[r3]     // Catch: java.lang.Exception -> L31
            java.lang.reflect.Type r5 = r4.getGenericReturnType()     // Catch: java.lang.Exception -> L31
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L31
            boolean r5 = r5.contains(r7)     // Catch: java.lang.Exception -> L31
            if (r5 == 0) goto L25
            r0.add(r4)     // Catch: java.lang.Exception -> L31
        L25:
            int r3 = r3 + 1
            goto L10
        L28:
            java.lang.reflect.Method[] r6 = new java.lang.reflect.Method[r2]     // Catch: java.lang.Exception -> L31
            java.lang.Object[] r6 = r0.toArray(r6)     // Catch: java.lang.Exception -> L31
            java.lang.reflect.Method[] r6 = (java.lang.reflect.Method[]) r6     // Catch: java.lang.Exception -> L31
            return r6
        L31:
            r6 = 0
            return r6
    }
}
