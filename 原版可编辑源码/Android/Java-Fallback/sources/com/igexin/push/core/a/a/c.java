package com.igexin.push.core.a.a;

public class c implements com.igexin.push.core.a.a.a {
    public c() {
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
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r5) {
            r4 = this;
            java.lang.String r0 = "actionid"
            java.lang.String r1 = "do"
            boolean r2 = r5.has(r1)     // Catch: org.json.JSONException -> L2d
            if (r2 == 0) goto L2d
            boolean r2 = r5.has(r0)     // Catch: org.json.JSONException -> L2d
            if (r2 == 0) goto L2d
            com.igexin.push.core.bean.BaseAction r2 = new com.igexin.push.core.bean.BaseAction     // Catch: org.json.JSONException -> L2d
            r2.<init>()     // Catch: org.json.JSONException -> L2d
            java.lang.String r3 = "type"
            java.lang.String r3 = r5.getString(r3)     // Catch: org.json.JSONException -> L2d
            r2.setType(r3)     // Catch: org.json.JSONException -> L2d
            java.lang.String r0 = r5.getString(r0)     // Catch: org.json.JSONException -> L2d
            r2.setActionId(r0)     // Catch: org.json.JSONException -> L2d
            java.lang.String r5 = r5.getString(r1)     // Catch: org.json.JSONException -> L2d
            r2.setDoActionId(r5)     // Catch: org.json.JSONException -> L2d
            return r2
        L2d:
            r5 = 0
            return r5
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r3, com.igexin.push.core.bean.BaseAction r4) {
            r2 = this;
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r1 = 0
            r0.a(r1)
            java.lang.String r0 = r4.getDoActionId()
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            java.lang.String r1 = r3.getTaskId()
            java.lang.String r3 = r3.getMessageId()
            java.lang.String r4 = r4.getDoActionId()
            r0.a(r1, r3, r4)
        L27:
            r3 = 1
            return r3
    }
}
