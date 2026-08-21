package com.huawei.hms.opendevice;

public class OpenDevice {
    public OpenDevice() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.opendevice.OpenDeviceClient getOpenDeviceClient(android.app.Activity r1) {
            com.huawei.hms.utils.Checker.assertNonNull(r1)
            com.huawei.hms.opendevice.OpenDeviceClientImpl r0 = new com.huawei.hms.opendevice.OpenDeviceClientImpl
            r0.<init>(r1)
            return r0
    }

    public static com.huawei.hms.opendevice.OpenDeviceClient getOpenDeviceClient(android.content.Context r1) {
            com.huawei.hms.utils.Checker.assertNonNull(r1)
            com.huawei.hms.opendevice.OpenDeviceClientImpl r0 = new com.huawei.hms.opendevice.OpenDeviceClientImpl
            r0.<init>(r1)
            return r0
    }
}
