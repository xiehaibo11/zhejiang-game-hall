package com.tkay.expressad.foundation.g.f.d;

public abstract class e<T> extends com.tkay.expressad.foundation.g.f.i<T> {
    private static final java.lang.String c = null;
    private final java.lang.String d;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.d.e> r0 = com.tkay.expressad.foundation.g.f.d.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.d.e.c = r0
            return
    }

    public e(int r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.foundation.g.f.e<T> r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.d = r3
            return
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
