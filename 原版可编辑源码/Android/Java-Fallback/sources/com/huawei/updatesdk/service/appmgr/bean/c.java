package com.huawei.updatesdk.service.appmgr.bean;

public class c extends com.huawei.updatesdk.a.b.c.c.b {

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String appName;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String downUrl;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private long fileSize;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String pkgName;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String sha256;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private long versionCode;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String versionName;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.appName
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.downUrl
            return r0
    }

    public long c() {
            r2 = this;
            long r0 = r2.fileSize
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.pkgName
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.sha256
            return r0
    }

    public boolean f() {
            r4 = this;
            java.lang.String r0 = r4.sha256
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r4.downUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            long r0 = r4.fileSize
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            return r0
    }
}
