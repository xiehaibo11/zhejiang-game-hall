package com.huawei.hms.opendevice;

public interface OpenDeviceClient {
    com.huawei.hmf.tasks.Task<com.huawei.hms.support.api.opendevice.OdidResult> getOdid();
}
