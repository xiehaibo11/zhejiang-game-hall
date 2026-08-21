package com.mbridge.msdk.mbnative.controller;

public class c {
    private static final java.lang.String a = null;


    static {
            java.lang.Class<com.mbridge.msdk.mbnative.controller.c> r0 = com.mbridge.msdk.mbnative.controller.c.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.mbnative.controller.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.c.a
            return r0
    }

    public static void a(android.content.Context r5, java.lang.String r6) {
            if (r5 == 0) goto L9d
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r5)     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Exception -> L99
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L99
            if (r1 != 0) goto L9d
            if (r0 == 0) goto L9d
            int r1 = r0.a()     // Catch: java.lang.Exception -> L99
            if (r1 <= 0) goto L9d
            java.lang.String r1 = "2000022"
            java.util.List r1 = r0.a(r1)     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = "2000021"
            java.util.List r2 = r0.a(r2)     // Catch: java.lang.Exception -> L99
            java.lang.String r3 = "2000043"
            java.util.List r0 = r0.a(r3)     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = com.mbridge.msdk.foundation.entity.p.a(r2)     // Catch: java.lang.Exception -> L99
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.b(r1)     // Catch: java.lang.Exception -> L99
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.p.c(r0)     // Catch: java.lang.Exception -> L99
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r3.<init>()     // Catch: java.lang.Exception -> L99
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L99
            if (r4 != 0) goto L44
            r3.append(r2)     // Catch: java.lang.Exception -> L99
        L44:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L99
            if (r2 != 0) goto L4d
            r3.append(r1)     // Catch: java.lang.Exception -> L99
        L4d:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L99
            if (r1 != 0) goto L56
            r3.append(r0)     // Catch: java.lang.Exception -> L99
        L56:
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L99
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L99
            if (r0 != 0) goto L9d
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L99
            if (r5 == 0) goto L9d
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L99
            if (r1 != 0) goto L9d
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L99
            if (r1 != 0) goto L9d
            com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L8b
            r1.<init>(r5)     // Catch: java.lang.Exception -> L8b
            com.mbridge.msdk.foundation.same.net.g.d r5 = com.mbridge.msdk.foundation.same.report.e.a(r0, r5, r6)     // Catch: java.lang.Exception -> L8b
            r6 = 0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L8b
            java.lang.String r0 = r0.a     // Catch: java.lang.Exception -> L8b
            com.mbridge.msdk.mbnative.controller.c$1 r2 = new com.mbridge.msdk.mbnative.controller.c$1     // Catch: java.lang.Exception -> L8b
            r2.<init>()     // Catch: java.lang.Exception -> L8b
            r1.post(r6, r0, r5, r2)     // Catch: java.lang.Exception -> L8b
            goto L9d
        L8b:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Exception -> L99
            java.lang.String r6 = com.mbridge.msdk.mbnative.controller.c.a     // Catch: java.lang.Exception -> L99
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)     // Catch: java.lang.Exception -> L99
            goto L9d
        L99:
            r5 = move-exception
            r5.printStackTrace()
        L9d:
            return
    }
}
