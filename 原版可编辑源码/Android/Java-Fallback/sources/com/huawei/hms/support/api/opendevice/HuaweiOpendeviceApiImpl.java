package com.huawei.hms.support.api.opendevice;

public class HuaweiOpendeviceApiImpl implements com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApi {
    public HuaweiOpendeviceApiImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.opendevice.OdidResult> getOdid(com.huawei.hms.api.HuaweiApiClient r4) {
            r3 = this;
            java.lang.String r0 = "OpenIdentifierApiImpl"
            java.lang.String r1 = "Enter getOdid"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.opendevice.u r0 = new com.huawei.hms.opendevice.u
            com.huawei.hms.support.api.entity.opendevice.OdidReq r1 = new com.huawei.hms.support.api.entity.opendevice.OdidReq
            r1.<init>()
            java.lang.String r2 = "opendevice.getodid"
            r0.<init>(r3, r4, r2, r1)
            return r0
    }
}
