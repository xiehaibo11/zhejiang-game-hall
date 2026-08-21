package com.tkay.core.basead.ui.web;

public final class b {
    com.tkay.core.common.f.h a;
    org.json.JSONObject b;
    java.util.HashMap<java.lang.String, java.lang.Boolean> c;

    public b(com.tkay.core.common.f.h r3) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 3
            r0.<init>(r1)
            r2.c = r0
            r2.a = r3
            if (r3 == 0) goto L19
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1c
            java.lang.String r3 = r3.M()     // Catch: java.lang.Throwable -> L1c
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1c
            goto L1a
        L19:
            r0 = 0
        L1a:
            r2.b = r0     // Catch: java.lang.Throwable -> L1c
        L1c:
            return
    }

    private void a(android.webkit.WebView r5, java.lang.String r6) {
            r4 = this;
            org.json.JSONObject r0 = r4.b
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Iterator r0 = r0.keys()     // Catch: java.lang.Throwable -> L38
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L38
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L9
            if (r6 == 0) goto L9
            boolean r2 = r6.contains(r1)     // Catch: java.lang.Throwable -> L38
            if (r2 == 0) goto L9
            java.util.HashMap<java.lang.String, java.lang.Boolean> r2 = r4.c     // Catch: java.lang.Throwable -> L38
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L38
            if (r2 != 0) goto L9
            java.util.HashMap<java.lang.String, java.lang.Boolean> r2 = r4.c     // Catch: java.lang.Throwable -> L38
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L38
            r2.put(r1, r3)     // Catch: java.lang.Throwable -> L38
            org.json.JSONObject r2 = r4.b     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = r2.optString(r1)     // Catch: java.lang.Throwable -> L38
            r5.loadUrl(r1)     // Catch: java.lang.Throwable -> L38
            goto L9
        L38:
            return
    }
}
