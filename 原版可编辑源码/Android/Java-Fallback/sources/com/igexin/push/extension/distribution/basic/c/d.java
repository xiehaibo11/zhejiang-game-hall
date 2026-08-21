package com.igexin.push.extension.distribution.basic.c;

class d implements java.io.FileFilter {
    long a;
    long b;
    final com.igexin.push.extension.distribution.basic.c.c c;

    d(com.igexin.push.extension.distribution.basic.c.c r3) {
            r2 = this;
            r2.c = r3
            r2.<init>()
            long r0 = java.lang.System.currentTimeMillis()
            r2.a = r0
            r0 = 604800000(0x240c8400, double:2.988109026E-315)
            r2.b = r0
            return
    }

    @Override
    public boolean accept(java.io.File r5) {
            r4 = this;
            long r0 = r4.a
            long r2 = r5.lastModified()
            long r0 = r0 - r2
            long r2 = r4.b
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto Lf
            r5 = 1
            goto L10
        Lf:
            r5 = 0
        L10:
            return r5
    }
}
