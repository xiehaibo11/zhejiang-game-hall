package com.huawei.hms.support.api.entity.core;

public class JosBaseReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String channelId;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String cpId;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String hmsSdkVersionName;

    public JosBaseReq() {
            r0 = this;
            r0.<init>()
            return
    }

    private static <T> T get(T r0) {
            return r0
    }

    public java.lang.String getChannelId() {
            r1 = this;
            java.lang.String r0 = r1.channelId
            java.lang.Object r0 = get(r0)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getCpID() {
            r1 = this;
            java.lang.String r0 = r1.cpId
            java.lang.Object r0 = get(r0)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getHmsSdkVersionName() {
            r1 = this;
            java.lang.String r0 = r1.hmsSdkVersionName
            java.lang.Object r0 = get(r0)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public void setChannelId(java.lang.String r1) {
            r0 = this;
            r0.channelId = r1
            return
    }

    public void setCpID(java.lang.String r1) {
            r0 = this;
            r0.cpId = r1
            return
    }

    public void setHmsSdkVersionName(java.lang.String r1) {
            r0 = this;
            r0.hmsSdkVersionName = r1
            return
    }
}
