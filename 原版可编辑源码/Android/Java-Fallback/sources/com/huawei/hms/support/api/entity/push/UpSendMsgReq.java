package com.huawei.hms.support.api.entity.push;

public class UpSendMsgReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String collapseKey;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String data;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String msgId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String msgType;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String packageName;

    @com.huawei.hms.core.aidl.annotation.Packed
    public int receiptMode;

    @com.huawei.hms.core.aidl.annotation.Packed
    public int sendMode;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String to;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String token;

    @com.huawei.hms.core.aidl.annotation.Packed
    public int ttl;

    public UpSendMsgReq() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getCollapseKey() {
            r1 = this;
            java.lang.String r0 = r1.collapseKey
            return r0
    }

    public java.lang.String getData() {
            r1 = this;
            java.lang.String r0 = r1.data
            return r0
    }

    public java.lang.String getMessageId() {
            r1 = this;
            java.lang.String r0 = r1.msgId
            return r0
    }

    public java.lang.String getMessageType() {
            r1 = this;
            java.lang.String r0 = r1.msgType
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public int getReceiptMode() {
            r1 = this;
            int r0 = r1.receiptMode
            return r0
    }

    public int getSendMode() {
            r1 = this;
            int r0 = r1.sendMode
            return r0
    }

    public java.lang.String getTo() {
            r1 = this;
            java.lang.String r0 = r1.to
            return r0
    }

    public java.lang.String getToken() {
            r1 = this;
            java.lang.String r0 = r1.token
            return r0
    }

    public int getTtl() {
            r1 = this;
            int r0 = r1.ttl
            return r0
    }

    public void setCollapseKey(java.lang.String r1) {
            r0 = this;
            r0.collapseKey = r1
            return
    }

    public void setData(java.lang.String r1) {
            r0 = this;
            r0.data = r1
            return
    }

    public void setMessageId(java.lang.String r1) {
            r0 = this;
            r0.msgId = r1
            return
    }

    public void setMessageType(java.lang.String r1) {
            r0 = this;
            r0.msgType = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setReceiptMode(int r1) {
            r0 = this;
            r0.receiptMode = r1
            return
    }

    public void setSendMode(int r1) {
            r0 = this;
            r0.sendMode = r1
            return
    }

    public void setTo(java.lang.String r1) {
            r0 = this;
            r0.to = r1
            return
    }

    public void setToken(java.lang.String r1) {
            r0 = this;
            r0.token = r1
            return
    }

    public void setTtl(int r1) {
            r0 = this;
            r0.ttl = r1
            return
    }
}
