package com.vivo.push.util;

public final class e {
    public static boolean a(long r1, java.util.HashMap<java.lang.String, java.lang.String> r3) {
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            r0.<init>(r1)
            r0.a(r3)
            r0.d()
            com.vivo.push.e r1 = com.vivo.push.e.a()
            r1.a(r0)
            r1 = 1
            return r1
    }

    public static boolean a(android.content.Context r2, long r3, long r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "report message: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = ", reportType: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ClientReportUtil"
            com.vivo.push.util.p.d(r1, r0)
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            r0.<init>(r5)
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r4 = "messageID"
            r5.put(r4, r3)
            java.lang.String r3 = r2.getPackageName()
            java.lang.String r2 = com.vivo.push.util.z.b(r2, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L41
            java.lang.String r3 = "remoteAppId"
            r5.put(r3, r2)
        L41:
            r0.a(r5)
            com.vivo.push.e r2 = com.vivo.push.e.a()
            r2.a(r0)
            r2 = 1
            return r2
    }
}
