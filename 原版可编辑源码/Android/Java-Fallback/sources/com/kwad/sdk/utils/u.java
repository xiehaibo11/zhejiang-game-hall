package com.kwad.sdk.utils;

public final class u {
    public static void a(org.json.JSONObject r0, java.lang.String r1, java.lang.Object r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static <T> java.util.List<T> fw(java.lang.String r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            java.util.List r2 = h(r1)     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return r0
    }

    public static <T> java.util.List<T> h(org.json.JSONArray r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r3 != 0) goto L8
            return r0
        L8:
            r1 = 0
        L9:
            int r2 = r3.length()     // Catch: java.lang.Throwable -> L1b
            if (r1 >= r2) goto L1f
            java.lang.Object r2 = r3.get(r1)     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L18
            r0.add(r2)     // Catch: java.lang.Throwable -> L1b
        L18:
            int r1 = r1 + 1
            goto L9
        L1b:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L1f:
            return r0
    }

    public static void merge(org.json.JSONObject r3, org.json.JSONObject r4) {
            if (r3 == 0) goto L21
            if (r4 != 0) goto L5
            goto L21
        L5:
            java.util.Iterator r0 = r4.keys()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = r1.toString()
            java.lang.Object r2 = r4.opt(r1)
            if (r2 == 0) goto L9
            r3.put(r1, r2)     // Catch: java.lang.Throwable -> L9
            goto L9
        L21:
            return
    }

    public static java.util.Map<java.lang.String, java.lang.String> parseJSON2MapString(java.lang.String r6) {
            java.lang.String r0 = ""
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L33
            r2.<init>(r6)     // Catch: org.json.JSONException -> L33
            java.util.Iterator r6 = r2.keys()     // Catch: org.json.JSONException -> L33
        L10:
            boolean r3 = r6.hasNext()     // Catch: org.json.JSONException -> L33
            if (r3 == 0) goto L33
            java.lang.Object r3 = r6.next()     // Catch: org.json.JSONException -> L33
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L33
            java.lang.String r4 = r2.optString(r3, r0)     // Catch: org.json.JSONException -> L33
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L33
            if (r5 != 0) goto L2e
            java.lang.String r5 = "null"
            boolean r5 = android.text.TextUtils.equals(r5, r4)     // Catch: org.json.JSONException -> L33
            if (r5 == 0) goto L2f
        L2e:
            r4 = r0
        L2f:
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L33
            goto L10
        L33:
            return r1
    }

    public static org.json.JSONObject parseMap2JSON(java.util.Map<java.lang.String, java.lang.String> r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            if (r3 == 0) goto L30
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto Le
            goto L30
        Le:
            java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Exception -> L30
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L30
        L16:
            boolean r1 = r3.hasNext()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L30
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Exception -> L30
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> L30
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L30
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L30
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L30
            goto L16
        L30:
            return r0
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, byte r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, double r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r2, java.lang.String r3, float r4) {
            double r0 = (double) r4
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> L4
        L4:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, int r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, long r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, java.lang.String r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r1, java.lang.String r2, org.json.JSONArray r3) {
            if (r3 == 0) goto L14
            int r0 = r3.length()
            if (r0 == 0) goto L14
            if (r1 == 0) goto L14
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L11
            goto L14
        L11:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L14
        L14:
            return
    }

    public static void putValue(org.json.JSONObject r1, java.lang.String r2, org.json.JSONObject r3) {
            if (r3 == 0) goto Le
            if (r1 == 0) goto Le
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            goto Le
        Lb:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }

    public static void putValue(org.json.JSONObject r1, java.lang.String r2, boolean r3) {
            if (r1 == 0) goto Lc
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            goto Lc
        L9:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    public static org.json.JSONArray toJsonArray(java.util.List<java.lang.String> r2) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r2.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.put(r1)
            goto L9
        L19:
            return r0
    }
}
