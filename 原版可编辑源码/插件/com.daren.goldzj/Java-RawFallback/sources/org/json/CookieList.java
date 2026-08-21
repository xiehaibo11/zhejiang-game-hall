package org.json;

public class CookieList {
    public CookieList() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r3) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONTokener r1 = new org.json.JSONTokener
            r1.<init>(r3)
        La:
            boolean r3 = r1.more()
            if (r3 == 0) goto L2e
            r3 = 61
            java.lang.String r2 = r1.nextTo(r3)
            java.lang.String r2 = org.json.Cookie.unescape(r2)
            r1.next(r3)
            r3 = 59
            java.lang.String r3 = r1.nextTo(r3)
            java.lang.String r3 = org.json.Cookie.unescape(r3)
            r0.put(r2, r3)
            r1.next()
            goto La
        L2e:
            return r0
    }

    public static java.lang.String toString(org.json.JSONObject r5) throws org.json.JSONException {
            java.util.Iterator r0 = r5.keys()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
        La:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r0.next()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = r5.isNull(r3)
            if (r4 != 0) goto La
            if (r2 == 0) goto L23
            r2 = 59
            r1.append(r2)
        L23:
            java.lang.String r2 = org.json.Cookie.escape(r3)
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            java.lang.String r2 = r5.getString(r3)
            java.lang.String r2 = org.json.Cookie.escape(r2)
            r1.append(r2)
            r2 = 1
            goto La
        L3c:
            java.lang.String r5 = r1.toString()
            return r5
    }
}
