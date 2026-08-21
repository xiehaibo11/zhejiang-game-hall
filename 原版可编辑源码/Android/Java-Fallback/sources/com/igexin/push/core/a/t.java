package com.igexin.push.core.a;

public class t extends com.igexin.push.core.a.b {
    private static final java.lang.String a = null;

    static {
            java.lang.String r0 = com.igexin.push.config.i.a
            com.igexin.push.core.a.t.a = r0
            return
    }

    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(java.lang.Object r3, org.json.JSONObject r4) {
            r2 = this;
            java.lang.String r3 = "action"
            boolean r0 = r4.has(r3)     // Catch: java.lang.Exception -> L69
            if (r0 == 0) goto L69
            java.lang.String r3 = r4.getString(r3)     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = "response_deviceid"
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> L69
            if (r3 == 0) goto L69
            java.lang.String r3 = "deviceid"
            java.lang.String r3 = r4.getString(r3)     // Catch: java.lang.Exception -> L69
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L69
            r4.<init>()     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = com.igexin.push.core.a.t.a     // Catch: java.lang.Exception -> L69
            r4.append(r0)     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = " get devid resp, devid : "
            r4.append(r0)     // Catch: java.lang.Exception -> L69
            r4.append(r3)     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = ", save 2db and file"
            r4.append(r0)     // Catch: java.lang.Exception -> L69
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L69
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L69
            com.igexin.b.a.c.b.a(r4, r1)     // Catch: java.lang.Exception -> L69
            com.igexin.push.core.b.i r4 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Exception -> L69
            r4.b(r3)     // Catch: java.lang.Exception -> L69
            java.lang.String r3 = com.igexin.push.core.d.A     // Catch: java.lang.Exception -> L69
            if (r3 == 0) goto L51
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()     // Catch: java.lang.Exception -> L69
            com.igexin.push.core.a.e r3 = r3.j()     // Catch: java.lang.Exception -> L69
            r3.f()     // Catch: java.lang.Exception -> L69
        L51:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L69
            r3.<init>()     // Catch: java.lang.Exception -> L69
            java.lang.String r4 = "deviceidRsp|"
            r3.append(r4)     // Catch: java.lang.Exception -> L69
            java.lang.String r4 = com.igexin.push.core.d.A     // Catch: java.lang.Exception -> L69
            r3.append(r4)     // Catch: java.lang.Exception -> L69
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L69
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L69
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Exception -> L69
        L69:
            r3 = 1
            return r3
    }
}
