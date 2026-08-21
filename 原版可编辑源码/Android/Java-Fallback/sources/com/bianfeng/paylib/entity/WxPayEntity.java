package com.bianfeng.paylib.entity;

public class WxPayEntity {
    private java.lang.String appId;
    private java.lang.String nonceStr;
    private java.lang.String packageX;
    private java.lang.String partnerId;
    private java.lang.String prepayId;
    private java.lang.String sign;
    private java.lang.String timeStamp;

    public WxPayEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.appId
            return r0
    }

    public java.lang.String getNonceStr() {
            r1 = this;
            java.lang.String r0 = r1.nonceStr
            return r0
    }

    public java.lang.String getPackageX() {
            r1 = this;
            java.lang.String r0 = r1.packageX
            return r0
    }

    public java.lang.String getPartnerId() {
            r1 = this;
            java.lang.String r0 = r1.partnerId
            return r0
    }

    public java.lang.String getPrepayId() {
            r1 = this;
            java.lang.String r0 = r1.prepayId
            return r0
    }

    public java.lang.String getSign() {
            r1 = this;
            java.lang.String r0 = r1.sign
            return r0
    }

    public java.lang.String getTimeStamp() {
            r1 = this;
            java.lang.String r0 = r1.timeStamp
            return r0
    }

    public void setAppId(java.lang.String r1) {
            r0 = this;
            r0.appId = r1
            return
    }

    public void setNonceStr(java.lang.String r1) {
            r0 = this;
            r0.nonceStr = r1
            return
    }

    public void setPackageX(java.lang.String r1) {
            r0 = this;
            r0.packageX = r1
            return
    }

    public void setPartnerId(java.lang.String r1) {
            r0 = this;
            r0.partnerId = r1
            return
    }

    public void setPrepayId(java.lang.String r1) {
            r0 = this;
            r0.prepayId = r1
            return
    }

    public void setSign(java.lang.String r1) {
            r0 = this;
            r0.sign = r1
            return
    }

    public void setTimeStamp(java.lang.String r1) {
            r0 = this;
            r0.timeStamp = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r0 = r0.toJson(r1)
            return r0
    }
}
