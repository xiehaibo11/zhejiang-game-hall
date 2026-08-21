package com.bianfeng.ymnsdk.ymndatalib.utils;

import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;

/* JADX INFO: loaded from: classes.dex */
public class YmndataDeviceInfo {
    public static String getAndroidId() {
        return DeviceInfo.getInstance().getAndroidId();
    }

    public static int getAppMemory() {
        return DeviceInfo.getInstance().getAppMemory();
    }

    public static int getAppUsedMemory() {
        return DeviceInfo.getInstance().getAppUsedMemory();
    }

    public static String getClientIp() {
        return DeviceInfo.getInstance().getClientIp();
    }

    public static String getDeviceId() {
        return DeviceInfo.getInstance().getDeviceId();
    }

    public static String getDeviceIdFormSPUuid() {
        return DeviceInfo.getInstance().getUuidFormSP();
    }

    public static String getDeviceModel() {
        return DeviceInfo.getInstance().getDeviceModel();
    }

    public static String getImei() {
        return DeviceInfo.getInstance().getImei();
    }

    public static String getMac() {
        return DeviceInfo.getInstance().getMac();
    }

    public static String getManufactory() {
        return DeviceInfo.getInstance().getManufactory();
    }

    public static String getNetChannelStr() {
        return DeviceInfo.getInstance().getNetChannelStr();
    }

    public static String getOsVersion() {
        return DeviceInfo.getInstance().getOsVersion();
    }

    public static int getRamAvailMem() {
        return DeviceInfo.getInstance().getRamAvailMem();
    }

    public static int getRomAvailMem() {
        return DeviceInfo.getInstance().getRomAvailMem();
    }

    public static int getTotalRamMemory() {
        return DeviceInfo.getInstance().getTotalRamMemory();
    }

    public static int getTotalRomMemory() {
        return DeviceInfo.getInstance().getTotalRomMemory();
    }
}
