package com.huawei.updatesdk.b.b;

public class c extends com.huawei.updatesdk.a.b.c.c.c {

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String brand;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String buildNumber;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String density;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int emuiApiLevel;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String firmwareVersion;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String manufacturer;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String phoneType;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String resolution;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private long ts;

    public c() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.emuiApiLevel = r0
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            long r1 = java.lang.System.currentTimeMillis()
            r3.ts = r1
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = r1.trim()
            r3.firmwareVersion = r1
            java.lang.String r1 = com.huawei.updatesdk.a.a.d.h.c.c()
            r3.buildNumber = r1
            com.huawei.updatesdk.b.c.c r1 = com.huawei.updatesdk.b.c.b.a()
            java.lang.String r2 = r1.f()
            r3.phoneType = r2
            java.lang.String r2 = com.huawei.updatesdk.a.a.d.h.c.f(r0)
            r3.density = r2
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.e(r0)
            r3.resolution = r0
            com.huawei.updatesdk.b.h.a r0 = com.huawei.updatesdk.b.h.a.d()
            int r0 = r0.a()
            r3.emuiApiLevel = r0
            java.lang.String r0 = r1.e()
            r3.manufacturer = r0
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.c
            r3.brand = r0
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " {\n\tmethod_: "
            r0.append(r1)
            java.lang.String r1 = r2.b()
            r0.append(r1)
            java.lang.String r1 = "\n}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
