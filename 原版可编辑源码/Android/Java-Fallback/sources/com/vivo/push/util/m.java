package com.vivo.push.util;

public final class m {
    public static java.util.Map<java.lang.String, java.lang.String> a(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Iterator r1 = r4.keys()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1d
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r4.getString(r2)
            r0.put(r2, r3)
            goto L9
        L1d:
            return r0
    }
}
