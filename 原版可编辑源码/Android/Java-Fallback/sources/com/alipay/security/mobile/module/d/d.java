package com.alipay.security.mobile.module.d;

public final class d {
    private static java.lang.String a = "";
    private static java.lang.String b = "";
    private static java.lang.String c = "";

    static {
            return
    }

    public static synchronized void a(java.lang.String r2) {
            java.lang.Class<com.alipay.security.mobile.module.d.d> r0 = com.alipay.security.mobile.module.d.d.class
            monitor-enter(r0)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            r1.add(r2)     // Catch: java.lang.Throwable -> L10
            a(r1)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L10:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.Class<com.alipay.security.mobile.module.d.d> r0 = com.alipay.security.mobile.module.d.d.class
            monitor-enter(r0)
            com.alipay.security.mobile.module.d.d.a = r1     // Catch: java.lang.Throwable -> Lb
            com.alipay.security.mobile.module.d.d.b = r2     // Catch: java.lang.Throwable -> Lb
            com.alipay.security.mobile.module.d.d.c = r3     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)
            return
        Lb:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void a(java.lang.Throwable r4) {
            java.lang.Class<com.alipay.security.mobile.module.d.d> r0 = com.alipay.security.mobile.module.d.d.class
            monitor-enter(r0)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L26
            r1.<init>()     // Catch: java.lang.Throwable -> L26
            if (r4 == 0) goto L1c
            java.io.StringWriter r2 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L26
            r2.<init>()     // Catch: java.lang.Throwable -> L26
            java.io.PrintWriter r3 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L26
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L26
            r4.printStackTrace(r3)     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L26
            goto L1e
        L1c:
            java.lang.String r4 = ""
        L1e:
            r1.add(r4)     // Catch: java.lang.Throwable -> L26
            a(r1)     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)
            return
        L26:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static synchronized void a(java.util.List<java.lang.String> r7) {
            java.lang.Class<com.alipay.security.mobile.module.d.d> r0 = com.alipay.security.mobile.module.d.d.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.security.mobile.module.d.d.b     // Catch: java.lang.Throwable -> L98
            boolean r1 = com.alipay.security.mobile.module.a.a.a(r1)     // Catch: java.lang.Throwable -> L98
            if (r1 != 0) goto L96
            java.lang.String r1 = com.alipay.security.mobile.module.d.d.c     // Catch: java.lang.Throwable -> L98
            boolean r1 = com.alipay.security.mobile.module.a.a.a(r1)     // Catch: java.lang.Throwable -> L98
            if (r1 == 0) goto L15
            goto L96
        L15:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L98
            r1.<init>()     // Catch: java.lang.Throwable -> L98
            java.lang.String r2 = com.alipay.security.mobile.module.d.d.c     // Catch: java.lang.Throwable -> L98
            r1.append(r2)     // Catch: java.lang.Throwable -> L98
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L98
        L23:
            boolean r2 = r7.hasNext()     // Catch: java.lang.Throwable -> L98
            if (r2 == 0) goto L41
            java.lang.Object r2 = r7.next()     // Catch: java.lang.Throwable -> L98
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L98
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = ", "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L98
            r3.append(r2)     // Catch: java.lang.Throwable -> L98
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L98
            r1.append(r2)     // Catch: java.lang.Throwable -> L98
            goto L23
        L41:
            java.lang.String r7 = "\n"
            r1.append(r7)     // Catch: java.lang.Throwable -> L98
            java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            java.lang.String r2 = com.alipay.security.mobile.module.d.d.a     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r7.<init>(r2)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            boolean r2 = r7.exists()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            if (r2 != 0) goto L56
            r7.mkdirs()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
        L56:
            java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            java.lang.String r2 = com.alipay.security.mobile.module.d.d.a     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            java.lang.String r3 = com.alipay.security.mobile.module.d.d.b     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r7.<init>(r2, r3)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            boolean r2 = r7.exists()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            if (r2 != 0) goto L68
            r7.createNewFile()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
        L68:
            long r2 = r7.length()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            int r4 = r1.length()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            long r4 = (long) r4     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            long r4 = r4 + r2
            r2 = 51200(0xc800, double:2.5296E-319)
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 > 0) goto L80
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r3 = 1
            r2.<init>(r7, r3)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            goto L85
        L80:
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r2.<init>(r7)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
        L85:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r2.write(r7)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r2.flush()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            r2.close()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> L98
            monitor-exit(r0)
            return
        L94:
            monitor-exit(r0)
            return
        L96:
            monitor-exit(r0)
            return
        L98:
            r7 = move-exception
            monitor-exit(r0)
            goto L9c
        L9b:
            throw r7
        L9c:
            goto L9b
    }
}
