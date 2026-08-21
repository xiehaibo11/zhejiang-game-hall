package com.igexin.push.f.b;

public class a extends com.igexin.push.f.b.g {
    private static com.igexin.push.f.b.a b;
    private java.util.List<com.igexin.push.f.b.c> a;

    private a() {
            r2 = this;
            r0 = 60000(0xea60, double:2.9644E-319)
            r2.<init>(r0)
            r0 = 1
            r2.o = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.a = r0
            return
    }

    public static com.igexin.push.f.b.a i() {
            com.igexin.push.f.b.a r0 = com.igexin.push.f.b.a.b
            if (r0 != 0) goto Lb
            com.igexin.push.f.b.a r0 = new com.igexin.push.f.b.a
            r0.<init>()
            com.igexin.push.f.b.a.b = r0
        Lb:
            com.igexin.push.f.b.a r0 = com.igexin.push.f.b.a.b
            return r0
    }

    private void j() {
            r3 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1 = 360000(0x57e40, double:1.778636E-318)
            r3.a(r1, r0)
            return
    }

    public boolean a(com.igexin.push.f.b.c r2) {
            r1 = this;
            java.util.List<com.igexin.push.f.b.c> r0 = r1.a
            if (r0 == 0) goto L14
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L14
            java.util.List<com.igexin.push.f.b.c> r0 = r1.a
            boolean r2 = r0.add(r2)
            if (r2 == 0) goto L14
            r2 = 1
            goto L15
        L14:
            r2 = 0
        L15:
            return r2
    }

    @Override
    public int b_() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected void d_() {
            r4 = this;
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.l()
            java.util.List<com.igexin.push.f.b.c> r0 = r4.a
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r0.next()
            com.igexin.push.f.b.c r1 = (com.igexin.push.f.b.c) r1
            boolean r2 = r1.b()
            if (r2 == 0) goto Ld
            r1.a()
            long r2 = java.lang.System.currentTimeMillis()
            r1.a(r2)
            goto Ld
        L2a:
            r4.j()
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            r0.a(r4)
            return
    }
}
