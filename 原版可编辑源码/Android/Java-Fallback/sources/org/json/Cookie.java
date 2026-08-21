package org.json;

public class Cookie {
    public Cookie() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String escape(java.lang.String r7) {
            java.lang.String r0 = r7.trim()
            int r1 = r0.length()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r3 = 0
        Le:
            if (r3 >= r1) goto L4b
            char r4 = r0.charAt(r3)
            r5 = 32
            r6 = 37
            if (r4 < r5) goto L2d
            r5 = 43
            if (r4 == r5) goto L2d
            if (r4 == r6) goto L2d
            r5 = 61
            if (r4 == r5) goto L2d
            r5 = 59
            if (r4 != r5) goto L29
            goto L2d
        L29:
            r2.append(r4)
            goto L48
        L2d:
            r2.append(r6)
            int r5 = r4 >>> 4
            r5 = r5 & 15
            char r5 = (char) r5
            r6 = 16
            char r5 = java.lang.Character.forDigit(r5, r6)
            r2.append(r5)
            r5 = r4 & 15
            char r5 = (char) r5
            char r5 = java.lang.Character.forDigit(r5, r6)
            r2.append(r5)
        L48:
            int r3 = r3 + 1
            goto Le
        L4b:
            java.lang.String r3 = r2.toString()
            return r3
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r6) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONTokener r1 = new org.json.JSONTokener
            r1.<init>(r6)
            r2 = 61
            java.lang.String r3 = r1.nextTo(r2)
            java.lang.String r4 = "name"
            r0.put(r4, r3)
            r1.next(r2)
            r3 = 59
            java.lang.String r4 = r1.nextTo(r3)
            java.lang.String r5 = "value"
            r0.put(r5, r4)
            r1.next()
        L26:
            boolean r4 = r1.more()
            if (r4 == 0) goto L5d
            java.lang.String r4 = "=;"
            java.lang.String r4 = r1.nextTo(r4)
            java.lang.String r4 = unescape(r4)
            char r5 = r1.next()
            if (r5 == r2) goto L4e
            java.lang.String r5 = "secure"
            boolean r5 = r4.equals(r5)
            if (r5 == 0) goto L47
            java.lang.Boolean r5 = java.lang.Boolean.TRUE
            goto L59
        L47:
            java.lang.String r2 = "Missing '=' in cookie parameter."
            org.json.JSONException r2 = r1.syntaxError(r2)
            throw r2
        L4e:
            java.lang.String r5 = r1.nextTo(r3)
            java.lang.String r5 = unescape(r5)
            r1.next()
        L59:
            r0.put(r4, r5)
            goto L26
        L5d:
            return r0
    }

    public static java.lang.String toString(org.json.JSONObject r3) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "name"
            java.lang.String r1 = r3.getString(r1)
            java.lang.String r1 = escape(r1)
            r0.append(r1)
            java.lang.String r1 = "="
            r0.append(r1)
            java.lang.String r1 = "value"
            java.lang.String r1 = r3.getString(r1)
            java.lang.String r1 = escape(r1)
            r0.append(r1)
            java.lang.String r1 = "expires"
            boolean r2 = r3.has(r1)
            if (r2 == 0) goto L38
            java.lang.String r2 = ";expires="
            r0.append(r2)
            java.lang.String r1 = r3.getString(r1)
            r0.append(r1)
        L38:
            java.lang.String r1 = "domain"
            boolean r2 = r3.has(r1)
            if (r2 == 0) goto L50
            java.lang.String r2 = ";domain="
            r0.append(r2)
            java.lang.String r1 = r3.getString(r1)
            java.lang.String r1 = escape(r1)
            r0.append(r1)
        L50:
            java.lang.String r1 = "path"
            boolean r2 = r3.has(r1)
            if (r2 == 0) goto L68
            java.lang.String r2 = ";path="
            r0.append(r2)
            java.lang.String r1 = r3.getString(r1)
            java.lang.String r1 = escape(r1)
            r0.append(r1)
        L68:
            java.lang.String r1 = "secure"
            boolean r1 = r3.optBoolean(r1)
            if (r1 == 0) goto L75
            java.lang.String r1 = ";secure"
            r0.append(r1)
        L75:
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String unescape(java.lang.String r7) {
            int r0 = r7.length()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r2 = 0
        La:
            if (r2 >= r0) goto L43
            char r3 = r7.charAt(r2)
            r4 = 43
            if (r3 != r4) goto L17
            r3 = 32
            goto L3d
        L17:
            r4 = 37
            if (r3 != r4) goto L3d
            int r4 = r2 + 2
            if (r4 >= r0) goto L3d
            int r4 = r2 + 1
            char r4 = r7.charAt(r4)
            int r4 = org.json.JSONTokener.dehexchar(r4)
            int r5 = r2 + 2
            char r5 = r7.charAt(r5)
            int r5 = org.json.JSONTokener.dehexchar(r5)
            if (r4 < 0) goto L3d
            if (r5 < 0) goto L3d
            int r6 = r4 * 16
            int r6 = r6 + r5
            char r3 = (char) r6
            int r2 = r2 + 2
        L3d:
            r1.append(r3)
            int r2 = r2 + 1
            goto La
        L43:
            java.lang.String r2 = r1.toString()
            return r2
    }
}
