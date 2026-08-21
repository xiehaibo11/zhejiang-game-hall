package com.huawei.hms.aaid.entity;

public class TokenReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String aaid;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String appId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean firstTime;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean isFastApp;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean isMultiSender;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String packageName;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String projectId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String scope;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String subjectId;

    public TokenReq() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isMultiSender = r0
            r1.isFastApp = r0
            return
    }

    public java.lang.String getAaid() {
            r1 = this;
            java.lang.String r0 = r1.aaid
            return r0
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.appId
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public java.lang.String getProjectId() {
            r1 = this;
            java.lang.String r0 = r1.projectId
            return r0
    }

    public java.lang.String getScope() {
            r1 = this;
            java.lang.String r0 = r1.scope
            return r0
    }

    public java.lang.String getSubjectId() {
            r1 = this;
            java.lang.String r0 = r1.subjectId
            return r0
    }

    public boolean isFastApp() {
            r1 = this;
            boolean r0 = r1.isFastApp
            return r0
    }

    public boolean isFirstTime() {
            r1 = this;
            boolean r0 = r1.firstTime
            return r0
    }

    public boolean isMultiSender() {
            r1 = this;
            boolean r0 = r1.isMultiSender
            return r0
    }

    public void setAaid(java.lang.String r1) {
            r0 = this;
            r0.aaid = r1
            return
    }

    public void setAppId(java.lang.String r1) {
            r0 = this;
            r0.appId = r1
            return
    }

    public void setFastApp(boolean r1) {
            r0 = this;
            r0.isFastApp = r1
            return
    }

    public void setFirstTime(boolean r1) {
            r0 = this;
            r0.firstTime = r1
            return
    }

    public void setMultiSender(boolean r1) {
            r0 = this;
            r0.isMultiSender = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setProjectId(java.lang.String r1) {
            r0 = this;
            r0.projectId = r1
            return
    }

    public void setScope(java.lang.String r1) {
            r0 = this;
            r0.scope = r1
            return
    }

    public void setSubjectId(java.lang.String r1) {
            r0 = this;
            r0.subjectId = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.Class<com.huawei.hms.aaid.entity.TokenReq> r1 = com.huawei.hms.aaid.entity.TokenReq.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "{"
            r0.append(r1)
            java.lang.String r1 = "pkgName: "
            r0.append(r1)
            java.lang.String r1 = r2.packageName
            r0.append(r1)
            java.lang.String r1 = ",isFirstTime: "
            r0.append(r1)
            boolean r1 = r2.firstTime
            r0.append(r1)
            java.lang.String r1 = ",scope:"
            r0.append(r1)
            java.lang.String r1 = r2.scope
            r0.append(r1)
            java.lang.String r1 = ",appId:"
            r0.append(r1)
            java.lang.String r1 = r2.appId
            r0.append(r1)
            java.lang.String r1 = ",projectId:"
            r0.append(r1)
            java.lang.String r1 = r2.projectId
            r0.append(r1)
            java.lang.String r1 = ",subjectId:"
            r0.append(r1)
            java.lang.String r1 = r2.subjectId
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
