package com.huawei.hms.support.api.entity.push;

public class ProfileReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public int operation;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String pkgName;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String profileId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String subjectId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public int type;

    public ProfileReq() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getOperation() {
            r1 = this;
            int r0 = r1.operation
            return r0
    }

    public java.lang.String getPkgName() {
            r1 = this;
            java.lang.String r0 = r1.pkgName
            return r0
    }

    public java.lang.String getProfileId() {
            r1 = this;
            java.lang.String r0 = r1.profileId
            return r0
    }

    public java.lang.String getSubjectId() {
            r1 = this;
            java.lang.String r0 = r1.subjectId
            return r0
    }

    public int getType() {
            r1 = this;
            int r0 = r1.type
            return r0
    }

    public void setOperation(int r1) {
            r0 = this;
            r0.operation = r1
            return
    }

    public void setPkgName(java.lang.String r1) {
            r0 = this;
            r0.pkgName = r1
            return
    }

    public void setProfileId(java.lang.String r1) {
            r0 = this;
            r0.profileId = r1
            return
    }

    public void setSubjectId(java.lang.String r1) {
            r0 = this;
            r0.subjectId = r1
            return
    }

    public void setType(int r1) {
            r0 = this;
            r0.type = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class<com.huawei.hms.support.api.entity.push.ProfileReq> r1 = com.huawei.hms.support.api.entity.push.ProfileReq.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "{ pkgName: "
            r0.append(r1)
            java.lang.String r1 = r2.pkgName
            r0.append(r1)
            java.lang.String r1 = ",subjectId: "
            r0.append(r1)
            java.lang.String r1 = r2.subjectId
            r0.append(r1)
            java.lang.String r1 = ",operation: "
            r0.append(r1)
            int r1 = r2.operation
            r0.append(r1)
            java.lang.String r1 = " type: "
            r0.append(r1)
            int r1 = r2.type
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
