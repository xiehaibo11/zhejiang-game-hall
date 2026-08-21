package org.json;

public class Cookie {
    public Cookie() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String escape(java.lang.String r6) {
            java.lang.String r6 = r6.trim()
            int r0 = r6.length()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r2 = 0
        Le:
            if (r2 >= r0) goto L4b
            char r3 = r6.charAt(r2)
            r4 = 32
            r5 = 37
            if (r3 < r4) goto L2d
            r4 = 43
            if (r3 == r4) goto L2d
            if (r3 == r5) goto L2d
            r4 = 61
            if (r3 == r4) goto L2d
            r4 = 59
            if (r3 != r4) goto L29
            goto L2d
        L29:
            r1.append(r3)
            goto L48
        L2d:
            r1.append(r5)
            int r4 = r3 >>> 4
            r4 = r4 & 15
            char r4 = (char) r4
            r5 = 16
            char r4 = java.lang.Character.forDigit(r4, r5)
            r1.append(r4)
            r3 = r3 & 15
            char r3 = (char) r3
            char r3 = java.lang.Character.forDigit(r3, r5)
            r1.append(r3)
        L48:
            int r2 = r2 + 1
            goto Le
        L4b:
            java.lang.String r6 = r1.toString()
            return r6
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r5) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONTokener r1 = new org.json.JSONTokener
            r1.<init>(r5)
            r5 = 61
            java.lang.String r2 = r1.nextTo(r5)
            java.lang.String r3 = "name"
            r0.put(r3, r2)
            r1.next(r5)
            r2 = 59
            java.lang.String r3 = r1.nextTo(r2)
            java.lang.String r4 = "value"
            r0.put(r4, r3)
            r1.next()
        L26:
            boolean r3 = r1.more()
            if (r3 == 0) goto L5d
            java.lang.String r3 = "=;"
            java.lang.String r3 = r1.nextTo(r3)
            java.lang.String r3 = unescape(r3)
            char r4 = r1.next()
            if (r4 == r5) goto L4e
            java.lang.String r4 = "secure"
            boolean r4 = r3.equals(r4)
            if (r4 == 0) goto L47
            java.lang.Boolean r4 = java.lang.Boolean.TRUE
            goto L59
        L47:
            java.lang.String r5 = "Missing '=' in cookie parameter."
            org.json.JSONException r5 = r1.syntaxError(r5)
            throw r5
        L4e:
            java.lang.String r4 = r1.nextTo(r2)
            java.lang.String r4 = unescape(r4)
            r1.next()
        L59:
            r0.put(r3, r4)
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
            boolean r3 = r3.optBoolean(r1)
            if (r3 == 0) goto L75
            java.lang.String r3 = ";secure"
            r0.append(r3)
        L75:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String unescape(java.lang.String r7) {
            int r0 = r7.length()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r2 = 0
        La:
            if (r2 >= r0) goto L40
            char r3 = r7.charAt(r2)
            r4 = 43
            if (r3 != r4) goto L17
            r3 = 32
            goto L3a
        L17:
            r4 = 37
            if (r3 != r4) goto L3a
            int r4 = r2 + 2
            if (r4 >= r0) goto L3a
            int r5 = r2 + 1
            char r5 = r7.charAt(r5)
            int r5 = org.json.JSONTokener.dehexchar(r5)
            char r6 = r7.charAt(r4)
            int r6 = org.json.JSONTokener.dehexchar(r6)
            if (r5 < 0) goto L3a
            if (r6 < 0) goto L3a
            int r5 = r5 * 16
            int r5 = r5 + r6
            char r3 = (char) r5
            r2 = r4
        L3a:
            r1.append(r3)
            int r2 = r2 + 1
            goto La
        L40:
            java.lang.String r7 = r1.toString()
            return r7
    }
}
