package com.loc;

public final class au extends com.loc.r {
    private byte[] a;
    private java.lang.String b;

    public au(byte[] r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "1"
            r1.b = r0
            java.lang.Object r2 = r2.clone()
            byte[] r2 = (byte[]) r2
            r1.a = r2
            r1.b = r3
            com.loc.bt$a r2 = com.loc.bt.a.e
            r1.a(r2)
            com.loc.bt$c r2 = com.loc.bt.c.a
            r1.a(r2)
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> a() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/zip"
            r0.put(r1, r2)
            byte[] r1 = r3.a
            int r1 = r1.length
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "Content-Length"
            r0.put(r2, r1)
            return r0
    }

    @Override
    public final java.lang.String b() {
            r7 = this;
            java.lang.String r0 = com.loc.ag.b
            java.lang.String r0 = com.loc.x.c(r0)
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "1"
            r3 = 0
            r1[r3] = r2
            java.lang.String r4 = r7.b
            r5 = 1
            r1[r5] = r4
            r4 = 2
            r1[r4] = r2
            r2 = 3
            java.lang.String r4 = "open"
            r1[r2] = r4
            java.lang.String r2 = com.loc.ag.a
            byte[] r2 = com.loc.x.a(r2)
            int r4 = r2.length
            r5 = 50
            int r4 = r4 + r5
            byte[] r4 = new byte[r4]
            byte[] r6 = r7.a
            java.lang.System.arraycopy(r6, r3, r4, r3, r5)
            int r6 = r2.length
            java.lang.System.arraycopy(r2, r3, r4, r5, r6)
            java.lang.String r2 = com.loc.s.a(r4)
            r3 = 4
            r1[r3] = r2
            java.lang.String r0 = java.lang.String.format(r0, r1)
            return r0
    }

    @Override
    public final byte[] d() {
            r1 = this;
            byte[] r0 = r1.a
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> e() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean h() {
            r1 = this;
            r0 = 0
            return r0
    }
}
