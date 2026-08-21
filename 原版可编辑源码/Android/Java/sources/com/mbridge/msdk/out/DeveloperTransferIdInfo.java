package com.mbridge.msdk.out;

public class DeveloperTransferIdInfo {
    private String androidId;
    private String gaid;
    private String imei;
    private String imsi;
    private String mac;
    private String oaid;

    public String getImei() {
        return this.imei;
    }

    public void setImei(String str) {
        this.imei = str;
    }

    public String getAndroidId() {
        return this.androidId;
    }

    public void setAndroidId(String str) {
        this.androidId = str;
    }

    public String getOaid() {
        return this.oaid;
    }

    public void setOaid(String str) {
        this.oaid = str;
    }

    public String getMac() {
        return this.mac;
    }

    public void setMac(String str) {
        this.mac = str;
    }

    public String getGaid() {
        return this.gaid;
    }

    public void setGaid(String str) {
        this.gaid = str;
    }

    public String getImsi() {
        return this.imsi;
    }

    public void setImsi(String str) {
        this.imsi = str;
    }
}
