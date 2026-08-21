package com.alibaba.sdk.android.oss.internal;

import com.alibaba.sdk.android.oss.model.OSSResult;

public abstract class AbstractResponseParser<T extends com.alibaba.sdk.android.oss.model.OSSResult> implements com.alibaba.sdk.android.oss.internal.ResponseParser {
    public AbstractResponseParser() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap<java.lang.String, java.lang.String> parseResponseHeader(okhttp3.Response r5) {
            r4 = this;
            com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap r0 = new com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap
            r0.<init>()
            okhttp3.Headers r5 = r5.headers()
            r1 = 0
        La:
            int r2 = r5.size()
            if (r1 >= r2) goto L1e
            java.lang.String r2 = r5.name(r1)
            java.lang.String r3 = r5.value(r1)
            r0.put(r2, r3)
            int r1 = r1 + 1
            goto La
        L1e:
            return r0
    }

    public static void safeCloseResponse(com.alibaba.sdk.android.oss.internal.ResponseMessage r0) {
            r0.close()     // Catch: java.lang.Exception -> L3
        L3:
            return
    }

    public boolean needCloseResponse() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public T parse(com.alibaba.sdk.android.oss.internal.ResponseMessage r4) throws java.io.IOException {
            r3 = this;
            java.lang.Class r0 = r3.getClass()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.reflect.Type r0 = r0.getGenericSuperclass()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.reflect.ParameterizedType r0 = (java.lang.reflect.ParameterizedType) r0     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.reflect.Type[] r0 = r0.getActualTypeArguments()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r1 = 0
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.Class r0 = (java.lang.Class) r0     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            com.alibaba.sdk.android.oss.model.OSSResult r0 = (com.alibaba.sdk.android.oss.model.OSSResult) r0     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            if (r0 == 0) goto L43
            java.util.Map r1 = r4.getHeaders()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r2 = "x-oss-request-id"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0.setRequestId(r1)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            int r1 = r4.getStatusCode()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0.setStatusCode(r1)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            okhttp3.Response r1 = r4.getResponse()     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap r1 = r3.parseResponseHeader(r1)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r0.setResponseHeader(r1)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            r3.setCRC(r0, r4)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r3.parseData(r4, r0)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f
        L43:
            boolean r1 = r3.needCloseResponse()
            if (r1 == 0) goto L4c
            safeCloseResponse(r4)
        L4c:
            return r0
        L4d:
            r0 = move-exception
            goto L60
        L4f:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L4d
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L4d
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)     // Catch: java.lang.Throwable -> L4d
            throw r1     // Catch: java.lang.Throwable -> L4d
        L60:
            boolean r1 = r3.needCloseResponse()
            if (r1 == 0) goto L69
            safeCloseResponse(r4)
        L69:
            throw r0
    }

    abstract T parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r1, T r2) throws java.lang.Exception;

    public <Result extends com.alibaba.sdk.android.oss.model.OSSResult> void setCRC(Result r3, com.alibaba.sdk.android.oss.internal.ResponseMessage r4) {
            r2 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = r4.getRequest()
            java.io.InputStream r0 = r0.getContent()
            if (r0 == 0) goto L1f
            boolean r1 = r0 instanceof java.util.zip.CheckedInputStream
            if (r1 == 0) goto L1f
            java.util.zip.CheckedInputStream r0 = (java.util.zip.CheckedInputStream) r0
            java.util.zip.Checksum r0 = r0.getChecksum()
            long r0 = r0.getValue()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r3.setClientCRC(r0)
        L1f:
            java.util.Map r4 = r4.getHeaders()
            java.lang.String r0 = "x-oss-hash-crc64ecma"
            java.lang.Object r4 = r4.get(r0)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L3d
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r4)
            long r0 = r0.longValue()
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            r3.setServerCRC(r4)
        L3d:
            return
    }
}
