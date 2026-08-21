package com.huawei.hms.support.api.client;

public class BundleResult {
    private int a;
    private android.os.Bundle b;

    public BundleResult(int r1, android.os.Bundle r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public int getResultCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public android.os.Bundle getRspBody() {
            r1 = this;
            android.os.Bundle r0 = r1.b
            return r0
    }

    public void setResultCode(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setRspBody(android.os.Bundle r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
