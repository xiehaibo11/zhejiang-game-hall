package com.bianfeng.paylib.entity;

import com.bianfeng.thridlibrary.ThridSdk;

/* JADX INFO: loaded from: classes.dex */
public class WxPayEntity {
    private String appId;
    private String nonceStr;
    private String packageX;
    private String partnerId;
    private String prepayId;
    private String sign;
    private String timeStamp;

    public String getAppId() {
        return this.appId;
    }

    public void setAppId(String str) {
        this.appId = str;
    }

    public String getNonceStr() {
        return this.nonceStr;
    }

    public void setNonceStr(String str) {
        this.nonceStr = str;
    }

    public String getPackageX() {
        return this.packageX;
    }

    public void setPackageX(String str) {
        this.packageX = str;
    }

    public String getPartnerId() {
        return this.partnerId;
    }

    public void setPartnerId(String str) {
        this.partnerId = str;
    }

    public String getPrepayId() {
        return this.prepayId;
    }

    public void setPrepayId(String str) {
        this.prepayId = str;
    }

    public String getSign() {
        return this.sign;
    }

    public void setSign(String str) {
        this.sign = str;
    }

    public String getTimeStamp() {
        return this.timeStamp;
    }

    public void setTimeStamp(String str) {
        this.timeStamp = str;
    }

    public String toString() {
        return ThridSdk.getGson().toJson(this);
    }
}
