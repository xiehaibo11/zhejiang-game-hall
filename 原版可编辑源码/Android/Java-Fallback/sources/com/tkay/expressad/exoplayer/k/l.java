package com.tkay.expressad.exoplayer.k;

public final class l {
    private java.lang.String[] a;
    private boolean b;
    private boolean c;

    private l(java.lang.String... r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private void a(java.lang.String... r3) {
            r2 = this;
            boolean r0 = r2.b
            r0 = r0 ^ 1
            java.lang.String r1 = "Cannot set libraries after loading"
            com.tkay.expressad.exoplayer.k.a.b(r0, r1)
            r2.a = r3
            return
    }

    private boolean a() {
            r5 = this;
            boolean r0 = r5.b
            if (r0 == 0) goto L7
            boolean r0 = r5.c
            return r0
        L7:
            r0 = 1
            r5.b = r0
            java.lang.String[] r1 = r5.a     // Catch: java.lang.UnsatisfiedLinkError -> L1a
            int r2 = r1.length     // Catch: java.lang.UnsatisfiedLinkError -> L1a
            r3 = 0
        Le:
            if (r3 >= r2) goto L18
            r4 = r1[r3]     // Catch: java.lang.UnsatisfiedLinkError -> L1a
            java.lang.System.loadLibrary(r4)     // Catch: java.lang.UnsatisfiedLinkError -> L1a
            int r3 = r3 + 1
            goto Le
        L18:
            r5.c = r0     // Catch: java.lang.UnsatisfiedLinkError -> L1a
        L1a:
            boolean r0 = r5.c
            return r0
    }
}
