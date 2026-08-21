package com.mbridge.msdk.foundation.same.net.d;

public class f extends com.mbridge.msdk.foundation.same.net.i<java.lang.String> {
    private static final java.lang.String c = null;
    private java.lang.String d;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.d.f> r0 = com.mbridge.msdk.foundation.same.net.d.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.d.f.c = r0
            return
    }

    public f(int r1, java.lang.String r2, java.lang.String r3, com.mbridge.msdk.foundation.same.net.e<java.lang.String> r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.d = r3
            return
    }

    @Override
    protected final com.mbridge.msdk.foundation.same.net.k<java.lang.String> a(com.mbridge.msdk.foundation.same.net.e.c r4) {
            r3 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L12
            byte[] r1 = r4.b     // Catch: java.io.UnsupportedEncodingException -> L12
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r2 = r4.d     // Catch: java.io.UnsupportedEncodingException -> L12
            java.lang.String r2 = com.mbridge.msdk.foundation.same.net.f.b.a(r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            com.mbridge.msdk.foundation.same.net.k r4 = com.mbridge.msdk.foundation.same.net.k.a(r0, r4)     // Catch: java.io.UnsupportedEncodingException -> L12
            return r4
        L12:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.d.f.c
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 8
            r0.<init>(r1, r4)
            com.mbridge.msdk.foundation.same.net.k r4 = com.mbridge.msdk.foundation.same.net.k.a(r0)
            return r4
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
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.d.f.c
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
