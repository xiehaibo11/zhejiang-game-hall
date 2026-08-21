package com.alibaba.sdk.android.oss.network;

import com.alibaba.sdk.android.oss.model.OSSRequest;

public class ProgressTouchableResponseBody<T extends com.alibaba.sdk.android.oss.model.OSSRequest> extends okhttp3.ResponseBody {
    private okio.BufferedSource mBufferedSource;
    private com.alibaba.sdk.android.oss.callback.OSSProgressCallback mProgressListener;
    private final okhttp3.ResponseBody mResponseBody;
    private T request;


    public ProgressTouchableResponseBody(okhttp3.ResponseBody r1, com.alibaba.sdk.android.oss.network.ExecutionContext r2) {
            r0 = this;
            r0.<init>()
            r0.mResponseBody = r1
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r1 = r2.getProgressCallback()
            r0.mProgressListener = r1
            com.alibaba.sdk.android.oss.model.OSSRequest r1 = r2.getRequest()
            r0.request = r1
            return
    }

    static com.alibaba.sdk.android.oss.callback.OSSProgressCallback access$000(com.alibaba.sdk.android.oss.network.ProgressTouchableResponseBody r0) {
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r0 = r0.mProgressListener
            return r0
    }

    static com.alibaba.sdk.android.oss.model.OSSRequest access$100(com.alibaba.sdk.android.oss.network.ProgressTouchableResponseBody r0) {
            T extends com.alibaba.sdk.android.oss.model.OSSRequest r0 = r0.request
            return r0
    }

    static okhttp3.ResponseBody access$200(com.alibaba.sdk.android.oss.network.ProgressTouchableResponseBody r0) {
            okhttp3.ResponseBody r0 = r0.mResponseBody
            return r0
    }

    private okio.Source source(okio.Source r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.network.ProgressTouchableResponseBody$1 r0 = new com.alibaba.sdk.android.oss.network.ProgressTouchableResponseBody$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public long contentLength() {
            r2 = this;
            okhttp3.ResponseBody r0 = r2.mResponseBody
            long r0 = r0.contentLength()
            return r0
    }

    @Override
    public okhttp3.MediaType contentType() {
            r1 = this;
            okhttp3.ResponseBody r0 = r1.mResponseBody
            okhttp3.MediaType r0 = r0.contentType()
            return r0
    }

    @Override
    public okio.BufferedSource source() {
            r1 = this;
            okio.BufferedSource r0 = r1.mBufferedSource
            if (r0 != 0) goto L14
            okhttp3.ResponseBody r0 = r1.mResponseBody
            okio.BufferedSource r0 = r0.source()
            okio.Source r0 = r1.source(r0)
            okio.BufferedSource r0 = okio.Okio.buffer(r0)
            r1.mBufferedSource = r0
        L14:
            okio.BufferedSource r0 = r1.mBufferedSource
            return r0
    }
}
