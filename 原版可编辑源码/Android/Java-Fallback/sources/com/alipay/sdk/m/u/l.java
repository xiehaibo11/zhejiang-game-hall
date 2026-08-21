package com.alipay.sdk.m.u;

public class l {
    public static final java.lang.String a = "resultStatus";
    public static final java.lang.String b = "memo";
    public static final java.lang.String c = "result";

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a
            r0.<init>()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "(^|;)"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2a
            r0.append(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = "=\\{([^}]*?)\\}"
            r0.append(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2a
            java.util.regex.Pattern r3 = java.util.regex.Pattern.compile(r3)     // Catch: java.lang.Throwable -> L2a
            java.util.regex.Matcher r2 = r3.matcher(r2)     // Catch: java.lang.Throwable -> L2a
            boolean r3 = r2.find()     // Catch: java.lang.Throwable -> L2a
            if (r3 == 0) goto L2e
            r3 = 2
            java.lang.String r2 = r2.group(r3)     // Catch: java.lang.Throwable -> L2a
            goto L30
        L2a:
            r2 = move-exception
            com.alipay.sdk.m.u.e.a(r2)
        L2e:
            java.lang.String r2 = "?"
        L30:
            return r2
    }

    public static java.util.Map<java.lang.String, java.lang.String> a() {
            com.alipay.sdk.m.j.c r0 = com.alipay.sdk.m.j.c.e
            int r0 = r0.b()
            com.alipay.sdk.m.j.c r0 = com.alipay.sdk.m.j.c.b(r0)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            int r2 = r0.b()
            java.lang.String r2 = java.lang.Integer.toString(r2)
            java.lang.String r3 = "resultStatus"
            r1.put(r3, r2)
            java.lang.String r0 = r0.a()
            java.lang.String r2 = "memo"
            r1.put(r2, r0)
            java.lang.String r0 = "result"
            java.lang.String r2 = ""
            r1.put(r0, r2)
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(com.alipay.sdk.m.s.a r3, java.lang.String r4) {
            java.util.Map r0 = a()
            java.util.Map r0 = a(r4)     // Catch: java.lang.Throwable -> L9
            goto L11
        L9:
            r4 = move-exception
            java.lang.String r1 = "biz"
            java.lang.String r2 = "FormatResultEx"
            com.alipay.sdk.m.k.a.a(r3, r1, r2, r4)
        L11:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(java.lang.String r6) {
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
            java.lang.String r4 = b(r4, r5)
            r0.put(r5, r4)
            int r3 = r3 + 1
            goto Le
        L26:
            return r0
    }

    public static java.lang.String b(java.lang.String r1, java.lang.String r2) {
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
}
