package com.igexin.push.core.a;

class m extends com.igexin.push.f.b {
    final com.igexin.push.core.a.l a;

    m(com.igexin.push.core.a.l r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    protected void a() {
            r8 = this;
            r0 = 0
            com.igexin.push.core.b.d r1 = new com.igexin.push.core.b.d     // Catch: java.lang.Throwable -> L5c
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L5c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5c
            org.json.JSONObject r2 = r1.c()     // Catch: java.lang.Throwable -> L5c
            if (r2 != 0) goto Lf
            return
        Lf:
            java.util.Iterator r3 = r2.keys()     // Catch: java.lang.Throwable -> L5c
        L13:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L5c
            if (r4 == 0) goto L58
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L5c
            org.json.JSONObject r5 = r2.getJSONObject(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r6.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r7 = "LoginResultAction|send unFeedback taskid = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L5c
            r6.append(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L5c
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L5c
            com.igexin.b.a.c.b.a(r4, r6)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = "appid"
            java.lang.String r6 = com.igexin.push.core.d.a     // Catch: java.lang.Throwable -> L5c
            r5.put(r4, r6)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = "appkey"
            java.lang.String r6 = com.igexin.push.core.d.b     // Catch: java.lang.Throwable -> L5c
            r5.put(r4, r6)     // Catch: java.lang.Throwable -> L5c
            com.igexin.push.core.a.e r4 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r6 = "multaid"
            java.lang.String r6 = r5.getString(r6)     // Catch: java.lang.Throwable -> L5c
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L5c
            r3.remove()     // Catch: java.lang.Throwable -> L5c
            goto L13
        L58:
            r1.d()     // Catch: java.lang.Throwable -> L5c
            goto L77
        L5c:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "LoginResultAction|feedbackMultiBrandPushMessage exception :"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        L77:
            return
    }
}
