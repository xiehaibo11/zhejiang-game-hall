package org.json;

public class CookieList {
    public CookieList() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r4) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONTokener r1 = new org.json.JSONTokener
            r1.<init>(r4)
        La:
            boolean r2 = r1.more()
            if (r2 == 0) goto L2e
            r2 = 61
            java.lang.String r3 = r1.nextTo(r2)
            java.lang.String r3 = org.json.Cookie.unescape(r3)
            r1.next(r2)
            r2 = 59
            java.lang.String r2 = r1.nextTo(r2)
            java.lang.String r2 = org.json.Cookie.unescape(r2)
            r0.put(r3, r2)
            r1.next()
            goto La
        L2e:
            return r0
    }

    public static java.lang.String toString(org.json.JSONObject r5) throws org.json.JSONException {
            r0 = 0
            java.util.Iterator r1 = r5.keys()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        La:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = r5.isNull(r3)
            if (r4 != 0) goto La
            if (r0 == 0) goto L23
            r4 = 59
            r2.append(r4)
        L23:
            java.lang.String r4 = org.json.Cookie.escape(r3)
            r2.append(r4)
            java.lang.String r4 = "="
            r2.append(r4)
            java.lang.String r4 = r5.getString(r3)
            java.lang.String r4 = org.json.Cookie.escape(r4)
            r2.append(r4)
            r0 = 1
            goto La
        L3c:
            java.lang.String r3 = r2.toString()
            return r3
    }
}
