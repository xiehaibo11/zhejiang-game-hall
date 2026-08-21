package com.tkay.expressad.foundation.g.f.d;

public class g extends com.tkay.expressad.foundation.g.f.i<java.lang.String> {
    private static final java.lang.String c = null;
    private java.lang.String d;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.d.g> r0 = com.tkay.expressad.foundation.g.f.d.g.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.d.g.c = r0
            return
    }

    public g(int r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.foundation.g.f.e<java.lang.String> r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.d = r3
            return
    }

    @Override
    protected final com.tkay.expressad.foundation.g.f.k<java.lang.String> a(com.tkay.expressad.foundation.g.f.f.c r4) {
            r3 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L12
            byte[] r1 = r4.b     // Catch: java.io.UnsupportedEncodingException -> L12
            java.util.List<com.tkay.expressad.foundation.g.f.c.c> r2 = r4.d     // Catch: java.io.UnsupportedEncodingException -> L12
            java.lang.String r2 = com.tkay.expressad.foundation.g.f.g.e.a(r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            com.tkay.expressad.foundation.g.f.k r4 = com.tkay.expressad.foundation.g.f.k.a(r0, r4)     // Catch: java.io.UnsupportedEncodingException -> L12
            return r4
        L12:
            r0 = move-exception
            r0.getMessage()
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r1 = 8
            r0.<init>(r1, r4)
            com.tkay.expressad.foundation.g.f.k r4 = com.tkay.expressad.foundation.g.f.k.a(r0)
            return r4
    }

    @Override
    public final byte[] h() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = r3.d     // Catch: java.io.UnsupportedEncodingException -> Le
            if (r1 != 0) goto L6
            return r0
        L6:
            java.lang.String r1 = r3.d     // Catch: java.io.UnsupportedEncodingException -> Le
            java.lang.String r2 = "utf-8"
            byte[] r0 = r1.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> Le
        Le:
            return r0
    }
}
