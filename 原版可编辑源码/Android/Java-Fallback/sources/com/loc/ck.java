package com.loc;

public final class ck extends com.loc.co {
    private int a;
    private java.lang.String b;

    public ck(java.lang.String r1, com.loc.co r2) {
            r0 = this;
            r0.<init>(r2)
            r2 = 30
            r0.a = r2
            r0.b = r1
            return
    }

    private static int a(java.lang.String r3) {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L13
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L13
            boolean r3 = r1.exists()     // Catch: java.lang.Throwable -> L13
            if (r3 != 0) goto Ld
            return r0
        Ld:
            java.lang.String[] r3 = r1.list()     // Catch: java.lang.Throwable -> L13
            int r0 = r3.length     // Catch: java.lang.Throwable -> L13
            goto L1b
        L13:
            r3 = move-exception
            java.lang.String r1 = "fus"
            java.lang.String r2 = "gfn"
            com.loc.av.b(r3, r1, r2)
        L1b:
            return r0
    }

    @Override
    protected final boolean a() {
            r2 = this;
            java.lang.String r0 = r2.b
            int r0 = a(r0)
            int r1 = r2.a
            if (r0 >= r1) goto Lc
            r0 = 0
            return r0
        Lc:
            r0 = 1
            return r0
    }
}
