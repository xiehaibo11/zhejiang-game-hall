package com.loc;

public final class cg extends com.loc.ci {
    public static int a = 13;
    public static int b = 6;
    private android.content.Context e;

    static {
            return
    }

    public cg(android.content.Context r1, com.loc.ci r2) {
            r0 = this;
            r0.<init>(r2)
            r0.e = r1
            return
    }

    private static byte[] a(android.content.Context r5) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
            byte[] r2 = new byte[r1]
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7f
            java.lang.String r4 = "1.2."
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L7f
            int r4 = com.loc.cg.a     // Catch: java.lang.Throwable -> L7f
            r3.append(r4)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r4 = "."
            r3.append(r4)     // Catch: java.lang.Throwable -> L7f
            int r4 = com.loc.cg.b     // Catch: java.lang.Throwable -> L7f
            r3.append(r4)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = "Android"
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = com.loc.o.k()     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = com.loc.o.h()     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = com.loc.o.f(r5)     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = android.os.Build.DEVICE     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = com.loc.o.n()     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = com.loc.l.c(r5)     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = com.loc.l.d(r5)     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r5 = com.loc.l.f(r5)     // Catch: java.lang.Throwable -> L7f
            com.loc.x.a(r0, r5)     // Catch: java.lang.Throwable -> L7f
            r5 = 1
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L7f
            r5[r1] = r1     // Catch: java.lang.Throwable -> L7f
            r0.write(r5)     // Catch: java.lang.Throwable -> L7f
            byte[] r2 = r0.toByteArray()     // Catch: java.lang.Throwable -> L7f
            r0.close()     // Catch: java.lang.Throwable -> L7a
            goto L8a
        L7a:
            r5 = move-exception
            r5.printStackTrace()
            goto L8a
        L7f:
            r5 = move-exception
            java.lang.String r1 = "sm"
            java.lang.String r3 = "gh"
            com.loc.av.b(r5, r1, r3)     // Catch: java.lang.Throwable -> L8b
            r0.close()     // Catch: java.lang.Throwable -> L7a
        L8a:
            return r2
        L8b:
            r5 = move-exception
            r0.close()     // Catch: java.lang.Throwable -> L90
            goto L94
        L90:
            r0 = move-exception
            r0.printStackTrace()
        L94:
            throw r5
    }

    @Override
    protected final byte[] a(byte[] r5) {
            r4 = this;
            android.content.Context r0 = r4.e
            byte[] r0 = a(r0)
            int r1 = r0.length
            int r2 = r5.length
            int r1 = r1 + r2
            byte[] r1 = new byte[r1]
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            int r0 = r0.length
            int r2 = r5.length
            java.lang.System.arraycopy(r5, r3, r1, r0, r2)
            return r1
    }
}
