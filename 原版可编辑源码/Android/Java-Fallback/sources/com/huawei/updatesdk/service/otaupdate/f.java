package com.huawei.updatesdk.service.otaupdate;

public class f {
    private static com.huawei.updatesdk.service.otaupdate.f d;
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;

    static {
            com.huawei.updatesdk.service.otaupdate.f r0 = new com.huawei.updatesdk.service.otaupdate.f
            r0.<init>()
            com.huawei.updatesdk.service.otaupdate.f.d = r0
            return
    }

    private f() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "com.huawei.appmarket"
            r1.c = r0
            return
    }

    public static com.huawei.updatesdk.service.otaupdate.f e() {
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.d
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.a
            return r0
        Lb:
            java.lang.String r0 = r1.b
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
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

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public boolean d() {
            r2 = this;
            java.lang.String r0 = r2.a
            if (r0 == 0) goto Lb
            java.lang.String r1 = r2.b
            boolean r0 = r0.equals(r1)
            return r0
        Lb:
            r0 = 1
            return r0
    }
}
