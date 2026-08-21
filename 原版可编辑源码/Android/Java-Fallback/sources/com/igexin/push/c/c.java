package com.igexin.push.c;

class c {
    static final int[] a = null;

    static {
            com.igexin.push.c.d[] r0 = com.igexin.push.c.d.a()
            int r0 = r0.length
            int[] r0 = new int[r0]
            com.igexin.push.c.c.a = r0
            com.igexin.push.c.d r1 = com.igexin.push.c.d.a     // Catch: java.lang.NoSuchFieldError -> L12
            int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
            r2 = 1
            r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
        L12:
            int[] r0 = com.igexin.push.c.c.a     // Catch: java.lang.NoSuchFieldError -> L1d
            com.igexin.push.c.d r1 = com.igexin.push.c.d.b     // Catch: java.lang.NoSuchFieldError -> L1d
            int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
            r2 = 2
            r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
        L1d:
            int[] r0 = com.igexin.push.c.c.a     // Catch: java.lang.NoSuchFieldError -> L28
            com.igexin.push.c.d r1 = com.igexin.push.c.d.c     // Catch: java.lang.NoSuchFieldError -> L28
            int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
            r2 = 3
            r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
        L28:
            return
    }
}
