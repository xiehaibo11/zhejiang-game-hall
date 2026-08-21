package com.tramini.plugin.a.g;

public final class g {
    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(com.tramini.plugin.b.a r4) {
            java.util.concurrent.ConcurrentHashMap r4 = r4.e()
            if (r4 == 0) goto L3b
            java.util.Set r0 = r4.keySet()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Le
            java.lang.Object r2 = r4.get(r1)
            com.tramini.plugin.a.c.c r2 = (com.tramini.plugin.a.c.c) r2
            if (r2 == 0) goto Le
            java.lang.String r3 = r2.a
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto Le
            java.lang.String r2 = r2.a
            java.lang.String r3 = "http"
            boolean r2 = r2.startsWith(r3)
            if (r2 == 0) goto Le
            return r1
        L3b:
            java.lang.String r4 = ""
            return r4
    }
}
