package com.mbridge.msdk.advanced.common.a;

public class a {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.advanced.common.a.a> r0 = com.mbridge.msdk.advanced.common.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.advanced.common.a.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            java.util.List r2 = r2.i()     // Catch: java.lang.Exception -> L3a
            if (r2 == 0) goto L2f
            int r3 = r2.size()     // Catch: java.lang.Exception -> L3a
            if (r3 <= 0) goto L2f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L3a
        L1b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L3a
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L3a
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Exception -> L3a
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L3a
            r1.put(r3)     // Catch: java.lang.Exception -> L3a
            goto L1b
        L2f:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L3a
            if (r2 <= 0) goto L3e
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            return r0
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = ""
            if (r1 == 0) goto L1b
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Exception -> L17
            if (r1 == 0) goto L1b
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Exception -> L17
            r1.a()     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = r1.a(r2)     // Catch: java.lang.Exception -> L17
            r0 = r1
            goto L1b
        L17:
            r1 = move-exception
            r1.printStackTrace()
        L1b:
            return r0
    }
}
