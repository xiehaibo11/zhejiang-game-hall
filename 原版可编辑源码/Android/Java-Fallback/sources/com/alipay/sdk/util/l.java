package com.alipay.sdk.util;

public class l {
    public static final java.lang.String a = "resultStatus";
    public static final java.lang.String b = "memo";
    public static final java.lang.String c = "result";

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "={"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r0 = r1.indexOf(r2)
            int r2 = r2.length()
            int r0 = r0 + r2
            java.lang.String r2 = "}"
            int r2 = r1.lastIndexOf(r2)
            java.lang.String r1 = r1.substring(r0, r2)
            return r1
    }

    private static java.util.Map<java.lang.String, java.lang.String> a() {
            com.alipay.sdk.app.k r0 = com.alipay.sdk.app.k.c
            int r0 = r0.a()
            com.alipay.sdk.app.k r0 = com.alipay.sdk.app.k.b(r0)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            int r2 = r0.a()
            java.lang.String r2 = java.lang.Integer.toString(r2)
            java.lang.String r3 = "resultStatus"
            r1.put(r3, r2)
            java.lang.String r0 = r0.b()
            java.lang.String r2 = "memo"
            r1.put(r2, r0)
            java.lang.String r0 = "result"
            java.lang.String r2 = ""
            r1.put(r0, r2)
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(java.lang.String r3) {
            java.util.Map r0 = a()
            java.util.Map r0 = b(r3)     // Catch: java.lang.Throwable -> L9
            goto L11
        L9:
            r3 = move-exception
            java.lang.String r1 = "biz"
            java.lang.String r2 = "FormatResultEx"
            com.alipay.sdk.app.statistic.a.a(r1, r2, r3)
        L11:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.lang.String r6) {
            java.lang.String r0 = ";"
            java.lang.String[] r6 = r6.split(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            int r1 = r6.length
            r2 = 0
            r3 = 0
        Le:
            if (r3 >= r1) goto L26
            r4 = r6[r3]
            java.lang.String r5 = "={"
            int r5 = r4.indexOf(r5)
            java.lang.String r5 = r4.substring(r2, r5)
            java.lang.String r4 = a(r4, r5)
            r0.put(r5, r4)
            int r3 = r3 + 1
            goto Le
        L26:
            return r0
    }
}
