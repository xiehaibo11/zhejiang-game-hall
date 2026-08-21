package com.huawei.hms.opendevice;

public class OpenDeviceClientImpl extends com.huawei.hms.common.HuaweiApi<com.huawei.hms.opendevice.OpenDeviceOptions> implements com.huawei.hms.opendevice.OpenDeviceClient {
    public static final com.huawei.hms.opendevice.OpenDeviceHmsClientBuilder a = null;
    public static final com.huawei.hms.api.Api<com.huawei.hms.opendevice.OpenDeviceOptions> b = null;
    public static com.huawei.hms.opendevice.OpenDeviceOptions c;

    static {
            com.huawei.hms.opendevice.OpenDeviceHmsClientBuilder r0 = new com.huawei.hms.opendevice.OpenDeviceHmsClientBuilder
            r0.<init>()
            com.huawei.hms.opendevice.OpenDeviceClientImpl.a = r0
            com.huawei.hms.api.Api r0 = new com.huawei.hms.api.Api
            java.lang.String r1 = "HuaweiOpenDevice.API"
            r0.<init>(r1)
            com.huawei.hms.opendevice.OpenDeviceClientImpl.b = r0
            com.huawei.hms.opendevice.OpenDeviceOptions r0 = new com.huawei.hms.opendevice.OpenDeviceOptions
            r0.<init>()
            com.huawei.hms.opendevice.OpenDeviceClientImpl.c = r0
            return
    }

    public OpenDeviceClientImpl(android.app.Activity r4) {
            r3 = this;
            com.huawei.hms.api.Api<com.huawei.hms.opendevice.OpenDeviceOptions> r0 = com.huawei.hms.opendevice.OpenDeviceClientImpl.b
            com.huawei.hms.opendevice.OpenDeviceOptions r1 = com.huawei.hms.opendevice.OpenDeviceClientImpl.c
            com.huawei.hms.opendevice.OpenDeviceHmsClientBuilder r2 = com.huawei.hms.opendevice.OpenDeviceClientImpl.a
            r3.<init>(r4, r0, r1, r2)
            r4 = 50101303(0x2fc7c37, float:3.7099368E-37)
            super.setKitSdkVersion(r4)
            return
    }

    public OpenDeviceClientImpl(android.content.Context r4) {
            r3 = this;
            com.huawei.hms.api.Api<com.huawei.hms.opendevice.OpenDeviceOptions> r0 = com.huawei.hms.opendevice.OpenDeviceClientImpl.b
            com.huawei.hms.opendevice.OpenDeviceOptions r1 = com.huawei.hms.opendevice.OpenDeviceClientImpl.c
            com.huawei.hms.opendevice.OpenDeviceHmsClientBuilder r2 = com.huawei.hms.opendevice.OpenDeviceClientImpl.a
            r3.<init>(r4, r0, r1, r2)
            r4 = 50101303(0x2fc7c37, float:3.7099368E-37)
            super.setKitSdkVersion(r4)
            return
    }

    @Override
    public com.huawei.hmf.tasks.Task<com.huawei.hms.support.api.opendevice.OdidResult> getOdid() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = "opendevice.getodid"
            r2 = 50101303(0x2fc7c37, float:3.7099368E-37)
            java.lang.String r0 = com.huawei.hms.support.hianalytics.HiAnalyticsClient.reportEntry(r0, r1, r2)
            com.huawei.hms.opendevice.OpenDeviceTaskApiCall r2 = new com.huawei.hms.opendevice.OpenDeviceTaskApiCall
            r3 = 0
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.createJsonString(r3)
            r2.<init>(r1, r3, r0)
            com.huawei.hmf.tasks.Task r0 = r4.doWrite(r2)
            return r0
    }
}
