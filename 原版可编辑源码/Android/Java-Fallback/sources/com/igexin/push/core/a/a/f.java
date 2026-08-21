package com.igexin.push.core.a.a;

public class f implements com.igexin.push.core.a.a.a {
    public f() {
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
            com.igexin.push.core.bean.f r0 = new com.igexin.push.core.bean.f     // Catch: org.json.JSONException -> L1d
            r0.<init>()     // Catch: org.json.JSONException -> L1d
            java.lang.String r1 = "goto"
            r0.setType(r1)     // Catch: org.json.JSONException -> L1d
            java.lang.String r1 = "actionid"
            java.lang.String r1 = r3.getString(r1)     // Catch: org.json.JSONException -> L1d
            r0.setActionId(r1)     // Catch: org.json.JSONException -> L1d
            java.lang.String r1 = "do"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L1d
            r0.setDoActionId(r3)     // Catch: org.json.JSONException -> L1d
            return r0
        L1d:
            r3 = 0
            return r3
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r3, com.igexin.push.core.bean.BaseAction r4) {
            r2 = this;
            if (r3 == 0) goto L29
            if (r4 == 0) goto L29
            java.lang.String r0 = r4.getDoActionId()
            if (r0 == 0) goto L29
            java.lang.String r0 = r4.getDoActionId()
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L29
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            java.lang.String r1 = r3.getTaskId()
            java.lang.String r3 = r3.getMessageId()
            java.lang.String r4 = r4.getDoActionId()
            r0.a(r1, r3, r4)
        L29:
            r3 = 1
            return r3
    }
}
