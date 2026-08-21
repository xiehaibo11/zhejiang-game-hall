package com.huawei.hms.framework.network.grs.local.model;

public class a {
    private java.lang.String a;
    private long b;
    private java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.c> c;

    public a() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 16
            r0.<init>(r1)
            r2.c = r0
            return
    }

    public com.huawei.hms.framework.network.grs.local.model.c a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.c> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            com.huawei.hms.framework.network.grs.local.model.c r2 = (com.huawei.hms.framework.network.grs.local.model.c) r2
            return r2
    }

    public void a() {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.c> r0 = r1.c
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            return
    }

    public void a(long r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void a(java.lang.String r2, com.huawei.hms.framework.network.grs.local.model.c r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.c> r0 = r1.c
            r0.put(r2, r3)
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
