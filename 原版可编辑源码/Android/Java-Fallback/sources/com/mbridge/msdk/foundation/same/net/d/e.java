package com.mbridge.msdk.foundation.same.net.d;

public abstract class e<T> extends com.mbridge.msdk.foundation.same.net.i<T> {
    private static final java.lang.String c = null;
    private final java.lang.String d;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.d.e> r0 = com.mbridge.msdk.foundation.same.net.d.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.d.e.c = r0
            return
    }

    public e(int r1, java.lang.String r2, java.lang.String r3, com.mbridge.msdk.foundation.same.net.e<T> r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.d = r3
            return
    }

    @Override
    public final byte[] e() {
            r4 = this;
            r0 = 0
            java.lang.String r1 = r4.d     // Catch: java.io.UnsupportedEncodingException -> Lf
            if (r1 != 0) goto L6
            goto Le
        L6:
            java.lang.String r1 = r4.d     // Catch: java.io.UnsupportedEncodingException -> Lf
            java.lang.String r2 = "utf-8"
            byte[] r0 = r1.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> Lf
        Le:
            return r0
        Lf:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.d.e.c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unsupported Encoding while trying to get the bytes of "
            r2.append(r3)
            java.lang.String r3 = r4.d
            r2.append(r3)
            java.lang.String r3 = " using utf-8"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            return r0
    }
}
