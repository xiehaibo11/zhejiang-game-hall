package com.huawei.hms.opendevice;

public class OpenDeviceHmsClientBuilder extends com.huawei.hms.common.internal.AbstractClientBuilder<com.huawei.hms.opendevice.OpenDeviceHmsClient, com.huawei.hms.opendevice.OpenDeviceOptions> {
    public OpenDeviceHmsClientBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.huawei.hms.common.internal.AnyClient buildClient(android.content.Context r1, com.huawei.hms.common.internal.ClientSettings r2, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r3, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r4) {
            r0 = this;
            com.huawei.hms.opendevice.OpenDeviceHmsClient r1 = r0.buildClient(r1, r2, r3, r4)
            return r1
    }

    @Override
    public com.huawei.hms.opendevice.OpenDeviceHmsClient buildClient(android.content.Context r2, com.huawei.hms.common.internal.ClientSettings r3, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r4, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r5) {
            r1 = this;
            com.huawei.hms.opendevice.OpenDeviceHmsClient r0 = new com.huawei.hms.opendevice.OpenDeviceHmsClient
            r0.<init>(r2, r3, r4, r5)
            return r0
    }
}
