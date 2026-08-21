package com.huawei.hms.common.api;

@java.lang.Deprecated
public final class UnsupportedApiCallException extends java.lang.UnsupportedOperationException {
    private final com.huawei.hms.common.Feature feature;

    public UnsupportedApiCallException(com.huawei.hms.common.Feature r1) {
            r0 = this;
            r0.<init>()
            r0.feature = r1
            return
    }

    @Override
    public final java.lang.String getMessage() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.huawei.hms.common.Feature r1 = r2.feature
            r0.append(r1)
            java.lang.String r1 = " is unsupported"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
