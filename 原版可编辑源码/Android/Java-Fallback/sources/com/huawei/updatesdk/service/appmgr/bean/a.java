package com.huawei.updatesdk.service.appmgr.bean;

public class a extends com.huawei.updatesdk.b.b.c {
    public static final java.lang.String APIMETHOD = "client.getMarketInfo";

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String code;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int deviceType;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int international;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String lang;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String marketPkg;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int net;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String subsystem;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private int sysBits;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String version;

    public a(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "updatesdk"
            r1.subsystem = r0
            java.lang.String r0 = "0200"
            r1.code = r0
            java.lang.String r0 = "client.getMarketInfo"
            r1.a(r0)
            r1.marketPkg = r2
            int r2 = com.huawei.updatesdk.a.a.d.h.c.g()
            r1.sysBits = r2
            java.lang.String r2 = com.huawei.updatesdk.a.a.d.h.c.e()
            r1.lang = r2
            java.lang.String r2 = "8.0"
            r1.b(r2)
            com.huawei.updatesdk.a.b.a.a r2 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r2 = r2.a()
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.h(r2)
            r1.version = r0
            com.huawei.updatesdk.b.c.c r0 = com.huawei.updatesdk.b.c.b.a()
            int r0 = r0.b()
            r1.deviceType = r0
            int r0 = com.huawei.updatesdk.a.a.d.h.d.a()
            r1.international = r0
            int r2 = com.huawei.updatesdk.a.a.d.i.a.c(r2)
            r1.net = r2
            return
    }
}
