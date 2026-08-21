package com.huawei.updatesdk.service.appmgr.bean;

public class Param extends com.huawei.updatesdk.a.b.c.c.b {
    private java.lang.String fSha2_;
    private int isPre_;
    private java.util.List<java.lang.String> keySets_;
    private int maple_;
    private java.lang.String oldVersion_;
    private java.lang.String package_;
    private java.lang.String sSha2_;
    private int targetSdkVersion_;
    private int versionCode_;

    public Param() {
            r0 = this;
            r0.<init>()
            return
    }

    public Param(android.content.pm.PackageInfo r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = r3.packageName
            r2.package_ = r0
            int r0 = r3.versionCode
            r2.versionCode_ = r0
            java.lang.String r0 = r3.versionName
            if (r0 != 0) goto L11
            java.lang.String r0 = "null"
        L11:
            r2.oldVersion_ = r0
            android.content.pm.ApplicationInfo r0 = r3.applicationInfo
            int r0 = r0.targetSdkVersion
            r2.targetSdkVersion_ = r0
            int r0 = com.huawei.updatesdk.b.h.b.a(r3)
            r2.isPre_ = r0
            java.lang.String r0 = r2.package_
            int r0 = com.huawei.updatesdk.b.h.b.a(r0)
            r2.maple_ = r0
            com.huawei.updatesdk.b.a.b.b r0 = com.huawei.updatesdk.b.a.b.b.a()
            java.util.List r0 = r0.a(r3)
            r2.keySets_ = r0
            android.content.pm.Signature[] r0 = r3.signatures
            if (r0 == 0) goto L42
            int r1 = r0.length
            if (r1 <= 0) goto L42
            r1 = 0
            r0 = r0[r1]
            java.lang.String r0 = r0.toCharsString()
            r2.setApkSignature(r0)
        L42:
            com.huawei.updatesdk.b.a.a.b r0 = com.huawei.updatesdk.b.a.a.b.a()
            java.lang.String r3 = r0.a(r3)
            r2.fSha2_ = r3
            return
    }

    public void setApkFileSha256(java.lang.String r1) {
            r0 = this;
            r0.fSha2_ = r1
            return
    }

    public void setApkSignature(java.lang.String r2) {
            r1 = this;
            byte[] r2 = com.huawei.updatesdk.a.a.d.g.c(r2)
            java.lang.String r2 = com.huawei.updatesdk.a.a.d.a.a(r2)
            java.lang.String r2 = com.huawei.updatesdk.a.a.d.g.b(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r2 = r2.toLowerCase(r0)
            r1.sSha2_ = r2
        L1c:
            return
    }

    public void setMapleState(int r1) {
            r0 = this;
            r0.maple_ = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.package_ = r1
            return
    }

    public void setTargetSdkVersion(int r1) {
            r0 = this;
            r0.targetSdkVersion_ = r1
            return
    }

    public void setVersionCode(int r1) {
            r0 = this;
            r0.versionCode_ = r1
            return
    }

    public void setVersionName(java.lang.String r1) {
            r0 = this;
            r0.oldVersion_ = r1
            return
    }
}
