package com.mbridge.msdk.mbnative.b;

public final class a {
    public static java.lang.String a(java.lang.Exception r2) {
            if (r2 == 0) goto L14
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r2.printStackTrace(r1)
            java.lang.String r2 = r0.toString()
            goto L16
        L14:
            java.lang.String r2 = ""
        L16:
            return r2
    }
}
