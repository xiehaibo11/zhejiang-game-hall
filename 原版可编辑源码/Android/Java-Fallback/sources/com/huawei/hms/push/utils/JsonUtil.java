package com.huawei.hms.push.utils;

public class JsonUtil {
    public JsonUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(org.json.JSONObject r3, java.lang.String r4, java.lang.Object r5, android.os.Bundle r6) {
            java.lang.String r0 = "JsonUtil"
            if (r5 != 0) goto La
            java.lang.String r3 = "transfer jsonObject to bundle failed, defaultValue is null."
            com.huawei.hms.support.log.HMSLog.w(r0, r3)
            return
        La:
            boolean r1 = r5 instanceof java.lang.String
            r2 = 0
            if (r1 == 0) goto L21
            java.lang.String r5 = (java.lang.String) r5
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L18
            goto L19
        L18:
            r2 = r5
        L19:
            java.lang.String r3 = getString(r3, r4, r2)
            r6.putString(r4, r3)
            goto L71
        L21:
            boolean r1 = r5 instanceof java.lang.Integer
            if (r1 == 0) goto L33
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            int r3 = getInt(r3, r4, r5)
            r6.putInt(r4, r3)
            goto L71
        L33:
            boolean r1 = r5 instanceof int[]
            if (r1 == 0) goto L46
            int[] r5 = (int[]) r5
            int r0 = r5.length
            if (r0 != 0) goto L3d
            goto L3e
        L3d:
            r2 = r5
        L3e:
            int[] r3 = getIntArray(r3, r4, r2)
            r6.putIntArray(r4, r3)
            goto L71
        L46:
            boolean r1 = r5 instanceof long[]
            if (r1 == 0) goto L59
            long[] r5 = (long[]) r5
            int r0 = r5.length
            if (r0 != 0) goto L50
            goto L51
        L50:
            r2 = r5
        L51:
            long[] r3 = getLongArray(r3, r4, r2)
            r6.putLongArray(r4, r3)
            goto L71
        L59:
            boolean r1 = r5 instanceof java.lang.String[]
            if (r1 == 0) goto L6c
            java.lang.String[] r5 = (java.lang.String[]) r5
            int r0 = r5.length
            if (r0 != 0) goto L63
            goto L64
        L63:
            r2 = r5
        L64:
            java.lang.String[] r3 = getStringArray(r3, r4, r2)
            r6.putStringArray(r4, r3)
            goto L71
        L6c:
            java.lang.String r3 = "transfer jsonObject to bundle failed, invalid data type."
            com.huawei.hms.support.log.HMSLog.w(r0, r3)
        L71:
            return
    }

    public static int getInt(org.json.JSONObject r1, java.lang.String r2, int r3) {
            if (r1 == 0) goto L28
            boolean r0 = r1.has(r2)     // Catch: org.json.JSONException -> Ld
            if (r0 == 0) goto L28
            int r3 = r1.getInt(r2)     // Catch: org.json.JSONException -> Ld
            goto L28
        Ld:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "JSONException: get "
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = " error."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.w(r2, r1)
        L28:
            return r3
    }

    public static int[] getIntArray(org.json.JSONObject r3, java.lang.String r4, int[] r5) {
            r0 = 0
            if (r3 == 0) goto L44
            boolean r1 = r3.has(r4)     // Catch: org.json.JSONException -> L29
            if (r1 == 0) goto L44
            org.json.JSONArray r3 = r3.getJSONArray(r4)     // Catch: org.json.JSONException -> L29
            int r1 = r3.length()     // Catch: org.json.JSONException -> L29
            int[] r0 = new int[r1]     // Catch: org.json.JSONException -> L29
            r1 = 0
        L14:
            int r2 = r3.length()     // Catch: org.json.JSONException -> L29
            if (r1 >= r2) goto L44
            java.lang.Object r2 = r3.get(r1)     // Catch: org.json.JSONException -> L29
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: org.json.JSONException -> L29
            int r2 = r2.intValue()     // Catch: org.json.JSONException -> L29
            r0[r1] = r2     // Catch: org.json.JSONException -> L29
            int r1 = r1 + 1
            goto L14
        L29:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "JSONException: get "
            r3.append(r1)
            r3.append(r4)
            java.lang.String r4 = " error."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.w(r4, r3)
        L44:
            if (r0 != 0) goto L47
            goto L48
        L47:
            r5 = r0
        L48:
            return r5
    }

