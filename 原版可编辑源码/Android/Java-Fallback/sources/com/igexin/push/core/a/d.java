package com.igexin.push.core.a;

public class d extends com.igexin.push.core.a.b {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(java.lang.Object r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r5 = "duration"
            java.lang.String r0 = "action"
            boolean r1 = r6.has(r0)     // Catch: java.lang.Exception -> L3e
            if (r1 == 0) goto L3e
            java.lang.String r0 = r6.getString(r0)     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = "block_client"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L3e
            boolean r0 = r6.has(r5)     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L3e
            long r5 = r6.getLong(r5)     // Catch: java.lang.Exception -> L3e
            r0 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r0
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L3e
            r2 = 0
            int r2 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r2 == 0) goto L3e
            long r0 = r0 + r5
            com.igexin.push.config.j.c = r0     // Catch: java.lang.Exception -> L3e
            com.igexin.push.config.a r5 = com.igexin.push.config.a.a()     // Catch: java.lang.Exception -> L3e
            r5.e()     // Catch: java.lang.Exception -> L3e
            com.igexin.push.a.a.c r5 = com.igexin.push.a.a.c.c()     // Catch: java.lang.Exception -> L3e
            r5.d()     // Catch: java.lang.Exception -> L3e
        L3e:
            r5 = 1
            return r5
    }
}
