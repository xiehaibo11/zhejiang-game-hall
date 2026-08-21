package org.json;

public class CDL {
    public CDL() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getValue(org.json.JSONTokener r5) throws org.json.JSONException {
        L0:
            char r0 = r5.next()
            r1 = 32
            if (r0 == r1) goto L65
            r1 = 9
            if (r0 == r1) goto L65
            if (r0 == 0) goto L63
            r1 = 34
            if (r0 == r1) goto L28
            r1 = 39
            if (r0 == r1) goto L28
            r1 = 44
            if (r0 == r1) goto L22
            r5.back()
            java.lang.String r1 = r5.nextTo(r1)
            return r1
        L22:
            r5.back()
            java.lang.String r1 = ""
            return r1
        L28:
            r1 = r0
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>()
        L2e:
            char r0 = r5.next()
            if (r0 != r1) goto L3a
        L35:
            java.lang.String r3 = r2.toString()
            return r3
        L3a:
            if (r0 == 0) goto L48
            r3 = 10
            if (r0 == r3) goto L48
            r3 = 13
            if (r0 == r3) goto L48
            r2.append(r0)
            goto L2e
        L48:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Missing close quote '"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = "'."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            org.json.JSONException r3 = r5.syntaxError(r3)
            throw r3
        L63:
            r1 = 0
            return r1
        L65:
            goto L0
    }

    public static org.json.JSONArray rowToJSONArray(org.json.JSONTokener r5) throws org.json.JSONException {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
        L5:
            java.lang.String r1 = getValue(r5)
            char r2 = r5.next()
            if (r1 == 0) goto L5f
            int r3 = r0.length()
            r4 = 44
            if (r3 != 0) goto L20
            int r3 = r1.length()
            if (r3 != 0) goto L20
            if (r2 == r4) goto L20
            goto L5f
        L20:
            r0.put(r1)
        L23:
            if (r2 != r4) goto L27
        L26:
            goto L5
        L27:
            r3 = 32
            if (r2 == r3) goto L5a
            r3 = 10
            if (r2 == r3) goto L59
            r3 = 13
            if (r2 == r3) goto L59
            if (r2 != 0) goto L36
            goto L59
        L36:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Bad character '"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = "' ("
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = ")."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            org.json.JSONException r3 = r5.syntaxError(r3)
            throw r3
        L59:
            return r0
        L5a:
            char r2 = r5.next()
            goto L23
        L5f:
            r3 = 0
            return r3
    }

    public static org.json.JSONObject rowToJSONObject(org.json.JSONArray r2, org.json.JSONTokener r3) throws org.json.JSONException {
            org.json.JSONArray r0 = rowToJSONArray(r3)
            if (r0 == 0) goto Lb
            org.json.JSONObject r1 = r0.toJSONObject(r2)
            goto Lc
        Lb:
            r1 = 0
        Lc:
            return r1
    }

    public static java.lang.String rowToString(org.json.JSONArray r9) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r9.length()
            r3 = 10
            if (r1 >= r2) goto L6c
            r2 = 44
            if (r1 <= 0) goto L15
            r0.append(r2)
        L15:
            java.lang.Object r4 = r9.opt(r1)
            if (r4 == 0) goto L69
            java.lang.String r5 = r4.toString()
            int r6 = r5.length()
            if (r6 <= 0) goto L66
            int r2 = r5.indexOf(r2)
            r6 = 34
            if (r2 >= 0) goto L48
            int r2 = r5.indexOf(r3)
            if (r2 >= 0) goto L48
            r2 = 13
            int r2 = r5.indexOf(r2)
            if (r2 >= 0) goto L48
            r2 = 0
            int r3 = r5.indexOf(r2)
            if (r3 >= 0) goto L48
            char r2 = r5.charAt(r2)
            if (r2 != r6) goto L66
        L48:
            r0.append(r6)
            int r2 = r5.length()
            r3 = 0
        L50:
            if (r3 >= r2) goto L62
            char r7 = r5.charAt(r3)
            r8 = 32
            if (r7 < r8) goto L5f
            if (r7 == r6) goto L5f
            r0.append(r7)
        L5f:
            int r3 = r3 + 1
            goto L50
        L62:
            r0.append(r6)
            goto L69
        L66:
            r0.append(r5)
        L69:
            int r1 = r1 + 1
            goto L6
        L6c:
            r0.append(r3)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static org.json.JSONArray toJSONArray(java.lang.String r1) throws org.json.JSONException {
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r1)
            org.json.JSONArray r0 = toJSONArray(r0)
            return r0
    }

    public static org.json.JSONArray toJSONArray(org.json.JSONArray r1, java.lang.String r2) throws org.json.JSONException {
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r2)
            org.json.JSONArray r0 = toJSONArray(r1, r0)
            return r0
    }

    public static org.json.JSONArray toJSONArray(org.json.JSONArray r3, org.json.JSONTokener r4) throws org.json.JSONException {
            r0 = 0
            if (r3 == 0) goto L22
            int r1 = r3.length()
            if (r1 != 0) goto La
            goto L22
        La:
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
        Lf:
            org.json.JSONObject r2 = rowToJSONObject(r3, r4)
            if (r2 != 0) goto L1e
        L16:
            int r2 = r1.length()
            if (r2 != 0) goto L1d
            return r0
        L1d:
            return r1
        L1e:
            r1.put(r2)
            goto Lf
        L22:
            return r0
    }

    public static org.json.JSONArray toJSONArray(org.json.JSONTokener r1) throws org.json.JSONException {
            org.json.JSONArray r0 = rowToJSONArray(r1)
            org.json.JSONArray r0 = toJSONArray(r0, r1)
            return r0
    }

    public static java.lang.String toString(org.json.JSONArray r4) throws org.json.JSONException {
            r0 = 0
            org.json.JSONObject r0 = r4.optJSONObject(r0)
            if (r0 == 0) goto L25
            org.json.JSONArray r1 = r0.names()
            if (r1 == 0) goto L25
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = rowToString(r1)
            r2.append(r3)
            java.lang.String r3 = toString(r1, r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            return r2
        L25:
            r1 = 0
            return r1
    }

    public static java.lang.String toString(org.json.JSONArray r4, org.json.JSONArray r5) throws org.json.JSONException {
            if (r4 == 0) goto L2e
            int r0 = r4.length()
            if (r0 != 0) goto L9
            goto L2e
        L9:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        Lf:
            int r2 = r5.length()
            if (r1 >= r2) goto L29
            org.json.JSONObject r2 = r5.optJSONObject(r1)
            if (r2 == 0) goto L26
            org.json.JSONArray r3 = r2.toJSONArray(r4)
            java.lang.String r3 = rowToString(r3)
            r0.append(r3)
        L26:
            int r1 = r1 + 1
            goto Lf
        L29:
            java.lang.String r1 = r0.toString()
            return r1
        L2e:
            r0 = 0
            return r0
    }
}
