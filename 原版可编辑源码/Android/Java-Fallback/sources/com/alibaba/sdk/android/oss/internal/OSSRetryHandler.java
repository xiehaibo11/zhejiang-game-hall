package com.alibaba.sdk.android.oss.internal;

public class OSSRetryHandler {
    private int maxRetryCount;

    static class 1 {
        static final int[] $SwitchMap$com$alibaba$sdk$android$oss$internal$OSSRetryType = null;

        static {
                com.alibaba.sdk.android.oss.internal.OSSRetryType[] r0 = com.alibaba.sdk.android.oss.internal.OSSRetryType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.alibaba.sdk.android.oss.internal.OSSRetryHandler.1.$SwitchMap$com$alibaba$sdk$android$oss$internal$OSSRetryType = r0
                com.alibaba.sdk.android.oss.internal.OSSRetryType r1 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldRetry     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                return
        }
    }

    public OSSRetryHandler(int r2) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.maxRetryCount = r0
            r1.setMaxRetryCount(r2)
            return
    }

    public void setMaxRetryCount(int r1) {
            r0 = this;
            r0.maxRetryCount = r1
            return
    }

    public com.alibaba.sdk.android.oss.internal.OSSRetryType shouldRetry(java.lang.Exception r2, int r3) {
            r1 = this;
            int r0 = r1.maxRetryCount
            if (r3 < r0) goto L7
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            return r2
        L7:
            boolean r3 = r2 instanceof com.alibaba.sdk.android.oss.ClientException
            if (r3 == 0) goto L5a
            r3 = r2
            com.alibaba.sdk.android.oss.ClientException r3 = (com.alibaba.sdk.android.oss.ClientException) r3
            java.lang.Boolean r3 = r3.isCanceledException()
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L1b
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            return r2
        L1b:
            java.lang.Throwable r3 = r2.getCause()
            java.lang.Exception r3 = (java.lang.Exception) r3
            boolean r0 = r3 instanceof java.io.InterruptedIOException
            if (r0 == 0) goto L31
            boolean r0 = r3 instanceof java.net.SocketTimeoutException
            if (r0 != 0) goto L31
            java.lang.String r2 = "[shouldRetry] - is interrupted!"
            com.alibaba.sdk.android.oss.common.OSSLog.logError(r2)
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            return r2
        L31:
            boolean r3 = r3 instanceof java.lang.IllegalArgumentException
            if (r3 == 0) goto L38
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            return r2
        L38:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "shouldRetry - "
            r3.append(r0)
            java.lang.String r0 = r2.toString()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)
            java.lang.Throwable r2 = r2.getCause()
            r2.printStackTrace()
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldRetry
            return r2
        L5a:
            boolean r3 = r2 instanceof com.alibaba.sdk.android.oss.ServiceException
            if (r3 == 0) goto L83
            com.alibaba.sdk.android.oss.ServiceException r2 = (com.alibaba.sdk.android.oss.ServiceException) r2
            java.lang.String r3 = r2.getErrorCode()
            if (r3 == 0) goto L75
            java.lang.String r3 = r2.getErrorCode()
            java.lang.String r0 = "RequestTimeTooSkewed"
            boolean r3 = r3.equalsIgnoreCase(r0)
            if (r3 == 0) goto L75
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldFixedTimeSkewedAndRetry
            return r2
        L75:
            int r2 = r2.getStatusCode()
            r3 = 500(0x1f4, float:7.0E-43)
            if (r2 < r3) goto L80
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldRetry
            return r2
        L80:
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            return r2
        L83:
            com.alibaba.sdk.android.oss.internal.OSSRetryType r2 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldNotRetry
            return r2
    }

    public long timeInterval(int r3, com.alibaba.sdk.android.oss.internal.OSSRetryType r4) {
            r2 = this;
            int[] r0 = com.alibaba.sdk.android.oss.internal.OSSRetryHandler.1.$SwitchMap$com$alibaba$sdk$android$oss$internal$OSSRetryType
            int r4 = r4.ordinal()
            r4 = r0[r4]
            r0 = 1
            if (r4 == r0) goto Le
            r3 = 0
            return r3
        Le:
            r0 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r3 = (double) r3
            double r3 = java.lang.Math.pow(r0, r3)
            long r3 = (long) r3
            r0 = 200(0xc8, double:9.9E-322)
            long r3 = r3 * r0
            return r3
    }
}
