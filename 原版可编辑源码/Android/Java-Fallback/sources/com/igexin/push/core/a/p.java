package com.igexin.push.core.a;

public class p extends com.igexin.push.core.a.b {
    public p() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r6 = "ReceivedAction|"
            java.lang.String r0 = "action"
            r1 = 1
            r2 = 0
            boolean r3 = r7.has(r0)     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L7a
            java.lang.String r0 = r7.getString(r0)     // Catch: java.lang.Exception -> L61
            java.lang.String r3 = "received"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L61
            if (r0 == 0) goto L7a
            java.lang.String r0 = "id"
            java.lang.String r7 = r7.getString(r0)     // Catch: java.lang.Exception -> L61
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r0.<init>()     // Catch: java.lang.Exception -> L61
            java.lang.String r3 = "ReceivedAction received, cmd id :"
            r0.append(r3)     // Catch: java.lang.Exception -> L61
            r0.append(r7)     // Catch: java.lang.Exception -> L61
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L61
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L61
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L61
            long r3 = java.lang.Long.parseLong(r7)     // Catch: java.lang.NumberFormatException -> L47 java.lang.Exception -> L61
            com.igexin.push.core.b.e r7 = com.igexin.push.core.b.e.a()     // Catch: java.lang.NumberFormatException -> L47 java.lang.Exception -> L61
            r7.a(r3, r1, r2)     // Catch: java.lang.NumberFormatException -> L47 java.lang.Exception -> L61
            com.igexin.push.core.a.e r7 = com.igexin.push.core.a.e.a()     // Catch: java.lang.NumberFormatException -> L47 java.lang.Exception -> L61
            r7.d()     // Catch: java.lang.NumberFormatException -> L47 java.lang.Exception -> L61
            goto L7a
        L47:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r0.<init>()     // Catch: java.lang.Exception -> L61
            r0.append(r6)     // Catch: java.lang.Exception -> L61
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L61
            r0.append(r7)     // Catch: java.lang.Exception -> L61
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L61
            java.lang.Object[] r0 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L61
            com.igexin.b.a.c.b.a(r7, r0)     // Catch: java.lang.Exception -> L61
            goto L7a
        L61:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = r7.toString()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.Object[] r7 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r6, r7)
        L7a:
            return r1
    }
}
