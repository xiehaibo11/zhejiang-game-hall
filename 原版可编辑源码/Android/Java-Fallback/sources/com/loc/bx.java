package com.loc;

public final class bx {
    private android.content.Context a;
    private com.loc.w b;
    private java.lang.String c;

    public bx(android.content.Context r1, com.loc.w r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    private static java.lang.String a(android.content.Context r2, com.loc.w r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\"sdkversion\":\""
            r0.append(r1)     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = r3.c()     // Catch: java.lang.Throwable -> L32
            r0.append(r1)     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "\",\"product\":\""
            r0.append(r1)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L32
            r0.append(r3)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "\",\"nt\":\""
            r0.append(r3)     // Catch: java.lang.Throwable -> L32
            int r2 = com.loc.o.c(r2)     // Catch: java.lang.Throwable -> L32
            r0.append(r2)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "\",\"details\":"
            r0.append(r2)     // Catch: java.lang.Throwable -> L32
            r0.append(r4)     // Catch: java.lang.Throwable -> L32
            goto L36
        L32:
            r2 = move-exception
            r2.printStackTrace()
        L36:
            java.lang.String r2 = r0.toString()
            return r2
    }

    final byte[] a() {
            r3 = this;
            android.content.Context r0 = r3.a
            com.loc.w r1 = r3.b
            java.lang.String r2 = r3.c
            java.lang.String r0 = a(r0, r1, r2)
            byte[] r0 = com.loc.x.a(r0)
            return r0
    }
}
