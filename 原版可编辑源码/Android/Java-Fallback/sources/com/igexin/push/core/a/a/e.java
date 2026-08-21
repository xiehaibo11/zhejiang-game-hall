package com.igexin.push.core.a.a;

public class e implements com.igexin.push.core.a.a.a {
    public e() {
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
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r3) {
            r2 = this;
            com.igexin.push.core.bean.BaseAction r0 = new com.igexin.push.core.bean.BaseAction     // Catch: org.json.JSONException -> L14
            r0.<init>()     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "null"
            r0.setType(r1)     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "actionid"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L14
            r0.setActionId(r3)     // Catch: org.json.JSONException -> L14
            return r0
        L14:
            r3 = 0
            return r3
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r2, com.igexin.push.core.bean.BaseAction r3) {
            r1 = this;
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()
            java.lang.String r0 = r2.getTaskId()
            java.lang.String r2 = r2.getMessageId()
            java.lang.String r2 = r3.a(r0, r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "EndAction execute, remove key = "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r3 = com.igexin.push.core.d.Z     // Catch: java.lang.Exception -> L2c
            r3.remove(r2)     // Catch: java.lang.Exception -> L2c
        L2c:
            r2 = 1
            return r2
    }
}
