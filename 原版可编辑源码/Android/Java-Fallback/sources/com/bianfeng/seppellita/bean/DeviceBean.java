package com.bianfeng.seppellita.bean;

public class DeviceBean {
    private java.lang.String aaid;
    private java.lang.String android_id;
    private android.content.Context context;
    private java.lang.String device_id;
    private java.lang.String device_name;
    private java.lang.String isp;
    private java.lang.String manufacturer;
    private java.lang.String model;
    private java.lang.String network;
    private java.lang.String oaid;
    private java.lang.String os;
    private java.lang.String os_version;
    private java.lang.String session_id;
    private java.lang.String vaid;

    public DeviceBean(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            java.lang.String r2 = ""
            r0.oaid = r2
            r0.aaid = r2
            r0.vaid = r2
            r0.context = r1
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.getNetworkState(r1)
            r0.network = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceOS()
            r0.os = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceVersionCode()
            r0.os_version = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceName()
            r0.device_name = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getCarrier()
            r0.isp = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getAndroidId()
            r0.android_id = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceId()
            r0.device_id = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getManufacturer()
            r0.manufacturer = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceModel()
            r0.model = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getUuid()
            r0.session_id = r1
            r0.initDeviceid()
            return
    }

    public DeviceBean(android.content.Context r1, java.lang.String r2, boolean r3) {
            r0 = this;
            r0.<init>()
            java.lang.String r2 = ""
            r0.oaid = r2
            r0.aaid = r2
            r0.vaid = r2
            r0.context = r1
            if (r3 == 0) goto L72
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.getNetworkState(r1)
            r0.network = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceOS()
            r0.os = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceVersionCode()
            r0.os_version = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceName()
            r0.device_name = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getCarrier()
            r0.isp = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getAndroidId()
            r0.android_id = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceId()
            r0.device_id = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getManufacturer()
            r0.manufacturer = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getDeviceModel()
            r0.model = r1
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getUuid()
            r0.session_id = r1
            r0.initDeviceid()
        L72:
            return
    }

    private void initDeviceid() {
            r0 = this;
            return
    }

    public java.lang.String getAaid() {
            r1 = this;
            java.lang.String r0 = r1.aaid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            r1.aaid = r0
        Lc:
            java.lang.String r0 = r1.aaid
            return r0
    }

    public java.lang.String getAndroid_id() {
            r1 = this;
            java.lang.String r0 = r1.android_id
            return r0
    }

    public java.lang.String getDevice_id() {
            r1 = this;
            java.lang.String r0 = r1.device_id
            return r0
    }

    public java.lang.String getDevice_name() {
            r1 = this;
            java.lang.String r0 = r1.device_name
            return r0
    }

    public java.lang.String getImei() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getIsp() {
            r1 = this;
            java.lang.String r0 = r1.isp
            return r0
    }

    public java.lang.String getMac() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getManufacturer() {
            r1 = this;
            java.lang.String r0 = r1.manufacturer
            return r0
    }

    public java.lang.String getModel() {
            r1 = this;
            java.lang.String r0 = r1.model
            return r0
    }

    public java.lang.String getNetwork() {
            r1 = this;
            java.lang.String r0 = r1.network
            return r0
    }

    public java.lang.String getOaid() {
            r1 = this;
            java.lang.String r0 = r1.oaid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            r1.oaid = r0
        Lc:
            java.lang.String r0 = r1.oaid
            return r0
    }

    public java.lang.String getOs() {
            r1 = this;
            java.lang.String r0 = r1.os
            return r0
    }

    public java.lang.String getOs_version() {
            r1 = this;
            java.lang.String r0 = r1.os_version
            return r0
    }

    public java.lang.String getSession_id() {
            r1 = this;
            java.lang.String r0 = r1.session_id
            return r0
    }

    public java.lang.String getVaid() {
            r1 = this;
            java.lang.String r0 = r1.vaid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            r1.vaid = r0
        Lc:
            java.lang.String r0 = r1.vaid
            return r0
    }
}