    public static org.json.JSONArray getIntJsonArray(int[] r4) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            if (r4 == 0) goto L17
            int r1 = r4.length
            if (r1 != 0) goto Lb
            goto L17
        Lb:
            int r1 = r4.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L17
            r3 = r4[r2]
            r0.put(r3)
            int r2 = r2 + 1
            goto Ld
        L17:
            return r0
    }

    public static long[] getLongArray(org.json.JSONObject r4, java.lang.String r5, long[] r6) {
            r0 = 0
            if (r4 == 0) goto L3e
            boolean r1 = r4.has(r5)     // Catch: org.json.JSONException -> L23
            if (r1 == 0) goto L3e
            org.json.JSONArray r4 = r4.getJSONArray(r5)     // Catch: org.json.JSONException -> L23
            int r1 = r4.length()     // Catch: org.json.JSONException -> L23
            long[] r0 = new long[r1]     // Catch: org.json.JSONException -> L23
            r1 = 0
        L14:
            int r2 = r4.length()     // Catch: org.json.JSONException -> L23
            if (r1 >= r2) goto L3e
            long r2 = r4.getLong(r1)     // Catch: org.json.JSONException -> L23
            r0[r1] = r2     // Catch: org.json.JSONException -> L23
            int r1 = r1 + 1
            goto L14
        L23:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "JSONException: get "
            r4.append(r1)
            r4.append(r5)
            java.lang.String r5 = " error."
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.w(r5, r4)
        L3e:
            if (r0 != 0) goto L41
            goto L42
        L41:
            r6 = r0
        L42:
            return r6
    }

    public static org.json.JSONArray getLongJsonArray(long[] r5) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            if (r5 == 0) goto L17
            int r1 = r5.length
            if (r1 != 0) goto Lb
            goto L17
        Lb:
            int r1 = r5.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L17
            r3 = r5[r2]
            r0.put(r3)
            int r2 = r2 + 1
            goto Ld
        L17:
            return r0
    }

    public static java.lang.String getString(org.json.JSONObject r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L32
            boolean r0 = r1.has(r2)     // Catch: org.json.JSONException -> L17
            if (r0 == 0) goto L32
            java.lang.Object r0 = r1.get(r2)     // Catch: org.json.JSONException -> L17
            if (r0 == 0) goto L32
            java.lang.Object r1 = r1.get(r2)     // Catch: org.json.JSONException -> L17
            java.lang.String r3 = java.lang.String.valueOf(r1)     // Catch: org.json.JSONException -> L17
            goto L32
        L17:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "JSONException: get "
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = " error."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.w(r2, r1)
        L32:
            return r3
    }

    public static java.lang.String[] getStringArray(org.json.JSONObject r2, java.lang.String r3, java.lang.String[] r4) {
            r4 = 0
            if (r2 == 0) goto L40
            boolean r0 = r2.has(r3)     // Catch: org.json.JSONException -> L25
            if (r0 == 0) goto L40
            org.json.JSONArray r2 = r2.getJSONArray(r3)     // Catch: org.json.JSONException -> L25
            int r0 = r2.length()     // Catch: org.json.JSONException -> L25
            java.lang.String[] r4 = new java.lang.String[r0]     // Catch: org.json.JSONException -> L25
            r0 = 0
        L14:
            int r1 = r2.length()     // Catch: org.json.JSONException -> L25
            if (r0 >= r1) goto L40
            java.lang.Object r1 = r2.get(r0)     // Catch: org.json.JSONException -> L25
            java.lang.String r1 = (java.lang.String) r1     // Catch: org.json.JSONException -> L25
            r4[r0] = r1     // Catch: org.json.JSONException -> L25
            int r0 = r0 + 1
            goto L14
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "JSONException: get "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r3 = " error."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.w(r3, r2)
        L40:
            return r4
    }

    public static org.json.JSONArray getStringJsonArray(java.lang.String[] r4) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            if (r4 == 0) goto L17
            int r1 = r4.length
            if (r1 != 0) goto Lb
            goto L17
        Lb:
            int r1 = r4.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L17
            r3 = r4[r2]
            r0.put(r3)
            int r2 = r2 + 1
            goto Ld
        L17:
            return r0
    }

    public static void transferJsonObjectToBundle(org.json.JSONObject r2, android.os.Bundle r3, java.util.HashMap<java.lang.String, java.lang.Object> r4) {
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L22
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            a(r2, r1, r0, r3)
            goto L8
        L22:
            return
    }
}
