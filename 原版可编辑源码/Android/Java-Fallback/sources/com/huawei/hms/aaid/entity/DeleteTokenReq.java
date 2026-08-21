package com.huawei.hms.aaid.entity;

public class DeleteTokenReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String appId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public int deleteType;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean isFastApp;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean isMultiSender;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String pkgName;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String projectId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String scope;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String subjectId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String token;

    public DeleteTokenReq() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isMultiSender = r0
            r1.deleteType = r0
            r1.isFastApp = r0
            return
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.appId
            return r0
    }

    public int getDeleteType() {
            r1 = this;
            int r0 = r1.deleteType
            return r0
    }

    public java.lang.String getPkgName() {
            r1 = this;
            java.lang.String r0 = r1.pkgName
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

    public java.lang.String getToken() {
            r1 = this;
            java.lang.String r0 = r1.token
            return r0
    }

    public boolean isFastApp() {
            r1 = this;
            boolean r0 = r1.isFastApp
            return r0
    }

    public boolean isMultiSender() {
            r1 = this;
            boolean r0 = r1.isMultiSender
            return r0
    }

    public void setAppId(java.lang.String r1) {
            r0 = this;
            r0.appId = r1
            return
    }

    public void setDeleteType(int r1) {
            r0 = this;
            r0.deleteType = r1
            return
    }

    public void setFastApp(boolean r1) {
            r0 = this;
            r0.isFastApp = r1
            return
    }

    public void setMultiSender(boolean r1) {
            r0 = this;
            r0.isMultiSender = r1
            return
    }

    public void setPkgName(java.lang.String r1) {
            r0 = this;
            r0.pkgName = r1
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

    public void setToken(java.lang.String r1) {
            r0 = this;
            r0.token = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.Class<com.huawei.hms.aaid.entity.DeleteTokenReq> r1 = com.huawei.hms.aaid.entity.DeleteTokenReq.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "{"
            r0.append(r1)
            java.lang.String r1 = "pkgName: "
            r0.append(r1)
            java.lang.String r1 = r3.pkgName
            r0.append(r1)
            java.lang.String r1 = ",scope:"
            r0.append(r1)
            java.lang.String r1 = r3.scope
            r0.append(r1)
            java.lang.String r1 = ",appId:"
            r0.append(r1)
            java.lang.String r1 = r3.appId
            r0.append(r1)
            java.lang.String r1 = ",projectId:"
            r0.append(r1)
            java.lang.String r1 = r3.projectId
            r0.append(r1)
            java.lang.String r1 = ",subjectId:"
            r0.append(r1)
            java.lang.String r2 = r3.subjectId
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r3.subjectId
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
