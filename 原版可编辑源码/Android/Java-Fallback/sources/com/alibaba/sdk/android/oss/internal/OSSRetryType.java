package com.alibaba.sdk.android.oss.internal;

public enum OSSRetryType extends java.lang.Enum<com.alibaba.sdk.android.oss.internal.OSSRetryType> {
    private static final com.alibaba.sdk.android.oss.internal.OSSRetryType[] $VALUES = null;
    public static final com.alibaba.sdk.android.oss.internal.OSSRetryType OSSRetryTypeShouldFixedTimeSkewedAndRetry = null;
    public static final com.alibaba.sdk.android.oss.internal.OSSRetryType OSSRetryTypeShouldNotRetry = null;
    public static final com.alibaba.sdk.android.oss.internal.OSSRetryType OSSRetryTypeShouldRetry = null;

    static {
            com.alibaba.sdk.android.oss.internal.OSSRetryType r0 = new com.alibaba.sdk.android.oss.internal.OSSRetryType
            r1 = 0
            java.lang.String r2 = "OSSRetryTypeShouldNotRetry"
            r0.<init>(r2, r1)
            com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry = r0
            com.alibaba.sdk.android.oss.internal.OSSRetryType r0 = new com.alibaba.sdk.android.oss.internal.OSSRetryType
            r2 = 1
            java.lang.String r3 = "OSSRetryTypeShouldRetry"
            r0.<init>(r3, r2)
            com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldRetry = r0
            com.alibaba.sdk.android.oss.internal.OSSRetryType r0 = new com.alibaba.sdk.android.oss.internal.OSSRetryType
            r3 = 2
            java.lang.String r4 = "OSSRetryTypeShouldFixedTimeSkewedAndRetry"
            r0.<init>(r4, r3)
            com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldFixedTimeSkewedAndRetry = r0
            r4 = 3
            com.alibaba.sdk.android.oss.internal.OSSRetryType[] r4 = new com.alibaba.sdk.android.oss.internal.OSSRetryType[r4]
            com.alibaba.sdk.android.oss.internal.OSSRetryType r5 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            r4[r1] = r5
            com.alibaba.sdk.android.oss.internal.OSSRetryType r1 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldRetry
            r4[r2] = r1
            r4[r3] = r0
            com.alibaba.sdk.android.oss.internal.OSSRetryType.$VALUES = r4
            return
    }

    OSSRetryType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.alibaba.sdk.android.oss.internal.OSSRetryType valueOf(java.lang.String r1) {
            java.lang.Class<com.alibaba.sdk.android.oss.internal.OSSRetryType> r0 = com.alibaba.sdk.android.oss.internal.OSSRetryType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alibaba.sdk.android.oss.internal.OSSRetryType r1 = (com.alibaba.sdk.android.oss.internal.OSSRetryType) r1
            return r1
    }

    public static com.alibaba.sdk.android.oss.internal.OSSRetryType[] values() {
            com.alibaba.sdk.android.oss.internal.OSSRetryType[] r0 = com.alibaba.sdk.android.oss.internal.OSSRetryType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.alibaba.sdk.android.oss.internal.OSSRetryType[] r0 = (com.alibaba.sdk.android.oss.internal.OSSRetryType[]) r0
            return r0
    }
}
