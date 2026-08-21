package com.huawei.hms.core.aidl;

public class ResponseHeader implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    protected int statusCode;

    public ResponseHeader() {
            r0 = this;
            r0.<init>()
            return
    }

    public ResponseHeader(int r1) {
            r0 = this;
            r0.<init>()
            r0.statusCode = r1
            return
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }
}
