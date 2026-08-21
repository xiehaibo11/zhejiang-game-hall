package com.huawei.hms.support.api.entity.push;

public class SubscribeReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String appId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean isFastApp;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String operation;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String packageName;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String projectId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String subjectId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String token;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String topic;

    public SubscribeReq() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isFastApp = r0
            return
    }

    public SubscribeReq(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isFastApp = r0
            java.lang.String r0 = r2.getPackageName()
            r1.packageName = r0
            r1.operation = r3
            r1.topic = r4
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r2)
            r1.appId = r3
            java.lang.String r2 = com.huawei.hms.push.s.c(r2)
            r1.projectId = r2
            return
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.appId
            return r0
    }

    public java.lang.String getOperation() {
            r1 = this;
            java.lang.String r0 = r1.operation
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

    public java.lang.String getTopic() {
            r1 = this;
            java.lang.String r0 = r1.topic
            return r0
    }

    public boolean isFastApp() {
            r1 = this;
            boolean r0 = r1.isFastApp
            return r0
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

    public void setOperation(java.lang.String r1) {
            r0 = this;
            r0.operation = r1
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

    public void setTopic(java.lang.String r1) {
            r0 = this;
            r0.topic = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "SubscribeReq{"
            r0.<init>(r1)
            java.lang.String r1 = "packageName='"
            r0.append(r1)
            java.lang.String r1 = r3.packageName
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", operation='"
            r0.append(r2)
            java.lang.String r2 = r3.operation
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
