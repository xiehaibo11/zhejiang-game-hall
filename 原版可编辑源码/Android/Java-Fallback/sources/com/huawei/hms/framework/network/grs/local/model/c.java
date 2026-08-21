package com.huawei.hms.framework.network.grs.local.model;

public class c {
    private java.lang.String a;
    private java.lang.String b;
    private java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.d> c;
    private java.util.List<com.huawei.hms.framework.network.grs.local.model.b> d;

    public c() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 16
            r0.<init>(r1)
            r2.c = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            r2.d = r0
            return
    }

    public com.huawei.hms.framework.network.grs.local.model.d a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.d> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            com.huawei.hms.framework.network.grs.local.model.d r2 = (com.huawei.hms.framework.network.grs.local.model.d) r2
            return r2
    }

    public java.util.List<com.huawei.hms.framework.network.grs.local.model.b> a() {
            r1 = this;
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r0 = r1.d
            return r0
    }

    public void a(java.lang.String r2, com.huawei.hms.framework.network.grs.local.model.d r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.local.model.d> r0 = r1.c
            r0.put(r2, r3)
            return
    }

    public void a(java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
