package com.bianfeng.h5library.utils;

import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;

public class H5libDeviceInfo {
    public static String getClientIp() {
        return DeviceInfo.getInstance().getClientIp();
    }

    public static String getDeviceModel() {
        return DeviceInfo.getInstance().getDeviceModel();
    }

    public static String getCarrier() {
        return DeviceInfo.getInstance().getCarrier();
    }

    public static String getDeviceId() {
        return DeviceInfo.getInstance().getDeviceId();
    }

    public static String getOsVersion() {
        return DeviceInfo.getInstance().getOsVersion();
    }

    public static String getDevicePixel() {
        return DeviceInfo.getInstance().getDevicePixel();
    }
}
