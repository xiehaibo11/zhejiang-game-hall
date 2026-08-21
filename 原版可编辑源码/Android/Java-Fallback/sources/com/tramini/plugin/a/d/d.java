package com.tramini.plugin.a.d;

public final class d extends com.tramini.plugin.a.d.a {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r1.trim()
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r1 = this;
            com.tramini.plugin.a.a.a()
            java.lang.String r0 = com.tramini.plugin.a.a.b()
            return r0
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json;charset=utf-8"
            r0.put(r1, r2)
            return r0
    }

    @Override
    protected final byte[] d() {
            r2 = this;
            java.lang.String r0 = r2.f()     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "utf-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            java.lang.String r0 = r2.f()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r5 = this;
            java.lang.String r0 = "1"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.tramini.plugin.a.a.c r2 = com.tramini.plugin.a.a.c.a()
            android.content.Context r2 = r2.b()
            java.lang.String r3 = "platform"
            r1.put(r3, r0)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "os_vn"
            java.lang.String r4 = com.tramini.plugin.a.g.e.b()     // Catch: java.lang.Exception -> L66
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "os_vc"
            java.lang.String r4 = com.tramini.plugin.a.g.e.a()     // Catch: java.lang.Exception -> L66
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "package_name"
            java.lang.String r4 = com.tramini.plugin.a.g.e.c(r2)     // Catch: java.lang.Exception -> L66
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "app_vn"
            java.lang.String r4 = com.tramini.plugin.a.g.e.b(r2)     // Catch: java.lang.Exception -> L66
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "app_vc"
            java.lang.String r4 = com.tramini.plugin.a.g.e.a(r2)     // Catch: java.lang.Exception -> L66
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "sdk_ver"
            java.lang.String r4 = "1.0.4"
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "android_id"
            java.lang.String r4 = com.tramini.plugin.a.g.e.d(r2)     // Catch: java.lang.Exception -> L66
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "is_proxy"
            boolean r2 = com.tramini.plugin.a.g.h.a(r2)     // Catch: java.lang.Exception -> L66
            if (r2 == 0) goto L5a
            goto L5c
        L5a:
            java.lang.String r0 = "0"
        L5c:
            r1.put(r3, r0)     // Catch: java.lang.Exception -> L66
            java.lang.String r0 = "ds_pl"
            java.lang.String r2 = "3"
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L66
        L66:
            return r1
    }

    @Override
    public final boolean g() {
            r1 = this;
            r0 = 1
            return r0
    }
}
