package com.huawei.hms.api;

public class HuaweiServicesRepairableException extends com.huawei.hms.api.UserRecoverableException {
    private final int b;

    public HuaweiServicesRepairableException(int r1, java.lang.String r2, android.content.Intent r3) {
            r0 = this;
            r0.<init>(r2, r3)
            r0.b = r1
            return
    }

    public int getConnectionStatusCode() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}
