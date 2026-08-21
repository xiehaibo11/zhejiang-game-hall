package com.igexin.push.core.a;

public class v extends com.igexin.push.core.a.b {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.config.i.a
            r0.append(r1)
            java.lang.String r1 = "_SetTagResultAction"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.a.v.a = r0
            return
    }

    public v() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(java.lang.Object r4, org.json.JSONObject r5) {
            r3 = this;
            java.lang.String r4 = "action"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.a.v.a
            r0.append(r1)
            java.lang.String r1 = "|set tag result resp data = "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            if (r5 == 0) goto L66
            boolean r0 = r5.has(r4)     // Catch: java.lang.Exception -> L46
            if (r0 == 0) goto L66
            java.lang.String r4 = r5.getString(r4)     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = "settag_result"
            boolean r4 = r4.equals(r0)     // Catch: java.lang.Exception -> L46
            if (r4 == 0) goto L66
            com.igexin.push.core.r r4 = com.igexin.push.core.r.a()     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = "sn"
            java.lang.String r0 = r5.getString(r0)     // Catch: java.lang.Exception -> L46
            java.lang.String r2 = "error_code"
            java.lang.String r5 = r5.getString(r2)     // Catch: java.lang.Exception -> L46
            r4.a(r0, r5)     // Catch: java.lang.Exception -> L46
            goto L66
        L46:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = com.igexin.push.core.a.v.a
            r5.append(r0)
            java.lang.String r0 = "|"
            r5.append(r0)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.Object[] r5 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r4, r5)
        L66:
            r4 = 1
            return r4
    }
}
