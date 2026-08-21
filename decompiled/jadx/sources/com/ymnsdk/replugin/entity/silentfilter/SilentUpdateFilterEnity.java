package com.ymnsdk.replugin.entity.silentfilter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class SilentUpdateFilterEnity {
    String custom_api_url;
    String custom_setting;
    DeviceModelSetting deviceModelSetting;
    StorageLeftSetting storageLeftSetting;

    public StorageLeftSetting getStorageLeftSetting() {
        return this.storageLeftSetting;
    }

    public void setStorageLeftSetting(StorageLeftSetting storageLeftSetting) {
        this.storageLeftSetting = storageLeftSetting;
    }

    public DeviceModelSetting getDeviceModelSetting() {
        return this.deviceModelSetting;
    }

    public void setDeviceModelSetting(DeviceModelSetting deviceModelSetting) {
        this.deviceModelSetting = deviceModelSetting;
    }

    public String getCustom_api_url() {
        return this.custom_api_url;
    }

    public void setCustom_api_url(String str) {
        this.custom_api_url = str;
    }

    public String getCustom_setting() {
        return this.custom_setting;
    }

    public void setCustom_setting(String str) {
        this.custom_setting = str;
    }
}
