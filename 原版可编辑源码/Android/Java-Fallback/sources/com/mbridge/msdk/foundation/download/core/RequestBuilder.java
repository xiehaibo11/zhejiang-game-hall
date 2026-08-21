package com.mbridge.msdk.foundation.download.core;

public interface RequestBuilder<T> {
    com.mbridge.msdk.foundation.download.core.DownloadRequest<T> build();

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> with(java.lang.String r1, java.lang.String r2);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withConnectTimeout(long r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDirectoryPathExternal(java.lang.String r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDirectoryPathInternal(java.lang.String r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDownloadPriority(com.mbridge.msdk.foundation.download.DownloadPriority r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withDownloadStateListener(com.mbridge.msdk.foundation.download.OnDownloadStateListener r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withHeader(java.lang.String r1, java.lang.String r2);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withHttpRetryCounter(int r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withProgressStateListener(com.mbridge.msdk.foundation.download.OnProgressStateListener r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withReadTimeout(long r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withTimeout(long r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withUserAgent(java.lang.String r1);

    com.mbridge.msdk.foundation.download.core.RequestBuilder<T> withWriteTimeout(long r1);
}
