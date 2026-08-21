package com.igexin.push.core.a;

public class i extends com.igexin.push.core.a.a {
    private static final java.lang.String a = null;
    private static java.util.Map<java.lang.String, com.igexin.push.core.a.b> b;

    static {
            java.lang.String r0 = com.igexin.push.config.i.a
            com.igexin.push.core.a.i.a = r0
            return
    }

    public i() {
            r3 = this;
            r3.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.igexin.push.core.a.i.b = r0
            com.igexin.push.core.a.q r1 = new com.igexin.push.core.a.q
            r1.<init>()
            java.lang.String r2 = "redirect_server"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.t r1 = new com.igexin.push.core.a.t
            r1.<init>()
            java.lang.String r2 = "response_deviceid"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.o r1 = new com.igexin.push.core.a.o
            r1.<init>()
            java.lang.String r2 = "pushmessage"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.p r1 = new com.igexin.push.core.a.p
            r1.<init>()
            java.lang.String r2 = "received"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.u r1 = new com.igexin.push.core.a.u
            r1.<init>()
            java.lang.String r2 = "sendmessage_feedback"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.d r1 = new com.igexin.push.core.a.d
            r1.<init>()
            java.lang.String r2 = "block_client"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.v r1 = new com.igexin.push.core.a.v
            r1.<init>()
            java.lang.String r2 = "settag_result"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.c r1 = new com.igexin.push.core.a.c
            r1.<init>()
            java.lang.String r2 = "response_bind"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b
            com.igexin.push.core.a.w r1 = new com.igexin.push.core.a.w
            r1.<init>()
            java.lang.String r2 = "response_unbind"
            r0.put(r2, r1)
            return
    }

    @Override
    public boolean a(com.igexin.b.a.d.e r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean a(java.lang.Object r5) {
            r4 = this;
            java.lang.String r0 = "id"
            boolean r1 = r5 instanceof com.igexin.push.d.c.m
            if (r1 == 0) goto L58
            r1 = r5
            com.igexin.push.d.c.m r1 = (com.igexin.push.d.c.m) r1
            boolean r2 = r1.b()
            if (r2 == 0) goto L58
            java.lang.Object r2 = r1.e
            if (r2 == 0) goto L58
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L58
            java.lang.Object r1 = r1.e     // Catch: java.lang.Exception -> L58
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L58
            r2.<init>(r1)     // Catch: java.lang.Exception -> L58
            java.lang.String r1 = "action"
            java.lang.String r1 = r2.optString(r1)     // Catch: java.lang.Exception -> L58
            java.lang.String r3 = "received"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Exception -> L58
            if (r3 != 0) goto L43
            java.lang.String r3 = "redirect_server"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Exception -> L58
            if (r3 != 0) goto L43
            boolean r3 = r2.has(r0)     // Catch: java.lang.Exception -> L58
            if (r3 == 0) goto L43
            java.lang.String r0 = r2.getString(r0)     // Catch: java.lang.Exception -> L58
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L58
            r3.a(r0)     // Catch: java.lang.Exception -> L58
        L43:
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L58
            if (r0 != 0) goto L58
            java.util.Map<java.lang.String, com.igexin.push.core.a.b> r0 = com.igexin.push.core.a.i.b     // Catch: java.lang.Exception -> L58
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L58
            com.igexin.push.core.a.b r0 = (com.igexin.push.core.a.b) r0     // Catch: java.lang.Exception -> L58
            if (r0 == 0) goto L58
            boolean r5 = r0.a(r5, r2)     // Catch: java.lang.Exception -> L58
            return r5
        L58:
            r5 = 0
            return r5
    }
}
