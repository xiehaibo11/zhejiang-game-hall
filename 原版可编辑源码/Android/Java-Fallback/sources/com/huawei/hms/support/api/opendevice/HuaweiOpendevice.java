package com.huawei.hms.support.api.opendevice;

public class HuaweiOpendevice {
    public static final com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApi HuaweiOpendeviceApi = null;
    public static final com.huawei.hms.api.Api<com.huawei.hms.api.Api.ApiOptions.NoOptions> OPEN_DEVICE_API = null;

    static {
            com.huawei.hms.api.Api r0 = new com.huawei.hms.api.Api
            java.lang.String r1 = "HuaweiOpenDevice.API"
            r0.<init>(r1)
            com.huawei.hms.support.api.opendevice.HuaweiOpendevice.OPEN_DEVICE_API = r0
            com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApiImpl r0 = new com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApiImpl
            r0.<init>()
            com.huawei.hms.support.api.opendevice.HuaweiOpendevice.HuaweiOpendeviceApi = r0
            return
    }

    public HuaweiOpendevice() {
            r0 = this;
            r0.<init>()
            return
    }
}
