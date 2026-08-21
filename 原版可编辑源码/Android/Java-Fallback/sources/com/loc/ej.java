package com.loc;

public final class ej {
    public static void a(java.lang.Throwable r1) {
            boolean r0 = com.loc.dy.a
            if (r0 == 0) goto L7
            b(r1)
        L7:
            return
    }

    private static java.lang.String b(java.lang.Throwable r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            r1 = r3
        L6:
            if (r1 == 0) goto L12
            boolean r2 = r1 instanceof java.net.UnknownHostException
            if (r2 == 0) goto Ld
            return r0
        Ld:
            java.lang.Throwable r1 = r1.getCause()
            goto L6
        L12:
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r3.printStackTrace(r1)
            r1.flush()
            java.lang.String r3 = r0.toString()
            return r3
    }
}
