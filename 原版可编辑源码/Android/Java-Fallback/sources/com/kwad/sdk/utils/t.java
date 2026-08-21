package com.kwad.sdk.utils;

public final class t {
    public static <T> org.json.JSONArray I(java.util.List<T> r3) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            if (r3 == 0) goto L52
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto Le
            goto L52
        Le:
            java.util.Iterator r3 = r3.iterator()
        L12:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L52
            java.lang.Object r1 = r3.next()
            if (r1 == 0) goto L12
            boolean r2 = r1 instanceof org.json.JSONObject
            if (r2 == 0) goto L26
        L22:
            r0.put(r1)
            goto L12
        L26:
            boolean r2 = r1 instanceof com.kwad.sdk.core.b
            if (r2 == 0) goto L31
            com.kwad.sdk.core.b r1 = (com.kwad.sdk.core.b) r1
            org.json.JSONObject r1 = r1.toJson()
            goto L22
        L31:
            boolean r2 = r1 instanceof java.lang.String
            if (r2 == 0) goto L36
            goto L22
        L36:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "<T> now suppprt type: "
            r0.<init>(r2)
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L52:
            return r0
    }

    public static <T extends com.kwad.sdk.core.b> java.util.List<T> a(java.lang.String r4, com.kwad.sdk.core.c<T> r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L29
            r1.<init>(r4)     // Catch: java.lang.Exception -> L29
            r4 = 0
        L12:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L29
            if (r4 >= r2) goto L2d
            org.json.JSONObject r2 = r1.getJSONObject(r4)     // Catch: java.lang.Exception -> L29
            com.kwad.sdk.core.b r3 = r5.yV()     // Catch: java.lang.Exception -> L29
            r3.parseJson(r2)     // Catch: java.lang.Exception -> L29
            r0.add(r3)     // Catch: java.lang.Exception -> L29
            int r4 = r4 + 1
            goto L12
        L29:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L2d:
            return r0
    }

    public static void a(org.json.JSONObject r0, java.lang.String r1, com.kwad.sdk.core.b r2) {
            if (r0 != 0) goto L3
            return
        L3:
            if (r2 != 0) goto L6
            return
        L6:
            org.json.JSONObject r2 = r2.toJson()     // Catch: org.json.JSONException -> Ld
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Ld
        Ld:
            return
    }

    public static <T> java.util.List<T> fw(java.lang.String r0) {
            java.util.List r0 = com.kwad.sdk.utils.u.fw(r0)
            return r0
    }

    public static <T> java.util.List<T> h(org.json.JSONArray r0) {
            java.util.List r0 = com.kwad.sdk.utils.u.h(r0)
            return r0
    }

    public static void merge(org.json.JSONObject r0, org.json.JSONObject r1) {
            com.kwad.sdk.utils.u.merge(r0, r1)
            return
    }

    public static java.util.Map<java.lang.String, java.lang.String> parseJSON2MapString(java.lang.String r0) {
            java.util.Map r0 = com.kwad.sdk.utils.u.parseJSON2MapString(r0)
            return r0
    }

    public static org.json.JSONObject parseMap2JSON(java.util.Map<java.lang.String, java.lang.String> r0) {
            org.json.JSONObject r0 = com.kwad.sdk.utils.u.parseMap2JSON(r0)
            return r0
    }

    public static void putValue(org.json.JSONArray r0, org.json.JSONObject r1) {
            r0.put(r1)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, byte r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, double r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, float r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, int r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, long r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, java.lang.String r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r5, java.lang.String r6, java.util.List<?> r7) {
            if (r5 != 0) goto L3
            return
        L3:
            if (r7 != 0) goto L6
            return
        L6:
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
            java.util.Iterator r7 = r7.iterator()
            r2 = 1
        L11:
            boolean r3 = r7.hasNext()
            if (r3 == 0) goto L5a
            java.lang.Object r3 = r7.next()
            boolean r4 = r3 instanceof com.kwad.sdk.core.b
            if (r4 == 0) goto L2a
            com.kwad.sdk.core.b r3 = (com.kwad.sdk.core.b) r3
            org.json.JSONObject r1 = r3.toJson()
            putValue(r0, r1)
        L28:
            r1 = r2
            goto L11
        L2a:
            boolean r4 = r3 instanceof java.lang.String
            if (r4 != 0) goto L56
            boolean r4 = r3 instanceof java.lang.Integer
            if (r4 != 0) goto L56
            boolean r4 = r3 instanceof java.lang.Long
            if (r4 != 0) goto L56
            boolean r4 = r3 instanceof org.json.JSONObject
            if (r4 != 0) goto L56
            boolean r4 = r3 instanceof org.json.JSONArray
            if (r4 != 0) goto L56
            boolean r4 = r3 instanceof java.lang.Double
            if (r4 != 0) goto L56
            boolean r4 = r3 instanceof java.lang.Boolean
            if (r4 == 0) goto L47
            goto L56
        L47:
            boolean r4 = r3 instanceof java.lang.Float
            if (r4 == 0) goto L5a
            java.lang.Float r3 = (java.lang.Float) r3     // Catch: org.json.JSONException -> L11
            float r3 = r3.floatValue()     // Catch: org.json.JSONException -> L11
            double r3 = (double) r3     // Catch: org.json.JSONException -> L11
            r0.put(r3)     // Catch: org.json.JSONException -> L11
            goto L28
        L56:
            r0.put(r3)
            goto L28
        L5a:
            if (r1 == 0) goto L5f
            putValue(r5, r6, r0)
        L5f:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, org.json.JSONArray r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, org.json.JSONObject r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, boolean r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.u.putValue(r0, r1, r2)
            return
    }

    public static org.json.JSONArray toJsonArray(java.util.List<java.lang.String> r0) {
            org.json.JSONArray r0 = com.kwad.sdk.utils.u.toJsonArray(r0)
            return r0
    }
}
