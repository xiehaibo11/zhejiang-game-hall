package com.kwad.components.offline.api.core.utils;

public class JsonHelper {
    public JsonHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> java.util.List<T> jsonArrayToList(java.lang.String r2, java.lang.Class<T> r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L16
            r1.<init>(r2)     // Catch: org.json.JSONException -> L16
            java.util.List r0 = jsonArrayToList(r1, r3)     // Catch: org.json.JSONException -> L16
            goto L1a
        L16:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L1a:
            return r0
    }

    public static <T> java.util.List<T> jsonArrayToList(org.json.JSONArray r2, java.lang.Class<T> r3) {
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            if (r2 == 0) goto L25
            int r0 = r2.length()
            if (r0 > 0) goto Le
            goto L25
        Le:
            r0 = 0
        Lf:
            int r1 = r2.length()     // Catch: java.lang.Exception -> L21
            if (r0 >= r1) goto L25
            java.lang.Object r1 = r2.get(r0)     // Catch: java.lang.Exception -> L21
            if (r1 == 0) goto L1e
            r3.add(r1)     // Catch: java.lang.Exception -> L21
        L1e:
            int r0 = r0 + 1
            goto Lf
        L21:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L25:
            return r3
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
            r3.put(r1, r2)     // Catch: org.json.JSONException -> L9
            goto L9
        L21:
            return
    }

    public static java.util.Map<java.lang.String, java.lang.String> parseJSON2MapString(java.lang.String r1) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> La
            r0.<init>(r1)     // Catch: org.json.JSONException -> La
            java.util.Map r1 = parseJSON2MapString(r0)     // Catch: org.json.JSONException -> La
            return r1
        La:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> parseJSON2MapString(org.json.JSONObject r6) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Iterator r1 = r6.keys()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = ""
            java.lang.String r4 = r6.optString(r2, r3)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L2b
            java.lang.String r5 = "null"
            boolean r5 = android.text.TextUtils.equals(r5, r4)
            if (r5 == 0) goto L2a
            goto L2b
        L2a:
            r3 = r4
        L2b:
            r0.put(r2, r3)
            goto L9
        L2f:
            return r0
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

    public static void putValue(org.json.JSONArray r0, org.json.JSONObject r1) {
            r0.put(r1)
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, byte r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, double r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r2, java.lang.String r3, float r4) {
            double r0 = (double) r4
            r2.put(r3, r0)     // Catch: org.json.JSONException -> L4
        L4:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, int r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, long r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r2) {
            if (r2 != 0) goto L3
            return
        L3:
            org.json.JSONObject r2 = r2.toJson()     // Catch: org.json.JSONException -> La
            r0.put(r1, r2)     // Catch: org.json.JSONException -> La
        La:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, java.lang.String r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r5, java.lang.String r6, java.util.List<?> r7) {
            if (r7 != 0) goto L3
            return
        L3:
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
            java.util.Iterator r7 = r7.iterator()
            r2 = 1
        Le:
            boolean r3 = r7.hasNext()
            if (r3 == 0) goto L57
            java.lang.Object r3 = r7.next()
            boolean r4 = r3 instanceof com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse
            if (r4 == 0) goto L27
            com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r3 = (com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse) r3
            org.json.JSONObject r1 = r3.toJson()
            putValue(r0, r1)
        L25:
            r1 = r2
            goto Le
        L27:
            boolean r4 = r3 instanceof java.lang.String
            if (r4 != 0) goto L53
            boolean r4 = r3 instanceof java.lang.Integer
            if (r4 != 0) goto L53
            boolean r4 = r3 instanceof java.lang.Long
            if (r4 != 0) goto L53
            boolean r4 = r3 instanceof org.json.JSONObject
            if (r4 != 0) goto L53
            boolean r4 = r3 instanceof org.json.JSONArray
            if (r4 != 0) goto L53
            boolean r4 = r3 instanceof java.lang.Double
            if (r4 != 0) goto L53
            boolean r4 = r3 instanceof java.lang.Boolean
            if (r4 == 0) goto L44
            goto L53
        L44:
            boolean r4 = r3 instanceof java.lang.Float
            if (r4 == 0) goto L57
            java.lang.Float r3 = (java.lang.Float) r3     // Catch: org.json.JSONException -> Le
            float r3 = r3.floatValue()     // Catch: org.json.JSONException -> Le
            double r3 = (double) r3     // Catch: org.json.JSONException -> Le
            r0.put(r3)     // Catch: org.json.JSONException -> Le
            goto L25
        L53:
            r0.put(r3)
            goto L25
        L57:
            if (r1 == 0) goto L5c
            putValue(r5, r6, r0)
        L5c:
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
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L14
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
            r1.put(r2, r3)     // Catch: org.json.JSONException -> Le
        Le:
            return
    }

    public static void putValue(org.json.JSONObject r1, java.lang.String r2, boolean r3) {
            if (r1 == 0) goto Lc
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            goto Lc
        L9:
            r1.put(r2, r3)     // Catch: org.json.JSONException -> Lc
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

    public static <T extends com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse> org.json.JSONArray toJsonArrayForJsonParseList(java.util.List<T> r2) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.next()
            com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1 = (com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse) r1
            org.json.JSONObject r1 = r1.toJson()
            r0.put(r1)
            goto L9
        L1d:
            return r0
    }
}
