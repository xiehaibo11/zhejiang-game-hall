package com.huawei.hms.hatool;

public class w {
    public static java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> a(android.content.Context r0, java.lang.String r1) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.util.Map r0 = com.huawei.hms.hatool.g0.a(r0, r1)
            b(r0)
            java.util.Map r0 = a(r0)
            return r0
    }

    public static java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "alltype"
            boolean r0 = r0.equals(r5)
            java.lang.String r1 = "cached_v2_1"
            java.lang.String r2 = "stat_v2_1"
            if (r0 != 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L13
            goto L20
        L13:
            java.lang.String r4 = com.huawei.hms.hatool.s0.a(r4, r5)
            java.util.Map r5 = b(r3, r2, r4)
            java.util.Map r3 = b(r3, r1, r4)
            goto L2f
        L20:
            java.lang.String r4 = "hmsSdk"
            java.lang.String r5 = "read all event records"
            com.huawei.hms.hatool.y.c(r4, r5)
            java.util.Map r5 = a(r3, r2)
            java.util.Map r3 = a(r3, r1)
        L2f:
            java.util.Map r3 = a(r5, r3)
            return r3
    }

    public static java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> a(java.util.Map<java.lang.String, ?> r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        Ld:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L31
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r1.getValue()
            boolean r3 = r3 instanceof java.lang.String
            if (r3 == 0) goto Ld
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            a(r2, r1, r0)
            goto Ld
        L31:
            return r0
    }

    public static java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> a(java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> r5, java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> r6) {
            int r0 = r5.size()
            if (r0 != 0) goto L12
            int r0 = r6.size()
            if (r0 != 0) goto L12
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            return r5
        L12:
            int r0 = r5.size()
            if (r0 != 0) goto L19
            return r6
        L19:
            int r0 = r6.size()
            if (r0 != 0) goto L20
            return r5
        L20:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L2d:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L5a
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.util.List r1 = (java.util.List) r1
            java.lang.Object r3 = r6.get(r2)
            java.util.List r3 = (java.util.List) r3
            if (r3 == 0) goto L56
            int r4 = r3.size()
            if (r4 <= 0) goto L56
            r1.addAll(r3)
        L56:
            r0.put(r2, r1)
            goto L2d
        L5a:
            return r0
    }

    public static void a(java.lang.String r5, java.lang.String r6, java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> r7) {
            java.lang.String r0 = "hmsSdk"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: org.json.JSONException -> L3d
            if (r2 == 0) goto Le
            return
        Le:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L3d
            r2.<init>(r6)     // Catch: org.json.JSONException -> L3d
            int r6 = r2.length()
            if (r6 != 0) goto L1a
            return
        L1a:
            r6 = 0
        L1b:
            int r3 = r2.length()
            if (r6 >= r3) goto L39
            com.huawei.hms.hatool.q r3 = new com.huawei.hms.hatool.q
            r3.<init>()
            org.json.JSONObject r4 = r2.getJSONObject(r6)     // Catch: org.json.JSONException -> L31
            r3.a(r4)     // Catch: org.json.JSONException -> L31
            r1.add(r3)     // Catch: org.json.JSONException -> L31
            goto L36
        L31:
            java.lang.String r3 = "JSON Exception happened when create data for report - readDataToRecord"
            com.huawei.hms.hatool.y.e(r0, r3)
        L36:
            int r6 = r6 + 1
            goto L1b
        L39:
            r7.put(r5, r1)
            return
        L3d:
            java.lang.String r5 = "When events turn to JSONArray,JSON Exception has happened"
            com.huawei.hms.hatool.y.e(r0, r5)
            return
    }

    public static java.util.Map<java.lang.String, java.util.List<com.huawei.hms.hatool.q>> b(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = com.huawei.hms.hatool.g0.a(r1, r2, r3, r0)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            a(r3, r1, r2)
            return r2
    }

    public static void b(java.util.Map<java.lang.String, ?> r2) {
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
            java.util.Set r0 = com.huawei.hms.hatool.b.a()
            java.util.Set r0 = com.huawei.hms.hatool.s0.a(r0)
        L10:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r2.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getKey()
            boolean r1 = r0.contains(r1)
            if (r1 != 0) goto L10
            r2.remove()
            goto L10
        L2a:
            return
    }
}
