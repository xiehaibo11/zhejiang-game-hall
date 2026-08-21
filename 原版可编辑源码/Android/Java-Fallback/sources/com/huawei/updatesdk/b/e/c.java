package com.huawei.updatesdk.b.e;

public class c extends com.huawei.updatesdk.b.e.a {
    private static java.lang.String a;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String b(java.util.List<java.lang.String> r8) {
            r7 = this;
            java.lang.String r0 = "DefaultTaskInit"
            r1 = 0
            com.huawei.updatesdk.a.b.a.a r2 = com.huawei.updatesdk.a.b.a.a.c()     // Catch: java.lang.Throwable -> L92
            android.content.Context r2 = r2.a()     // Catch: java.lang.Throwable -> L92
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder r3 = new com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder     // Catch: java.lang.Throwable -> L92
            r3.<init>()     // Catch: java.lang.Throwable -> L92
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = "com.huawei.appmarket.appmarket.intent.action.AppDetail.withdetailId"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L92
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder r5 = r3.setContext(r2)     // Catch: java.lang.Throwable -> L92
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r6 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.ACTIVITY     // Catch: java.lang.Throwable -> L92
            r5.setTargetComponent(r4, r6)     // Catch: java.lang.Throwable -> L92
            boolean r4 = com.huawei.updatesdk.b.h.d.a(r8)     // Catch: java.lang.Throwable -> L92
            if (r4 != 0) goto L59
            int r4 = r8.size()     // Catch: java.lang.Throwable -> L92
            r5 = 2
            if (r4 >= r5) goto L59
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92
            r4.<init>()     // Catch: java.lang.Throwable -> L92
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L92
        L36:
            boolean r5 = r8.hasNext()     // Catch: java.lang.Throwable -> L92
            if (r5 == 0) goto L50
            java.lang.Object r5 = r8.next()     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = com.huawei.updatesdk.b.h.b.c(r2, r5)     // Catch: java.lang.Throwable -> L92
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L92
            if (r6 != 0) goto L36
            r4.add(r5)     // Catch: java.lang.Throwable -> L92
            goto L36
        L50:
            boolean r8 = com.huawei.updatesdk.b.h.d.a(r4)     // Catch: java.lang.Throwable -> L92
            if (r8 != 0) goto L59
            r3.setPreferredPkgs(r4)     // Catch: java.lang.Throwable -> L92
        L59:
            com.huawei.updatesdk.b.c.c r8 = com.huawei.updatesdk.b.c.b.a()     // Catch: java.lang.Throwable -> L92
            java.util.List r2 = r8.g()     // Catch: java.lang.Throwable -> L92
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L92
        L65:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L92
            if (r4 == 0) goto L79
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L92
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = r8.a()     // Catch: java.lang.Throwable -> L92
            r3.addLegacyInfo(r5, r4)     // Catch: java.lang.Throwable -> L92
            goto L65
        L79:
            java.lang.String r1 = r3.genVerifiedPackageName()     // Catch: java.lang.Throwable -> L92
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92
            r8.<init>()     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "UpdateSDK get market packagename from verify kit is: "
            r8.append(r2)     // Catch: java.lang.Throwable -> L92
            r8.append(r1)     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L92
            com.huawei.updatesdk.a.a.a.b(r0, r8)     // Catch: java.lang.Throwable -> L92
            goto Lab
        L92:
            r8 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "UpdateSDK genVerifiedPackageName error: "
            r2.append(r3)
            java.lang.String r8 = r8.toString()
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            com.huawei.updatesdk.a.a.a.c(r0, r8)
        Lab:
            return r1
    }

    private void e() {
            r4 = this;
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            java.lang.String r0 = r4.a(r0)
            com.huawei.updatesdk.a.b.c.c.c.c(r0)
            com.huawei.updatesdk.service.appmgr.bean.a r0 = new com.huawei.updatesdk.service.appmgr.bean.a
            r1 = 0
            r0.<init>(r1)
            com.huawei.updatesdk.a.b.c.b r2 = new com.huawei.updatesdk.a.b.c.b
            r2.<init>(r0, r1)
            com.huawei.updatesdk.a.b.c.c.d r0 = r2.c()
            boolean r1 = r0.f()
            if (r1 == 0) goto L64
            com.huawei.updatesdk.service.appmgr.bean.b r0 = (com.huawei.updatesdk.service.appmgr.bean.b) r0
            com.huawei.updatesdk.service.appmgr.bean.c r1 = r0.g()
            java.lang.String r2 = "DefaultTaskInit"
            if (r1 == 0) goto L4c
            com.huawei.updatesdk.service.appmgr.bean.c r0 = r0.g()
            java.lang.String r0 = r0.d()
            com.huawei.updatesdk.b.e.c.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getPackageName from store: "
            r0.append(r1)
            java.lang.String r1 = com.huawei.updatesdk.b.e.c.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L61
        L4c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "getPackageName from store: error"
            r1.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L61:
            com.huawei.updatesdk.a.a.a.b(r2, r0)
        L64:
            return
    }

    @Override
    java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "com.huawei.updatesdk"
            return r0
    }

    @Override
    java.lang.String a(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "upsdk_store_url"
            java.lang.String r2 = com.huawei.updatesdk.b.h.c.d(r2, r0)
            return r2
    }

    @Override
    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "resetMarketPkgName: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultTaskInit"
            com.huawei.updatesdk.a.a.a.b(r1, r0)
            com.huawei.updatesdk.b.e.c.a = r3
            return
    }

    @Override
    public void a(java.util.List<java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = com.huawei.updatesdk.b.e.c.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L9
            return
        L9:
            java.lang.String r2 = r1.b(r2)
            com.huawei.updatesdk.b.e.c.a = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L18
            r1.e()
        L18:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "UpdateSDK genVerifiedPackageName is: "
            r2.append(r0)
            java.lang.String r0 = com.huawei.updatesdk.b.e.c.a
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "DefaultTaskInit"
            com.huawei.updatesdk.a.a.a.b(r0, r2)
            return
    }

    @Override
    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = com.huawei.updatesdk.b.e.c.a
            return r0
    }
}
