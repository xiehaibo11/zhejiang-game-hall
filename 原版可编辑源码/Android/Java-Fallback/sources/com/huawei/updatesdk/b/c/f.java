package com.huawei.updatesdk.b.c;

public class f extends com.huawei.updatesdk.b.c.c {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "com.huawei.appmarketwear"
            return r0
    }

    @Override
    public int b() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    java.lang.String c() {
            r2 = this;
            java.lang.String r0 = "ro.product.manufacturer"
            java.lang.String r1 = ""
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.a(r0, r1)
            return r0
    }

    @Override
    java.lang.String d() {
            r1 = this;
            boolean r0 = com.huawei.updatesdk.a.a.d.h.e.a()
            if (r0 == 0) goto L9
            java.lang.String r0 = android.os.Build.PRODUCT
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.util.List<java.lang.String> g() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "CE1EF7188F820973C191227D95D54311ED3A65EC83E37009E898A1C058BBC775"
            r0.add(r1)
            return r0
    }
}
