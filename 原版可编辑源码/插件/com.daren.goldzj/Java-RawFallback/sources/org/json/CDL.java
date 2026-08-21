package org.json;

public class CDL {
    public CDL() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getValue(org.json.JSONTokener r4) throws org.json.JSONException {
        L0:
            char r0 = r4.next()
            r1 = 32
            if (r0 == r1) goto L0
            r1 = 9
            if (r0 == r1) goto L0
            if (r0 == 0) goto L61
            r1 = 34
            if (r0 == r1) goto L28
            r1 = 39
            if (r0 == r1) goto L28
            r1 = 44
            if (r0 == r1) goto L22
            r4.back()
            java.lang.String r4 = r4.nextTo(r1)
            return r4
        L22:
            r4.back()
            java.lang.String r4 = ""
            return r4
        L28:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
        L2d:
            char r2 = r4.next()
            if (r2 != r0) goto L38
            java.lang.String r4 = r1.toString()
            return r4
        L38:
            if (r2 == 0) goto L46
            r3 = 10
            if (r2 == r3) goto L46
            r3 = 13
            if (r2 == r3) goto L46
            r1.append(r2)
            goto L2d
        L46:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Missing close quote '"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = "'."
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            org.json.JSONException r4 = r4.syntaxError(r0)
            throw r4
        L61:
            r4 = 0
            return r4
    }

    public static org.json.JSONArray rowToJSONArray(org.json.JSONTokener r5) throws org.json.JSONException {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
        L5:
            java.lang.String r1 = getValue(r5)
            char r2 = r5.next()
            if (r1 == 0) goto L5e
            int r3 = r0.length()
            r4 = 44
            if (r3 != 0) goto L20
            int r3 = r1.length()
            if (r3 != 0) goto L20
            if (r2 == r4) goto L20
            goto L5e
        L20:
            r0.put(r1)
        L23:
            if (r2 != r4) goto L26
            goto L5
        L26:
            r1 = 32
            if (r2 == r1) goto L59
            r1 = 10
            if (r2 == r1) goto L58
            r1 = 13
            if (r2 == r1) goto L58
            if (r2 != 0) goto L35
            goto L58
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Bad character '"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = "' ("
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = ")."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
        L58:
            return r0
        L59:
            char r2 = r5.next()
            goto L23
        L5e:
            r5 = 0
            return r5
    }

    public static org.json.JSONObject rowToJSONObject(org.json.JSONArray r0, org.json.JSONTokener r1) throws org.json.JSONException {
            org.json.JSONArray r1 = rowToJSONArray(r1)
            if (r1 == 0) goto Lb
            org.json.JSONObject r0 = r1.toJSONObject(r0)
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public static java.lang.String rowToString(org.json.JSONArray r9) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            r2 = 0
        L7:
            int r3 = r9.length()
            r4 = 10
            if (r2 >= r3) goto L6c
            r3 = 44
            if (r2 <= 0) goto L16
            r0.append(r3)
        L16:
            java.lang.Object r5 = r9.opt(r2)
            if (r5 == 0) goto L69
            java.lang.String r5 = r5.toString()
            int r6 = r5.length()
            if (r6 <= 0) goto L66
            int r3 = r5.indexOf(r3)
            r6 = 34
            if (r3 >= 0) goto L48
            int r3 = r5.indexOf(r4)
            if (r3 >= 0) goto L48
            r3 = 13
            int r3 = r5.indexOf(r3)
            if (r3 >= 0) goto L48
            int r3 = r5.indexOf(r1)
            if (r3 >= 0) goto L48
            char r3 = r5.charAt(r1)
            if (r3 != r6) goto L66
        L48:
            r0.append(r6)
            int r3 = r5.length()
            r4 = 0
        L50:
            if (r4 >= r3) goto L62
            char r7 = r5.charAt(r4)
            r8 = 32
            if (r7 < r8) goto L5f
            if (r7 == r6) goto L5f
            r0.append(r7)
        L5f:
            int r4 = r4 + 1
            goto L50
        L62:
            r0.append(r6)
            goto L69
        L66:
            r0.append(r5)
        L69:
            int r2 = r2 + 1
            goto L7
        L6c:
            r0.append(r4)
            java.lang.String r9 = r0.toString()
            return r9
    }

    public static org.json.JSONArray toJSONArray(java.lang.String r1) throws org.json.JSONException {
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r1)
            org.json.JSONArray r1 = toJSONArray(r0)
            return r1
    }

    public static org.json.JSONArray toJSONArray(org.json.JSONArray r1, java.lang.String r2) throws org.json.JSONException {
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r2)
            org.json.JSONArray r1 = toJSONArray(r1, r0)
            return r1
    }

    public static org.json.JSONArray toJSONArray(org.json.JSONArray r3, org.json.JSONTokener r4) throws org.json.JSONException {
            r0 = 0
            if (r3 == 0) goto L21
            int r1 = r3.length()
            if (r1 != 0) goto La
            goto L21
        La:
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
        Lf:
            org.json.JSONObject r2 = rowToJSONObject(r3, r4)
            if (r2 != 0) goto L1d
            int r3 = r1.length()
            if (r3 != 0) goto L1c
            return r0
        L1c:
            return r1
        L1d:
            r1.put(r2)
            goto Lf
        L21:
            return r0
    }

    public static org.json.JSONArray toJSONArray(org.json.JSONTokener r1) throws org.json.JSONException {
            org.json.JSONArray r0 = rowToJSONArray(r1)
            org.json.JSONArray r1 = toJSONArray(r0, r1)
            return r1
    }

    public static java.lang.String toString(org.json.JSONArray r3) throws org.json.JSONException {
            r0 = 0
            org.json.JSONObject r0 = r3.optJSONObject(r0)
            if (r0 == 0) goto L25
            org.json.JSONArray r0 = r0.names()
            if (r0 == 0) goto L25
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = rowToString(r0)
            r1.append(r2)
            java.lang.String r3 = toString(r0, r3)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            return r3
        L25:
            r3 = 0
            return r3
    }

    public static java.lang.String toString(org.json.JSONArray r3, org.json.JSONArray r4) throws org.json.JSONException {
            if (r3 == 0) goto L2e
            int r0 = r3.length()
            if (r0 != 0) goto L9
            goto L2e
        L9:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        Lf:
            int r2 = r4.length()
            if (r1 >= r2) goto L29
            org.json.JSONObject r2 = r4.optJSONObject(r1)
            if (r2 == 0) goto L26
            org.json.JSONArray r2 = r2.toJSONArray(r3)
            java.lang.String r2 = rowToString(r2)
            r0.append(r2)
        L26:
            int r1 = r1 + 1
            goto Lf
        L29:
            java.lang.String r3 = r0.toString()
            return r3
        L2e:
            r3 = 0
            return r3
    }
}
