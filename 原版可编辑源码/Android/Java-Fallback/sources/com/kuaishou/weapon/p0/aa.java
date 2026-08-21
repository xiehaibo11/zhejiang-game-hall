package com.kuaishou.weapon.p0;

public class aa {
    private static volatile com.kuaishou.weapon.p0.aa a;

    static {
            return
    }

    private aa() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.kuaishou.weapon.p0.aa a() {
            java.lang.Class<com.kuaishou.weapon.p0.aa> r0 = com.kuaishou.weapon.p0.aa.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.aa r1 = com.kuaishou.weapon.p0.aa.a     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L18
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1c
            com.kuaishou.weapon.p0.aa r1 = com.kuaishou.weapon.p0.aa.a     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.kuaishou.weapon.p0.aa r1 = new com.kuaishou.weapon.p0.aa     // Catch: java.lang.Throwable -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L15
            com.kuaishou.weapon.p0.aa.a = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1     // Catch: java.lang.Throwable -> L1c
        L18:
            com.kuaishou.weapon.p0.aa r1 = com.kuaishou.weapon.p0.aa.a     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)
            return r1
        L1c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static java.lang.String a(java.io.BufferedInputStream r6) {
            if (r6 != 0) goto L5
            java.lang.String r6 = ""
            return r6
        L5:
            r0 = 512(0x200, float:7.17E-43)
            byte[] r1 = new byte[r0]
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        Le:
            int r3 = r6.read(r1)     // Catch: java.lang.Exception -> L20
            if (r3 <= 0) goto L1d
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L20
            r5 = 0
            r4.<init>(r1, r5, r3)     // Catch: java.lang.Exception -> L20
            r2.append(r4)     // Catch: java.lang.Exception -> L20
        L1d:
            if (r3 < r0) goto L20
            goto Le
        L20:
            java.lang.String r6 = r2.toString()
            return r6
    }

    public java.lang.String a(java.lang.String r8) {
            r7 = this;
            r0 = 0
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            r2[r6] = r8     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.Object r8 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            if (r8 == 0) goto L25
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            r0 = r8
            goto L25
        L23:
            r8 = move-exception
            throw r8
        L25:
            return r0
    }

    public java.lang.String b(java.lang.String r6) {
            r5 = this;
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L62
            java.lang.String r2 = "sh"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L62
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4d
            java.io.OutputStream r3 = r1.getOutputStream()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4d
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L48
            java.io.InputStream r4 = r1.getInputStream()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L48
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L48
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            r2.write(r6)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            r6 = 10
            r2.write(r6)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            r2.flush()     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            r2.close()     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            r1.waitFor()     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            java.lang.String r6 = a(r3)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L65
            r2.close()     // Catch: java.io.IOException -> L39
        L39:
            r3.close()     // Catch: java.io.IOException -> L3c
        L3c:
            if (r1 == 0) goto L41
            r1.destroy()
        L41:
            return r6
        L42:
            r6 = move-exception
            goto L46
        L44:
            r6 = move-exception
            r3 = r0
        L46:
            r0 = r2
            goto L52
        L48:
            r3 = r0
            goto L65
        L4a:
            r6 = move-exception
            r3 = r0
            goto L52
        L4d:
            r2 = r0
            goto L64
        L4f:
            r6 = move-exception
            r1 = r0
            r3 = r1
        L52:
            if (r0 == 0) goto L57
            r0.close()     // Catch: java.io.IOException -> L57
        L57:
            if (r3 == 0) goto L5c
            r3.close()     // Catch: java.io.IOException -> L5c
        L5c:
            if (r1 == 0) goto L61
            r1.destroy()
        L61:
            throw r6
        L62:
            r1 = r0
            r2 = r1
        L64:
            r3 = r2
        L65:
            if (r2 == 0) goto L6a
            r2.close()     // Catch: java.io.IOException -> L6a
        L6a:
            if (r3 == 0) goto L6f
            r3.close()     // Catch: java.io.IOException -> L6f
        L6f:
            if (r1 == 0) goto L74
            r1.destroy()
        L74:
            return r0
    }
}
