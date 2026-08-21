package com.igexin.push.core.c;

public class a extends com.igexin.push.f.a.b {
    public static org.json.JSONArray a;

    public a(java.lang.String r1, org.json.JSONArray r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a(r2)
            return
    }

    @Override
    public void a(java.lang.Exception r4) {
            r3 = this;
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            long r1 = java.lang.System.currentTimeMillis()
            r0.b(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-> get idc config "
            r0.append(r1)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r0)
            return
    }

    public void a(org.json.JSONArray r1) {
            r0 = this;
            com.igexin.push.core.c.a.a = r1
            return
    }

    @Override
    public void a(byte[] r4) {
            r3 = this;
            if (r4 == 0) goto L5e
            r0 = 0
            byte[] r4 = com.igexin.push.util.d.a(r4, r0)     // Catch: java.lang.Exception -> L51
            byte[] r4 = com.igexin.b.b.a.c(r4)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L51
            r1.<init>(r4)     // Catch: java.lang.Exception -> L51
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L51
            r4.<init>()     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = "->get idc config server resp data : "
            r4.append(r2)     // Catch: java.lang.Exception -> L51
            r4.append(r1)     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L51
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L51
            com.igexin.b.a.c.b.a(r4, r0)     // Catch: java.lang.Exception -> L51
            com.igexin.push.config.a r4 = com.igexin.push.config.a.a()     // Catch: java.lang.Exception -> L51
            r4.b(r1)     // Catch: java.lang.Exception -> L51
            r4 = 1
            com.igexin.push.config.l.a(r1, r4)     // Catch: java.lang.Exception -> L51
            com.igexin.push.core.b.i r4 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Exception -> L51
            r0 = 0
            r4.b(r0)     // Catch: java.lang.Exception -> L51
            com.igexin.push.config.a r4 = com.igexin.push.config.a.a()     // Catch: java.lang.Exception -> L51
            org.json.JSONArray r0 = com.igexin.push.core.c.a.a     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L51
            r4.a(r0)     // Catch: java.lang.Exception -> L51
            org.json.JSONArray r4 = com.igexin.push.core.c.a.a     // Catch: java.lang.Exception -> L51
            java.lang.String[] r4 = com.igexin.push.core.a.q.a(r4)     // Catch: java.lang.Exception -> L51
            com.igexin.push.config.SDKUrlConfig.setIdcConfigUrl(r4)     // Catch: java.lang.Exception -> L51
            goto L5e
        L51:
            r4 = move-exception
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            long r1 = java.lang.System.currentTimeMillis()
            r0.b(r1)
            throw r4
        L5e:
            return
    }

    @Override
    public int b_() {
            r1 = this;
            r0 = 0
            return r0
    }
}
