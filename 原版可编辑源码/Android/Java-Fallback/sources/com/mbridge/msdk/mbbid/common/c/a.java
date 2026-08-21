package com.mbridge.msdk.mbbid.common.c;

public class a {
    private static final java.lang.String a = null;



    static {
            java.lang.Class<com.mbridge.msdk.mbbid.common.c.a> r0 = com.mbridge.msdk.mbbid.common.c.a.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.mbbid.common.c.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.mbbid.common.c.a.a
            return r0
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "&"
            if (r3 == 0) goto L80
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L80
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L73
            r1.<init>()     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "key="
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "2000064"
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            r1.append(r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "result="
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "1"
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            r1.append(r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "network_type="
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            int r2 = com.mbridge.msdk.foundation.tools.v.D(r3)     // Catch: java.lang.Exception -> L73
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            r1.append(r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = "bidid="
            r1.append(r0)     // Catch: java.lang.Exception -> L73
            r1.append(r5)     // Catch: java.lang.Exception -> L73
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L73
            boolean r5 = r5.c()     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L56
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L73
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L73
            r3.a(r4)     // Catch: java.lang.Exception -> L73
            return
        L56:
            com.mbridge.msdk.foundation.same.report.d.a r5 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L73
            r5.<init>(r3)     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L73
            com.mbridge.msdk.foundation.same.net.g.d r3 = com.mbridge.msdk.foundation.same.report.e.a(r0, r3, r4)     // Catch: java.lang.Exception -> L73
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = r0.a     // Catch: java.lang.Exception -> L73
            com.mbridge.msdk.mbbid.common.c.a$1 r1 = new com.mbridge.msdk.mbbid.common.c.a$1     // Catch: java.lang.Exception -> L73
            r1.<init>()     // Catch: java.lang.Exception -> L73
            r5.post(r4, r0, r3, r1)     // Catch: java.lang.Exception -> L73
            goto L80
        L73:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r4 = com.mbridge.msdk.mbbid.common.c.a.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L80:
            return
    }

    public static void b(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "&"
            if (r3 == 0) goto L6a
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L6a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5d
            r1.<init>()     // Catch: java.lang.Exception -> L5d
            java.lang.String r2 = "key="
            r1.append(r2)     // Catch: java.lang.Exception -> L5d
            java.lang.String r2 = "2000064"
            r1.append(r2)     // Catch: java.lang.Exception -> L5d
            r1.append(r0)     // Catch: java.lang.Exception -> L5d
            java.lang.String r2 = "result="
            r1.append(r2)     // Catch: java.lang.Exception -> L5d
            java.lang.String r2 = "2"
            r1.append(r2)     // Catch: java.lang.Exception -> L5d
            r1.append(r0)     // Catch: java.lang.Exception -> L5d
            java.lang.String r2 = "network_type="
            r1.append(r2)     // Catch: java.lang.Exception -> L5d
            int r2 = com.mbridge.msdk.foundation.tools.v.D(r3)     // Catch: java.lang.Exception -> L5d
            r1.append(r2)     // Catch: java.lang.Exception -> L5d
            r1.append(r0)     // Catch: java.lang.Exception -> L5d
            java.lang.String r0 = "reason="
            r1.append(r0)     // Catch: java.lang.Exception -> L5d
            r1.append(r5)     // Catch: java.lang.Exception -> L5d
            com.mbridge.msdk.foundation.same.report.d.a r5 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L5d
            r5.<init>(r3)     // Catch: java.lang.Exception -> L5d
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L5d
            com.mbridge.msdk.foundation.same.net.g.d r3 = com.mbridge.msdk.foundation.same.report.e.a(r0, r3, r4)     // Catch: java.lang.Exception -> L5d
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L5d
            java.lang.String r0 = r0.a     // Catch: java.lang.Exception -> L5d
            com.mbridge.msdk.mbbid.common.c.a$2 r1 = new com.mbridge.msdk.mbbid.common.c.a$2     // Catch: java.lang.Exception -> L5d
            r1.<init>()     // Catch: java.lang.Exception -> L5d
            r5.post(r4, r0, r3, r1)     // Catch: java.lang.Exception -> L5d
            goto L6a
        L5d:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r4 = com.mbridge.msdk.mbbid.common.c.a.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L6a:
            return
    }
}
