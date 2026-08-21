package com.bianfeng.seppellita.bean;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.utilslib.device.IntenetUtil;

/* JADX INFO: loaded from: classes.dex */
public class DeviceBean {
    private String aaid;
    private String android_id;
    private Context context;
    private String device_id;
    private String device_name;
    private String isp;
    private String manufacturer;
    private String model;
    private String network;
    private String oaid;
    private String os;
    private String os_version;
    private String session_id;
    private String vaid;

    private void initDeviceid() {
    }

    public String getImei() {
        return "";
    }

    public String getMac() {
        return "";
    }

    public DeviceBean(Context context, String str) {
        this.oaid = "";
        this.aaid = "";
        this.vaid = "";
        this.context = context;
        this.network = IntenetUtil.getNetworkState(context);
        this.os = DeviceInfo.getInstance().getDeviceOS();
        this.os_version = DeviceInfo.getInstance().getDeviceVersionCode();
        this.device_name = DeviceInfo.getInstance().getDeviceName();
        this.isp = DeviceInfo.getInstance().getCarrier();
        this.android_id = DeviceInfo.getInstance().getAndroidId();
        this.device_id = DeviceInfo.getInstance().getDeviceId();
        this.manufacturer = DeviceInfo.getInstance().getManufacturer();
        this.model = DeviceInfo.getInstance().getDeviceModel();
        this.session_id = DeviceInfo.getInstance().getUuid();
        initDeviceid();
    }

    public DeviceBean(Context context, String str, boolean z) {
        this.oaid = "";
        this.aaid = "";
        this.vaid = "";
        this.context = context;
        if (z) {
            this.network = IntenetUtil.getNetworkState(context);
            this.os = DeviceInfo.getInstance().getDeviceOS();
            this.os_version = DeviceInfo.getInstance().getDeviceVersionCode();
            this.device_name = DeviceInfo.getInstance().getDeviceName();
            this.isp = DeviceInfo.getInstance().getCarrier();
            this.android_id = DeviceInfo.getInstance().getAndroidId();
            this.device_id = DeviceInfo.getInstance().getDeviceId();
            this.manufacturer = DeviceInfo.getInstance().getManufacturer();
            this.model = DeviceInfo.getInstance().getDeviceModel();
            this.session_id = DeviceInfo.getInstance().getUuid();
            initDeviceid();
        }
    }

    public String getNetwork() {
        return this.network;
    }

    public String getOs() {
        return this.os;
    }

    public String getOs_version() {
        return this.os_version;
    }

    public String getDevice_name() {
        return this.device_name;
    }

    public String getIsp() {
        return this.isp;
    }

    public String getAndroid_id() {
        return this.android_id;
    }

    public String getDevice_id() {
        return this.device_id;
    }

    public String getManufacturer() {
        return this.manufacturer;
    }

    public String getModel() {
        return this.model;
    }

    public String getSession_id() {
        return this.session_id;
    }

    public String getOaid() {
        if (TextUtils.isEmpty(this.oaid)) {
            this.oaid = "";
        }
        return this.oaid;
    }

    public String getAaid() {
        if (TextUtils.isEmpty(this.aaid)) {
            this.aaid = "";
        }
        return this.aaid;
    }

    public String getVaid() {
        if (TextUtils.isEmpty(this.vaid)) {
            this.vaid = "";
        }
        return this.vaid;
    }
}
