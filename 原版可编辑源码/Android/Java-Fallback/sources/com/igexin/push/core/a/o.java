package com.igexin.push.core.a;

public class o extends com.igexin.push.core.a.b {
    public o() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "action"
            r1 = 0
            r2 = 1
            com.igexin.push.d.c.m r7 = (com.igexin.push.d.c.m) r7     // Catch: java.lang.Exception -> L7e
            boolean r3 = r8.has(r0)     // Catch: java.lang.Exception -> L7e
            if (r3 == 0) goto L99
            java.lang.String r0 = r8.getString(r0)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = "pushmessage"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L7e
            if (r0 == 0) goto L99
            r0 = 0
            java.lang.Object r3 = r7.f     // Catch: java.lang.Exception -> L7e
            boolean r3 = r3 instanceof byte[]     // Catch: java.lang.Exception -> L7e
            if (r3 == 0) goto L26
            java.lang.Object r7 = r7.f     // Catch: java.lang.Exception -> L7e
            byte[] r7 = (byte[]) r7     // Catch: java.lang.Exception -> L7e
            r0 = r7
            byte[] r0 = (byte[]) r0     // Catch: java.lang.Exception -> L7e
        L26:
            java.lang.String r7 = "taskid"
            java.lang.String r7 = r8.getString(r7)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = "getui receive message : %s"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L7e
            r4[r1] = r8     // Catch: java.lang.Exception -> L7e
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Exception -> L7e
            if (r0 == 0) goto L76
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L7e
            boolean r3 = com.igexin.assist.sdk.a.i(r3)     // Catch: java.lang.Exception -> L7e
            if (r3 == 0) goto L76
            com.igexin.push.core.b.d r3 = new com.igexin.push.core.b.d     // Catch: java.lang.Exception -> L7e
            android.content.Context r4 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L7e
            r3.<init>(r4)     // Catch: java.lang.Exception -> L7e
            boolean r7 = r3.a(r7)     // Catch: java.lang.Exception -> L7e
            if (r7 != 0) goto L56
            com.igexin.push.core.a.e r7 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = "10"
        L52:
            r7.a(r8, r3)     // Catch: java.lang.Exception -> L7e
            goto L76
        L56:
            com.igexin.push.core.a.e r7 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r3.<init>()     // Catch: java.lang.Exception -> L7e
            java.lang.String r4 = "1"
            r3.append(r4)     // Catch: java.lang.Exception -> L7e
            com.igexin.assist.action.MessageManger r4 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Exception -> L7e
            android.content.Context r5 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L7e
            java.lang.String r4 = r4.getBrandCode(r5)     // Catch: java.lang.Exception -> L7e
            r3.append(r4)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L7e
            goto L52
        L76:
            com.igexin.push.core.w r7 = com.igexin.push.core.w.a()     // Catch: java.lang.Exception -> L7e
            r7.a(r8, r0, r2)     // Catch: java.lang.Exception -> L7e
            goto L99
        L7e:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "PushmessageAction|"
            r8.append(r0)
            java.lang.String r7 = r7.toString()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            java.lang.Object[] r8 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r7, r8)
        L99:
            return r2
    }
}
