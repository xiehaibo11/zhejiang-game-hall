package com.mbridge.msdk.foundation.download.core;

public class DownloadRequestBuilder<T> implements com.mbridge.msdk.foundation.download.core.RequestBuilder<T> {
    long connectTimeout;
    java.lang.String directoryPathExternal;
    java.lang.String directoryPathInternal;
    com.mbridge.msdk.foundation.download.DownloadMessage<T> downloadMessage;
    com.mbridge.msdk.foundation.download.DownloadPriority downloadPriority;
    com.mbridge.msdk.foundation.download.OnDownloadStateListener downloadStateListener;
    java.util.Map<java.lang.String, java.lang.String> extraMap;
    java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> headerMap;
    com.mbridge.msdk.foundation.download.OnProgressStateListener progressStateListener;
    long readTimeout;
    int retry;
    long timeout;
    java.lang.String userAgent;
    long writeTimeout;

    public DownloadRequestBuilder(com.mbridge.msdk.foundation.download.DownloadMessage<T> r2) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = com.mbridge.msdk.foundation.download.DownloadPriority.MEDIUM
            r1.downloadPriority = r0
            r1.downloadMessage = r2
            return
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadRequest<T> build() {
            r1 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = com.mbridge.msdk.foundation.download.core.DownloadRequest.create(r1)
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> with(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            goto L21
        Ld:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.extraMap
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            if (r0 == 0) goto L1c
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.extraMap = r0
        L1c:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.extraMap
            r0.put(r2, r3)
        L21:
            return r1
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder<T> withConnectTimeout(long r1) {
            r0 = this;
            r0.connectTimeout = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder withConnectTimeout(long r1) {
            r0 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r0.withConnectTimeout(r1)
            return r1
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDirectoryPathExternal(java.lang.String r1) {
            r0 = this;
            r0.directoryPathExternal = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDirectoryPathInternal(java.lang.String r1) {
            r0 = this;
            r0.directoryPathInternal = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDownloadPriority(com.mbridge.msdk.foundation.download.DownloadPriority r1) {
            r0 = this;
            r0.downloadPriority = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDownloadStateListener(com.mbridge.msdk.foundation.download.OnDownloadStateListener r1) {
            r0 = this;
            r0.downloadStateListener = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder<T> withHeader(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r2.headerMap
            if (r0 != 0) goto Lc
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r2.headerMap = r0
        Lc:
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r2.headerMap
            java.lang.Object r0 = r0.get(r3)
            java.util.List r0 = (java.util.List) r0
            if (r0 != 0) goto L20
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r1 = r2.headerMap
            r1.put(r3, r0)
        L20:
            boolean r3 = r0.contains(r4)
            if (r3 != 0) goto L29
            r0.add(r4)
        L29:
            return r2
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder withHeader(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r0.withHeader(r1, r2)
            return r1
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder<T> withHttpRetryCounter(int r1) {
            r0 = this;
            r0.retry = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder withHttpRetryCounter(int r1) {
            r0 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r0.withHttpRetryCounter(r1)
            return r1
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withProgressStateListener(com.mbridge.msdk.foundation.download.OnProgressStateListener r1) {
            r0 = this;
            r0.progressStateListener = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder<T> withReadTimeout(long r1) {
            r0 = this;
            r0.readTimeout = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder withReadTimeout(long r1) {
            r0 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r0.withReadTimeout(r1)
            return r1
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withTimeout(long r1) {
            r0 = this;
            r0.timeout = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder<T> withUserAgent(java.lang.String r1) {
            r0 = this;
            r0.userAgent = r1
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder withUserAgent(java.lang.String r1) {
            r0 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r0.withUserAgent(r1)
            return r1
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withWriteTimeout(long r1) {
            r0 = this;
            r0.writeTimeout = r1
            return r0
    }
}
