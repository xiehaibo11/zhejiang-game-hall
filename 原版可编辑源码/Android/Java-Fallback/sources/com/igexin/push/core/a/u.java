package com.igexin.push.core.a;

public class u extends com.igexin.push.core.a.b {
    public u() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r8 = "action"
            boolean r0 = r9.has(r8)     // Catch: java.lang.Exception -> L60
            if (r0 == 0) goto L60
            java.lang.String r8 = r9.getString(r8)     // Catch: java.lang.Exception -> L60
            java.lang.String r0 = "sendmessage_feedback"
            boolean r8 = r8.equals(r0)     // Catch: java.lang.Exception -> L60
            if (r8 == 0) goto L60
            java.lang.String r8 = "appid"
            java.lang.String r1 = r9.getString(r8)     // Catch: java.lang.Exception -> L60
            java.lang.String r8 = "taskid"
            java.lang.String r2 = r9.getString(r8)     // Catch: java.lang.Exception -> L60
            java.lang.String r8 = "actionid"
            java.lang.String r3 = r9.getString(r8)     // Catch: java.lang.Exception -> L60
            java.lang.String r8 = "result"
            java.lang.String r4 = r9.getString(r8)     // Catch: java.lang.Exception -> L60
            java.lang.String r8 = "timestamp"
            long r5 = r9.getLong(r8)     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            r8.<init>()     // Catch: java.lang.Exception -> L60
            java.lang.String r9 = "SendMessageFeedbackAction|appid:"
            r8.append(r9)     // Catch: java.lang.Exception -> L60
            r8.append(r1)     // Catch: java.lang.Exception -> L60
            java.lang.String r9 = "|taskid:"
            r8.append(r9)     // Catch: java.lang.Exception -> L60
            r8.append(r2)     // Catch: java.lang.Exception -> L60
            java.lang.String r9 = "|actionid:"
            r8.append(r9)     // Catch: java.lang.Exception -> L60
            r8.append(r3)     // Catch: java.lang.Exception -> L60
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L60
            r9 = 0
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> L60
            com.igexin.b.a.c.b.a(r8, r9)     // Catch: java.lang.Exception -> L60
            com.igexin.push.core.r r0 = com.igexin.push.core.r.a()     // Catch: java.lang.Exception -> L60
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L60
        L60:
            r8 = 1
            return r8
    }
}
