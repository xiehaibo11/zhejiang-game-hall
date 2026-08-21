package com.igexin.push.core.a.a;

public class d implements com.igexin.push.core.a.a.a {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r6) {
            r5 = this;
            java.lang.String r0 = "actionid"
            java.lang.String r1 = "do"
            java.lang.String r2 = "duration"
            boolean r3 = r6.has(r1)     // Catch: org.json.JSONException -> L4a
            if (r3 == 0) goto L4a
            boolean r3 = r6.has(r0)     // Catch: org.json.JSONException -> L4a
            if (r3 == 0) goto L4a
            boolean r3 = r6.has(r2)     // Catch: org.json.JSONException -> L4a
            if (r3 == 0) goto L4a
            com.igexin.push.core.bean.d r3 = new com.igexin.push.core.bean.d     // Catch: org.json.JSONException -> L4a
            r3.<init>()     // Catch: org.json.JSONException -> L4a
            java.lang.String r4 = "type"
            java.lang.String r4 = r6.getString(r4)     // Catch: org.json.JSONException -> L4a
            r3.setType(r4)     // Catch: org.json.JSONException -> L4a
            java.lang.String r0 = r6.getString(r0)     // Catch: org.json.JSONException -> L4a
            r3.setActionId(r0)     // Catch: org.json.JSONException -> L4a
            java.lang.String r0 = r6.getString(r1)     // Catch: org.json.JSONException -> L4a
            r3.setDoActionId(r0)     // Catch: org.json.JSONException -> L4a
            boolean r0 = r6.has(r2)     // Catch: org.json.JSONException -> L4a
            if (r0 == 0) goto L49
            java.lang.String r6 = r6.getString(r2)     // Catch: org.json.JSONException -> L4a
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: org.json.JSONException -> L4a
            long r0 = r6.longValue()     // Catch: org.json.JSONException -> L4a
            r3.a(r0)     // Catch: org.json.JSONException -> L4a
        L49:
            return r3
        L4a:
            r6 = 0
            return r6
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r5, com.igexin.push.core.bean.BaseAction r6) {
            r4 = this;
            com.igexin.push.core.bean.d r6 = (com.igexin.push.core.bean.d) r6
            long r0 = java.lang.System.currentTimeMillis()
            long r5 = r6.a()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r2
            long r0 = r0 + r5
            com.igexin.push.core.b.i r5 = com.igexin.push.core.b.i.a()
            r6 = 1
            r5.a(r6)
            com.igexin.push.core.b.i r5 = com.igexin.push.core.b.i.a()
            r5.c(r0)
            return r6
    }
}
