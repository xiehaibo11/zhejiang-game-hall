package com.huawei.updatesdk.service.appmgr.bean;

public class d extends com.huawei.updatesdk.b.b.c {
    public static final java.lang.String APIMETHOD = "client.updateCheck";
    public static final int DEFAULT_UPGRADE_RESULT = 0;
    public static final int FULL_UPGRADE_RESULT = 1;
    public static final int INSTALL_CHECK_DEFAULT = 0;
    private java.lang.String agVersion_;
    private com.huawei.updatesdk.a.a.d.h.b deviceSpecParams_;
    private int getSafeGame_;
    private int gmsSupport_;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int hardwareType;
    private int installCheck_;
    private int isFullUpgrade_;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int isUpdateSdk;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String locale;
    private int mapleVer_;
    private java.lang.String packageName_;
    private com.huawei.updatesdk.service.appmgr.bean.d.a pkgInfo_;
    private java.lang.String serviceCountry_;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int serviceType;
    private int supportMaple_;
    private int versionCode_;
    private java.lang.String version_;

    public static class a extends com.huawei.updatesdk.a.b.c.c.b {
        private java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> params_;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public void a(java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> r1) {
                r0 = this;
                r0.params_ = r1
                return
        }
    }

    public d() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.serviceType = r0
            r1 = 1
            r3.isUpdateSdk = r1
            r3.installCheck_ = r0
            r3.isFullUpgrade_ = r0
            r3.getSafeGame_ = r1
            r3.supportMaple_ = r0
            r0 = 0
            r3.locale = r0
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            java.lang.String r2 = "client.updateCheck"
            r3.a(r2)
            java.lang.String r2 = "1.2"
            r3.b(r2)
            java.lang.String r2 = com.huawei.updatesdk.a.a.d.h.c.h()
            r3.locale = r2
            java.lang.String r2 = com.huawei.updatesdk.a.a.d.h.c.h(r0)
            r3.g(r2)
            int r2 = com.huawei.updatesdk.a.a.d.h.c.g(r0)
            r3.f(r2)
            boolean r2 = com.huawei.updatesdk.a.a.d.h.c.i(r0)
            r3.a(r2)
            com.huawei.updatesdk.a.b.a.a r2 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r2 = r2.a()
            java.lang.String r2 = r2.getPackageName()
            r3.e(r2)
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            java.lang.String r2 = r2.a()
            r3.f(r2)
            com.huawei.updatesdk.a.a.d.h.c r2 = com.huawei.updatesdk.a.a.d.h.c.d()
            int r2 = r2.a()
            r3.e(r2)
            com.huawei.updatesdk.a.a.d.h.c r2 = com.huawei.updatesdk.a.a.d.h.c.d()
            int r2 = r2.b()
            r3.c(r2)
            com.huawei.updatesdk.a.a.d.h.b$b r2 = new com.huawei.updatesdk.a.a.d.h.b$b
            r2.<init>(r0)
            com.huawei.updatesdk.a.a.d.h.b$b r0 = r2.a(r1)
            com.huawei.updatesdk.a.a.d.h.b r0 = r0.a()
            r3.deviceSpecParams_ = r0
            com.huawei.updatesdk.b.c.c r0 = com.huawei.updatesdk.b.c.b.a()
            int r0 = r0.b()
            r3.hardwareType = r0
            return
    }

    public d(java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> r2) {
            r1 = this;
            r1.<init>()
            com.huawei.updatesdk.service.appmgr.bean.d$a r0 = new com.huawei.updatesdk.service.appmgr.bean.d$a
            r0.<init>()
            r0.a(r2)
            r1.a(r0)
            return
    }

    public static com.huawei.updatesdk.service.appmgr.bean.d a(java.util.List<android.content.pm.PackageInfo> r4) {
            com.huawei.updatesdk.service.appmgr.bean.d r0 = new com.huawei.updatesdk.service.appmgr.bean.d
            r0.<init>()
            com.huawei.updatesdk.service.appmgr.bean.d$a r1 = new com.huawei.updatesdk.service.appmgr.bean.d$a
            r1.<init>()
            r0.a(r1)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.a(r2)
            java.util.Iterator r4 = r4.iterator()
        L19:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r4.next()
            android.content.pm.PackageInfo r1 = (android.content.pm.PackageInfo) r1
            com.huawei.updatesdk.service.appmgr.bean.Param r3 = new com.huawei.updatesdk.service.appmgr.bean.Param
            r3.<init>(r1)
            r2.add(r3)
            goto L19
        L2e:
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.gmsSupport_ = r1
            return
    }

    public void a(com.huawei.updatesdk.service.appmgr.bean.d.a r1) {
            r0 = this;
            r0.pkgInfo_ = r1
            return
    }

    public void b(int r1) {
            r0 = this;
            r0.installCheck_ = r1
            return
    }

    public void c(int r1) {
            r0 = this;
            r0.mapleVer_ = r1
            return
    }

    public void d(int r1) {
            r0 = this;
            r0.serviceType = r1
            return
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.agVersion_ = r1
            return
    }

    public void e(int r1) {
            r0 = this;
            r0.supportMaple_ = r1
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.packageName_ = r1
            return
    }

    public void f(int r1) {
            r0 = this;
            r0.versionCode_ = r1
            return
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.serviceCountry_ = r1
            return
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.version_ = r1
            return
    }
}
