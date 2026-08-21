package com.loc;

@com.loc.ba(a = "c")
public class fi {

    @com.loc.bb(a = "a2", b = 6)
    private java.lang.String a;

    @com.loc.bb(a = "a3", b = 5)
    private long b;

    @com.loc.bb(a = "a4", b = 6)
    private java.lang.String c;
    private com.amap.api.location.AMapLocation d;

    public fi() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.amap.api.location.AMapLocation a() {
            r1 = this;
            com.amap.api.location.AMapLocation r0 = r1.d
            return r0
    }

    public final void a(long r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(com.amap.api.location.AMapLocation r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final long d() {
            r2 = this;
            long r0 = r2.b
            return r0
    }
}
