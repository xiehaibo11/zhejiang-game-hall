package com.loc;

public final class cf extends com.loc.ci {
    private java.lang.StringBuilder a;
    private boolean b;

    public cf() {
            r1 = this;
            r1.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.a = r0
            r0 = 1
            r1.b = r0
            return
    }

    public cf(com.loc.ci r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r0.a = r1
            r1 = 1
            r0.b = r1
            return
    }

    @Override
    protected final byte[] a(byte[] r4) {
            r3 = this;
            java.lang.StringBuilder r4 = r3.a
            java.lang.String r4 = r4.toString()
            byte[] r4 = com.loc.x.a(r4)
            r3.d = r4
            r0 = 1
            r3.b = r0
            java.lang.StringBuilder r0 = r3.a
            int r1 = r0.length()
            r2 = 0
            r0.delete(r2, r1)
            return r4
    }

    @Override
    public final void b(byte[] r3) {
            r2 = this;
            java.lang.String r3 = com.loc.x.a(r3)
            boolean r0 = r2.b
            if (r0 == 0) goto Lc
            r0 = 0
            r2.b = r0
            goto L13
        Lc:
            java.lang.StringBuilder r0 = r2.a
            java.lang.String r1 = ","
            r0.append(r1)
        L13:
            java.lang.StringBuilder r0 = r2.a
            java.lang.String r1 = "{\"log\":\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\"}"
            r0.append(r3)
            return
    }
}
